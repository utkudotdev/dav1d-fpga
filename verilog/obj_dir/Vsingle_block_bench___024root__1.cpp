// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsingle_block_bench.h for the primary calling header

#include "Vsingle_block_bench__pch.h"

void Vsingle_block_bench___024root___nba_sequent__TOP__1(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___nba_sequent__TOP__1\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ single_block_bench__DOT__DUT__DOT____VdfgRegularize_hf4b1a01a_0_2;
    single_block_bench__DOT__DUT__DOT____VdfgRegularize_hf4b1a01a_0_2 = 0;
    // Body
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
    single_block_bench__DOT__DUT__DOT____VdfgRegularize_hf4b1a01a_0_2 
        = ((0U == (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state)) 
           & ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__valid_reg) 
              & ((~ (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__start_write)) 
                 & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__ready_reg))));
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
    vlSelfRef.single_block_bench__DOT__DUT__DOT__start_read 
        = ((1U == (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__prev_state)) 
           | (IData)(single_block_bench__DOT__DUT__DOT____VdfgRegularize_hf4b1a01a_0_2));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__start_compute 
        = ((2U == (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__state)) 
           & (IData)(single_block_bench__DOT__DUT__DOT____VdfgRegularize_hf4b1a01a_0_2));
}

void Vsingle_block_bench___024root___nba_sequent__TOP__0(Vsingle_block_bench___024root* vlSelf);
void Vsingle_block_bench___024root___act_sequent__TOP__0(Vsingle_block_bench___024root* vlSelf);

void Vsingle_block_bench___024root___eval_nba(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___eval_nba\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsingle_block_bench___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vsingle_block_bench___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsingle_block_bench___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vsingle_block_bench___024root___timing_resume(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___timing_resume\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsingle_block_bench___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vsingle_block_bench___024root___eval_triggers_vec__act(Vsingle_block_bench___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsingle_block_bench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vsingle_block_bench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vsingle_block_bench___024root___eval_act(Vsingle_block_bench___024root* vlSelf);

bool Vsingle_block_bench___024root___eval_phase__act(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___eval_phase__act\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vsingle_block_bench___024root___eval_triggers_vec__act(vlSelf);
    Vsingle_block_bench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsingle_block_bench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vsingle_block_bench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vsingle_block_bench___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vsingle_block_bench___024root___timing_resume(vlSelf);
        Vsingle_block_bench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsingle_block_bench___024root___eval_phase__inact(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___eval_phase__inact\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("testbenches/single_block_bench.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vsingle_block_bench___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsingle_block_bench___024root___eval_phase__nba(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___eval_phase__nba\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsingle_block_bench___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vsingle_block_bench___024root___eval_nba(vlSelf);
        Vsingle_block_bench___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vsingle_block_bench___024root___eval(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___eval\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsingle_block_bench___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("testbenches/single_block_bench.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("testbenches/single_block_bench.sv", 5, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vsingle_block_bench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("testbenches/single_block_bench.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vsingle_block_bench___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vsingle_block_bench___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vsingle_block_bench___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vsingle_block_bench___024root___eval_debug_assertions(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___eval_debug_assertions\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
