#include <stdbool.h>

#include "common/bitdepth.h"
#include "src/levels.h"

// Initializes the FPGA context. Must be called at most once.
bool fpga_init(void);

// Performs and inverse transform specified by `txtp` on `coeff` and adds the result to `dst`.
void inv_txfm_add_fpga(pixel* dst, const ptrdiff_t stride, coef* const coeff, const int eob,
    const /*enum RectTxfmSize*/ int tx, const int shift, const enum TxfmType txtp);
