// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsingle_block_bench.h for the primary calling header

#ifndef VERILATED_VSINGLE_BLOCK_BENCH___024UNIT_H_
#define VERILATED_VSINGLE_BLOCK_BENCH___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsingle_block_bench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsingle_block_bench___024unit final {
  public:

    // INTERNAL VARIABLES
    Vsingle_block_bench__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vsingle_block_bench___024unit();
    ~Vsingle_block_bench___024unit();
    void ctor(Vsingle_block_bench__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vsingle_block_bench___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
