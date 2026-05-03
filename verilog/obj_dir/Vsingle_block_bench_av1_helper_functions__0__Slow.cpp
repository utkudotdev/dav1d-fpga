// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsingle_block_bench.h for the primary calling header

#include "Vsingle_block_bench__pch.h"

VL_ATTR_COLD void Vsingle_block_bench_av1_helper_functions___eval_static__TOP__av1_helper_functions(Vsingle_block_bench_av1_helper_functions* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsingle_block_bench_av1_helper_functions___eval_static__TOP__av1_helper_functions\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Cos128_Lookup[0U] = 0x1000U;
    vlSelfRef.Cos128_Lookup[1U] = 0x0fffU;
    vlSelfRef.Cos128_Lookup[2U] = 0x0ffbU;
    vlSelfRef.Cos128_Lookup[3U] = 0x0ff5U;
    vlSelfRef.Cos128_Lookup[4U] = 0x0fecU;
    vlSelfRef.Cos128_Lookup[5U] = 0x0fe1U;
    vlSelfRef.Cos128_Lookup[6U] = 0x0fd4U;
    vlSelfRef.Cos128_Lookup[7U] = 0x0fc4U;
    vlSelfRef.Cos128_Lookup[8U] = 0x0fb1U;
    vlSelfRef.Cos128_Lookup[9U] = 0x0f9cU;
    vlSelfRef.Cos128_Lookup[10U] = 0x0f85U;
    vlSelfRef.Cos128_Lookup[11U] = 0x0f6cU;
    vlSelfRef.Cos128_Lookup[12U] = 0x0f50U;
    vlSelfRef.Cos128_Lookup[13U] = 0x0f31U;
    vlSelfRef.Cos128_Lookup[14U] = 0x0f11U;
    vlSelfRef.Cos128_Lookup[15U] = 0x0eeeU;
    vlSelfRef.Cos128_Lookup[16U] = 0x0ec8U;
    vlSelfRef.Cos128_Lookup[17U] = 0x0ea1U;
    vlSelfRef.Cos128_Lookup[18U] = 0x0e77U;
    vlSelfRef.Cos128_Lookup[19U] = 0x0e4bU;
    vlSelfRef.Cos128_Lookup[20U] = 0x0e1cU;
    vlSelfRef.Cos128_Lookup[21U] = 0x0decU;
    vlSelfRef.Cos128_Lookup[22U] = 0x0db9U;
    vlSelfRef.Cos128_Lookup[23U] = 0x0d85U;
    vlSelfRef.Cos128_Lookup[24U] = 0x0d4eU;
    vlSelfRef.Cos128_Lookup[25U] = 0x0d15U;
    vlSelfRef.Cos128_Lookup[26U] = 0x0cdaU;
    vlSelfRef.Cos128_Lookup[27U] = 0x0c9dU;
    vlSelfRef.Cos128_Lookup[28U] = 0x0c5eU;
    vlSelfRef.Cos128_Lookup[29U] = 0x0c1eU;
    vlSelfRef.Cos128_Lookup[30U] = 0x0bdbU;
    vlSelfRef.Cos128_Lookup[31U] = 0x0b97U;
    vlSelfRef.Cos128_Lookup[32U] = 0x0b50U;
    vlSelfRef.Cos128_Lookup[33U] = 0x0b08U;
    vlSelfRef.Cos128_Lookup[34U] = 0x0abfU;
    vlSelfRef.Cos128_Lookup[35U] = 0x0a73U;
    vlSelfRef.Cos128_Lookup[36U] = 0x0a26U;
    vlSelfRef.Cos128_Lookup[37U] = 0x09d8U;
    vlSelfRef.Cos128_Lookup[38U] = 0x0988U;
    vlSelfRef.Cos128_Lookup[39U] = 0x0937U;
    vlSelfRef.Cos128_Lookup[40U] = 0x08e4U;
    vlSelfRef.Cos128_Lookup[41U] = 0x088fU;
    vlSelfRef.Cos128_Lookup[42U] = 0x083aU;
    vlSelfRef.Cos128_Lookup[43U] = 0x07e3U;
    vlSelfRef.Cos128_Lookup[44U] = 0x078bU;
    vlSelfRef.Cos128_Lookup[45U] = 0x0732U;
    vlSelfRef.Cos128_Lookup[46U] = 0x06d7U;
    vlSelfRef.Cos128_Lookup[47U] = 0x067cU;
    vlSelfRef.Cos128_Lookup[48U] = 0x061fU;
    vlSelfRef.Cos128_Lookup[49U] = 0x05c2U;
    vlSelfRef.Cos128_Lookup[50U] = 0x0564U;
    vlSelfRef.Cos128_Lookup[51U] = 0x0505U;
    vlSelfRef.Cos128_Lookup[52U] = 0x04a5U;
    vlSelfRef.Cos128_Lookup[53U] = 0x0444U;
    vlSelfRef.Cos128_Lookup[54U] = 0x03e3U;
    vlSelfRef.Cos128_Lookup[55U] = 0x0381U;
    vlSelfRef.Cos128_Lookup[56U] = 0x031fU;
    vlSelfRef.Cos128_Lookup[57U] = 0x02bcU;
    vlSelfRef.Cos128_Lookup[58U] = 0x0259U;
    vlSelfRef.Cos128_Lookup[59U] = 0x01f5U;
    vlSelfRef.Cos128_Lookup[60U] = 0x0191U;
    vlSelfRef.Cos128_Lookup[61U] = 0x012dU;
    vlSelfRef.Cos128_Lookup[62U] = 0x00c9U;
    vlSelfRef.Cos128_Lookup[63U] = 0x0065U;
    vlSelfRef.Cos128_Lookup[64U] = 0U;
}

VL_ATTR_COLD void Vsingle_block_bench_av1_helper_functions___ctor_var_reset(Vsingle_block_bench_av1_helper_functions* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsingle_block_bench_av1_helper_functions___ctor_var_reset\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
