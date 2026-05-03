#include "src/fpga/fpga_iface.h"

#include <assert.h>
#include <bits/pthreadtypes.h>
#include <fcntl.h>
#include <pthread.h>
#include <stdatomic.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <sys/mman.h>

#include "common/bitdepth.h"
#include "common/intops.h"
#include "src/itx_1d.h"
#include "src/levels.h"
#include "src/scan.h"
#include "src/tables.h"

#define AXI_BASE           0xC0000000
#define AXI_SPAN           0x0C000000  // must be a multiple of page size, 4096
#define AXI_REQUEST_START  0x00000000
#define AXI_RESPONSE_START 0x00000010
#define AXI_M10K_START     0x00001000

#define M10K_WIDTH  32
#define M10K_HEIGHT 32

#define NUM_SLOTS 32
typedef uint32_t slot_bitset_t;
#define SLOT_BITSET_ALL_SET UINT32_MAX

typedef struct FpgaContext {
    slot_bitset_t slot_available;
    volatile int16_t* m10k_ptr[NUM_SLOTS];
    volatile slot_bitset_t* request_ptr;
    volatile slot_bitset_t* response_ptr;

    pthread_mutex_t in_use_lock;
    pthread_cond_t slot_available_cond;
    pthread_mutex_t request_lock;
} FpgaContext;

FpgaContext global_ctx = {0};

bool fpga_init(void) {
    // I don't care about resource leakage
    int fd = open("/dev/mem", (O_SYNC | O_RDWR));
    if (fd == -1) {
        return false;
    }
    printf("FPGA initialization\n");

    volatile uint8_t* axi_virtual_base = mmap(NULL, AXI_SPAN, (PROT_READ | PROT_WRITE), MAP_SHARED,
        fd, AXI_BASE);

    volatile uint8_t* axi_m10k_addr = axi_virtual_base + AXI_M10K_START;
    volatile uint8_t* axi_request_addr = axi_virtual_base + AXI_REQUEST_START;
    volatile uint8_t* axi_response_addr = axi_virtual_base + AXI_RESPONSE_START;

    global_ctx.slot_available = SLOT_BITSET_ALL_SET;
    global_ctx.m10k_ptr[0] = (volatile int16_t*)axi_m10k_addr;
    global_ctx.request_ptr = (volatile uint32_t*)axi_request_addr;
    global_ctx.response_ptr = (volatile uint32_t*)axi_response_addr;

    *global_ctx.request_ptr = 0;
    *global_ctx.response_ptr = 0;

    int result = pthread_mutex_init(&global_ctx.in_use_lock, NULL);
    if (result != 0) {
        return false;
    }

    result = pthread_cond_init(&global_ctx.slot_available_cond, NULL);
    if (result != 0) {
        return false;
    }

    result = pthread_mutex_init(&global_ctx.request_lock, NULL);
    if (result != 0) {
        return false;
    }

    return true;
}

static bool find_open_slot(size_t* slot) {
    slot_bitset_t mask = (slot_bitset_t)((1ull << NUM_SLOTS) - 1);
    int first_open = ffs(global_ctx.slot_available & mask);
    if (first_open == 0 || first_open > 1) {
        return false;
    }
    *slot = (size_t)(first_open - 1);
    return true;
}

static void slot_bitset_set(slot_bitset_t* bitset, size_t slot) {
    *bitset |= (1u << slot);
}

static void slot_bitset_unset(slot_bitset_t* bitset, size_t slot) {
    *bitset &= ~(1u << slot);
}

static void slot_bitset_set_vol(volatile slot_bitset_t* bitset, size_t slot) {
    *bitset |= (1u << slot);
}

static void slot_bitset_unset_vol(volatile slot_bitset_t* bitset, size_t slot) {
    *bitset &= ~(1u << slot);
}

static bool slot_bitset_get_vol(volatile slot_bitset_t* bitset, size_t slot) {
    return (*bitset & (1u << slot)) > 0;
}

void inv_txfm_add_fpga(pixel* dst, const ptrdiff_t stride, coef* const coeff, const int eob,
    const /*enum RectTxfmSize*/ int tx, const int shift, const enum TxfmType txtp) {
    assert(txtp == IDTX);

    const TxfmInfo* const t_dim = &dav1d_txfm_dimensions[tx];
    const int w = 4 * t_dim->w, h = 4 * t_dim->h;
    const int sh = imin(h, 32), sw = imin(w, 32);

    pthread_mutex_lock(&global_ctx.in_use_lock);
    size_t slot;
    while (!find_open_slot(&slot)) {
        pthread_cond_wait(&global_ctx.slot_available_cond, &global_ctx.in_use_lock);
    }
    slot_bitset_unset(&global_ctx.slot_available, slot);
    pthread_mutex_unlock(&global_ctx.in_use_lock);

    const uint8_t* const txtps = dav1d_tx1d_types[IDTX];
    int last_nonzero_col;  // in first 1d itx
    if (txtps[1] == IDENTITY && txtps[0] != IDENTITY) {
        last_nonzero_col = imin(sh - 1, eob);
    } else if (txtps[0] == IDENTITY && txtps[1] != IDENTITY) {
        last_nonzero_col = eob >> (t_dim->lw + 2);
    } else {
        last_nonzero_col = dav1d_last_nonzero_col_from_eob[TX_32X32][eob];
    }
    assert(last_nonzero_col < sh);

    assert(sizeof(coef) == sizeof(int16_t));

    // coeffs are in column-major order but we expect row-major
    // dst is row-major
    volatile int16_t* m10k_ptr = global_ctx.m10k_ptr[slot];
    for (int y = 0; y <= last_nonzero_col; y++, m10k_ptr += M10K_WIDTH) {
        for (int x = 0; x < sw; x++) {
            printf("%d ", coeff[y + x * sh]);
            m10k_ptr[x] = coeff[y + x * sh];
        }
    }
    if (last_nonzero_col + 1 < sh) {
        // set rest to 0
        // equivalent of memset(c, 0, sizeof(*c) * (sh - last_nonzero_col - 1) * w) from og code
        for (int i = 0; i < (sh - last_nonzero_col - 1) * M10K_WIDTH; i++, m10k_ptr++) {
            *m10k_ptr = 0;
        }
    }

    // send request
    pthread_mutex_lock(&global_ctx.request_lock);
    slot_bitset_set_vol(global_ctx.request_ptr, slot);
    pthread_mutex_unlock(&global_ctx.request_lock);

    int16_t tmp[M10K_WIDTH * M10K_HEIGHT] = {10};
    memset(coeff, 0, sizeof(*coeff) * sw * sh);
    // wait response
    // TODO: for now we will busy wait, but interrupts or something would be nice...
    while (!slot_bitset_get_vol(global_ctx.response_ptr, slot));

    // TODO: only copy necessary coeffs
    for (int i = 0; i < M10K_WIDTH * M10K_HEIGHT; i++) {
        tmp[i] = global_ctx.m10k_ptr[slot][i];
    }

    // ack response
    pthread_mutex_lock(&global_ctx.request_lock);
    slot_bitset_unset_vol(global_ctx.request_ptr, slot);
    pthread_mutex_unlock(&global_ctx.request_lock);

    printf("pxstride: %d\n", PXSTRIDE(stride));
    int16_t* c = tmp;
    printf("Transformed coeffs from FPGA:\n");
    for (int y = 0; y < M10K_HEIGHT; y++, dst += PXSTRIDE(stride)) {
        for (int x = 0; x < M10K_WIDTH; x++) {
            printf("%d ", *c);
            dst[x] = iclip_pixel(dst[x] + *c++);
        }
        printf("\n");
    }

    // wait complete
    while (slot_bitset_get_vol(global_ctx.response_ptr, slot));

    pthread_mutex_lock(&global_ctx.in_use_lock);
    slot_bitset_set(&global_ctx.slot_available, slot);
    pthread_cond_signal(&global_ctx.slot_available_cond);
    pthread_mutex_unlock(&global_ctx.in_use_lock);
}
