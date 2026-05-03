// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsingle_block_bench.h for the primary calling header

#ifndef VERILATED_VSINGLE_BLOCK_BENCH_AV1_HELPER_FUNCTIONS_H_
#define VERILATED_VSINGLE_BLOCK_BENCH_AV1_HELPER_FUNCTIONS_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsingle_block_bench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsingle_block_bench_av1_helper_functions final {
  public:

    // DESIGN SPECIFIC STATE
    VlUnpacked<SData/*15:0*/, 65> Cos128_Lookup;

    // INTERNAL VARIABLES
    Vsingle_block_bench__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vsingle_block_bench_av1_helper_functions();
    ~Vsingle_block_bench_av1_helper_functions();
    void ctor(Vsingle_block_bench__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vsingle_block_bench_av1_helper_functions);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
