#include <stddef.h>
#include <stdio.h>

#include "common/attributes.h"
#include "common/intops.h"
#include "src/fpga/itx.h"
#include "src/itx_1d.h"
#include "src/levels.h"
#include "src/scan.h"
#include "src/tables.h"

static NOINLINE void inv_txfm_add_c(pixel* dst, const ptrdiff_t stride, coef* const coeff,
    const int eob, const /*enum RectTxfmSize*/ int tx, const int shift,
    const enum TxfmType txtp HIGHBD_DECL_SUFFIX) {
    const TxfmInfo* const t_dim = &dav1d_txfm_dimensions[tx];
    const int w = 4 * t_dim->w, h = 4 * t_dim->h;
    const int has_dconly = txtp == DCT_DCT;
    assert(w >= 4 && w <= 64);
    assert(h >= 4 && h <= 64);
    assert(eob >= 0);

    const int is_rect2 = w * 2 == h || h * 2 == w;
    const int rnd = (1 << shift) >> 1;

    if (eob < has_dconly) {
        int dc = coeff[0];
        coeff[0] = 0;
        if (is_rect2) dc = (dc * 181 + 128) >> 8;
        dc = (dc * 181 + 128) >> 8;
        dc = (dc + rnd) >> shift;
        dc = (dc * 181 + 128 + 2048) >> 12;
        for (int y = 0; y < h; y++, dst += PXSTRIDE(stride))
            for (int x = 0; x < w; x++) dst[x] = iclip_pixel(dst[x] + dc);
        return;
    }

    const uint8_t* const txtps = dav1d_tx1d_types[txtp];
    const itx_1d_fn first_1d_fn = dav1d_tx1d_fns[t_dim->lw][txtps[0]];
    const itx_1d_fn second_1d_fn = dav1d_tx1d_fns[t_dim->lh][txtps[1]];
    const int sh = imin(h, 32), sw = imin(w, 32);
#if BITDEPTH == 8
    const int row_clip_min = INT16_MIN;
    const int col_clip_min = INT16_MIN;
#else
    const int row_clip_min = (int)((unsigned)~bitdepth_max << 7);
    const int col_clip_min = (int)((unsigned)~bitdepth_max << 5);
#endif
    const int row_clip_max = ~row_clip_min;
    const int col_clip_max = ~col_clip_min;

    int32_t tmp[64 * 64], *c = tmp;
    int last_nonzero_col;  // in first 1d itx
    if (txtps[1] == IDENTITY && txtps[0] != IDENTITY) {
        last_nonzero_col = imin(sh - 1, eob);
    } else if (txtps[0] == IDENTITY && txtps[1] != IDENTITY) {
        last_nonzero_col = eob >> (t_dim->lw + 2);
    } else {
        last_nonzero_col = dav1d_last_nonzero_col_from_eob[tx][eob];
    }

    // HACK
    last_nonzero_col = 31;

    assert(last_nonzero_col < sh);
    for (int y = 0; y <= last_nonzero_col; y++, c += w) {
        if (is_rect2)
            for (int x = 0; x < sw; x++) c[x] = (coeff[y + x * sh] * 181 + 128) >> 8;
        else
            for (int x = 0; x < sw; x++) c[x] = coeff[y + x * sh];
        first_1d_fn(c, 1, row_clip_min, row_clip_max);
    }
    if (last_nonzero_col + 1 < sh) memset(c, 0, sizeof(*c) * (sh - last_nonzero_col - 1) * w);

    memset(coeff, 0, sizeof(*coeff) * sw * sh);
    for (int i = 0; i < w * sh; i++)
        tmp[i] = iclip((tmp[i] + rnd) >> shift, col_clip_min, col_clip_max);

    for (int x = 0; x < w; x++) second_1d_fn(&tmp[x], w, col_clip_min, col_clip_max);

    c = tmp;
    for (int y = 0; y < h; y++, dst += PXSTRIDE(stride))
        for (int x = 0; x < w; x++) dst[x] = iclip_pixel(dst[x] + ((*c++ + 8) >> 4));
}

int main(void) {
    fpga_init();

    pixel dst_c[32 * 32];
    pixel dst_fpga[32 * 32];
    coef coeff[32 * 32];

    // eob is unused rn
    inv_txfm_add_c(dst_c, 1, coeff, 1, TX_32X32, 2, DCT_DCT);
    inv_txfm_add_fpga(dst_fpga, 1, coeff, 1, TX_32X32, 2, DCT_DCT);

    for (size_t i = 0; i < 32 * 32; i++) {
        printf("%d %d\n", dst_c[i], dst_fpga[i]);
    }
}
