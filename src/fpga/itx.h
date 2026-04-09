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
#include <sys/mman.h>

#include "levels.h"
#include "src/fpga/fpga_iface.h"
#include "src/itx.h"

// for 8bpc, pixel is uint8_t and coef is int16_t
// we're not gonna worry about any of the HIGHBD_DECL_SUFFIX stuff as that's only for high bit depth
static void dav1d_inv_txfm_add_identity_identity_32x32_8bpc_fpga(pixel* dst, const ptrdiff_t stride,
    coef* const coeff, const int eob HIGHBD_DECL_SUFFIX) {
    inv_txfm_add_fpga(dst, stride, coeff, eob, TX_32X32, 2, IDTX);
}

static void itx_dsp_init_fpga(Dav1dInvTxfmDSPContext* const c, int const bpc) {
    if (!fpga_init()) {
        // init failed, don't assign any functions
        return;
    }

    assign_itx_fn(, 32, 32, identity_identity, IDTX, fpga);
}
