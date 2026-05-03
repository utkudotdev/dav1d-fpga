// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsingle_block_bench.h for the primary calling header

#include "Vsingle_block_bench__pch.h"

void Vsingle_block_bench_av1_helper_functions___ctor_var_reset(Vsingle_block_bench_av1_helper_functions* vlSelf);

Vsingle_block_bench_av1_helper_functions::Vsingle_block_bench_av1_helper_functions() = default;
Vsingle_block_bench_av1_helper_functions::~Vsingle_block_bench_av1_helper_functions() = default;

void Vsingle_block_bench_av1_helper_functions::ctor(Vsingle_block_bench__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vsingle_block_bench_av1_helper_functions___ctor_var_reset(this);
}

void Vsingle_block_bench_av1_helper_functions::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vsingle_block_bench_av1_helper_functions::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
