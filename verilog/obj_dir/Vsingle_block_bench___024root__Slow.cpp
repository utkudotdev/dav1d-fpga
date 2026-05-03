// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsingle_block_bench.h for the primary calling header

#include "Vsingle_block_bench__pch.h"

void Vsingle_block_bench___024root___ctor_var_reset(Vsingle_block_bench___024root* vlSelf);

Vsingle_block_bench___024root::Vsingle_block_bench___024root(Vsingle_block_bench__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vsingle_block_bench___024root___ctor_var_reset(this);
}

void Vsingle_block_bench___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsingle_block_bench___024root::~Vsingle_block_bench___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
