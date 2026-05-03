/*
 * Copyright © 2018, VideoLAN and dav1d authors
 * Copyright © 2023, Nathan Egge
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include <fcntl.h>
#include <stdatomic.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>

#include "common/bitdepth.h"
#include "common/intops.h"
#include "src/fpga/fpga_iface.h"
#include "src/itx.h"
#include "src/itx_1d.h"
#include "src/levels.h"
#include "src/scan.h"
#include "src/tables.h"

// for 8bpc, pixel is uint8_t and coef is int16_t
// we're not gonna worry about any of the HIGHBD_DECL_SUFFIX stuff as that's only for high bit depth
// static void dav1d_inv_txfm_add_dct_dct_32x32_8bpc_fpga(pixel* dst, const ptrdiff_t stride,
//     coef* const coeff, const int eob HIGHBD_DECL_SUFFIX) {
//     inv_txfm_add_fpga(dst, stride, coeff, eob, TX_32X32, 2, DCT_DCT);
// }

static void dav1d_inv_txfm_add_idtx_32x32_8bpc_fpga(pixel* dst, const ptrdiff_t stride,
    coef* const coeff, const int eob HIGHBD_DECL_SUFFIX) {
    // printf("Running identity\n");
    //
    // const TxfmInfo* const t_dim = &dav1d_txfm_dimensions[TX_32X32];
    // const int w = 4 * t_dim->w, h = 4 * t_dim->h;
    //
    // assert(PXSTRIDE(stride) == 1);
    // pixel* dst_copy = malloc(PXSTRIDE(stride) * w * h);
    // pixel* dst_ptr = dst;
    // pixel* dst_copy_ptr = dst_copy;
    // for (int y = 0; y < h; y++, dst_ptr += PXSTRIDE(stride), dst_copy_ptr += PXSTRIDE(stride))
    //     for (int x = 0; x < w; x++) dst_copy_ptr[x] = dst_ptr[x];
    //
    // const uint8_t* const txtps = dav1d_tx1d_types[IDTX];
    // const int sh = imin(h, 32), sw = imin(w, 32);
    // coef coeff_copy[64 * 64] = {0};
    // int last_nonzero_col;  // in first 1d itx
    // if (txtps[1] == IDENTITY && txtps[0] != IDENTITY) {
    //     last_nonzero_col = imin(sh - 1, eob);
    // } else if (txtps[0] == IDENTITY && txtps[1] != IDENTITY) {
    //     last_nonzero_col = eob >> (t_dim->lw + 2);
    // } else {
    //     last_nonzero_col = dav1d_last_nonzero_col_from_eob[TX_32X32][eob];
    // }
    // assert(last_nonzero_col < sh);
    //
    // for (int y = 0; y <= last_nonzero_col; y++) {
    //     for (int x = 0; x < sw; x++) {
    //         coeff_copy[y + x * sw] = coeff[y + x * sw];
    //     }
    // }
    //
    // printf("ORIGINAL COEFFS:\n");
    // for (int y = 0; y <= last_nonzero_col; y++) {
    //     for (int x = 0; x < sw; x++) {
    //         printf("%d ", coeff[y + x * sw]);
    //     }
    //     printf("\n");
    // }
    //
    // printf("ORIGINAL COEFFS 2:\n");
    // for (int y = 0; y <= last_nonzero_col; y++) {
    //     for (int x = 0; x < sw; x++) {
    //         printf("%d ", coeff_copy[y + x * sw]);
    //     }
    //     printf("\n");
    // }
    //
    // inv_txfm_add_c(dst_copy, stride, coeff_copy, eob, TX_32X32, 2, IDTX);
    inv_txfm_add_fpga(dst, stride, coeff, eob, TX_32X32, 2, IDTX);

    // dst_ptr = dst;
    // dst_copy_ptr = dst_copy;
    // for (int y = 0; y < h; y++, dst_ptr += PXSTRIDE(stride), dst_copy_ptr += PXSTRIDE(stride)) {
    //     for (int x = 0; x < w; x++) {
    //         if (dst_ptr[x] != dst_copy_ptr[x]) {
    //             printf("Mismatch! %d != %d at (%d, %d)\n", dst_ptr[x], dst_copy_ptr[x], x, y);
    //         }
    //     }
    // }
    //
    // free(dst_copy);
}

static void itx_dsp_init_fpga(Dav1dInvTxfmDSPContext* const c, int const bpc) {
    if (!fpga_init()) {
        // init failed, don't assign any functions
        return;
    }

    // assign_itx_fn(, 32, 32, dct_dct, DCT_DCT, fpga);
    assign_itx_fn(, 32, 32, idtx, IDTX, fpga);
}
