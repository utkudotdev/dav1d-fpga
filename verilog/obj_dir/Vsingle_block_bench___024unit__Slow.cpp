// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsingle_block_bench.h for the primary calling header

#include "Vsingle_block_bench__pch.h"

void Vsingle_block_bench___024unit___ctor_var_reset(Vsingle_block_bench___024unit* vlSelf);

Vsingle_block_bench___024unit::Vsingle_block_bench___024unit() = default;
Vsingle_block_bench___024unit::~Vsingle_block_bench___024unit() = default;

void Vsingle_block_bench___024unit::ctor(Vsingle_block_bench__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vsingle_block_bench___024unit___ctor_var_reset(this);
}

void Vsingle_block_bench___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vsingle_block_bench___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
