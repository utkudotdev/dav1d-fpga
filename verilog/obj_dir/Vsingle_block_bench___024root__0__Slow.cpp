// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsingle_block_bench.h for the primary calling header

#include "Vsingle_block_bench__pch.h"

VL_ATTR_COLD void Vsingle_block_bench___024root___eval_static__TOP(Vsingle_block_bench___024root* vlSelf);
VL_ATTR_COLD void Vsingle_block_bench___024root____Vm_traceActivitySetAll(Vsingle_block_bench___024root* vlSelf);
VL_ATTR_COLD void Vsingle_block_bench_av1_helper_functions___eval_static__TOP__av1_helper_functions(Vsingle_block_bench_av1_helper_functions* vlSelf);

VL_ATTR_COLD void Vsingle_block_bench___024root___eval_static(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___eval_static\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsingle_block_bench___024root___eval_static__TOP(vlSelf);
    Vsingle_block_bench___024root____Vm_traceActivitySetAll(vlSelf);
    Vsingle_block_bench_av1_helper_functions___eval_static__TOP__av1_helper_functions((&vlSymsp->TOP__av1_helper_functions));
    vlSelfRef.__Vtrigprevexpr___TOP__single_block_bench__DOT__clk__0 
        = vlSelfRef.single_block_bench__DOT__clk;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vsingle_block_bench___024root___eval_static__TOP(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___eval_static__TOP\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14307710350411182080ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14135748084465031925ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3626228480954947246ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk9__DOT__unnamedblk10__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11980144414285991787ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk11__DOT__unnamedblk12__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1211292620961954285ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3423272674643561787ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk16__DOT__unnamedblk17__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18320386240178070155ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk18__DOT__unnamedblk19__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16990154611691378572ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk20__DOT__unnamedblk21__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8842079826261352362ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18275935627853414703ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk25__DOT__unnamedblk26__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6713523449718988575ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk27__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2393129915130034473ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 636685718661270906ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk31__DOT__unnamedblk32__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13172167479460493804ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk33__DOT__unnamedblk34__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4559321363711052398ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk35__DOT__unnamedblk36__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13196801493461438446ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10783966633089873797ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9303436174456322058ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk42__DOT__unnamedblk43__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13155476567708499620ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3230715534855765106ull);
}

VL_ATTR_COLD void Vsingle_block_bench___024root___eval_initial__TOP(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___eval_initial__TOP\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.single_block_bench__DOT__arr[0U] = 0U;
    vlSelfRef.single_block_bench__DOT__arr[1U] = 4U;
    vlSelfRef.single_block_bench__DOT__arr[2U] = 8U;
    vlSelfRef.single_block_bench__DOT__arr[3U] = 0x000cU;
    vlSelfRef.single_block_bench__DOT__arr[4U] = 0x0010U;
    vlSelfRef.single_block_bench__DOT__arr[5U] = 0x0014U;
    vlSelfRef.single_block_bench__DOT__arr[6U] = 0x0018U;
    vlSelfRef.single_block_bench__DOT__arr[7U] = 0x001cU;
    vlSelfRef.single_block_bench__DOT__arr[8U] = 0x0020U;
    vlSelfRef.single_block_bench__DOT__arr[9U] = 0x0024U;
    vlSelfRef.single_block_bench__DOT__arr[10U] = 0x0028U;
    vlSelfRef.single_block_bench__DOT__arr[11U] = 0x002cU;
    vlSelfRef.single_block_bench__DOT__arr[12U] = 0x0030U;
    vlSelfRef.single_block_bench__DOT__arr[13U] = 0x0034U;
    vlSelfRef.single_block_bench__DOT__arr[14U] = 0x0038U;
    vlSelfRef.single_block_bench__DOT__arr[15U] = 0x003cU;
    vlSelfRef.single_block_bench__DOT__arr[16U] = 0x0040U;
    vlSelfRef.single_block_bench__DOT__arr[17U] = 0x0044U;
    vlSelfRef.single_block_bench__DOT__arr[18U] = 0x0048U;
    vlSelfRef.single_block_bench__DOT__arr[19U] = 0x004cU;
    vlSelfRef.single_block_bench__DOT__arr[20U] = 0x0050U;
    vlSelfRef.single_block_bench__DOT__arr[21U] = 0x0054U;
    vlSelfRef.single_block_bench__DOT__arr[22U] = 0x0058U;
    vlSelfRef.single_block_bench__DOT__arr[23U] = 0x005cU;
    vlSelfRef.single_block_bench__DOT__arr[24U] = 0x0060U;
    vlSelfRef.single_block_bench__DOT__arr[25U] = 0x0064U;
    vlSelfRef.single_block_bench__DOT__arr[26U] = 0x0068U;
    vlSelfRef.single_block_bench__DOT__arr[27U] = 0x006cU;
    vlSelfRef.single_block_bench__DOT__arr[28U] = 0x0070U;
    vlSelfRef.single_block_bench__DOT__arr[29U] = 0x0074U;
    vlSelfRef.single_block_bench__DOT__arr[30U] = 0x0078U;
    vlSelfRef.single_block_bench__DOT__arr[31U] = 0x007cU;
    vlSymsp->_vm_contextp__->dumpfile("single_block.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vsingle_block_bench___024root___eval_final(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___eval_final\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsingle_block_bench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsingle_block_bench___024root___eval_phase__stl(Vsingle_block_bench___024root* vlSelf);

VL_ATTR_COLD void Vsingle_block_bench___024root___eval_settle(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___eval_settle\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsingle_block_bench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("testbenches/single_block_bench.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vsingle_block_bench___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vsingle_block_bench___024root___eval_triggers_vec__stl(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___eval_triggers_vec__stl\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vsingle_block_bench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsingle_block_bench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vsingle_block_bench___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vsingle_block_bench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vsingle_block_bench___024root___stl_sequent__TOP__0(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___stl_sequent__TOP__0\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ single_block_bench__DOT__DUT__DOT____VdfgRegularize_hf4b1a01a_0_2;
    single_block_bench__DOT__DUT__DOT____VdfgRegularize_hf4b1a01a_0_2 = 0;
    // Body
    if (VL_UNLIKELY(((0x00001770U == vlSelfRef.single_block_bench__DOT__count)))) {
        VL_FINISH_MT("testbenches/single_block_bench.sv", 46, "");
    }
    vlSelfRef.single_block_bench__DOT__DUT__DOT____Vcellinp__inv_dct__rst 
        = ((IData)(vlSelfRef.single_block_bench__DOT__rst) 
           | (1U == (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__state)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__write_ready_pos_edge 
        = ((~ (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__write_ready_prev)) 
           & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__ready_reg));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[0U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[0U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[1U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[1U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[2U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[2U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[3U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[3U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[4U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[4U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[5U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[5U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[6U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[6U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[7U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[7U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[8U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[8U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[9U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[9U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[10U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[10U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[11U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[11U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[12U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[12U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[13U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[13U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[14U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[14U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[15U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[15U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[16U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[16U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[17U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[17U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[18U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[18U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[19U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[19U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[20U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[20U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[21U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[21U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[22U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[22U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[23U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[23U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[24U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[24U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[25U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[25U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[26U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[26U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[27U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[27U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[28U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[28U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[29U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[29U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[30U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[30U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[31U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[31U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__start_write 
        = ((2U == (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__state)) 
           & ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__valid_reg) 
              & (((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__job_id_prev) 
                  != (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__job_id)) 
                 & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__ready_reg))));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[0U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[0U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[1U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[1U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[2U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[2U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[3U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[3U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[4U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[4U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[5U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[5U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[6U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[6U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[7U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[7U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[8U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[8U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[9U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[9U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[10U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[10U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[11U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[11U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[12U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[12U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[13U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[13U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[14U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[14U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[15U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[15U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[16U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[16U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[17U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[17U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[18U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[18U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[19U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[19U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[20U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[20U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[21U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[21U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[22U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[22U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[23U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[23U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[24U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[24U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[25U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[25U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[26U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[26U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[27U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[27U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[28U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[28U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[29U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[29U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[30U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[30U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[31U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[31U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[0U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[0U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[1U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[1U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[2U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[2U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[3U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[3U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[4U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[4U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[5U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[5U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[6U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[6U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[7U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[7U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[8U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[8U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[9U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[9U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[10U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[10U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[11U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[11U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[12U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[12U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[13U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[13U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[14U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[14U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[15U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[15U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[16U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[16U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[17U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[17U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[18U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[18U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[19U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[19U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[20U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[20U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[21U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[21U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[22U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[22U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[23U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[23U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[24U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[24U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[25U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[25U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[26U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[26U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[27U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[27U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[28U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[28U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[29U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[29U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[30U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[30U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__array[31U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[31U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[0U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[0U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[1U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[1U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[2U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[2U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[3U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[3U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[4U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[4U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[5U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[5U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[6U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[6U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[7U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[7U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[8U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[8U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[9U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[9U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[10U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[10U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[11U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[11U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[12U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[12U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[13U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[13U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[14U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[14U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[15U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[15U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[16U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[16U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[17U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[17U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[18U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[18U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[19U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[19U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[20U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[20U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[21U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[21U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[22U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[22U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[23U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[23U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[24U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[24U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[25U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[25U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[26U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[26U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[27U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[27U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[28U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[28U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[29U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[29U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[30U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[30U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[31U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[31U];
    single_block_bench__DOT__DUT__DOT____VdfgRegularize_hf4b1a01a_0_2 
        = ((0U == (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state)) 
           & ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__valid_reg) 
              & ((~ (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__start_write)) 
                 & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__ready_reg))));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[0U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[0U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[1U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[1U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[2U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[2U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[3U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[3U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[4U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[4U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[5U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[5U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[6U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[6U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[7U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[7U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[8U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[8U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[9U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[9U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[10U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[10U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[11U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[11U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[12U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[12U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[13U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[13U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[14U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[14U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[15U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[15U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[16U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[16U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[17U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[17U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[18U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[18U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[19U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[19U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[20U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[20U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[21U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[21U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[22U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[22U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[23U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[23U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[24U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[24U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[25U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[25U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[26U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[26U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[27U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[27U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[28U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[28U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[29U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[29U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[30U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[30U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[31U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[31U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT____Vcellinp__reader__start_addr 
        = (0x000003ffU & ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
                           ? (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_read_counter)
                           : VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_read_counter), 5U)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[0U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__0__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[0U]);
                vlSelfRef.__Vfunc_round2__0__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__0__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__0__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__1__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[0U]);
                vlSelfRef.__Vfunc_round2__1__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__1__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__1__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[1U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__2__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[1U]);
                vlSelfRef.__Vfunc_round2__2__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__2__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__2__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__3__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[1U]);
                vlSelfRef.__Vfunc_round2__3__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__3__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__3__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[2U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__4__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[2U]);
                vlSelfRef.__Vfunc_round2__4__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__4__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__4__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__5__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[2U]);
                vlSelfRef.__Vfunc_round2__5__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__5__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__5__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[3U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__6__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[3U]);
                vlSelfRef.__Vfunc_round2__6__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__6__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__6__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__7__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[3U]);
                vlSelfRef.__Vfunc_round2__7__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__7__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__7__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[4U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__8__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[4U]);
                vlSelfRef.__Vfunc_round2__8__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__8__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__8__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__9__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[4U]);
                vlSelfRef.__Vfunc_round2__9__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__9__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__9__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[5U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__10__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[5U]);
                vlSelfRef.__Vfunc_round2__10__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__10__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__10__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__11__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[5U]);
                vlSelfRef.__Vfunc_round2__11__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__11__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__11__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[6U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__12__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[6U]);
                vlSelfRef.__Vfunc_round2__12__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__12__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__12__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__13__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[6U]);
                vlSelfRef.__Vfunc_round2__13__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__13__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__13__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[7U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__14__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[7U]);
                vlSelfRef.__Vfunc_round2__14__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__14__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__14__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__15__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[7U]);
                vlSelfRef.__Vfunc_round2__15__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__15__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__15__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[8U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__16__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[8U]);
                vlSelfRef.__Vfunc_round2__16__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__16__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__16__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__17__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[8U]);
                vlSelfRef.__Vfunc_round2__17__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__17__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__17__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[9U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__18__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[9U]);
                vlSelfRef.__Vfunc_round2__18__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__18__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__18__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__19__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[9U]);
                vlSelfRef.__Vfunc_round2__19__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__19__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__19__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[10U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__20__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[10U]);
                vlSelfRef.__Vfunc_round2__20__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__20__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__20__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__21__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[10U]);
                vlSelfRef.__Vfunc_round2__21__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__21__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__21__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[11U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__22__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[11U]);
                vlSelfRef.__Vfunc_round2__22__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__22__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__22__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__23__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[11U]);
                vlSelfRef.__Vfunc_round2__23__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__23__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__23__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[12U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__24__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[12U]);
                vlSelfRef.__Vfunc_round2__24__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__24__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__24__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__25__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[12U]);
                vlSelfRef.__Vfunc_round2__25__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__25__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__25__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[13U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__26__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[13U]);
                vlSelfRef.__Vfunc_round2__26__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__26__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__26__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__27__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[13U]);
                vlSelfRef.__Vfunc_round2__27__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__27__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__27__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[14U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__28__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[14U]);
                vlSelfRef.__Vfunc_round2__28__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__28__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__28__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__29__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[14U]);
                vlSelfRef.__Vfunc_round2__29__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__29__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__29__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[15U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__30__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[15U]);
                vlSelfRef.__Vfunc_round2__30__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__30__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__30__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__31__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[15U]);
                vlSelfRef.__Vfunc_round2__31__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__31__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__31__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[16U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__32__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[16U]);
                vlSelfRef.__Vfunc_round2__32__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__32__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__32__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__33__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[16U]);
                vlSelfRef.__Vfunc_round2__33__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__33__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__33__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[17U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__34__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[17U]);
                vlSelfRef.__Vfunc_round2__34__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__34__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__34__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__35__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[17U]);
                vlSelfRef.__Vfunc_round2__35__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__35__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__35__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[18U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__36__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[18U]);
                vlSelfRef.__Vfunc_round2__36__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__36__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__36__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__37__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[18U]);
                vlSelfRef.__Vfunc_round2__37__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__37__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__37__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[19U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__38__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[19U]);
                vlSelfRef.__Vfunc_round2__38__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__38__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__38__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__39__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[19U]);
                vlSelfRef.__Vfunc_round2__39__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__39__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__39__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[20U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__40__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[20U]);
                vlSelfRef.__Vfunc_round2__40__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__40__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__40__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__41__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[20U]);
                vlSelfRef.__Vfunc_round2__41__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__41__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__41__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[21U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__42__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[21U]);
                vlSelfRef.__Vfunc_round2__42__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__42__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__42__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__43__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[21U]);
                vlSelfRef.__Vfunc_round2__43__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__43__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__43__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[22U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__44__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[22U]);
                vlSelfRef.__Vfunc_round2__44__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__44__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__44__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__45__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[22U]);
                vlSelfRef.__Vfunc_round2__45__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__45__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__45__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[23U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__46__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[23U]);
                vlSelfRef.__Vfunc_round2__46__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__46__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__46__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__47__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[23U]);
                vlSelfRef.__Vfunc_round2__47__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__47__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__47__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[24U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__48__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[24U]);
                vlSelfRef.__Vfunc_round2__48__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__48__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__48__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__49__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[24U]);
                vlSelfRef.__Vfunc_round2__49__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__49__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__49__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[25U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__50__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[25U]);
                vlSelfRef.__Vfunc_round2__50__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__50__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__50__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__51__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[25U]);
                vlSelfRef.__Vfunc_round2__51__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__51__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__51__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[26U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__52__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[26U]);
                vlSelfRef.__Vfunc_round2__52__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__52__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__52__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__53__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[26U]);
                vlSelfRef.__Vfunc_round2__53__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__53__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__53__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[27U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__54__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[27U]);
                vlSelfRef.__Vfunc_round2__54__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__54__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__54__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__55__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[27U]);
                vlSelfRef.__Vfunc_round2__55__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__55__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__55__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[28U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__56__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[28U]);
                vlSelfRef.__Vfunc_round2__56__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__56__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__56__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__57__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[28U]);
                vlSelfRef.__Vfunc_round2__57__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__57__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__57__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[29U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__58__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[29U]);
                vlSelfRef.__Vfunc_round2__58__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__58__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__58__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__59__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[29U]);
                vlSelfRef.__Vfunc_round2__59__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__59__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__59__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[30U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__60__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[30U]);
                vlSelfRef.__Vfunc_round2__60__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__60__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__60__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__61__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[30U]);
                vlSelfRef.__Vfunc_round2__61__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__61__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__61__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[31U] 
        = ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
            ? ([&]() {
                vlSelfRef.__Vfunc_round2__62__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[31U]);
                vlSelfRef.__Vfunc_round2__62__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(8U) 
                                                     + vlSelfRef.__Vfunc_round2__62__x), 4U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__62__Vfuncout))
            : ([&]() {
                vlSelfRef.__Vfunc_round2__63__x = VL_EXTENDS_II(32,16, vlSelfRef.single_block_bench__DOT__DUT__DOT__tf_out_arr[31U]);
                vlSelfRef.__Vfunc_round2__63__Vfuncout 
                    = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                    ((IData)(2U) 
                                                     + vlSelfRef.__Vfunc_round2__63__x), 2U));
            }(), (IData)(vlSelfRef.__Vfunc_round2__63__Vfuncout)));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__start_read 
        = ((1U == (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__prev_state)) 
           | (IData)(single_block_bench__DOT__DUT__DOT____VdfgRegularize_hf4b1a01a_0_2));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__start_compute 
        = ((2U == (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__state)) 
           & (IData)(single_block_bench__DOT__DUT__DOT____VdfgRegularize_hf4b1a01a_0_2));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[0U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[0U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[1U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[1U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[2U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[2U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[3U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[3U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[4U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[4U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[5U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[5U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[6U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[6U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[7U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[7U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[8U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[8U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[9U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[9U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[10U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[10U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[11U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[11U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[12U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[12U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[13U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[13U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[14U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[14U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[15U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[15U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[16U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[16U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[17U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[17U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[18U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[18U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[19U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[19U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[20U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[20U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[21U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[21U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[22U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[22U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[23U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[23U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[24U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[24U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[25U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[25U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[26U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[26U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[27U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[27U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[28U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[28U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[29U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[29U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[30U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[30U];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr[31U] 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[31U];
}

VL_ATTR_COLD void Vsingle_block_bench___024root___eval_stl(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___eval_stl\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vsingle_block_bench___024root___stl_sequent__TOP__0(vlSelf);
        Vsingle_block_bench___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vsingle_block_bench___024root___eval_phase__stl(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___eval_phase__stl\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsingle_block_bench___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsingle_block_bench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vsingle_block_bench___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vsingle_block_bench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vsingle_block_bench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsingle_block_bench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsingle_block_bench___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge single_block_bench.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsingle_block_bench___024root____Vm_traceActivitySetAll(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root____Vm_traceActivitySetAll\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vsingle_block_bench___024root___ctor_var_reset(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___ctor_var_reset\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->single_block_bench__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2185021517307812451ull);
    vlSelf->single_block_bench__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15296225724007176275ull);
    vlSelf->single_block_bench__DOT__count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16878638000655303480ull);
    vlSelf->single_block_bench__DOT__start_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17515361279679365408ull);
    vlSelf->single_block_bench__DOT__start_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1651391295923003617ull);
    vlSelf->single_block_bench__DOT__is_column = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16016628456098581506ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->single_block_bench__DOT__arr[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2896618586068618793ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->single_block_bench__DOT__arr_out[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13381765533873563637ull);
    }
    vlSelf->single_block_bench__DOT__valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5056057825569045726ull);
    vlSelf->single_block_bench__DOT__ready_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13131435578076646840ull);
    vlSelf->single_block_bench__DOT__mem_read_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2280239560770715715ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->single_block_bench__DOT__TESTMEM_16_1024__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4734481043275979562ull);
    }
    vlSelf->single_block_bench__DOT__TESTMEM_16_1024__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8655395197289175668ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13083066352322449493ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__prev_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7147622986039893088ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__done_rows = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4149215919053962378ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__start_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1167106657340101222ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__write_ready_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17846415447093491025ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__write_ready_pos_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8052848067778890145ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__arr_write_counter = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14000883800516283736ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->single_block_bench__DOT__DUT__DOT__arr[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3881526773245290012ull);
    }
    vlSelf->single_block_bench__DOT__DUT__DOT__start_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 608843566608988392ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__arr_read_counter = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8100698887276038898ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__start_read_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6098920558989645965ull);
    vlSelf->single_block_bench__DOT__DUT__DOT____Vcellinp__reader__start_addr = 0;
    vlSelf->single_block_bench__DOT__DUT__DOT__start_compute = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 108383670246830433ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->single_block_bench__DOT__DUT__DOT__tf_out_arr[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2660071391175767045ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->single_block_bench__DOT__DUT__DOT__arr_to_write[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2018630821154894079ull);
    }
    vlSelf->single_block_bench__DOT__DUT__DOT____Vcellinp__inv_dct__rst = 0;
    vlSelf->single_block_bench__DOT__DUT__DOT__job_id_prev = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11079346054175532278ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__read_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2859542269867801085ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__read_lock_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2023091987642070290ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__write_lock_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11188367594283766150ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->single_block_bench__DOT__DUT__DOT__reader__DOT__array[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1969150996838460869ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1952723246497188239ull);
    }
    vlSelf->single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 13477727732799497869ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__reader__DOT__try_get_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14828639258017491033ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__reader__DOT__mem_lock_request_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3168694292647577840ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__reader__DOT__mem_read_addr_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1507094800720576860ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__reader__DOT__ready_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15360161766821654116ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__reader__DOT__valid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14921406571453556902ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14786004577686926684ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10357375456924441105ull);
    }
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__job_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9798257349976998506ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__valid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2629667750714148906ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8065287551535067090ull);
    }
    vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5182394972679007605ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4270803037777464944ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->single_block_bench__DOT__DUT__DOT__writer__DOT__arr[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17105183100166715979ull);
    }
    vlSelf->single_block_bench__DOT__DUT__DOT__writer__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3590324356300650990ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7378562166663549775ull);
    }
    vlSelf->single_block_bench__DOT__DUT__DOT__writer__DOT__state_mem_write = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12973365342018514592ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_addr_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10297414157713816334ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_counter = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16439942055437480403ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__writer__DOT__ready_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11551938721454277155ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__writer__DOT__try_get_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15710587248152038579ull);
    vlSelf->single_block_bench__DOT__DUT__DOT__writer__DOT__mem_lock_req_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9835764372562342758ull);
    vlSelf->__Vfunc_round2__0__Vfuncout = 0;
    vlSelf->__Vfunc_round2__0__x = 0;
    vlSelf->__Vfunc_round2__1__Vfuncout = 0;
    vlSelf->__Vfunc_round2__1__x = 0;
    vlSelf->__Vfunc_round2__2__Vfuncout = 0;
    vlSelf->__Vfunc_round2__2__x = 0;
    vlSelf->__Vfunc_round2__3__Vfuncout = 0;
    vlSelf->__Vfunc_round2__3__x = 0;
    vlSelf->__Vfunc_round2__4__Vfuncout = 0;
    vlSelf->__Vfunc_round2__4__x = 0;
    vlSelf->__Vfunc_round2__5__Vfuncout = 0;
    vlSelf->__Vfunc_round2__5__x = 0;
    vlSelf->__Vfunc_round2__6__Vfuncout = 0;
    vlSelf->__Vfunc_round2__6__x = 0;
    vlSelf->__Vfunc_round2__7__Vfuncout = 0;
    vlSelf->__Vfunc_round2__7__x = 0;
    vlSelf->__Vfunc_round2__8__Vfuncout = 0;
    vlSelf->__Vfunc_round2__8__x = 0;
    vlSelf->__Vfunc_round2__9__Vfuncout = 0;
    vlSelf->__Vfunc_round2__9__x = 0;
    vlSelf->__Vfunc_round2__10__Vfuncout = 0;
    vlSelf->__Vfunc_round2__10__x = 0;
    vlSelf->__Vfunc_round2__11__Vfuncout = 0;
    vlSelf->__Vfunc_round2__11__x = 0;
    vlSelf->__Vfunc_round2__12__Vfuncout = 0;
    vlSelf->__Vfunc_round2__12__x = 0;
    vlSelf->__Vfunc_round2__13__Vfuncout = 0;
    vlSelf->__Vfunc_round2__13__x = 0;
    vlSelf->__Vfunc_round2__14__Vfuncout = 0;
    vlSelf->__Vfunc_round2__14__x = 0;
    vlSelf->__Vfunc_round2__15__Vfuncout = 0;
    vlSelf->__Vfunc_round2__15__x = 0;
    vlSelf->__Vfunc_round2__16__Vfuncout = 0;
    vlSelf->__Vfunc_round2__16__x = 0;
    vlSelf->__Vfunc_round2__17__Vfuncout = 0;
    vlSelf->__Vfunc_round2__17__x = 0;
    vlSelf->__Vfunc_round2__18__Vfuncout = 0;
    vlSelf->__Vfunc_round2__18__x = 0;
    vlSelf->__Vfunc_round2__19__Vfuncout = 0;
    vlSelf->__Vfunc_round2__19__x = 0;
    vlSelf->__Vfunc_round2__20__Vfuncout = 0;
    vlSelf->__Vfunc_round2__20__x = 0;
    vlSelf->__Vfunc_round2__21__Vfuncout = 0;
    vlSelf->__Vfunc_round2__21__x = 0;
    vlSelf->__Vfunc_round2__22__Vfuncout = 0;
    vlSelf->__Vfunc_round2__22__x = 0;
    vlSelf->__Vfunc_round2__23__Vfuncout = 0;
    vlSelf->__Vfunc_round2__23__x = 0;
    vlSelf->__Vfunc_round2__24__Vfuncout = 0;
    vlSelf->__Vfunc_round2__24__x = 0;
    vlSelf->__Vfunc_round2__25__Vfuncout = 0;
    vlSelf->__Vfunc_round2__25__x = 0;
    vlSelf->__Vfunc_round2__26__Vfuncout = 0;
    vlSelf->__Vfunc_round2__26__x = 0;
    vlSelf->__Vfunc_round2__27__Vfuncout = 0;
    vlSelf->__Vfunc_round2__27__x = 0;
    vlSelf->__Vfunc_round2__28__Vfuncout = 0;
    vlSelf->__Vfunc_round2__28__x = 0;
    vlSelf->__Vfunc_round2__29__Vfuncout = 0;
    vlSelf->__Vfunc_round2__29__x = 0;
    vlSelf->__Vfunc_round2__30__Vfuncout = 0;
    vlSelf->__Vfunc_round2__30__x = 0;
    vlSelf->__Vfunc_round2__31__Vfuncout = 0;
    vlSelf->__Vfunc_round2__31__x = 0;
    vlSelf->__Vfunc_round2__32__Vfuncout = 0;
    vlSelf->__Vfunc_round2__32__x = 0;
    vlSelf->__Vfunc_round2__33__Vfuncout = 0;
    vlSelf->__Vfunc_round2__33__x = 0;
    vlSelf->__Vfunc_round2__34__Vfuncout = 0;
    vlSelf->__Vfunc_round2__34__x = 0;
    vlSelf->__Vfunc_round2__35__Vfuncout = 0;
    vlSelf->__Vfunc_round2__35__x = 0;
    vlSelf->__Vfunc_round2__36__Vfuncout = 0;
    vlSelf->__Vfunc_round2__36__x = 0;
    vlSelf->__Vfunc_round2__37__Vfuncout = 0;
    vlSelf->__Vfunc_round2__37__x = 0;
    vlSelf->__Vfunc_round2__38__Vfuncout = 0;
    vlSelf->__Vfunc_round2__38__x = 0;
    vlSelf->__Vfunc_round2__39__Vfuncout = 0;
    vlSelf->__Vfunc_round2__39__x = 0;
    vlSelf->__Vfunc_round2__40__Vfuncout = 0;
    vlSelf->__Vfunc_round2__40__x = 0;
    vlSelf->__Vfunc_round2__41__Vfuncout = 0;
    vlSelf->__Vfunc_round2__41__x = 0;
    vlSelf->__Vfunc_round2__42__Vfuncout = 0;
    vlSelf->__Vfunc_round2__42__x = 0;
    vlSelf->__Vfunc_round2__43__Vfuncout = 0;
    vlSelf->__Vfunc_round2__43__x = 0;
    vlSelf->__Vfunc_round2__44__Vfuncout = 0;
    vlSelf->__Vfunc_round2__44__x = 0;
    vlSelf->__Vfunc_round2__45__Vfuncout = 0;
    vlSelf->__Vfunc_round2__45__x = 0;
    vlSelf->__Vfunc_round2__46__Vfuncout = 0;
    vlSelf->__Vfunc_round2__46__x = 0;
    vlSelf->__Vfunc_round2__47__Vfuncout = 0;
    vlSelf->__Vfunc_round2__47__x = 0;
    vlSelf->__Vfunc_round2__48__Vfuncout = 0;
    vlSelf->__Vfunc_round2__48__x = 0;
    vlSelf->__Vfunc_round2__49__Vfuncout = 0;
    vlSelf->__Vfunc_round2__49__x = 0;
    vlSelf->__Vfunc_round2__50__Vfuncout = 0;
    vlSelf->__Vfunc_round2__50__x = 0;
    vlSelf->__Vfunc_round2__51__Vfuncout = 0;
    vlSelf->__Vfunc_round2__51__x = 0;
    vlSelf->__Vfunc_round2__52__Vfuncout = 0;
    vlSelf->__Vfunc_round2__52__x = 0;
    vlSelf->__Vfunc_round2__53__Vfuncout = 0;
    vlSelf->__Vfunc_round2__53__x = 0;
    vlSelf->__Vfunc_round2__54__Vfuncout = 0;
    vlSelf->__Vfunc_round2__54__x = 0;
    vlSelf->__Vfunc_round2__55__Vfuncout = 0;
    vlSelf->__Vfunc_round2__55__x = 0;
    vlSelf->__Vfunc_round2__56__Vfuncout = 0;
    vlSelf->__Vfunc_round2__56__x = 0;
    vlSelf->__Vfunc_round2__57__Vfuncout = 0;
    vlSelf->__Vfunc_round2__57__x = 0;
    vlSelf->__Vfunc_round2__58__Vfuncout = 0;
    vlSelf->__Vfunc_round2__58__x = 0;
    vlSelf->__Vfunc_round2__59__Vfuncout = 0;
    vlSelf->__Vfunc_round2__59__x = 0;
    vlSelf->__Vfunc_round2__60__Vfuncout = 0;
    vlSelf->__Vfunc_round2__60__x = 0;
    vlSelf->__Vfunc_round2__61__Vfuncout = 0;
    vlSelf->__Vfunc_round2__61__x = 0;
    vlSelf->__Vfunc_round2__62__Vfuncout = 0;
    vlSelf->__Vfunc_round2__62__x = 0;
    vlSelf->__Vfunc_round2__63__Vfuncout = 0;
    vlSelf->__Vfunc_round2__63__x = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__single_block_bench__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
