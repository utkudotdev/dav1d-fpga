// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsingle_block_bench.h for the primary calling header

#include "Vsingle_block_bench__pch.h"

VL_ATTR_COLD void Vsingle_block_bench___024root___eval_initial__TOP(Vsingle_block_bench___024root* vlSelf);
VlCoroutine Vsingle_block_bench___024root___eval_initial__TOP__Vtiming__0(Vsingle_block_bench___024root* vlSelf);
VlCoroutine Vsingle_block_bench___024root___eval_initial__TOP__Vtiming__1(Vsingle_block_bench___024root* vlSelf);

void Vsingle_block_bench___024root___eval_initial(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___eval_initial\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsingle_block_bench___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vsingle_block_bench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsingle_block_bench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vsingle_block_bench___024root___eval_initial__TOP__Vtiming__0(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.single_block_bench__DOT__clk = 0U;
    vlSelfRef.single_block_bench__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "testbenches/single_block_bench.sv", 
                                         24);
    vlSelfRef.single_block_bench__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000001eULL, 
                                         nullptr, "testbenches/single_block_bench.sv", 
                                         25);
    vlSelfRef.single_block_bench__DOT__rst = 0U;
    co_return;
}

VlCoroutine Vsingle_block_bench___024root___eval_initial__TOP__Vtiming__1(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "testbenches/single_block_bench.sv", 
                                             18);
        vlSelfRef.single_block_bench__DOT__clk = (1U 
                                                  & (~ (IData)(vlSelfRef.single_block_bench__DOT__clk)));
    }
    co_return;
}

void Vsingle_block_bench___024root___eval_triggers_vec__act(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___eval_triggers_vec__act\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.single_block_bench__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__single_block_bench__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__single_block_bench__DOT__clk__0 
        = vlSelfRef.single_block_bench__DOT__clk;
}

bool Vsingle_block_bench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___trigger_anySet__act\n"); );
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

void Vsingle_block_bench___024root___act_sequent__TOP__0(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___act_sequent__TOP__0\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.single_block_bench__DOT__DUT__DOT____Vcellinp__inv_dct__rst 
        = ((IData)(vlSelfRef.single_block_bench__DOT__rst) 
           | (1U == (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__state)));
}

void Vsingle_block_bench___024root___eval_act(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___eval_act\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        Vsingle_block_bench___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*4:0*/, 64> Vsingle_block_bench__ConstPool__TABLE_h5df2e23d_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsingle_block_bench__ConstPool__TABLE_h0017e02e_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsingle_block_bench__ConstPool__TABLE_h7dbeb730_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vsingle_block_bench__ConstPool__TABLE_h3536d272_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsingle_block_bench__ConstPool__TABLE_hb48123e3_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vsingle_block_bench__ConstPool__TABLE_h8cf2f8d9_0;

void Vsingle_block_bench___024root___nba_sequent__TOP__0(Vsingle_block_bench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingle_block_bench___024root___nba_sequent__TOP__0\n"); );
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_h__64__Vfuncout;
    __Vfunc_h__64__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_h__64__t_a;
    __Vfunc_h__64__t_a = 0;
    SData/*15:0*/ __Vfunc_h__64__t_b;
    __Vfunc_h__64__t_b = 0;
    IData/*31:0*/ __Vfunc_h__64__temp;
    __Vfunc_h__64__temp = 0;
    IData/*31:0*/ __Vfunc_h__64__res;
    __Vfunc_h__64__res = 0;
    IData/*31:0*/ __Vfunc_b_1__65__Vfuncout;
    __Vfunc_b_1__65__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_b_1__65__t_a;
    __Vfunc_b_1__65__t_a = 0;
    SData/*15:0*/ __Vfunc_b_1__65__t_b;
    __Vfunc_b_1__65__t_b = 0;
    IData/*31:0*/ __Vfunc_b_1__65__temp;
    __Vfunc_b_1__65__temp = 0;
    IData/*31:0*/ __Vfunc_b_1__65__res;
    __Vfunc_b_1__65__res = 0;
    IData/*31:0*/ __Vfunc_b_0__66__Vfuncout;
    __Vfunc_b_0__66__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_b_0__66__t_a;
    __Vfunc_b_0__66__t_a = 0;
    SData/*15:0*/ __Vfunc_b_0__66__t_b;
    __Vfunc_b_0__66__t_b = 0;
    IData/*31:0*/ __Vfunc_b_0__66__res;
    __Vfunc_b_0__66__res = 0;
    IData/*31:0*/ __Vfunc_b_0__66__x;
    __Vfunc_b_0__66__x = 0;
    IData/*31:0*/ __Vfunc_b_0__66__y;
    __Vfunc_b_0__66__y = 0;
    SData/*15:0*/ __Vfunc_cos128__67__Vfuncout;
    __Vfunc_cos128__67__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_sin128__68__Vfuncout;
    __Vfunc_sin128__68__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__69__Vfuncout;
    __Vfunc_cos128__69__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_sin128__70__Vfuncout;
    __Vfunc_sin128__70__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__71__Vfuncout;
    __Vfunc_cos128__71__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__72__Vfuncout;
    __Vfunc_cos128__72__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_round2__73__Vfuncout;
    __Vfunc_round2__73__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__73__x;
    __Vfunc_round2__73__x = 0;
    SData/*15:0*/ __Vfunc_round2__74__Vfuncout;
    __Vfunc_round2__74__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__74__x;
    __Vfunc_round2__74__x = 0;
    IData/*31:0*/ __Vfunc_h__75__Vfuncout;
    __Vfunc_h__75__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_h__75__t_a;
    __Vfunc_h__75__t_a = 0;
    SData/*15:0*/ __Vfunc_h__75__t_b;
    __Vfunc_h__75__t_b = 0;
    IData/*31:0*/ __Vfunc_h__75__temp;
    __Vfunc_h__75__temp = 0;
    IData/*31:0*/ __Vfunc_h__75__res;
    __Vfunc_h__75__res = 0;
    IData/*31:0*/ __Vfunc_h__76__Vfuncout;
    __Vfunc_h__76__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_h__76__t_a;
    __Vfunc_h__76__t_a = 0;
    SData/*15:0*/ __Vfunc_h__76__t_b;
    __Vfunc_h__76__t_b = 0;
    IData/*31:0*/ __Vfunc_h__76__temp;
    __Vfunc_h__76__temp = 0;
    IData/*31:0*/ __Vfunc_h__76__res;
    __Vfunc_h__76__res = 0;
    IData/*31:0*/ __Vfunc_b_1__77__Vfuncout;
    __Vfunc_b_1__77__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_b_1__77__t_a;
    __Vfunc_b_1__77__t_a = 0;
    SData/*15:0*/ __Vfunc_b_1__77__t_b;
    __Vfunc_b_1__77__t_b = 0;
    IData/*31:0*/ __Vfunc_b_1__77__temp;
    __Vfunc_b_1__77__temp = 0;
    IData/*31:0*/ __Vfunc_b_1__77__res;
    __Vfunc_b_1__77__res = 0;
    IData/*31:0*/ __Vfunc_b_0__78__Vfuncout;
    __Vfunc_b_0__78__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_b_0__78__t_a;
    __Vfunc_b_0__78__t_a = 0;
    SData/*15:0*/ __Vfunc_b_0__78__t_b;
    __Vfunc_b_0__78__t_b = 0;
    IData/*31:0*/ __Vfunc_b_0__78__res;
    __Vfunc_b_0__78__res = 0;
    IData/*31:0*/ __Vfunc_b_0__78__x;
    __Vfunc_b_0__78__x = 0;
    IData/*31:0*/ __Vfunc_b_0__78__y;
    __Vfunc_b_0__78__y = 0;
    SData/*15:0*/ __Vfunc_cos128__79__Vfuncout;
    __Vfunc_cos128__79__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_sin128__80__Vfuncout;
    __Vfunc_sin128__80__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__81__Vfuncout;
    __Vfunc_cos128__81__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_sin128__82__Vfuncout;
    __Vfunc_sin128__82__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__83__Vfuncout;
    __Vfunc_cos128__83__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__84__Vfuncout;
    __Vfunc_cos128__84__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_round2__85__Vfuncout;
    __Vfunc_round2__85__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__85__x;
    __Vfunc_round2__85__x = 0;
    SData/*15:0*/ __Vfunc_round2__86__Vfuncout;
    __Vfunc_round2__86__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__86__x;
    __Vfunc_round2__86__x = 0;
    IData/*31:0*/ __Vfunc_h__87__Vfuncout;
    __Vfunc_h__87__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_h__87__t_a;
    __Vfunc_h__87__t_a = 0;
    SData/*15:0*/ __Vfunc_h__87__t_b;
    __Vfunc_h__87__t_b = 0;
    IData/*31:0*/ __Vfunc_h__87__temp;
    __Vfunc_h__87__temp = 0;
    IData/*31:0*/ __Vfunc_h__87__res;
    __Vfunc_h__87__res = 0;
    IData/*31:0*/ __Vfunc_b_1__88__Vfuncout;
    __Vfunc_b_1__88__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_b_1__88__t_a;
    __Vfunc_b_1__88__t_a = 0;
    SData/*15:0*/ __Vfunc_b_1__88__t_b;
    __Vfunc_b_1__88__t_b = 0;
    IData/*31:0*/ __Vfunc_b_1__88__temp;
    __Vfunc_b_1__88__temp = 0;
    IData/*31:0*/ __Vfunc_b_1__88__res;
    __Vfunc_b_1__88__res = 0;
    IData/*31:0*/ __Vfunc_b_0__89__Vfuncout;
    __Vfunc_b_0__89__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_b_0__89__t_a;
    __Vfunc_b_0__89__t_a = 0;
    SData/*15:0*/ __Vfunc_b_0__89__t_b;
    __Vfunc_b_0__89__t_b = 0;
    IData/*31:0*/ __Vfunc_b_0__89__res;
    __Vfunc_b_0__89__res = 0;
    IData/*31:0*/ __Vfunc_b_0__89__x;
    __Vfunc_b_0__89__x = 0;
    IData/*31:0*/ __Vfunc_b_0__89__y;
    __Vfunc_b_0__89__y = 0;
    SData/*15:0*/ __Vfunc_cos128__90__Vfuncout;
    __Vfunc_cos128__90__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_sin128__91__Vfuncout;
    __Vfunc_sin128__91__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__92__Vfuncout;
    __Vfunc_cos128__92__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_sin128__93__Vfuncout;
    __Vfunc_sin128__93__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__94__Vfuncout;
    __Vfunc_cos128__94__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__95__Vfuncout;
    __Vfunc_cos128__95__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_round2__96__Vfuncout;
    __Vfunc_round2__96__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__96__x;
    __Vfunc_round2__96__x = 0;
    SData/*15:0*/ __Vfunc_round2__97__Vfuncout;
    __Vfunc_round2__97__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__97__x;
    __Vfunc_round2__97__x = 0;
    IData/*31:0*/ __Vfunc_h__98__Vfuncout;
    __Vfunc_h__98__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_h__98__t_a;
    __Vfunc_h__98__t_a = 0;
    SData/*15:0*/ __Vfunc_h__98__t_b;
    __Vfunc_h__98__t_b = 0;
    IData/*31:0*/ __Vfunc_h__98__temp;
    __Vfunc_h__98__temp = 0;
    IData/*31:0*/ __Vfunc_h__98__res;
    __Vfunc_h__98__res = 0;
    IData/*31:0*/ __Vfunc_b_1__99__Vfuncout;
    __Vfunc_b_1__99__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_b_1__99__t_a;
    __Vfunc_b_1__99__t_a = 0;
    SData/*15:0*/ __Vfunc_b_1__99__t_b;
    __Vfunc_b_1__99__t_b = 0;
    IData/*31:0*/ __Vfunc_b_1__99__temp;
    __Vfunc_b_1__99__temp = 0;
    IData/*31:0*/ __Vfunc_b_1__99__res;
    __Vfunc_b_1__99__res = 0;
    IData/*31:0*/ __Vfunc_b_0__100__Vfuncout;
    __Vfunc_b_0__100__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_b_0__100__t_a;
    __Vfunc_b_0__100__t_a = 0;
    SData/*15:0*/ __Vfunc_b_0__100__t_b;
    __Vfunc_b_0__100__t_b = 0;
    IData/*31:0*/ __Vfunc_b_0__100__res;
    __Vfunc_b_0__100__res = 0;
    IData/*31:0*/ __Vfunc_b_0__100__x;
    __Vfunc_b_0__100__x = 0;
    IData/*31:0*/ __Vfunc_b_0__100__y;
    __Vfunc_b_0__100__y = 0;
    SData/*15:0*/ __Vfunc_cos128__101__Vfuncout;
    __Vfunc_cos128__101__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_sin128__102__Vfuncout;
    __Vfunc_sin128__102__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__103__Vfuncout;
    __Vfunc_cos128__103__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_sin128__104__Vfuncout;
    __Vfunc_sin128__104__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__105__Vfuncout;
    __Vfunc_cos128__105__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__106__Vfuncout;
    __Vfunc_cos128__106__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_round2__107__Vfuncout;
    __Vfunc_round2__107__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__107__x;
    __Vfunc_round2__107__x = 0;
    SData/*15:0*/ __Vfunc_round2__108__Vfuncout;
    __Vfunc_round2__108__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__108__x;
    __Vfunc_round2__108__x = 0;
    IData/*31:0*/ __Vfunc_h__109__Vfuncout;
    __Vfunc_h__109__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_h__109__t_a;
    __Vfunc_h__109__t_a = 0;
    SData/*15:0*/ __Vfunc_h__109__t_b;
    __Vfunc_h__109__t_b = 0;
    IData/*31:0*/ __Vfunc_h__109__temp;
    __Vfunc_h__109__temp = 0;
    IData/*31:0*/ __Vfunc_h__109__res;
    __Vfunc_h__109__res = 0;
    IData/*31:0*/ __Vfunc_h__110__Vfuncout;
    __Vfunc_h__110__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_h__110__t_a;
    __Vfunc_h__110__t_a = 0;
    SData/*15:0*/ __Vfunc_h__110__t_b;
    __Vfunc_h__110__t_b = 0;
    IData/*31:0*/ __Vfunc_h__110__temp;
    __Vfunc_h__110__temp = 0;
    IData/*31:0*/ __Vfunc_h__110__res;
    __Vfunc_h__110__res = 0;
    IData/*31:0*/ __Vfunc_b_1__111__Vfuncout;
    __Vfunc_b_1__111__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_b_1__111__t_a;
    __Vfunc_b_1__111__t_a = 0;
    SData/*15:0*/ __Vfunc_b_1__111__t_b;
    __Vfunc_b_1__111__t_b = 0;
    IData/*31:0*/ __Vfunc_b_1__111__temp;
    __Vfunc_b_1__111__temp = 0;
    IData/*31:0*/ __Vfunc_b_1__111__res;
    __Vfunc_b_1__111__res = 0;
    IData/*31:0*/ __Vfunc_b_0__112__Vfuncout;
    __Vfunc_b_0__112__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_b_0__112__t_a;
    __Vfunc_b_0__112__t_a = 0;
    SData/*15:0*/ __Vfunc_b_0__112__t_b;
    __Vfunc_b_0__112__t_b = 0;
    IData/*31:0*/ __Vfunc_b_0__112__res;
    __Vfunc_b_0__112__res = 0;
    IData/*31:0*/ __Vfunc_b_0__112__x;
    __Vfunc_b_0__112__x = 0;
    IData/*31:0*/ __Vfunc_b_0__112__y;
    __Vfunc_b_0__112__y = 0;
    SData/*15:0*/ __Vfunc_cos128__113__Vfuncout;
    __Vfunc_cos128__113__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_sin128__114__Vfuncout;
    __Vfunc_sin128__114__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__115__Vfuncout;
    __Vfunc_cos128__115__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_sin128__116__Vfuncout;
    __Vfunc_sin128__116__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__117__Vfuncout;
    __Vfunc_cos128__117__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__118__Vfuncout;
    __Vfunc_cos128__118__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_round2__119__Vfuncout;
    __Vfunc_round2__119__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__119__x;
    __Vfunc_round2__119__x = 0;
    SData/*15:0*/ __Vfunc_round2__120__Vfuncout;
    __Vfunc_round2__120__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__120__x;
    __Vfunc_round2__120__x = 0;
    IData/*31:0*/ __Vfunc_h__121__Vfuncout;
    __Vfunc_h__121__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_h__121__t_a;
    __Vfunc_h__121__t_a = 0;
    SData/*15:0*/ __Vfunc_h__121__t_b;
    __Vfunc_h__121__t_b = 0;
    IData/*31:0*/ __Vfunc_h__121__temp;
    __Vfunc_h__121__temp = 0;
    IData/*31:0*/ __Vfunc_h__121__res;
    __Vfunc_h__121__res = 0;
    IData/*31:0*/ __Vfunc_b_1__122__Vfuncout;
    __Vfunc_b_1__122__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_b_1__122__t_a;
    __Vfunc_b_1__122__t_a = 0;
    SData/*15:0*/ __Vfunc_b_1__122__t_b;
    __Vfunc_b_1__122__t_b = 0;
    IData/*31:0*/ __Vfunc_b_1__122__temp;
    __Vfunc_b_1__122__temp = 0;
    IData/*31:0*/ __Vfunc_b_1__122__res;
    __Vfunc_b_1__122__res = 0;
    IData/*31:0*/ __Vfunc_b_0__123__Vfuncout;
    __Vfunc_b_0__123__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_b_0__123__t_a;
    __Vfunc_b_0__123__t_a = 0;
    SData/*15:0*/ __Vfunc_b_0__123__t_b;
    __Vfunc_b_0__123__t_b = 0;
    IData/*31:0*/ __Vfunc_b_0__123__res;
    __Vfunc_b_0__123__res = 0;
    IData/*31:0*/ __Vfunc_b_0__123__x;
    __Vfunc_b_0__123__x = 0;
    IData/*31:0*/ __Vfunc_b_0__123__y;
    __Vfunc_b_0__123__y = 0;
    SData/*15:0*/ __Vfunc_cos128__124__Vfuncout;
    __Vfunc_cos128__124__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_sin128__125__Vfuncout;
    __Vfunc_sin128__125__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__126__Vfuncout;
    __Vfunc_cos128__126__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_sin128__127__Vfuncout;
    __Vfunc_sin128__127__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__128__Vfuncout;
    __Vfunc_cos128__128__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__129__Vfuncout;
    __Vfunc_cos128__129__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_round2__130__Vfuncout;
    __Vfunc_round2__130__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__130__x;
    __Vfunc_round2__130__x = 0;
    SData/*15:0*/ __Vfunc_round2__131__Vfuncout;
    __Vfunc_round2__131__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__131__x;
    __Vfunc_round2__131__x = 0;
    IData/*31:0*/ __Vfunc_b_0__132__Vfuncout;
    __Vfunc_b_0__132__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_b_0__132__t_a;
    __Vfunc_b_0__132__t_a = 0;
    SData/*15:0*/ __Vfunc_b_0__132__t_b;
    __Vfunc_b_0__132__t_b = 0;
    IData/*31:0*/ __Vfunc_b_0__132__res;
    __Vfunc_b_0__132__res = 0;
    IData/*31:0*/ __Vfunc_b_0__132__x;
    __Vfunc_b_0__132__x = 0;
    IData/*31:0*/ __Vfunc_b_0__132__y;
    __Vfunc_b_0__132__y = 0;
    SData/*15:0*/ __Vfunc_cos128__133__Vfuncout;
    __Vfunc_cos128__133__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_sin128__134__Vfuncout;
    __Vfunc_sin128__134__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__135__Vfuncout;
    __Vfunc_cos128__135__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_sin128__136__Vfuncout;
    __Vfunc_sin128__136__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__137__Vfuncout;
    __Vfunc_cos128__137__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__138__Vfuncout;
    __Vfunc_cos128__138__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_round2__139__Vfuncout;
    __Vfunc_round2__139__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__139__x;
    __Vfunc_round2__139__x = 0;
    SData/*15:0*/ __Vfunc_round2__140__Vfuncout;
    __Vfunc_round2__140__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__140__x;
    __Vfunc_round2__140__x = 0;
    IData/*31:0*/ __Vfunc_b_1__141__Vfuncout;
    __Vfunc_b_1__141__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_b_1__141__t_a;
    __Vfunc_b_1__141__t_a = 0;
    SData/*15:0*/ __Vfunc_b_1__141__t_b;
    __Vfunc_b_1__141__t_b = 0;
    IData/*31:0*/ __Vfunc_b_1__141__temp;
    __Vfunc_b_1__141__temp = 0;
    IData/*31:0*/ __Vfunc_b_1__141__res;
    __Vfunc_b_1__141__res = 0;
    IData/*31:0*/ __Vfunc_b_0__142__Vfuncout;
    __Vfunc_b_0__142__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_b_0__142__t_a;
    __Vfunc_b_0__142__t_a = 0;
    SData/*15:0*/ __Vfunc_b_0__142__t_b;
    __Vfunc_b_0__142__t_b = 0;
    IData/*31:0*/ __Vfunc_b_0__142__res;
    __Vfunc_b_0__142__res = 0;
    IData/*31:0*/ __Vfunc_b_0__142__x;
    __Vfunc_b_0__142__x = 0;
    IData/*31:0*/ __Vfunc_b_0__142__y;
    __Vfunc_b_0__142__y = 0;
    SData/*15:0*/ __Vfunc_cos128__143__Vfuncout;
    __Vfunc_cos128__143__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_sin128__144__Vfuncout;
    __Vfunc_sin128__144__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__145__Vfuncout;
    __Vfunc_cos128__145__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_sin128__146__Vfuncout;
    __Vfunc_sin128__146__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__147__Vfuncout;
    __Vfunc_cos128__147__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__148__Vfuncout;
    __Vfunc_cos128__148__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_round2__149__Vfuncout;
    __Vfunc_round2__149__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__149__x;
    __Vfunc_round2__149__x = 0;
    SData/*15:0*/ __Vfunc_round2__150__Vfuncout;
    __Vfunc_round2__150__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__150__x;
    __Vfunc_round2__150__x = 0;
    IData/*31:0*/ __Vfunc_h__151__Vfuncout;
    __Vfunc_h__151__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_h__151__t_a;
    __Vfunc_h__151__t_a = 0;
    SData/*15:0*/ __Vfunc_h__151__t_b;
    __Vfunc_h__151__t_b = 0;
    IData/*31:0*/ __Vfunc_h__151__temp;
    __Vfunc_h__151__temp = 0;
    IData/*31:0*/ __Vfunc_h__151__res;
    __Vfunc_h__151__res = 0;
    IData/*31:0*/ __Vfunc_b_0__152__Vfuncout;
    __Vfunc_b_0__152__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_b_0__152__t_a;
    __Vfunc_b_0__152__t_a = 0;
    SData/*15:0*/ __Vfunc_b_0__152__t_b;
    __Vfunc_b_0__152__t_b = 0;
    IData/*31:0*/ __Vfunc_b_0__152__res;
    __Vfunc_b_0__152__res = 0;
    IData/*31:0*/ __Vfunc_b_0__152__x;
    __Vfunc_b_0__152__x = 0;
    IData/*31:0*/ __Vfunc_b_0__152__y;
    __Vfunc_b_0__152__y = 0;
    SData/*15:0*/ __Vfunc_cos128__153__Vfuncout;
    __Vfunc_cos128__153__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_sin128__154__Vfuncout;
    __Vfunc_sin128__154__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__155__Vfuncout;
    __Vfunc_cos128__155__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_sin128__156__Vfuncout;
    __Vfunc_sin128__156__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__157__Vfuncout;
    __Vfunc_cos128__157__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_cos128__158__Vfuncout;
    __Vfunc_cos128__158__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_round2__159__Vfuncout;
    __Vfunc_round2__159__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__159__x;
    __Vfunc_round2__159__x = 0;
    SData/*15:0*/ __Vfunc_round2__160__Vfuncout;
    __Vfunc_round2__160__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__160__x;
    __Vfunc_round2__160__x = 0;
    IData/*31:0*/ __Vfunc_h__161__Vfuncout;
    __Vfunc_h__161__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_h__161__t_a;
    __Vfunc_h__161__t_a = 0;
    SData/*15:0*/ __Vfunc_h__161__t_b;
    __Vfunc_h__161__t_b = 0;
    IData/*31:0*/ __Vfunc_h__161__temp;
    __Vfunc_h__161__temp = 0;
    IData/*31:0*/ __Vfunc_h__161__res;
    __Vfunc_h__161__res = 0;
    IData/*31:0*/ __Vfunc_b_0__162__Vfuncout;
    __Vfunc_b_0__162__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_b_0__162__t_a;
    __Vfunc_b_0__162__t_a = 0;
    SData/*15:0*/ __Vfunc_b_0__162__t_b;
    __Vfunc_b_0__162__t_b = 0;
    CData/*7:0*/ __Vfunc_b_0__162__angle;
    __Vfunc_b_0__162__angle = 0;
    IData/*31:0*/ __Vfunc_b_0__162__res;
    __Vfunc_b_0__162__res = 0;
    IData/*31:0*/ __Vfunc_b_0__162__x;
    __Vfunc_b_0__162__x = 0;
    IData/*31:0*/ __Vfunc_b_0__162__y;
    __Vfunc_b_0__162__y = 0;
    SData/*15:0*/ __Vfunc_brev__163__Vfuncout;
    __Vfunc_brev__163__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_brev__163__numBits;
    __Vfunc_brev__163__numBits = 0;
    SData/*15:0*/ __Vfunc_brev__163__in_val;
    __Vfunc_brev__163__in_val = 0;
    IData/*31:0*/ __Vfunc_brev__163__unnamedblk1__DOT__i;
    __Vfunc_brev__163__unnamedblk1__DOT__i = 0;
    SData/*15:0*/ __Vfunc_brev__163__out_val;
    __Vfunc_brev__163__out_val = 0;
    SData/*15:0*/ __Vfunc_cos128__164__Vfuncout;
    __Vfunc_cos128__164__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_cos128__164__angle;
    __Vfunc_cos128__164__angle = 0;
    SData/*15:0*/ __Vfunc_sin128__165__Vfuncout;
    __Vfunc_sin128__165__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sin128__165__angle;
    __Vfunc_sin128__165__angle = 0;
    SData/*15:0*/ __Vfunc_cos128__166__Vfuncout;
    __Vfunc_cos128__166__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_cos128__166__angle;
    __Vfunc_cos128__166__angle = 0;
    SData/*15:0*/ __Vfunc_sin128__167__Vfuncout;
    __Vfunc_sin128__167__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sin128__167__angle;
    __Vfunc_sin128__167__angle = 0;
    SData/*15:0*/ __Vfunc_cos128__168__Vfuncout;
    __Vfunc_cos128__168__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_cos128__168__angle;
    __Vfunc_cos128__168__angle = 0;
    SData/*15:0*/ __Vfunc_cos128__169__Vfuncout;
    __Vfunc_cos128__169__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_cos128__169__angle;
    __Vfunc_cos128__169__angle = 0;
    SData/*15:0*/ __Vfunc_round2__170__Vfuncout;
    __Vfunc_round2__170__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__170__x;
    __Vfunc_round2__170__x = 0;
    SData/*15:0*/ __Vfunc_round2__171__Vfuncout;
    __Vfunc_round2__171__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__171__x;
    __Vfunc_round2__171__x = 0;
    IData/*31:0*/ __Vfunc_b_0__172__Vfuncout;
    __Vfunc_b_0__172__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_b_0__172__t_a;
    __Vfunc_b_0__172__t_a = 0;
    SData/*15:0*/ __Vfunc_b_0__172__t_b;
    __Vfunc_b_0__172__t_b = 0;
    CData/*7:0*/ __Vfunc_b_0__172__angle;
    __Vfunc_b_0__172__angle = 0;
    IData/*31:0*/ __Vfunc_b_0__172__res;
    __Vfunc_b_0__172__res = 0;
    IData/*31:0*/ __Vfunc_b_0__172__x;
    __Vfunc_b_0__172__x = 0;
    IData/*31:0*/ __Vfunc_b_0__172__y;
    __Vfunc_b_0__172__y = 0;
    SData/*15:0*/ __Vfunc_brev__173__Vfuncout;
    __Vfunc_brev__173__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_brev__173__numBits;
    __Vfunc_brev__173__numBits = 0;
    SData/*15:0*/ __Vfunc_brev__173__in_val;
    __Vfunc_brev__173__in_val = 0;
    IData/*31:0*/ __Vfunc_brev__173__unnamedblk1__DOT__i;
    __Vfunc_brev__173__unnamedblk1__DOT__i = 0;
    SData/*15:0*/ __Vfunc_brev__173__out_val;
    __Vfunc_brev__173__out_val = 0;
    SData/*15:0*/ __Vfunc_cos128__174__Vfuncout;
    __Vfunc_cos128__174__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_cos128__174__angle;
    __Vfunc_cos128__174__angle = 0;
    SData/*15:0*/ __Vfunc_sin128__175__Vfuncout;
    __Vfunc_sin128__175__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sin128__175__angle;
    __Vfunc_sin128__175__angle = 0;
    SData/*15:0*/ __Vfunc_cos128__176__Vfuncout;
    __Vfunc_cos128__176__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_cos128__176__angle;
    __Vfunc_cos128__176__angle = 0;
    SData/*15:0*/ __Vfunc_sin128__177__Vfuncout;
    __Vfunc_sin128__177__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sin128__177__angle;
    __Vfunc_sin128__177__angle = 0;
    SData/*15:0*/ __Vfunc_cos128__178__Vfuncout;
    __Vfunc_cos128__178__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_cos128__178__angle;
    __Vfunc_cos128__178__angle = 0;
    SData/*15:0*/ __Vfunc_cos128__179__Vfuncout;
    __Vfunc_cos128__179__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_cos128__179__angle;
    __Vfunc_cos128__179__angle = 0;
    SData/*15:0*/ __Vfunc_round2__180__Vfuncout;
    __Vfunc_round2__180__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__180__x;
    __Vfunc_round2__180__x = 0;
    SData/*15:0*/ __Vfunc_round2__181__Vfuncout;
    __Vfunc_round2__181__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round2__181__x;
    __Vfunc_round2__181__x = 0;
    SData/*15:0*/ __Vfunc_brev__182__Vfuncout;
    __Vfunc_brev__182__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_brev__182__numBits;
    __Vfunc_brev__182__numBits = 0;
    SData/*15:0*/ __Vfunc_brev__182__in_val;
    __Vfunc_brev__182__in_val = 0;
    IData/*31:0*/ __Vfunc_brev__182__unnamedblk1__DOT__i;
    __Vfunc_brev__182__unnamedblk1__DOT__i = 0;
    SData/*15:0*/ __Vfunc_brev__182__out_val;
    __Vfunc_brev__182__out_val = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*9:0*/ __Vdly__single_block_bench__DOT__start_addr;
    __Vdly__single_block_bench__DOT__start_addr = 0;
    CData/*0:0*/ __Vdly__single_block_bench__DOT__DUT__DOT__done_rows;
    __Vdly__single_block_bench__DOT__DUT__DOT__done_rows = 0;
    CData/*1:0*/ __Vdly__single_block_bench__DOT__DUT__DOT__state;
    __Vdly__single_block_bench__DOT__DUT__DOT__state = 0;
    CData/*4:0*/ __Vdly__single_block_bench__DOT__DUT__DOT__arr_read_counter;
    __Vdly__single_block_bench__DOT__DUT__DOT__arr_read_counter = 0;
    CData/*4:0*/ __Vdly__single_block_bench__DOT__DUT__DOT__arr_write_counter;
    __Vdly__single_block_bench__DOT__DUT__DOT__arr_write_counter = 0;
    CData/*0:0*/ __Vdly__single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__read_lock_reg;
    __Vdly__single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__read_lock_reg = 0;
    CData/*0:0*/ __Vdly__single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__write_lock_reg;
    __Vdly__single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__write_lock_reg = 0;
    QData/*32:0*/ __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read;
    __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read = 0;
    SData/*9:0*/ __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__mem_read_addr_reg;
    __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__mem_read_addr_reg = 0;
    CData/*0:0*/ __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__try_get_lock;
    __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__try_get_lock = 0;
    CData/*4:0*/ __Vdly__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state;
    __Vdly__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state = 0;
    IData/*31:0*/ __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__state_mem_write;
    __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__state_mem_write = 0;
    SData/*9:0*/ __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_addr_reg;
    __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_addr_reg = 0;
    CData/*4:0*/ __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_counter;
    __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_counter = 0;
    CData/*0:0*/ __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__try_get_lock;
    __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__try_get_lock = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__TESTMEM_16_1024__DOT__mem__v0;
    __VdlyVal__single_block_bench__DOT__TESTMEM_16_1024__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__single_block_bench__DOT__TESTMEM_16_1024__DOT__mem__v0;
    __VdlyDim0__single_block_bench__DOT__TESTMEM_16_1024__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__TESTMEM_16_1024__DOT__mem__v0;
    __VdlySet__single_block_bench__DOT__TESTMEM_16_1024__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v0;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v0 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v1;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v1 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v2;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v2 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v3;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v3 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v4;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v4 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v5;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v5 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v6;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v6 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v7;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v7 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v8;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v8 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v9;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v9 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v10;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v10 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v11;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v11 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v12;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v12 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v13;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v13 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v14;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v14 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v15;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v15 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v16;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v16 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v17;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v17 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v18;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v18 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v19;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v19 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v20;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v20 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v21;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v21 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v22;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v22 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v23;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v23 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v24;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v24 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v25;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v25 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v26;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v26 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v27;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v27 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v28;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v28 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v29;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v29 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v30;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v30 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v31;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v31 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v0;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v0 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v0;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v0 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v1;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v1 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v2;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v2 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v2;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v2 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v3;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v3 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v4;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v4 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v4;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v4 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v5;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v5 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v6;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v6 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v6;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v6 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v7;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v7 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v8;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v8 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v8;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v8 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v9;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v9 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v10;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v10 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v10;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v10 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v11;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v11 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v12;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v12 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v12;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v12 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v13;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v13 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v14;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v14 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v14;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v14 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v15;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v15 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v16;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v16 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v16;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v16 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v17;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v17 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v18;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v18 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v18;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v18 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v19;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v19 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v20;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v20 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v20;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v20 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v21;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v21 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v22;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v22 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v22;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v22 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v23;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v23 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v24;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v24 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v24;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v24 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v25;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v25 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v26;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v26 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v26;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v26 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v27;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v27 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v28;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v28 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v28;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v28 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v29;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v29 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v30;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v30 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v30;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v30 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v31;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v31 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v32;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v32 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v32;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v32 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v33;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v33 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v34;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v34 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v34;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v34 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v35;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v35 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v36;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v36 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v36;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v36 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v37;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v37 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v38;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v38 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v38;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v38 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v39;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v39 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v40;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v40 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v40;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v40 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v41;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v41 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v42;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v42 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v42;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v42 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v43;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v43 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v44;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v44 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v44;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v44 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v45;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v45 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v46;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v46 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v46;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v46 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v47;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v47 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v48;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v48 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v48;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v48 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v49;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v49 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v50;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v50 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v50;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v50 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v51;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v51 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v52;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v52 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v52;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v52 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v53;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v53 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v54;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v54 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v54;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v54 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v55;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v55 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v56;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v56 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v56;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v56 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v57;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v57 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v58;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v58 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v58;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v58 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v59;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v59 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v60;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v60 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v60;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v60 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v61;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v61 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v62;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v62 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v62;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v62 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v63;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v63 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v64;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v64 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v64;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v64 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v65;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v65 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v66;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v66 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v66;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v66 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v67;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v67 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v68;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v68 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v68;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v68 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v69;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v69 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v70;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v70 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v70;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v70 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v71;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v71 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v72;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v72 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v72;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v72 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v73;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v73 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v74;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v74 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v74;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v74 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v75;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v75 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v76;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v76 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v76;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v76 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v77;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v77 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v78;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v78 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v78;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v78 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v79;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v79 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v80;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v80 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v80;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v80 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v81;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v81 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v82;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v82 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v82;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v82 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v83;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v83 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v84;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v84 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v84;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v84 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v85;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v85 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v86;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v86 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v86;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v86 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v87;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v87 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v88;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v88 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v88;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v88 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v89;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v89 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v90;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v90 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v90;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v90 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v91;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v91 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v92;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v92 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v92;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v92 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v93;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v93 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v94;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v94 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v94;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v94 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v95;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v95 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v96;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v96 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v96;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v96 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v97;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v97 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v98;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v98 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v98;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v98 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v99;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v99 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v100;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v100 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v100;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v100 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v101;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v101 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v102;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v102 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v102;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v102 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v103;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v103 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v104;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v104 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v104;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v104 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v105;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v105 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v106;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v106 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v106;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v106 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v107;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v107 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v108;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v108 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v108;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v108 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v109;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v109 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v110;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v110 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v110;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v110 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v111;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v111 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v112;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v112 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v112;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v112 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v113;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v113 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v114;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v114 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v114;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v114 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v115;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v115 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v116;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v116 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v116;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v116 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v117;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v117 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v118;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v118 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v118;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v118 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v119;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v119 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v120;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v120 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v120;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v120 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v121;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v121 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v122;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v122 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v122;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v122 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v123;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v123 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v124;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v124 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v124;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v124 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v125;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v125 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v126;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v126 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v126;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v126 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v127;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v127 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v128;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v128 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v128;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v128 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v129;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v129 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v130;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v130 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v130;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v130 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v131;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v131 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v132;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v132 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v132;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v132 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v133;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v133 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v134;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v134 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v134;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v134 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v135;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v135 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v136;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v136 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v136;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v136 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v137;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v137 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v138;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v138 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v138;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v138 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v139;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v139 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v140;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v140 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v140;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v140 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v141;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v141 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v142;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v142 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v142;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v142 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v143;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v143 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v144;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v144 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v144;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v144 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v145;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v145 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v146;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v146 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v146;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v146 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v147;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v147 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v148;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v148 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v148;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v148 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v149;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v149 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v150;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v150 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v150;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v150 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v151;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v151 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v152;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v152 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v152;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v152 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v153;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v153 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v154;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v154 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v154;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v154 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v155;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v155 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v156;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v156 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v156;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v156 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v157;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v157 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v158;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v158 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v158;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v158 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v159;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v159 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v160;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v160 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v160;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v160 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v161;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v161 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v162;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v162 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v162;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v162 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v163;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v163 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v164;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v164 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v164;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v164 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v165;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v165 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v166;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v166 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v166;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v166 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v167;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v167 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v168;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v168 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v168;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v168 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v169;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v169 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v170;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v170 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v170;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v170 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v171;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v171 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v172;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v172 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v172;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v172 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v173;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v173 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v174;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v174 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v174;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v174 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v175;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v175 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v176;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v176 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v176;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v176 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v177;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v177 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v178;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v178 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v178;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v178 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v179;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v179 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v180;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v180 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v180;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v180 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v181;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v181 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v182;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v182 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v182;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v182 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v183;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v183 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v184;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v184 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v184;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v184 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v185;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v185 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v186;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v186 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v186;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v186 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v187;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v187 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v188;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v188 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v188;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v188 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v189;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v189 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v190;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v190 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v190;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v190 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v191;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v191 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v192;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v192 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v192;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v192 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v193;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v193 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v194;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v194 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v194;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v194 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v195;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v195 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v196;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v196 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v197;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v197 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v198;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v198 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v199;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v199 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v200;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v200 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v201;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v201 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v202;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v202 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v203;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v203 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v204;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v204 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v205;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v205 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v206;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v206 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v207;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v207 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v208;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v208 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v209;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v209 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v210;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v210 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v211;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v211 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v212;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v212 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v213;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v213 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v214;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v214 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v215;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v215 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v216;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v216 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v217;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v217 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v218;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v218 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v219;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v219 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v220;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v220 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v221;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v221 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v222;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v222 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v223;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v223 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v224;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v224 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v225;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v225 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v0;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v0 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v0;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v0 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v1;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v1 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v2;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v2 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v3;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v3 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v4;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v4 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v5;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v5 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v6;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v6 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v7;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v7 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v8;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v8 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v9;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v9 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v10;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v10 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v11;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v11 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v12;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v12 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v13;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v13 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v14;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v14 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v15;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v15 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v16;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v16 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v17;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v17 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v18;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v18 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v19;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v19 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v20;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v20 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v21;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v21 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v22;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v22 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v23;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v23 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v24;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v24 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v25;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v25 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v26;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v26 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v27;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v27 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v28;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v28 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v29;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v29 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v30;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v30 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v31;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v31 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v0;
    __VdlySet__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v0 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v32;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v32 = 0;
    CData/*0:0*/ __VdlySet__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v32;
    __VdlySet__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v32 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v33;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v33 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v34;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v34 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v35;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v35 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v36;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v36 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v37;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v37 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v38;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v38 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v39;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v39 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v40;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v40 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v41;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v41 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v42;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v42 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v43;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v43 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v44;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v44 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v45;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v45 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v46;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v46 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v47;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v47 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v48;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v48 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v49;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v49 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v50;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v50 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v51;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v51 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v52;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v52 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v53;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v53 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v54;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v54 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v55;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v55 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v56;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v56 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v57;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v57 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v58;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v58 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v59;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v59 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v60;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v60 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v61;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v61 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v62;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v62 = 0;
    SData/*15:0*/ __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v63;
    __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v63 = 0;
    // Body
    __Vdly__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state;
    __Vdly__single_block_bench__DOT__DUT__DOT__arr_write_counter 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_write_counter;
    __VdlySet__single_block_bench__DOT__TESTMEM_16_1024__DOT__mem__v0 = 0U;
    __Vdly__single_block_bench__DOT__DUT__DOT__arr_read_counter 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_read_counter;
    __Vdly__single_block_bench__DOT__start_addr = vlSelfRef.single_block_bench__DOT__start_addr;
    __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read;
    __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__mem_read_addr_reg 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__mem_read_addr_reg;
    __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__try_get_lock 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__try_get_lock;
    __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__state_mem_write 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__state_mem_write;
    __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_addr_reg 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_addr_reg;
    __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_counter 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_counter;
    __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__try_get_lock 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__try_get_lock;
    __VdlySet__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v0 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v32 = 0U;
    __Vdly__single_block_bench__DOT__DUT__DOT__state 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__state;
    __Vdly__single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__read_lock_reg 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__read_lock_reg;
    __Vdly__single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__write_lock_reg 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__write_lock_reg;
    __Vdly__single_block_bench__DOT__DUT__DOT__done_rows 
        = vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v0 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v0 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v2 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v4 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v6 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v8 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v10 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v12 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v14 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v16 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v18 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v20 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v22 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v24 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v26 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v28 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v30 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v32 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v34 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v36 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v38 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v40 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v42 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v44 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v46 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v48 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v50 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v52 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v54 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v56 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v58 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v60 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v62 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v64 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v66 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v68 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v70 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v72 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v74 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v76 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v78 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v80 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v82 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v84 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v86 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v88 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v90 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v92 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v94 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v96 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v98 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v100 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v102 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v104 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v106 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v108 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v110 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v112 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v114 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v116 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v118 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v120 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v122 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v124 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v126 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v128 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v130 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v132 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v134 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v136 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v138 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v140 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v142 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v144 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v146 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v148 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v150 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v152 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v154 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v156 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v158 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v160 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v162 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v164 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v166 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v168 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v170 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v172 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v174 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v176 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v178 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v180 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v182 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v184 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v186 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v188 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v190 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v192 = 0U;
    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v194 = 0U;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__j = 0x00000020U;
    __Vtableidx3 = (((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__start_compute) 
                     << 5U) | (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state));
    __Vdly__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state 
        = Vsingle_block_bench__ConstPool__TABLE_h5df2e23d_0
        [__Vtableidx3];
    if ((1U & (~ (IData)(vlSelfRef.single_block_bench__DOT__rst)))) {
        if ((0U != vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__state_mem_write)) {
            __VdlyVal__single_block_bench__DOT__TESTMEM_16_1024__DOT__mem__v0 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal
                [vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_counter];
            __VdlyDim0__single_block_bench__DOT__TESTMEM_16_1024__DOT__mem__v0 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_addr_reg;
            __VdlySet__single_block_bench__DOT__TESTMEM_16_1024__DOT__mem__v0 = 1U;
        }
    }
    if (vlSelfRef.single_block_bench__DOT__rst) {
        vlSelfRef.single_block_bench__DOT__count = 0U;
        __Vdly__single_block_bench__DOT__DUT__DOT__arr_write_counter = 0U;
        __Vdly__single_block_bench__DOT__DUT__DOT__arr_read_counter = 0U;
        __Vdly__single_block_bench__DOT__start_addr = 0U;
    } else {
        vlSelfRef.single_block_bench__DOT__count = 
            ((IData)(1U) + vlSelfRef.single_block_bench__DOT__count);
        if (((0U == (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__state)) 
             | (1U == (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__state)))) {
            __Vdly__single_block_bench__DOT__DUT__DOT__arr_write_counter = 0U;
            __Vdly__single_block_bench__DOT__DUT__DOT__arr_read_counter = 0U;
        } else {
            if (vlSelfRef.single_block_bench__DOT__DUT__DOT__write_ready_pos_edge) {
                __Vdly__single_block_bench__DOT__DUT__DOT__arr_write_counter 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_write_counter)));
            }
            if (((~ (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__start_read)) 
                 & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__start_read_prev))) {
                __Vdly__single_block_bench__DOT__DUT__DOT__arr_read_counter 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_read_counter)));
            }
        }
    }
    if (((0U == (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__state)) 
         & (~ (IData)(vlSelfRef.single_block_bench__DOT__start_write)))) {
        __Vdly__single_block_bench__DOT__start_addr 
            = (0x000003ffU & ((IData)(vlSelfRef.single_block_bench__DOT__is_column)
                               ? ((IData)(1U) + (IData)(vlSelfRef.single_block_bench__DOT__start_addr))
                               : ((IData)(0x00000020U) 
                                  + (IData)(vlSelfRef.single_block_bench__DOT__start_addr))));
    }
    __Vtableidx2 = ((((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__read_last) 
                      << 5U) | (((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__write_lock_reg) 
                                 << 4U) | ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__read_lock_reg) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__mem_lock_req_reg) 
                        << 2U) | (((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__mem_lock_request_reg) 
                                   << 1U) | (IData)(vlSelfRef.single_block_bench__DOT__rst))));
    __Vdly__single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__read_lock_reg 
        = Vsingle_block_bench__ConstPool__TABLE_h0017e02e_0
        [__Vtableidx2];
    __Vdly__single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__write_lock_reg 
        = Vsingle_block_bench__ConstPool__TABLE_h7dbeb730_0
        [__Vtableidx2];
    __Vtableidx1 = (((((0x1fU == (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_write_counter)) 
                       & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__write_ready_pos_edge)) 
                      << 4U) | ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows) 
                                << 3U)) | (((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__state) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.single_block_bench__DOT__rst)));
    if ((1U & Vsingle_block_bench__ConstPool__TABLE_h3536d272_0
         [__Vtableidx1])) {
        __Vdly__single_block_bench__DOT__DUT__DOT__done_rows 
            = Vsingle_block_bench__ConstPool__TABLE_hb48123e3_0
            [__Vtableidx1];
    }
    __Vdly__single_block_bench__DOT__DUT__DOT__state 
        = Vsingle_block_bench__ConstPool__TABLE_h8cf2f8d9_0
        [__Vtableidx1];
    vlSelfRef.single_block_bench__DOT__DUT__DOT__job_id_prev 
        = ((IData)(vlSelfRef.single_block_bench__DOT__rst)
            ? 0x006fU : ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__start_write)
                          ? (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__job_id)
                          : (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__job_id_prev)));
    if (vlSelfRef.single_block_bench__DOT__DUT__DOT____Vcellinp__inv_dct__rst) {
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v0 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v1 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v2 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v3 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v4 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v5 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v6 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v7 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v8 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v9 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v10 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v11 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v12 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v13 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v14 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v15 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v16 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v17 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v18 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v19 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v20 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v21 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v22 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v23 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v24 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v25 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v26 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v27 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v28 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v29 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v30 = 0U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v31 = 0U;
        __VdlySet__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v0 = 1U;
    } else {
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v0 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 1U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[0U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v1 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 2U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[1U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v2 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 3U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[2U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v3 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 4U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[3U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v4 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 5U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[4U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v5 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 6U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[5U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v6 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 7U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[6U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v7 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 8U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[7U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v8 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 9U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[8U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v9 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x0000000aU))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[9U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v10 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x0000000bU))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[10U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v11 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x0000000cU))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[11U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v12 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x0000000dU))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[12U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v13 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x0000000eU))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[13U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v14 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x0000000fU))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[14U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v15 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x00000010U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[15U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v16 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x00000011U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[16U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v17 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x00000012U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[17U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v18 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x00000013U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[18U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v19 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x00000014U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[19U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v20 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x00000015U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[20U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v21 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x00000016U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[21U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v22 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x00000017U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[22U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v23 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x00000018U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[23U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v24 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x00000019U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[24U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v25 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x0000001aU))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[25U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v26 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x0000001bU))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[26U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v27 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x0000001cU))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[27U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v28 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x0000001dU))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[28U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v29 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x0000001eU))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[29U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v30 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x0000001fU))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[30U]);
        __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v31 
            = ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                              >> 0x00000020U))) ? (IData)(vlSelfRef.single_block_bench__DOT__mem_read_q)
                : vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[31U]);
        if (vlSelfRef.single_block_bench__DOT__DUT__DOT__start_write) {
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v32 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[0U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v33 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[1U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v34 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[2U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v35 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[3U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v36 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[4U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v37 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[5U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v38 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[6U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v39 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[7U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v40 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[8U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v41 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[9U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v42 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[10U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v43 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[11U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v44 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[12U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v45 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[13U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v46 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[14U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v47 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[15U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v48 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[16U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v49 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[17U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v50 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[18U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v51 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[19U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v52 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[20U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v53 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[21U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v54 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[22U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v55 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[23U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v56 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[24U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v57 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[25U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v58 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[26U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v59 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[27U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v60 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[28U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v61 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[29U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v62 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[30U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v63 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_to_write[31U];
        } else {
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v32 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[0U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v33 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[1U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v34 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[2U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v35 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[3U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v36 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[4U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v37 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[5U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v38 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[6U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v39 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[7U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v40 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[8U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v41 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[9U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v42 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[10U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v43 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[11U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v44 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[12U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v45 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[13U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v46 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[14U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v47 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[15U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v48 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[16U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v49 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[17U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v50 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[18U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v51 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[19U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v52 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[20U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v53 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[21U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v54 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[22U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v55 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[23U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v56 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[24U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v57 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[25U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v58 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[26U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v59 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[27U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v60 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[28U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v61 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[29U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v62 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[30U];
            __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v63 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[31U];
        }
        __VdlySet__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v32 = 1U;
    }
    if ((0x00000010U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
                if ((1U & (~ ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
                        __Vfunc_h__64__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[31U];
                        __Vfunc_h__64__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[0U];
                        __Vfunc_h__64__temp = (((IData)(__Vfunc_h__64__t_a) 
                                                << 0x00000010U) 
                                               | (IData)(__Vfunc_h__64__t_b));
                        __Vfunc_h__64__res = ((((__Vfunc_h__64__temp 
                                                 >> 0x00000010U) 
                                                + __Vfunc_h__64__temp) 
                                               << 0x00000010U) 
                                              | (0x0000ffffU 
                                                 & ((__Vfunc_h__64__temp 
                                                     >> 0x00000010U) 
                                                    - __Vfunc_h__64__temp)));
                        __Vfunc_h__64__Vfuncout = __Vfunc_h__64__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                            = __Vfunc_h__64__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v0 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v0 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v1 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res);
                        __Vfunc_h__64__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[30U];
                        __Vfunc_h__64__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[1U];
                        __Vfunc_h__64__temp = (((IData)(__Vfunc_h__64__t_a) 
                                                << 0x00000010U) 
                                               | (IData)(__Vfunc_h__64__t_b));
                        __Vfunc_h__64__res = ((((__Vfunc_h__64__temp 
                                                 >> 0x00000010U) 
                                                + __Vfunc_h__64__temp) 
                                               << 0x00000010U) 
                                              | (0x0000ffffU 
                                                 & ((__Vfunc_h__64__temp 
                                                     >> 0x00000010U) 
                                                    - __Vfunc_h__64__temp)));
                        __Vfunc_h__64__Vfuncout = __Vfunc_h__64__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                            = __Vfunc_h__64__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v2 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v2 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v3 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res);
                        __Vfunc_h__64__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[29U];
                        __Vfunc_h__64__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[2U];
                        __Vfunc_h__64__temp = (((IData)(__Vfunc_h__64__t_a) 
                                                << 0x00000010U) 
                                               | (IData)(__Vfunc_h__64__t_b));
                        __Vfunc_h__64__res = ((((__Vfunc_h__64__temp 
                                                 >> 0x00000010U) 
                                                + __Vfunc_h__64__temp) 
                                               << 0x00000010U) 
                                              | (0x0000ffffU 
                                                 & ((__Vfunc_h__64__temp 
                                                     >> 0x00000010U) 
                                                    - __Vfunc_h__64__temp)));
                        __Vfunc_h__64__Vfuncout = __Vfunc_h__64__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                            = __Vfunc_h__64__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v4 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v4 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v5 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res);
                        __Vfunc_h__64__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[28U];
                        __Vfunc_h__64__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[3U];
                        __Vfunc_h__64__temp = (((IData)(__Vfunc_h__64__t_a) 
                                                << 0x00000010U) 
                                               | (IData)(__Vfunc_h__64__t_b));
                        __Vfunc_h__64__res = ((((__Vfunc_h__64__temp 
                                                 >> 0x00000010U) 
                                                + __Vfunc_h__64__temp) 
                                               << 0x00000010U) 
                                              | (0x0000ffffU 
                                                 & ((__Vfunc_h__64__temp 
                                                     >> 0x00000010U) 
                                                    - __Vfunc_h__64__temp)));
                        __Vfunc_h__64__Vfuncout = __Vfunc_h__64__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                            = __Vfunc_h__64__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v6 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v6 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v7 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res);
                        __Vfunc_h__64__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[27U];
                        __Vfunc_h__64__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[4U];
                        __Vfunc_h__64__temp = (((IData)(__Vfunc_h__64__t_a) 
                                                << 0x00000010U) 
                                               | (IData)(__Vfunc_h__64__t_b));
                        __Vfunc_h__64__res = ((((__Vfunc_h__64__temp 
                                                 >> 0x00000010U) 
                                                + __Vfunc_h__64__temp) 
                                               << 0x00000010U) 
                                              | (0x0000ffffU 
                                                 & ((__Vfunc_h__64__temp 
                                                     >> 0x00000010U) 
                                                    - __Vfunc_h__64__temp)));
                        __Vfunc_h__64__Vfuncout = __Vfunc_h__64__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                            = __Vfunc_h__64__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v8 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v8 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v9 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res);
                        __Vfunc_h__64__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[26U];
                        __Vfunc_h__64__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[5U];
                        __Vfunc_h__64__temp = (((IData)(__Vfunc_h__64__t_a) 
                                                << 0x00000010U) 
                                               | (IData)(__Vfunc_h__64__t_b));
                        __Vfunc_h__64__res = ((((__Vfunc_h__64__temp 
                                                 >> 0x00000010U) 
                                                + __Vfunc_h__64__temp) 
                                               << 0x00000010U) 
                                              | (0x0000ffffU 
                                                 & ((__Vfunc_h__64__temp 
                                                     >> 0x00000010U) 
                                                    - __Vfunc_h__64__temp)));
                        __Vfunc_h__64__Vfuncout = __Vfunc_h__64__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                            = __Vfunc_h__64__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v10 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v10 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v11 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res);
                        __Vfunc_h__64__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[25U];
                        __Vfunc_h__64__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[6U];
                        __Vfunc_h__64__temp = (((IData)(__Vfunc_h__64__t_a) 
                                                << 0x00000010U) 
                                               | (IData)(__Vfunc_h__64__t_b));
                        __Vfunc_h__64__res = ((((__Vfunc_h__64__temp 
                                                 >> 0x00000010U) 
                                                + __Vfunc_h__64__temp) 
                                               << 0x00000010U) 
                                              | (0x0000ffffU 
                                                 & ((__Vfunc_h__64__temp 
                                                     >> 0x00000010U) 
                                                    - __Vfunc_h__64__temp)));
                        __Vfunc_h__64__Vfuncout = __Vfunc_h__64__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                            = __Vfunc_h__64__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v12 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v12 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v13 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res);
                        __Vfunc_h__64__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[24U];
                        __Vfunc_h__64__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[7U];
                        __Vfunc_h__64__temp = (((IData)(__Vfunc_h__64__t_a) 
                                                << 0x00000010U) 
                                               | (IData)(__Vfunc_h__64__t_b));
                        __Vfunc_h__64__res = ((((__Vfunc_h__64__temp 
                                                 >> 0x00000010U) 
                                                + __Vfunc_h__64__temp) 
                                               << 0x00000010U) 
                                              | (0x0000ffffU 
                                                 & ((__Vfunc_h__64__temp 
                                                     >> 0x00000010U) 
                                                    - __Vfunc_h__64__temp)));
                        __Vfunc_h__64__Vfuncout = __Vfunc_h__64__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                            = __Vfunc_h__64__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v14 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v14 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v15 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res);
                        __Vfunc_h__64__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[23U];
                        __Vfunc_h__64__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[8U];
                        __Vfunc_h__64__temp = (((IData)(__Vfunc_h__64__t_a) 
                                                << 0x00000010U) 
                                               | (IData)(__Vfunc_h__64__t_b));
                        __Vfunc_h__64__res = ((((__Vfunc_h__64__temp 
                                                 >> 0x00000010U) 
                                                + __Vfunc_h__64__temp) 
                                               << 0x00000010U) 
                                              | (0x0000ffffU 
                                                 & ((__Vfunc_h__64__temp 
                                                     >> 0x00000010U) 
                                                    - __Vfunc_h__64__temp)));
                        __Vfunc_h__64__Vfuncout = __Vfunc_h__64__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                            = __Vfunc_h__64__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v16 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v16 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v17 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res);
                        __Vfunc_h__64__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[22U];
                        __Vfunc_h__64__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[9U];
                        __Vfunc_h__64__temp = (((IData)(__Vfunc_h__64__t_a) 
                                                << 0x00000010U) 
                                               | (IData)(__Vfunc_h__64__t_b));
                        __Vfunc_h__64__res = ((((__Vfunc_h__64__temp 
                                                 >> 0x00000010U) 
                                                + __Vfunc_h__64__temp) 
                                               << 0x00000010U) 
                                              | (0x0000ffffU 
                                                 & ((__Vfunc_h__64__temp 
                                                     >> 0x00000010U) 
                                                    - __Vfunc_h__64__temp)));
                        __Vfunc_h__64__Vfuncout = __Vfunc_h__64__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                            = __Vfunc_h__64__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v18 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v18 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v19 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res);
                        __Vfunc_h__64__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[21U];
                        __Vfunc_h__64__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[10U];
                        __Vfunc_h__64__temp = (((IData)(__Vfunc_h__64__t_a) 
                                                << 0x00000010U) 
                                               | (IData)(__Vfunc_h__64__t_b));
                        __Vfunc_h__64__res = ((((__Vfunc_h__64__temp 
                                                 >> 0x00000010U) 
                                                + __Vfunc_h__64__temp) 
                                               << 0x00000010U) 
                                              | (0x0000ffffU 
                                                 & ((__Vfunc_h__64__temp 
                                                     >> 0x00000010U) 
                                                    - __Vfunc_h__64__temp)));
                        __Vfunc_h__64__Vfuncout = __Vfunc_h__64__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                            = __Vfunc_h__64__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v20 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v20 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v21 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res);
                        __Vfunc_h__64__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[20U];
                        __Vfunc_h__64__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[11U];
                        __Vfunc_h__64__temp = (((IData)(__Vfunc_h__64__t_a) 
                                                << 0x00000010U) 
                                               | (IData)(__Vfunc_h__64__t_b));
                        __Vfunc_h__64__res = ((((__Vfunc_h__64__temp 
                                                 >> 0x00000010U) 
                                                + __Vfunc_h__64__temp) 
                                               << 0x00000010U) 
                                              | (0x0000ffffU 
                                                 & ((__Vfunc_h__64__temp 
                                                     >> 0x00000010U) 
                                                    - __Vfunc_h__64__temp)));
                        __Vfunc_h__64__Vfuncout = __Vfunc_h__64__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                            = __Vfunc_h__64__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v22 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v22 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v23 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res);
                        __Vfunc_h__64__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[19U];
                        __Vfunc_h__64__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[12U];
                        __Vfunc_h__64__temp = (((IData)(__Vfunc_h__64__t_a) 
                                                << 0x00000010U) 
                                               | (IData)(__Vfunc_h__64__t_b));
                        __Vfunc_h__64__res = ((((__Vfunc_h__64__temp 
                                                 >> 0x00000010U) 
                                                + __Vfunc_h__64__temp) 
                                               << 0x00000010U) 
                                              | (0x0000ffffU 
                                                 & ((__Vfunc_h__64__temp 
                                                     >> 0x00000010U) 
                                                    - __Vfunc_h__64__temp)));
                        __Vfunc_h__64__Vfuncout = __Vfunc_h__64__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                            = __Vfunc_h__64__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v24 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v24 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v25 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res);
                        __Vfunc_h__64__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[18U];
                        __Vfunc_h__64__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[13U];
                        __Vfunc_h__64__temp = (((IData)(__Vfunc_h__64__t_a) 
                                                << 0x00000010U) 
                                               | (IData)(__Vfunc_h__64__t_b));
                        __Vfunc_h__64__res = ((((__Vfunc_h__64__temp 
                                                 >> 0x00000010U) 
                                                + __Vfunc_h__64__temp) 
                                               << 0x00000010U) 
                                              | (0x0000ffffU 
                                                 & ((__Vfunc_h__64__temp 
                                                     >> 0x00000010U) 
                                                    - __Vfunc_h__64__temp)));
                        __Vfunc_h__64__Vfuncout = __Vfunc_h__64__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                            = __Vfunc_h__64__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v26 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v26 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v27 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res);
                        __Vfunc_h__64__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[17U];
                        __Vfunc_h__64__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[14U];
                        __Vfunc_h__64__temp = (((IData)(__Vfunc_h__64__t_a) 
                                                << 0x00000010U) 
                                               | (IData)(__Vfunc_h__64__t_b));
                        __Vfunc_h__64__res = ((((__Vfunc_h__64__temp 
                                                 >> 0x00000010U) 
                                                + __Vfunc_h__64__temp) 
                                               << 0x00000010U) 
                                              | (0x0000ffffU 
                                                 & ((__Vfunc_h__64__temp 
                                                     >> 0x00000010U) 
                                                    - __Vfunc_h__64__temp)));
                        __Vfunc_h__64__Vfuncout = __Vfunc_h__64__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                            = __Vfunc_h__64__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v28 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v28 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v29 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res);
                        __Vfunc_h__64__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[16U];
                        __Vfunc_h__64__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[15U];
                        __Vfunc_h__64__temp = (((IData)(__Vfunc_h__64__t_a) 
                                                << 0x00000010U) 
                                               | (IData)(__Vfunc_h__64__t_b));
                        __Vfunc_h__64__res = ((((__Vfunc_h__64__temp 
                                                 >> 0x00000010U) 
                                                + __Vfunc_h__64__temp) 
                                               << 0x00000010U) 
                                              | (0x0000ffffU 
                                                 & ((__Vfunc_h__64__temp 
                                                     >> 0x00000010U) 
                                                    - __Vfunc_h__64__temp)));
                        __Vfunc_h__64__Vfuncout = __Vfunc_h__64__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                            = __Vfunc_h__64__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v30 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v30 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v31 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res);
                    } else {
                        __Vfunc_b_1__65__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[20U];
                        __Vfunc_b_1__65__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[27U];
                        __Vfunc_b_0__66__t_b = __Vfunc_b_1__65__t_b;
                        __Vfunc_b_0__66__t_a = __Vfunc_b_1__65__t_a;
                        __Vfunc_b_0__66__res = 0;
                        __Vfunc_b_0__66__x = (VL_MULS_III(32, 
                                                          VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__66__t_a)), 
                                                          VL_EXTENDS_II(32,16, 
                                                                        ([&]() {
                                            __Vfunc_cos128__67__Vfuncout 
                                                = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                        }(), (IData)(__Vfunc_cos128__67__Vfuncout)))) 
                                              - VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__66__t_b)), 
                                                            VL_EXTENDS_II(32,16, 
                                                                          ([&]() {
                                            __Vfunc_cos128__69__Vfuncout 
                                                = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                            __Vfunc_sin128__68__Vfuncout 
                                                = __Vfunc_cos128__69__Vfuncout;
                                        }(), (IData)(__Vfunc_sin128__68__Vfuncout)))));
                        __Vfunc_b_0__66__y = (VL_MULS_III(32, 
                                                          VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__66__t_a)), 
                                                          VL_EXTENDS_II(32,16, 
                                                                        ([&]() {
                                            __Vfunc_cos128__71__Vfuncout 
                                                = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                            __Vfunc_sin128__70__Vfuncout 
                                                = __Vfunc_cos128__71__Vfuncout;
                                        }(), (IData)(__Vfunc_sin128__70__Vfuncout)))) 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__66__t_b)), 
                                                            VL_EXTENDS_II(32,16, 
                                                                          ([&]() {
                                            __Vfunc_cos128__72__Vfuncout 
                                                = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                        }(), (IData)(__Vfunc_cos128__72__Vfuncout)))));
                        __Vfunc_round2__73__x = __Vfunc_b_0__66__x;
                        __Vfunc_round2__73__Vfuncout 
                            = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                            ((IData)(0x00000800U) 
                                                             + __Vfunc_round2__73__x), 0x0000000cU));
                        __Vfunc_b_0__66__res = ((0x0000ffffU 
                                                 & __Vfunc_b_0__66__res) 
                                                | ((IData)(__Vfunc_round2__73__Vfuncout) 
                                                   << 0x00000010U));
                        __Vfunc_round2__74__x = __Vfunc_b_0__66__y;
                        __Vfunc_round2__74__Vfuncout 
                            = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                            ((IData)(0x00000800U) 
                                                             + __Vfunc_round2__74__x), 0x0000000cU));
                        __Vfunc_b_0__66__res = ((0xffff0000U 
                                                 & __Vfunc_b_0__66__res) 
                                                | (IData)(__Vfunc_round2__74__Vfuncout));
                        __Vfunc_b_0__66__Vfuncout = __Vfunc_b_0__66__res;
                        __Vfunc_b_1__65__temp = __Vfunc_b_0__66__Vfuncout;
                        __Vfunc_b_1__65__res = ((__Vfunc_b_1__65__temp 
                                                 << 0x00000010U) 
                                                | (__Vfunc_b_1__65__temp 
                                                   >> 0x00000010U));
                        __Vfunc_b_1__65__Vfuncout = __Vfunc_b_1__65__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk42__DOT__unnamedblk43__DOT__b_res 
                            = __Vfunc_b_1__65__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v32 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk42__DOT__unnamedblk43__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v32 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v33 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk42__DOT__unnamedblk43__DOT__b_res);
                        __Vfunc_b_1__65__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[21U];
                        __Vfunc_b_1__65__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[26U];
                        __Vfunc_b_0__66__t_b = __Vfunc_b_1__65__t_b;
                        __Vfunc_b_0__66__t_a = __Vfunc_b_1__65__t_a;
                        __Vfunc_b_0__66__res = 0;
                        __Vfunc_b_0__66__x = (VL_MULS_III(32, 
                                                          VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__66__t_a)), 
                                                          VL_EXTENDS_II(32,16, 
                                                                        ([&]() {
                                            __Vfunc_cos128__67__Vfuncout 
                                                = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                        }(), (IData)(__Vfunc_cos128__67__Vfuncout)))) 
                                              - VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__66__t_b)), 
                                                            VL_EXTENDS_II(32,16, 
                                                                          ([&]() {
                                            __Vfunc_cos128__69__Vfuncout 
                                                = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                            __Vfunc_sin128__68__Vfuncout 
                                                = __Vfunc_cos128__69__Vfuncout;
                                        }(), (IData)(__Vfunc_sin128__68__Vfuncout)))));
                        __Vfunc_b_0__66__y = (VL_MULS_III(32, 
                                                          VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__66__t_a)), 
                                                          VL_EXTENDS_II(32,16, 
                                                                        ([&]() {
                                            __Vfunc_cos128__71__Vfuncout 
                                                = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                            __Vfunc_sin128__70__Vfuncout 
                                                = __Vfunc_cos128__71__Vfuncout;
                                        }(), (IData)(__Vfunc_sin128__70__Vfuncout)))) 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__66__t_b)), 
                                                            VL_EXTENDS_II(32,16, 
                                                                          ([&]() {
                                            __Vfunc_cos128__72__Vfuncout 
                                                = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                        }(), (IData)(__Vfunc_cos128__72__Vfuncout)))));
                        __Vfunc_round2__73__x = __Vfunc_b_0__66__x;
                        __Vfunc_round2__73__Vfuncout 
                            = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                            ((IData)(0x00000800U) 
                                                             + __Vfunc_round2__73__x), 0x0000000cU));
                        __Vfunc_b_0__66__res = ((0x0000ffffU 
                                                 & __Vfunc_b_0__66__res) 
                                                | ((IData)(__Vfunc_round2__73__Vfuncout) 
                                                   << 0x00000010U));
                        __Vfunc_round2__74__x = __Vfunc_b_0__66__y;
                        __Vfunc_round2__74__Vfuncout 
                            = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                            ((IData)(0x00000800U) 
                                                             + __Vfunc_round2__74__x), 0x0000000cU));
                        __Vfunc_b_0__66__res = ((0xffff0000U 
                                                 & __Vfunc_b_0__66__res) 
                                                | (IData)(__Vfunc_round2__74__Vfuncout));
                        __Vfunc_b_0__66__Vfuncout = __Vfunc_b_0__66__res;
                        __Vfunc_b_1__65__temp = __Vfunc_b_0__66__Vfuncout;
                        __Vfunc_b_1__65__res = ((__Vfunc_b_1__65__temp 
                                                 << 0x00000010U) 
                                                | (__Vfunc_b_1__65__temp 
                                                   >> 0x00000010U));
                        __Vfunc_b_1__65__Vfuncout = __Vfunc_b_1__65__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk42__DOT__unnamedblk43__DOT__b_res 
                            = __Vfunc_b_1__65__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v34 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk42__DOT__unnamedblk43__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v34 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v35 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk42__DOT__unnamedblk43__DOT__b_res);
                        __Vfunc_b_1__65__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[22U];
                        __Vfunc_b_1__65__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[25U];
                        __Vfunc_b_0__66__t_b = __Vfunc_b_1__65__t_b;
                        __Vfunc_b_0__66__t_a = __Vfunc_b_1__65__t_a;
                        __Vfunc_b_0__66__res = 0;
                        __Vfunc_b_0__66__x = (VL_MULS_III(32, 
                                                          VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__66__t_a)), 
                                                          VL_EXTENDS_II(32,16, 
                                                                        ([&]() {
                                            __Vfunc_cos128__67__Vfuncout 
                                                = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                        }(), (IData)(__Vfunc_cos128__67__Vfuncout)))) 
                                              - VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__66__t_b)), 
                                                            VL_EXTENDS_II(32,16, 
                                                                          ([&]() {
                                            __Vfunc_cos128__69__Vfuncout 
                                                = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                            __Vfunc_sin128__68__Vfuncout 
                                                = __Vfunc_cos128__69__Vfuncout;
                                        }(), (IData)(__Vfunc_sin128__68__Vfuncout)))));
                        __Vfunc_b_0__66__y = (VL_MULS_III(32, 
                                                          VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__66__t_a)), 
                                                          VL_EXTENDS_II(32,16, 
                                                                        ([&]() {
                                            __Vfunc_cos128__71__Vfuncout 
                                                = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                            __Vfunc_sin128__70__Vfuncout 
                                                = __Vfunc_cos128__71__Vfuncout;
                                        }(), (IData)(__Vfunc_sin128__70__Vfuncout)))) 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__66__t_b)), 
                                                            VL_EXTENDS_II(32,16, 
                                                                          ([&]() {
                                            __Vfunc_cos128__72__Vfuncout 
                                                = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                        }(), (IData)(__Vfunc_cos128__72__Vfuncout)))));
                        __Vfunc_round2__73__x = __Vfunc_b_0__66__x;
                        __Vfunc_round2__73__Vfuncout 
                            = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                            ((IData)(0x00000800U) 
                                                             + __Vfunc_round2__73__x), 0x0000000cU));
                        __Vfunc_b_0__66__res = ((0x0000ffffU 
                                                 & __Vfunc_b_0__66__res) 
                                                | ((IData)(__Vfunc_round2__73__Vfuncout) 
                                                   << 0x00000010U));
                        __Vfunc_round2__74__x = __Vfunc_b_0__66__y;
                        __Vfunc_round2__74__Vfuncout 
                            = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                            ((IData)(0x00000800U) 
                                                             + __Vfunc_round2__74__x), 0x0000000cU));
                        __Vfunc_b_0__66__res = ((0xffff0000U 
                                                 & __Vfunc_b_0__66__res) 
                                                | (IData)(__Vfunc_round2__74__Vfuncout));
                        __Vfunc_b_0__66__Vfuncout = __Vfunc_b_0__66__res;
                        __Vfunc_b_1__65__temp = __Vfunc_b_0__66__Vfuncout;
                        __Vfunc_b_1__65__res = ((__Vfunc_b_1__65__temp 
                                                 << 0x00000010U) 
                                                | (__Vfunc_b_1__65__temp 
                                                   >> 0x00000010U));
                        __Vfunc_b_1__65__Vfuncout = __Vfunc_b_1__65__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk42__DOT__unnamedblk43__DOT__b_res 
                            = __Vfunc_b_1__65__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v36 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk42__DOT__unnamedblk43__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v36 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v37 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk42__DOT__unnamedblk43__DOT__b_res);
                        __Vfunc_b_1__65__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[23U];
                        __Vfunc_b_1__65__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[24U];
                        __Vfunc_b_0__66__t_b = __Vfunc_b_1__65__t_b;
                        __Vfunc_b_0__66__t_a = __Vfunc_b_1__65__t_a;
                        __Vfunc_b_0__66__res = 0;
                        __Vfunc_b_0__66__x = (VL_MULS_III(32, 
                                                          VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__66__t_a)), 
                                                          VL_EXTENDS_II(32,16, 
                                                                        ([&]() {
                                            __Vfunc_cos128__67__Vfuncout 
                                                = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                        }(), (IData)(__Vfunc_cos128__67__Vfuncout)))) 
                                              - VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__66__t_b)), 
                                                            VL_EXTENDS_II(32,16, 
                                                                          ([&]() {
                                            __Vfunc_cos128__69__Vfuncout 
                                                = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                            __Vfunc_sin128__68__Vfuncout 
                                                = __Vfunc_cos128__69__Vfuncout;
                                        }(), (IData)(__Vfunc_sin128__68__Vfuncout)))));
                        __Vfunc_b_0__66__y = (VL_MULS_III(32, 
                                                          VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__66__t_a)), 
                                                          VL_EXTENDS_II(32,16, 
                                                                        ([&]() {
                                            __Vfunc_cos128__71__Vfuncout 
                                                = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                            __Vfunc_sin128__70__Vfuncout 
                                                = __Vfunc_cos128__71__Vfuncout;
                                        }(), (IData)(__Vfunc_sin128__70__Vfuncout)))) 
                                              + VL_MULS_III(32, 
                                                            VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__66__t_b)), 
                                                            VL_EXTENDS_II(32,16, 
                                                                          ([&]() {
                                            __Vfunc_cos128__72__Vfuncout 
                                                = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                        }(), (IData)(__Vfunc_cos128__72__Vfuncout)))));
                        __Vfunc_round2__73__x = __Vfunc_b_0__66__x;
                        __Vfunc_round2__73__Vfuncout 
                            = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                            ((IData)(0x00000800U) 
                                                             + __Vfunc_round2__73__x), 0x0000000cU));
                        __Vfunc_b_0__66__res = ((0x0000ffffU 
                                                 & __Vfunc_b_0__66__res) 
                                                | ((IData)(__Vfunc_round2__73__Vfuncout) 
                                                   << 0x00000010U));
                        __Vfunc_round2__74__x = __Vfunc_b_0__66__y;
                        __Vfunc_round2__74__Vfuncout 
                            = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                            ((IData)(0x00000800U) 
                                                             + __Vfunc_round2__74__x), 0x0000000cU));
                        __Vfunc_b_0__66__res = ((0xffff0000U 
                                                 & __Vfunc_b_0__66__res) 
                                                | (IData)(__Vfunc_round2__74__Vfuncout));
                        __Vfunc_b_0__66__Vfuncout = __Vfunc_b_0__66__res;
                        __Vfunc_b_1__65__temp = __Vfunc_b_0__66__Vfuncout;
                        __Vfunc_b_1__65__res = ((__Vfunc_b_1__65__temp 
                                                 << 0x00000010U) 
                                                | (__Vfunc_b_1__65__temp 
                                                   >> 0x00000010U));
                        __Vfunc_b_1__65__Vfuncout = __Vfunc_b_1__65__res;
                        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk42__DOT__unnamedblk43__DOT__b_res 
                            = __Vfunc_b_1__65__Vfuncout;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v38 
                            = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk42__DOT__unnamedblk43__DOT__b_res 
                               >> 0x00000010U);
                        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v38 = 1U;
                        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v39 
                            = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk42__DOT__unnamedblk43__DOT__b_res);
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
                    __Vfunc_h__75__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[15U];
                    __Vfunc_h__75__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[0U];
                    __Vfunc_h__75__temp = (((IData)(__Vfunc_h__75__t_a) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__75__t_b));
                    __Vfunc_h__75__res = ((((__Vfunc_h__75__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__75__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__75__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__75__temp)));
                    __Vfunc_h__75__Vfuncout = __Vfunc_h__75__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res 
                        = __Vfunc_h__75__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v40 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v40 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v41 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res);
                    __Vfunc_h__75__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[14U];
                    __Vfunc_h__75__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[1U];
                    __Vfunc_h__75__temp = (((IData)(__Vfunc_h__75__t_a) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__75__t_b));
                    __Vfunc_h__75__res = ((((__Vfunc_h__75__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__75__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__75__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__75__temp)));
                    __Vfunc_h__75__Vfuncout = __Vfunc_h__75__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res 
                        = __Vfunc_h__75__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v42 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v42 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v43 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res);
                    __Vfunc_h__75__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[13U];
                    __Vfunc_h__75__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[2U];
                    __Vfunc_h__75__temp = (((IData)(__Vfunc_h__75__t_a) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__75__t_b));
                    __Vfunc_h__75__res = ((((__Vfunc_h__75__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__75__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__75__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__75__temp)));
                    __Vfunc_h__75__Vfuncout = __Vfunc_h__75__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res 
                        = __Vfunc_h__75__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v44 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v44 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v45 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res);
                    __Vfunc_h__75__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[12U];
                    __Vfunc_h__75__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[3U];
                    __Vfunc_h__75__temp = (((IData)(__Vfunc_h__75__t_a) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__75__t_b));
                    __Vfunc_h__75__res = ((((__Vfunc_h__75__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__75__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__75__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__75__temp)));
                    __Vfunc_h__75__Vfuncout = __Vfunc_h__75__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res 
                        = __Vfunc_h__75__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v46 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v46 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v47 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res);
                    __Vfunc_h__75__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[11U];
                    __Vfunc_h__75__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[4U];
                    __Vfunc_h__75__temp = (((IData)(__Vfunc_h__75__t_a) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__75__t_b));
                    __Vfunc_h__75__res = ((((__Vfunc_h__75__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__75__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__75__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__75__temp)));
                    __Vfunc_h__75__Vfuncout = __Vfunc_h__75__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res 
                        = __Vfunc_h__75__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v48 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v48 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v49 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res);
                    __Vfunc_h__75__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[10U];
                    __Vfunc_h__75__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[5U];
                    __Vfunc_h__75__temp = (((IData)(__Vfunc_h__75__t_a) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__75__t_b));
                    __Vfunc_h__75__res = ((((__Vfunc_h__75__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__75__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__75__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__75__temp)));
                    __Vfunc_h__75__Vfuncout = __Vfunc_h__75__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res 
                        = __Vfunc_h__75__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v50 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v50 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v51 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res);
                    __Vfunc_h__75__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[9U];
                    __Vfunc_h__75__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[6U];
                    __Vfunc_h__75__temp = (((IData)(__Vfunc_h__75__t_a) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__75__t_b));
                    __Vfunc_h__75__res = ((((__Vfunc_h__75__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__75__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__75__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__75__temp)));
                    __Vfunc_h__75__Vfuncout = __Vfunc_h__75__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res 
                        = __Vfunc_h__75__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v52 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v52 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v53 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res);
                    __Vfunc_h__75__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[8U];
                    __Vfunc_h__75__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[7U];
                    __Vfunc_h__75__temp = (((IData)(__Vfunc_h__75__t_a) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__75__t_b));
                    __Vfunc_h__75__res = ((((__Vfunc_h__75__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__75__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__75__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__75__temp)));
                    __Vfunc_h__75__Vfuncout = __Vfunc_h__75__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res 
                        = __Vfunc_h__75__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v54 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v54 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v55 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res);
                } else {
                    __Vfunc_h__76__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[23U];
                    __Vfunc_h__76__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[16U];
                    __Vfunc_h__76__temp = (((IData)(__Vfunc_h__76__t_a) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__76__t_b));
                    __Vfunc_h__76__res = ((((__Vfunc_h__76__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__76__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__76__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__76__temp)));
                    __Vfunc_h__76__Vfuncout = __Vfunc_h__76__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res 
                        = __Vfunc_h__76__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v56 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v56 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v57 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res);
                    __Vfunc_h__76__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[22U];
                    __Vfunc_h__76__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[17U];
                    __Vfunc_h__76__temp = (((IData)(__Vfunc_h__76__t_a) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__76__t_b));
                    __Vfunc_h__76__res = ((((__Vfunc_h__76__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__76__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__76__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__76__temp)));
                    __Vfunc_h__76__Vfuncout = __Vfunc_h__76__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res 
                        = __Vfunc_h__76__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v58 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v58 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v59 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res);
                    __Vfunc_h__76__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[21U];
                    __Vfunc_h__76__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[18U];
                    __Vfunc_h__76__temp = (((IData)(__Vfunc_h__76__t_a) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__76__t_b));
                    __Vfunc_h__76__res = ((((__Vfunc_h__76__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__76__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__76__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__76__temp)));
                    __Vfunc_h__76__Vfuncout = __Vfunc_h__76__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res 
                        = __Vfunc_h__76__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v60 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v60 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v61 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res);
                    __Vfunc_h__76__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[20U];
                    __Vfunc_h__76__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[19U];
                    __Vfunc_h__76__temp = (((IData)(__Vfunc_h__76__t_a) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__76__t_b));
                    __Vfunc_h__76__res = ((((__Vfunc_h__76__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__76__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__76__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__76__temp)));
                    __Vfunc_h__76__Vfuncout = __Vfunc_h__76__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res 
                        = __Vfunc_h__76__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v62 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v62 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v63 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res);
                    __Vfunc_h__76__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[31U];
                    __Vfunc_h__76__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[24U];
                    __Vfunc_h__76__temp = (((IData)(__Vfunc_h__76__t_b) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__76__t_a));
                    __Vfunc_h__76__res = ((((__Vfunc_h__76__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__76__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__76__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__76__temp)));
                    __Vfunc_h__76__Vfuncout = __Vfunc_h__76__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res 
                        = __Vfunc_h__76__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v64 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v64 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v65 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res);
                    __Vfunc_h__76__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[30U];
                    __Vfunc_h__76__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[25U];
                    __Vfunc_h__76__temp = (((IData)(__Vfunc_h__76__t_b) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__76__t_a));
                    __Vfunc_h__76__res = ((((__Vfunc_h__76__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__76__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__76__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__76__temp)));
                    __Vfunc_h__76__Vfuncout = __Vfunc_h__76__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res 
                        = __Vfunc_h__76__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v66 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v66 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v67 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res);
                    __Vfunc_h__76__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[29U];
                    __Vfunc_h__76__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[26U];
                    __Vfunc_h__76__temp = (((IData)(__Vfunc_h__76__t_b) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__76__t_a));
                    __Vfunc_h__76__res = ((((__Vfunc_h__76__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__76__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__76__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__76__temp)));
                    __Vfunc_h__76__Vfuncout = __Vfunc_h__76__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res 
                        = __Vfunc_h__76__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v68 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v68 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v69 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res);
                    __Vfunc_h__76__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[28U];
                    __Vfunc_h__76__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[27U];
                    __Vfunc_h__76__temp = (((IData)(__Vfunc_h__76__t_b) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__76__t_a));
                    __Vfunc_h__76__res = ((((__Vfunc_h__76__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__76__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__76__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__76__temp)));
                    __Vfunc_h__76__Vfuncout = __Vfunc_h__76__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res 
                        = __Vfunc_h__76__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v70 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v70 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v71 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res);
                }
            } else if ((1U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
                __Vfunc_b_1__77__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[10U];
                __Vfunc_b_1__77__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[13U];
                __Vfunc_b_0__78__t_b = __Vfunc_b_1__77__t_b;
                __Vfunc_b_0__78__t_a = __Vfunc_b_1__77__t_a;
                __Vfunc_b_0__78__res = 0;
                __Vfunc_b_0__78__x = (VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__78__t_a)), 
                                                  VL_EXTENDS_II(32,16, 
                                                                ([&]() {
                                    __Vfunc_cos128__79__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                }(), (IData)(__Vfunc_cos128__79__Vfuncout)))) 
                                      - VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__78__t_b)), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  ([&]() {
                                    __Vfunc_cos128__81__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                    __Vfunc_sin128__80__Vfuncout 
                                        = __Vfunc_cos128__81__Vfuncout;
                                }(), (IData)(__Vfunc_sin128__80__Vfuncout)))));
                __Vfunc_b_0__78__y = (VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__78__t_a)), 
                                                  VL_EXTENDS_II(32,16, 
                                                                ([&]() {
                                    __Vfunc_cos128__83__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                    __Vfunc_sin128__82__Vfuncout 
                                        = __Vfunc_cos128__83__Vfuncout;
                                }(), (IData)(__Vfunc_sin128__82__Vfuncout)))) 
                                      + VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__78__t_b)), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  ([&]() {
                                    __Vfunc_cos128__84__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                }(), (IData)(__Vfunc_cos128__84__Vfuncout)))));
                __Vfunc_round2__85__x = __Vfunc_b_0__78__x;
                __Vfunc_round2__85__Vfuncout = (0x0000ffffU 
                                                & VL_SHIFTRS_III(16,32,32, 
                                                                 ((IData)(0x00000800U) 
                                                                  + __Vfunc_round2__85__x), 0x0000000cU));
                __Vfunc_b_0__78__res = ((0x0000ffffU 
                                         & __Vfunc_b_0__78__res) 
                                        | ((IData)(__Vfunc_round2__85__Vfuncout) 
                                           << 0x00000010U));
                __Vfunc_round2__86__x = __Vfunc_b_0__78__y;
                __Vfunc_round2__86__Vfuncout = (0x0000ffffU 
                                                & VL_SHIFTRS_III(16,32,32, 
                                                                 ((IData)(0x00000800U) 
                                                                  + __Vfunc_round2__86__x), 0x0000000cU));
                __Vfunc_b_0__78__res = ((0xffff0000U 
                                         & __Vfunc_b_0__78__res) 
                                        | (IData)(__Vfunc_round2__86__Vfuncout));
                __Vfunc_b_0__78__Vfuncout = __Vfunc_b_0__78__res;
                __Vfunc_b_1__77__temp = __Vfunc_b_0__78__Vfuncout;
                __Vfunc_b_1__77__res = ((__Vfunc_b_1__77__temp 
                                         << 0x00000010U) 
                                        | (__Vfunc_b_1__77__temp 
                                           >> 0x00000010U));
                __Vfunc_b_1__77__Vfuncout = __Vfunc_b_1__77__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk35__DOT__unnamedblk36__DOT__b_res 
                    = __Vfunc_b_1__77__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v72 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk35__DOT__unnamedblk36__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v72 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v73 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk35__DOT__unnamedblk36__DOT__b_res);
                __Vfunc_b_1__77__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[11U];
                __Vfunc_b_1__77__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[12U];
                __Vfunc_b_0__78__t_b = __Vfunc_b_1__77__t_b;
                __Vfunc_b_0__78__t_a = __Vfunc_b_1__77__t_a;
                __Vfunc_b_0__78__res = 0;
                __Vfunc_b_0__78__x = (VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__78__t_a)), 
                                                  VL_EXTENDS_II(32,16, 
                                                                ([&]() {
                                    __Vfunc_cos128__79__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                }(), (IData)(__Vfunc_cos128__79__Vfuncout)))) 
                                      - VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__78__t_b)), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  ([&]() {
                                    __Vfunc_cos128__81__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                    __Vfunc_sin128__80__Vfuncout 
                                        = __Vfunc_cos128__81__Vfuncout;
                                }(), (IData)(__Vfunc_sin128__80__Vfuncout)))));
                __Vfunc_b_0__78__y = (VL_MULS_III(32, 
                                                  VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__78__t_a)), 
                                                  VL_EXTENDS_II(32,16, 
                                                                ([&]() {
                                    __Vfunc_cos128__83__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                    __Vfunc_sin128__82__Vfuncout 
                                        = __Vfunc_cos128__83__Vfuncout;
                                }(), (IData)(__Vfunc_sin128__82__Vfuncout)))) 
                                      + VL_MULS_III(32, 
                                                    VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__78__t_b)), 
                                                    VL_EXTENDS_II(32,16, 
                                                                  ([&]() {
                                    __Vfunc_cos128__84__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                }(), (IData)(__Vfunc_cos128__84__Vfuncout)))));
                __Vfunc_round2__85__x = __Vfunc_b_0__78__x;
                __Vfunc_round2__85__Vfuncout = (0x0000ffffU 
                                                & VL_SHIFTRS_III(16,32,32, 
                                                                 ((IData)(0x00000800U) 
                                                                  + __Vfunc_round2__85__x), 0x0000000cU));
                __Vfunc_b_0__78__res = ((0x0000ffffU 
                                         & __Vfunc_b_0__78__res) 
                                        | ((IData)(__Vfunc_round2__85__Vfuncout) 
                                           << 0x00000010U));
                __Vfunc_round2__86__x = __Vfunc_b_0__78__y;
                __Vfunc_round2__86__Vfuncout = (0x0000ffffU 
                                                & VL_SHIFTRS_III(16,32,32, 
                                                                 ((IData)(0x00000800U) 
                                                                  + __Vfunc_round2__86__x), 0x0000000cU));
                __Vfunc_b_0__78__res = ((0xffff0000U 
                                         & __Vfunc_b_0__78__res) 
                                        | (IData)(__Vfunc_round2__86__Vfuncout));
                __Vfunc_b_0__78__Vfuncout = __Vfunc_b_0__78__res;
                __Vfunc_b_1__77__temp = __Vfunc_b_0__78__Vfuncout;
                __Vfunc_b_1__77__res = ((__Vfunc_b_1__77__temp 
                                         << 0x00000010U) 
                                        | (__Vfunc_b_1__77__temp 
                                           >> 0x00000010U));
                __Vfunc_b_1__77__Vfuncout = __Vfunc_b_1__77__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk35__DOT__unnamedblk36__DOT__b_res 
                    = __Vfunc_b_1__77__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v74 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk35__DOT__unnamedblk36__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v74 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v75 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk35__DOT__unnamedblk36__DOT__b_res);
            } else {
                __Vfunc_h__87__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[7U];
                __Vfunc_h__87__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[0U];
                __Vfunc_h__87__temp = (((IData)(__Vfunc_h__87__t_a) 
                                        << 0x00000010U) 
                                       | (IData)(__Vfunc_h__87__t_b));
                __Vfunc_h__87__res = ((((__Vfunc_h__87__temp 
                                         >> 0x00000010U) 
                                        + __Vfunc_h__87__temp) 
                                       << 0x00000010U) 
                                      | (0x0000ffffU 
                                         & ((__Vfunc_h__87__temp 
                                             >> 0x00000010U) 
                                            - __Vfunc_h__87__temp)));
                __Vfunc_h__87__Vfuncout = __Vfunc_h__87__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk33__DOT__unnamedblk34__DOT__b_res 
                    = __Vfunc_h__87__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v76 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk33__DOT__unnamedblk34__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v76 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v77 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk33__DOT__unnamedblk34__DOT__b_res);
                __Vfunc_h__87__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[6U];
                __Vfunc_h__87__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[1U];
                __Vfunc_h__87__temp = (((IData)(__Vfunc_h__87__t_a) 
                                        << 0x00000010U) 
                                       | (IData)(__Vfunc_h__87__t_b));
                __Vfunc_h__87__res = ((((__Vfunc_h__87__temp 
                                         >> 0x00000010U) 
                                        + __Vfunc_h__87__temp) 
                                       << 0x00000010U) 
                                      | (0x0000ffffU 
                                         & ((__Vfunc_h__87__temp 
                                             >> 0x00000010U) 
                                            - __Vfunc_h__87__temp)));
                __Vfunc_h__87__Vfuncout = __Vfunc_h__87__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk33__DOT__unnamedblk34__DOT__b_res 
                    = __Vfunc_h__87__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v78 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk33__DOT__unnamedblk34__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v78 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v79 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk33__DOT__unnamedblk34__DOT__b_res);
                __Vfunc_h__87__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[5U];
                __Vfunc_h__87__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[2U];
                __Vfunc_h__87__temp = (((IData)(__Vfunc_h__87__t_a) 
                                        << 0x00000010U) 
                                       | (IData)(__Vfunc_h__87__t_b));
                __Vfunc_h__87__res = ((((__Vfunc_h__87__temp 
                                         >> 0x00000010U) 
                                        + __Vfunc_h__87__temp) 
                                       << 0x00000010U) 
                                      | (0x0000ffffU 
                                         & ((__Vfunc_h__87__temp 
                                             >> 0x00000010U) 
                                            - __Vfunc_h__87__temp)));
                __Vfunc_h__87__Vfuncout = __Vfunc_h__87__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk33__DOT__unnamedblk34__DOT__b_res 
                    = __Vfunc_h__87__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v80 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk33__DOT__unnamedblk34__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v80 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v81 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk33__DOT__unnamedblk34__DOT__b_res);
                __Vfunc_h__87__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[4U];
                __Vfunc_h__87__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[3U];
                __Vfunc_h__87__temp = (((IData)(__Vfunc_h__87__t_a) 
                                        << 0x00000010U) 
                                       | (IData)(__Vfunc_h__87__t_b));
                __Vfunc_h__87__res = ((((__Vfunc_h__87__temp 
                                         >> 0x00000010U) 
                                        + __Vfunc_h__87__temp) 
                                       << 0x00000010U) 
                                      | (0x0000ffffU 
                                         & ((__Vfunc_h__87__temp 
                                             >> 0x00000010U) 
                                            - __Vfunc_h__87__temp)));
                __Vfunc_h__87__Vfuncout = __Vfunc_h__87__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk33__DOT__unnamedblk34__DOT__b_res 
                    = __Vfunc_h__87__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v82 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk33__DOT__unnamedblk34__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v82 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v83 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk33__DOT__unnamedblk34__DOT__b_res);
            }
        }
    } else if ((8U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
                    __Vfunc_b_1__88__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[18U];
                    __Vfunc_b_1__88__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[29U];
                    __Vfunc_b_0__89__t_b = __Vfunc_b_1__88__t_b;
                    __Vfunc_b_0__89__t_a = __Vfunc_b_1__88__t_a;
                    __Vfunc_b_0__89__res = 0;
                    __Vfunc_b_0__89__x = (VL_MULS_III(32, 
                                                      VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__89__t_a)), 
                                                      VL_EXTENDS_II(32,16, 
                                                                    ([&]() {
                                        __Vfunc_cos128__90__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[48U];
                                    }(), (IData)(__Vfunc_cos128__90__Vfuncout)))) 
                                          - VL_MULS_III(32, 
                                                        VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__89__t_b)), 
                                                        VL_EXTENDS_II(32,16, 
                                                                      ([&]() {
                                        __Vfunc_cos128__92__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[16U];
                                        __Vfunc_sin128__91__Vfuncout 
                                            = __Vfunc_cos128__92__Vfuncout;
                                    }(), (IData)(__Vfunc_sin128__91__Vfuncout)))));
                    __Vfunc_b_0__89__y = (VL_MULS_III(32, 
                                                      VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__89__t_a)), 
                                                      VL_EXTENDS_II(32,16, 
                                                                    ([&]() {
                                        __Vfunc_cos128__94__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[16U];
                                        __Vfunc_sin128__93__Vfuncout 
                                            = __Vfunc_cos128__94__Vfuncout;
                                    }(), (IData)(__Vfunc_sin128__93__Vfuncout)))) 
                                          + VL_MULS_III(32, 
                                                        VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__89__t_b)), 
                                                        VL_EXTENDS_II(32,16, 
                                                                      ([&]() {
                                        __Vfunc_cos128__95__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[48U];
                                    }(), (IData)(__Vfunc_cos128__95__Vfuncout)))));
                    __Vfunc_round2__96__x = __Vfunc_b_0__89__x;
                    __Vfunc_round2__96__Vfuncout = 
                        (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                      ((IData)(0x00000800U) 
                                                       + __Vfunc_round2__96__x), 0x0000000cU));
                    __Vfunc_b_0__89__res = ((0x0000ffffU 
                                             & __Vfunc_b_0__89__res) 
                                            | ((IData)(__Vfunc_round2__96__Vfuncout) 
                                               << 0x00000010U));
                    __Vfunc_round2__97__x = __Vfunc_b_0__89__y;
                    __Vfunc_round2__97__Vfuncout = 
                        (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                      ((IData)(0x00000800U) 
                                                       + __Vfunc_round2__97__x), 0x0000000cU));
                    __Vfunc_b_0__89__res = ((0xffff0000U 
                                             & __Vfunc_b_0__89__res) 
                                            | (IData)(__Vfunc_round2__97__Vfuncout));
                    __Vfunc_b_0__89__Vfuncout = __Vfunc_b_0__89__res;
                    __Vfunc_b_1__88__temp = __Vfunc_b_0__89__Vfuncout;
                    __Vfunc_b_1__88__res = ((__Vfunc_b_1__88__temp 
                                             << 0x00000010U) 
                                            | (__Vfunc_b_1__88__temp 
                                               >> 0x00000010U));
                    __Vfunc_b_1__88__Vfuncout = __Vfunc_b_1__88__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk31__DOT__unnamedblk32__DOT__b_res 
                        = __Vfunc_b_1__88__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v84 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk31__DOT__unnamedblk32__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v84 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v85 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk31__DOT__unnamedblk32__DOT__b_res);
                    __Vfunc_b_1__88__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[19U];
                    __Vfunc_b_1__88__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[28U];
                    __Vfunc_b_0__89__t_b = __Vfunc_b_1__88__t_b;
                    __Vfunc_b_0__89__t_a = __Vfunc_b_1__88__t_a;
                    __Vfunc_b_0__89__res = 0;
                    __Vfunc_b_0__89__x = (VL_MULS_III(32, 
                                                      VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__89__t_a)), 
                                                      VL_EXTENDS_II(32,16, 
                                                                    ([&]() {
                                        __Vfunc_cos128__90__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[48U];
                                    }(), (IData)(__Vfunc_cos128__90__Vfuncout)))) 
                                          - VL_MULS_III(32, 
                                                        VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__89__t_b)), 
                                                        VL_EXTENDS_II(32,16, 
                                                                      ([&]() {
                                        __Vfunc_cos128__92__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[16U];
                                        __Vfunc_sin128__91__Vfuncout 
                                            = __Vfunc_cos128__92__Vfuncout;
                                    }(), (IData)(__Vfunc_sin128__91__Vfuncout)))));
                    __Vfunc_b_0__89__y = (VL_MULS_III(32, 
                                                      VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__89__t_a)), 
                                                      VL_EXTENDS_II(32,16, 
                                                                    ([&]() {
                                        __Vfunc_cos128__94__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[16U];
                                        __Vfunc_sin128__93__Vfuncout 
                                            = __Vfunc_cos128__94__Vfuncout;
                                    }(), (IData)(__Vfunc_sin128__93__Vfuncout)))) 
                                          + VL_MULS_III(32, 
                                                        VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__89__t_b)), 
                                                        VL_EXTENDS_II(32,16, 
                                                                      ([&]() {
                                        __Vfunc_cos128__95__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[48U];
                                    }(), (IData)(__Vfunc_cos128__95__Vfuncout)))));
                    __Vfunc_round2__96__x = __Vfunc_b_0__89__x;
                    __Vfunc_round2__96__Vfuncout = 
                        (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                      ((IData)(0x00000800U) 
                                                       + __Vfunc_round2__96__x), 0x0000000cU));
                    __Vfunc_b_0__89__res = ((0x0000ffffU 
                                             & __Vfunc_b_0__89__res) 
                                            | ((IData)(__Vfunc_round2__96__Vfuncout) 
                                               << 0x00000010U));
                    __Vfunc_round2__97__x = __Vfunc_b_0__89__y;
                    __Vfunc_round2__97__Vfuncout = 
                        (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                      ((IData)(0x00000800U) 
                                                       + __Vfunc_round2__97__x), 0x0000000cU));
                    __Vfunc_b_0__89__res = ((0xffff0000U 
                                             & __Vfunc_b_0__89__res) 
                                            | (IData)(__Vfunc_round2__97__Vfuncout));
                    __Vfunc_b_0__89__Vfuncout = __Vfunc_b_0__89__res;
                    __Vfunc_b_1__88__temp = __Vfunc_b_0__89__Vfuncout;
                    __Vfunc_b_1__88__res = ((__Vfunc_b_1__88__temp 
                                             << 0x00000010U) 
                                            | (__Vfunc_b_1__88__temp 
                                               >> 0x00000010U));
                    __Vfunc_b_1__88__Vfuncout = __Vfunc_b_1__88__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk31__DOT__unnamedblk32__DOT__b_res 
                        = __Vfunc_b_1__88__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v86 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk31__DOT__unnamedblk32__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v86 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v87 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk31__DOT__unnamedblk32__DOT__b_res);
                    __Vfunc_b_1__88__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[20U];
                    __Vfunc_b_1__88__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[27U];
                    __Vfunc_b_0__89__t_b = __Vfunc_b_1__88__t_b;
                    __Vfunc_b_0__89__t_a = __Vfunc_b_1__88__t_a;
                    __Vfunc_b_0__89__res = 0;
                    __Vfunc_b_0__89__x = (VL_MULS_III(32, 
                                                      VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__89__t_a)), 
                                                      VL_EXTENDS_II(32,16, 
                                                                    ([&]() {
                                        __Vfunc_cos128__90__Vfuncout 
                                            = (0x0000ffffU 
                                               & (- vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[16U]));
                                    }(), (IData)(__Vfunc_cos128__90__Vfuncout)))) 
                                          - VL_MULS_III(32, 
                                                        VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__89__t_b)), 
                                                        VL_EXTENDS_II(32,16, 
                                                                      ([&]() {
                                        __Vfunc_cos128__92__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[48U];
                                        __Vfunc_sin128__91__Vfuncout 
                                            = __Vfunc_cos128__92__Vfuncout;
                                    }(), (IData)(__Vfunc_sin128__91__Vfuncout)))));
                    __Vfunc_b_0__89__y = (VL_MULS_III(32, 
                                                      VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__89__t_a)), 
                                                      VL_EXTENDS_II(32,16, 
                                                                    ([&]() {
                                        __Vfunc_cos128__94__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[48U];
                                        __Vfunc_sin128__93__Vfuncout 
                                            = __Vfunc_cos128__94__Vfuncout;
                                    }(), (IData)(__Vfunc_sin128__93__Vfuncout)))) 
                                          + VL_MULS_III(32, 
                                                        VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__89__t_b)), 
                                                        VL_EXTENDS_II(32,16, 
                                                                      ([&]() {
                                        __Vfunc_cos128__95__Vfuncout 
                                            = (0x0000ffffU 
                                               & (- vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[16U]));
                                    }(), (IData)(__Vfunc_cos128__95__Vfuncout)))));
                    __Vfunc_round2__96__x = __Vfunc_b_0__89__x;
                    __Vfunc_round2__96__Vfuncout = 
                        (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                      ((IData)(0x00000800U) 
                                                       + __Vfunc_round2__96__x), 0x0000000cU));
                    __Vfunc_b_0__89__res = ((0x0000ffffU 
                                             & __Vfunc_b_0__89__res) 
                                            | ((IData)(__Vfunc_round2__96__Vfuncout) 
                                               << 0x00000010U));
                    __Vfunc_round2__97__x = __Vfunc_b_0__89__y;
                    __Vfunc_round2__97__Vfuncout = 
                        (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                      ((IData)(0x00000800U) 
                                                       + __Vfunc_round2__97__x), 0x0000000cU));
                    __Vfunc_b_0__89__res = ((0xffff0000U 
                                             & __Vfunc_b_0__89__res) 
                                            | (IData)(__Vfunc_round2__97__Vfuncout));
                    __Vfunc_b_0__89__Vfuncout = __Vfunc_b_0__89__res;
                    __Vfunc_b_1__88__temp = __Vfunc_b_0__89__Vfuncout;
                    __Vfunc_b_1__88__res = ((__Vfunc_b_1__88__temp 
                                             << 0x00000010U) 
                                            | (__Vfunc_b_1__88__temp 
                                               >> 0x00000010U));
                    __Vfunc_b_1__88__Vfuncout = __Vfunc_b_1__88__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk31__DOT__unnamedblk32__DOT__b_res 
                        = __Vfunc_b_1__88__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v88 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk31__DOT__unnamedblk32__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v88 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v89 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk31__DOT__unnamedblk32__DOT__b_res);
                    __Vfunc_b_1__88__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[21U];
                    __Vfunc_b_1__88__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[26U];
                    __Vfunc_b_0__89__t_b = __Vfunc_b_1__88__t_b;
                    __Vfunc_b_0__89__t_a = __Vfunc_b_1__88__t_a;
                    __Vfunc_b_0__89__res = 0;
                    __Vfunc_b_0__89__x = (VL_MULS_III(32, 
                                                      VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__89__t_a)), 
                                                      VL_EXTENDS_II(32,16, 
                                                                    ([&]() {
                                        __Vfunc_cos128__90__Vfuncout 
                                            = (0x0000ffffU 
                                               & (- vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[16U]));
                                    }(), (IData)(__Vfunc_cos128__90__Vfuncout)))) 
                                          - VL_MULS_III(32, 
                                                        VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__89__t_b)), 
                                                        VL_EXTENDS_II(32,16, 
                                                                      ([&]() {
                                        __Vfunc_cos128__92__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[48U];
                                        __Vfunc_sin128__91__Vfuncout 
                                            = __Vfunc_cos128__92__Vfuncout;
                                    }(), (IData)(__Vfunc_sin128__91__Vfuncout)))));
                    __Vfunc_b_0__89__y = (VL_MULS_III(32, 
                                                      VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__89__t_a)), 
                                                      VL_EXTENDS_II(32,16, 
                                                                    ([&]() {
                                        __Vfunc_cos128__94__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[48U];
                                        __Vfunc_sin128__93__Vfuncout 
                                            = __Vfunc_cos128__94__Vfuncout;
                                    }(), (IData)(__Vfunc_sin128__93__Vfuncout)))) 
                                          + VL_MULS_III(32, 
                                                        VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__89__t_b)), 
                                                        VL_EXTENDS_II(32,16, 
                                                                      ([&]() {
                                        __Vfunc_cos128__95__Vfuncout 
                                            = (0x0000ffffU 
                                               & (- vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[16U]));
                                    }(), (IData)(__Vfunc_cos128__95__Vfuncout)))));
                    __Vfunc_round2__96__x = __Vfunc_b_0__89__x;
                    __Vfunc_round2__96__Vfuncout = 
                        (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                      ((IData)(0x00000800U) 
                                                       + __Vfunc_round2__96__x), 0x0000000cU));
                    __Vfunc_b_0__89__res = ((0x0000ffffU 
                                             & __Vfunc_b_0__89__res) 
                                            | ((IData)(__Vfunc_round2__96__Vfuncout) 
                                               << 0x00000010U));
                    __Vfunc_round2__97__x = __Vfunc_b_0__89__y;
                    __Vfunc_round2__97__Vfuncout = 
                        (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                      ((IData)(0x00000800U) 
                                                       + __Vfunc_round2__97__x), 0x0000000cU));
                    __Vfunc_b_0__89__res = ((0xffff0000U 
                                             & __Vfunc_b_0__89__res) 
                                            | (IData)(__Vfunc_round2__97__Vfuncout));
                    __Vfunc_b_0__89__Vfuncout = __Vfunc_b_0__89__res;
                    __Vfunc_b_1__88__temp = __Vfunc_b_0__89__Vfuncout;
                    __Vfunc_b_1__88__res = ((__Vfunc_b_1__88__temp 
                                             << 0x00000010U) 
                                            | (__Vfunc_b_1__88__temp 
                                               >> 0x00000010U));
                    __Vfunc_b_1__88__Vfuncout = __Vfunc_b_1__88__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk31__DOT__unnamedblk32__DOT__b_res 
                        = __Vfunc_b_1__88__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v90 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk31__DOT__unnamedblk32__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v90 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v91 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk31__DOT__unnamedblk32__DOT__b_res);
                } else {
                    __Vfunc_h__98__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[11U];
                    __Vfunc_h__98__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[8U];
                    __Vfunc_h__98__temp = (((IData)(__Vfunc_h__98__t_a) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__98__t_b));
                    __Vfunc_h__98__res = ((((__Vfunc_h__98__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__98__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__98__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__98__temp)));
                    __Vfunc_h__98__Vfuncout = __Vfunc_h__98__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__b_res 
                        = __Vfunc_h__98__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v92 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v92 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v93 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__b_res);
                    __Vfunc_h__98__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[10U];
                    __Vfunc_h__98__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[9U];
                    __Vfunc_h__98__temp = (((IData)(__Vfunc_h__98__t_a) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__98__t_b));
                    __Vfunc_h__98__res = ((((__Vfunc_h__98__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__98__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__98__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__98__temp)));
                    __Vfunc_h__98__Vfuncout = __Vfunc_h__98__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__b_res 
                        = __Vfunc_h__98__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v94 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v94 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v95 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__b_res);
                    __Vfunc_h__98__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[15U];
                    __Vfunc_h__98__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[12U];
                    __Vfunc_h__98__temp = (((IData)(__Vfunc_h__98__t_b) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__98__t_a));
                    __Vfunc_h__98__res = ((((__Vfunc_h__98__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__98__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__98__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__98__temp)));
                    __Vfunc_h__98__Vfuncout = __Vfunc_h__98__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__b_res 
                        = __Vfunc_h__98__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v96 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v96 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v97 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__b_res);
                    __Vfunc_h__98__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[14U];
                    __Vfunc_h__98__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[13U];
                    __Vfunc_h__98__temp = (((IData)(__Vfunc_h__98__t_b) 
                                            << 0x00000010U) 
                                           | (IData)(__Vfunc_h__98__t_a));
                    __Vfunc_h__98__res = ((((__Vfunc_h__98__temp 
                                             >> 0x00000010U) 
                                            + __Vfunc_h__98__temp) 
                                           << 0x00000010U) 
                                          | (0x0000ffffU 
                                             & ((__Vfunc_h__98__temp 
                                                 >> 0x00000010U) 
                                                - __Vfunc_h__98__temp)));
                    __Vfunc_h__98__Vfuncout = __Vfunc_h__98__res;
                    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__b_res 
                        = __Vfunc_h__98__Vfuncout;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v98 
                        = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__b_res 
                           >> 0x00000010U);
                    __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v98 = 1U;
                    __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v99 
                        = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__b_res);
                }
            } else if ((1U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
                __Vfunc_b_1__99__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[5U];
                __Vfunc_b_1__99__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[6U];
                __Vfunc_b_0__100__t_b = __Vfunc_b_1__99__t_b;
                __Vfunc_b_0__100__t_a = __Vfunc_b_1__99__t_a;
                __Vfunc_b_0__100__res = 0;
                __Vfunc_b_0__100__x = (VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__100__t_a)), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 ([&]() {
                                    __Vfunc_cos128__101__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                }(), (IData)(__Vfunc_cos128__101__Vfuncout)))) 
                                       - VL_MULS_III(32, 
                                                     VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__100__t_b)), 
                                                     VL_EXTENDS_II(32,16, 
                                                                   ([&]() {
                                    __Vfunc_cos128__103__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                    __Vfunc_sin128__102__Vfuncout 
                                        = __Vfunc_cos128__103__Vfuncout;
                                }(), (IData)(__Vfunc_sin128__102__Vfuncout)))));
                __Vfunc_b_0__100__y = (VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__100__t_a)), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 ([&]() {
                                    __Vfunc_cos128__105__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                    __Vfunc_sin128__104__Vfuncout 
                                        = __Vfunc_cos128__105__Vfuncout;
                                }(), (IData)(__Vfunc_sin128__104__Vfuncout)))) 
                                       + VL_MULS_III(32, 
                                                     VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__100__t_b)), 
                                                     VL_EXTENDS_II(32,16, 
                                                                   ([&]() {
                                    __Vfunc_cos128__106__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                }(), (IData)(__Vfunc_cos128__106__Vfuncout)))));
                __Vfunc_round2__107__x = __Vfunc_b_0__100__x;
                __Vfunc_round2__107__Vfuncout = (0x0000ffffU 
                                                 & VL_SHIFTRS_III(16,32,32, 
                                                                  ((IData)(0x00000800U) 
                                                                   + __Vfunc_round2__107__x), 0x0000000cU));
                __Vfunc_b_0__100__res = ((0x0000ffffU 
                                          & __Vfunc_b_0__100__res) 
                                         | ((IData)(__Vfunc_round2__107__Vfuncout) 
                                            << 0x00000010U));
                __Vfunc_round2__108__x = __Vfunc_b_0__100__y;
                __Vfunc_round2__108__Vfuncout = (0x0000ffffU 
                                                 & VL_SHIFTRS_III(16,32,32, 
                                                                  ((IData)(0x00000800U) 
                                                                   + __Vfunc_round2__108__x), 0x0000000cU));
                __Vfunc_b_0__100__res = ((0xffff0000U 
                                          & __Vfunc_b_0__100__res) 
                                         | (IData)(__Vfunc_round2__108__Vfuncout));
                __Vfunc_b_0__100__Vfuncout = __Vfunc_b_0__100__res;
                __Vfunc_b_1__99__temp = __Vfunc_b_0__100__Vfuncout;
                __Vfunc_b_1__99__res = ((__Vfunc_b_1__99__temp 
                                         << 0x00000010U) 
                                        | (__Vfunc_b_1__99__temp 
                                           >> 0x00000010U));
                __Vfunc_b_1__99__Vfuncout = __Vfunc_b_1__99__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk27__DOT__b_res 
                    = __Vfunc_b_1__99__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v100 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk27__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v100 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v101 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk27__DOT__b_res);
            } else {
                __Vfunc_h__109__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[3U];
                __Vfunc_h__109__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[0U];
                __Vfunc_h__109__temp = (((IData)(__Vfunc_h__109__t_a) 
                                         << 0x00000010U) 
                                        | (IData)(__Vfunc_h__109__t_b));
                __Vfunc_h__109__res = ((((__Vfunc_h__109__temp 
                                          >> 0x00000010U) 
                                         + __Vfunc_h__109__temp) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & ((__Vfunc_h__109__temp 
                                              >> 0x00000010U) 
                                             - __Vfunc_h__109__temp)));
                __Vfunc_h__109__Vfuncout = __Vfunc_h__109__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk25__DOT__unnamedblk26__DOT__b_res 
                    = __Vfunc_h__109__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v102 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk25__DOT__unnamedblk26__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v102 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v103 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk25__DOT__unnamedblk26__DOT__b_res);
                __Vfunc_h__109__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[2U];
                __Vfunc_h__109__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[1U];
                __Vfunc_h__109__temp = (((IData)(__Vfunc_h__109__t_a) 
                                         << 0x00000010U) 
                                        | (IData)(__Vfunc_h__109__t_b));
                __Vfunc_h__109__res = ((((__Vfunc_h__109__temp 
                                          >> 0x00000010U) 
                                         + __Vfunc_h__109__temp) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & ((__Vfunc_h__109__temp 
                                              >> 0x00000010U) 
                                             - __Vfunc_h__109__temp)));
                __Vfunc_h__109__Vfuncout = __Vfunc_h__109__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk25__DOT__unnamedblk26__DOT__b_res 
                    = __Vfunc_h__109__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v104 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk25__DOT__unnamedblk26__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v104 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v105 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk25__DOT__unnamedblk26__DOT__b_res);
            }
        } else if ((2U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
                __Vfunc_h__110__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[19U];
                __Vfunc_h__110__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[16U];
                __Vfunc_h__110__temp = (((IData)(__Vfunc_h__110__t_a) 
                                         << 0x00000010U) 
                                        | (IData)(__Vfunc_h__110__t_b));
                __Vfunc_h__110__res = ((((__Vfunc_h__110__temp 
                                          >> 0x00000010U) 
                                         + __Vfunc_h__110__temp) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & ((__Vfunc_h__110__temp 
                                              >> 0x00000010U) 
                                             - __Vfunc_h__110__temp)));
                __Vfunc_h__110__Vfuncout = __Vfunc_h__110__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res 
                    = __Vfunc_h__110__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v106 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v106 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v107 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res);
                __Vfunc_h__110__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[18U];
                __Vfunc_h__110__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[17U];
                __Vfunc_h__110__temp = (((IData)(__Vfunc_h__110__t_a) 
                                         << 0x00000010U) 
                                        | (IData)(__Vfunc_h__110__t_b));
                __Vfunc_h__110__res = ((((__Vfunc_h__110__temp 
                                          >> 0x00000010U) 
                                         + __Vfunc_h__110__temp) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & ((__Vfunc_h__110__temp 
                                              >> 0x00000010U) 
                                             - __Vfunc_h__110__temp)));
                __Vfunc_h__110__Vfuncout = __Vfunc_h__110__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res 
                    = __Vfunc_h__110__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v108 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v108 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v109 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res);
                __Vfunc_h__110__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[23U];
                __Vfunc_h__110__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[20U];
                __Vfunc_h__110__temp = (((IData)(__Vfunc_h__110__t_b) 
                                         << 0x00000010U) 
                                        | (IData)(__Vfunc_h__110__t_a));
                __Vfunc_h__110__res = ((((__Vfunc_h__110__temp 
                                          >> 0x00000010U) 
                                         + __Vfunc_h__110__temp) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & ((__Vfunc_h__110__temp 
                                              >> 0x00000010U) 
                                             - __Vfunc_h__110__temp)));
                __Vfunc_h__110__Vfuncout = __Vfunc_h__110__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res 
                    = __Vfunc_h__110__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v110 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v110 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v111 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res);
                __Vfunc_h__110__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[22U];
                __Vfunc_h__110__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[21U];
                __Vfunc_h__110__temp = (((IData)(__Vfunc_h__110__t_b) 
                                         << 0x00000010U) 
                                        | (IData)(__Vfunc_h__110__t_a));
                __Vfunc_h__110__res = ((((__Vfunc_h__110__temp 
                                          >> 0x00000010U) 
                                         + __Vfunc_h__110__temp) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & ((__Vfunc_h__110__temp 
                                              >> 0x00000010U) 
                                             - __Vfunc_h__110__temp)));
                __Vfunc_h__110__Vfuncout = __Vfunc_h__110__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res 
                    = __Vfunc_h__110__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v112 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v112 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v113 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res);
                __Vfunc_h__110__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[27U];
                __Vfunc_h__110__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[24U];
                __Vfunc_h__110__temp = (((IData)(__Vfunc_h__110__t_a) 
                                         << 0x00000010U) 
                                        | (IData)(__Vfunc_h__110__t_b));
                __Vfunc_h__110__res = ((((__Vfunc_h__110__temp 
                                          >> 0x00000010U) 
                                         + __Vfunc_h__110__temp) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & ((__Vfunc_h__110__temp 
                                              >> 0x00000010U) 
                                             - __Vfunc_h__110__temp)));
                __Vfunc_h__110__Vfuncout = __Vfunc_h__110__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res 
                    = __Vfunc_h__110__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v114 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v114 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v115 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res);
                __Vfunc_h__110__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[26U];
                __Vfunc_h__110__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[25U];
                __Vfunc_h__110__temp = (((IData)(__Vfunc_h__110__t_a) 
                                         << 0x00000010U) 
                                        | (IData)(__Vfunc_h__110__t_b));
                __Vfunc_h__110__res = ((((__Vfunc_h__110__temp 
                                          >> 0x00000010U) 
                                         + __Vfunc_h__110__temp) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & ((__Vfunc_h__110__temp 
                                              >> 0x00000010U) 
                                             - __Vfunc_h__110__temp)));
                __Vfunc_h__110__Vfuncout = __Vfunc_h__110__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res 
                    = __Vfunc_h__110__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v116 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v116 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v117 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res);
                __Vfunc_h__110__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[31U];
                __Vfunc_h__110__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[28U];
                __Vfunc_h__110__temp = (((IData)(__Vfunc_h__110__t_b) 
                                         << 0x00000010U) 
                                        | (IData)(__Vfunc_h__110__t_a));
                __Vfunc_h__110__res = ((((__Vfunc_h__110__temp 
                                          >> 0x00000010U) 
                                         + __Vfunc_h__110__temp) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & ((__Vfunc_h__110__temp 
                                              >> 0x00000010U) 
                                             - __Vfunc_h__110__temp)));
                __Vfunc_h__110__Vfuncout = __Vfunc_h__110__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res 
                    = __Vfunc_h__110__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v118 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v118 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v119 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res);
                __Vfunc_h__110__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[30U];
                __Vfunc_h__110__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[29U];
                __Vfunc_h__110__temp = (((IData)(__Vfunc_h__110__t_b) 
                                         << 0x00000010U) 
                                        | (IData)(__Vfunc_h__110__t_a));
                __Vfunc_h__110__res = ((((__Vfunc_h__110__temp 
                                          >> 0x00000010U) 
                                         + __Vfunc_h__110__temp) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & ((__Vfunc_h__110__temp 
                                              >> 0x00000010U) 
                                             - __Vfunc_h__110__temp)));
                __Vfunc_h__110__Vfuncout = __Vfunc_h__110__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res 
                    = __Vfunc_h__110__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v120 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v120 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v121 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res);
            } else {
                __Vfunc_b_1__111__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[9U];
                __Vfunc_b_1__111__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[14U];
                __Vfunc_b_0__112__t_b = __Vfunc_b_1__111__t_b;
                __Vfunc_b_0__112__t_a = __Vfunc_b_1__111__t_a;
                __Vfunc_b_0__112__res = 0;
                __Vfunc_b_0__112__x = (VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__112__t_a)), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 ([&]() {
                                    __Vfunc_cos128__113__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[48U];
                                }(), (IData)(__Vfunc_cos128__113__Vfuncout)))) 
                                       - VL_MULS_III(32, 
                                                     VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__112__t_b)), 
                                                     VL_EXTENDS_II(32,16, 
                                                                   ([&]() {
                                    __Vfunc_cos128__115__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[16U];
                                    __Vfunc_sin128__114__Vfuncout 
                                        = __Vfunc_cos128__115__Vfuncout;
                                }(), (IData)(__Vfunc_sin128__114__Vfuncout)))));
                __Vfunc_b_0__112__y = (VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__112__t_a)), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 ([&]() {
                                    __Vfunc_cos128__117__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[16U];
                                    __Vfunc_sin128__116__Vfuncout 
                                        = __Vfunc_cos128__117__Vfuncout;
                                }(), (IData)(__Vfunc_sin128__116__Vfuncout)))) 
                                       + VL_MULS_III(32, 
                                                     VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__112__t_b)), 
                                                     VL_EXTENDS_II(32,16, 
                                                                   ([&]() {
                                    __Vfunc_cos128__118__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[48U];
                                }(), (IData)(__Vfunc_cos128__118__Vfuncout)))));
                __Vfunc_round2__119__x = __Vfunc_b_0__112__x;
                __Vfunc_round2__119__Vfuncout = (0x0000ffffU 
                                                 & VL_SHIFTRS_III(16,32,32, 
                                                                  ((IData)(0x00000800U) 
                                                                   + __Vfunc_round2__119__x), 0x0000000cU));
                __Vfunc_b_0__112__res = ((0x0000ffffU 
                                          & __Vfunc_b_0__112__res) 
                                         | ((IData)(__Vfunc_round2__119__Vfuncout) 
                                            << 0x00000010U));
                __Vfunc_round2__120__x = __Vfunc_b_0__112__y;
                __Vfunc_round2__120__Vfuncout = (0x0000ffffU 
                                                 & VL_SHIFTRS_III(16,32,32, 
                                                                  ((IData)(0x00000800U) 
                                                                   + __Vfunc_round2__120__x), 0x0000000cU));
                __Vfunc_b_0__112__res = ((0xffff0000U 
                                          & __Vfunc_b_0__112__res) 
                                         | (IData)(__Vfunc_round2__120__Vfuncout));
                __Vfunc_b_0__112__Vfuncout = __Vfunc_b_0__112__res;
                __Vfunc_b_1__111__temp = __Vfunc_b_0__112__Vfuncout;
                __Vfunc_b_1__111__res = ((__Vfunc_b_1__111__temp 
                                          << 0x00000010U) 
                                         | (__Vfunc_b_1__111__temp 
                                            >> 0x00000010U));
                __Vfunc_b_1__111__Vfuncout = __Vfunc_b_1__111__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk20__DOT__unnamedblk21__DOT__b_res 
                    = __Vfunc_b_1__111__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v122 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk20__DOT__unnamedblk21__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v122 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v123 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk20__DOT__unnamedblk21__DOT__b_res);
                __Vfunc_b_1__111__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[10U];
                __Vfunc_b_1__111__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[13U];
                __Vfunc_b_0__112__t_b = __Vfunc_b_1__111__t_b;
                __Vfunc_b_0__112__t_a = __Vfunc_b_1__111__t_a;
                __Vfunc_b_0__112__res = 0;
                __Vfunc_b_0__112__x = (VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__112__t_a)), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 ([&]() {
                                    __Vfunc_cos128__113__Vfuncout 
                                        = (0x0000ffffU 
                                           & (- vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[16U]));
                                }(), (IData)(__Vfunc_cos128__113__Vfuncout)))) 
                                       - VL_MULS_III(32, 
                                                     VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__112__t_b)), 
                                                     VL_EXTENDS_II(32,16, 
                                                                   ([&]() {
                                    __Vfunc_cos128__115__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[48U];
                                    __Vfunc_sin128__114__Vfuncout 
                                        = __Vfunc_cos128__115__Vfuncout;
                                }(), (IData)(__Vfunc_sin128__114__Vfuncout)))));
                __Vfunc_b_0__112__y = (VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__112__t_a)), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 ([&]() {
                                    __Vfunc_cos128__117__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[48U];
                                    __Vfunc_sin128__116__Vfuncout 
                                        = __Vfunc_cos128__117__Vfuncout;
                                }(), (IData)(__Vfunc_sin128__116__Vfuncout)))) 
                                       + VL_MULS_III(32, 
                                                     VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__112__t_b)), 
                                                     VL_EXTENDS_II(32,16, 
                                                                   ([&]() {
                                    __Vfunc_cos128__118__Vfuncout 
                                        = (0x0000ffffU 
                                           & (- vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[16U]));
                                }(), (IData)(__Vfunc_cos128__118__Vfuncout)))));
                __Vfunc_round2__119__x = __Vfunc_b_0__112__x;
                __Vfunc_round2__119__Vfuncout = (0x0000ffffU 
                                                 & VL_SHIFTRS_III(16,32,32, 
                                                                  ((IData)(0x00000800U) 
                                                                   + __Vfunc_round2__119__x), 0x0000000cU));
                __Vfunc_b_0__112__res = ((0x0000ffffU 
                                          & __Vfunc_b_0__112__res) 
                                         | ((IData)(__Vfunc_round2__119__Vfuncout) 
                                            << 0x00000010U));
                __Vfunc_round2__120__x = __Vfunc_b_0__112__y;
                __Vfunc_round2__120__Vfuncout = (0x0000ffffU 
                                                 & VL_SHIFTRS_III(16,32,32, 
                                                                  ((IData)(0x00000800U) 
                                                                   + __Vfunc_round2__120__x), 0x0000000cU));
                __Vfunc_b_0__112__res = ((0xffff0000U 
                                          & __Vfunc_b_0__112__res) 
                                         | (IData)(__Vfunc_round2__120__Vfuncout));
                __Vfunc_b_0__112__Vfuncout = __Vfunc_b_0__112__res;
                __Vfunc_b_1__111__temp = __Vfunc_b_0__112__Vfuncout;
                __Vfunc_b_1__111__res = ((__Vfunc_b_1__111__temp 
                                          << 0x00000010U) 
                                         | (__Vfunc_b_1__111__temp 
                                            >> 0x00000010U));
                __Vfunc_b_1__111__Vfuncout = __Vfunc_b_1__111__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk20__DOT__unnamedblk21__DOT__b_res 
                    = __Vfunc_b_1__111__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v124 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk20__DOT__unnamedblk21__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v124 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v125 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk20__DOT__unnamedblk21__DOT__b_res);
            }
        } else if ((1U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
            __Vfunc_h__121__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[5U];
            __Vfunc_h__121__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[4U];
            __Vfunc_h__121__temp = (((IData)(__Vfunc_h__121__t_a) 
                                     << 0x00000010U) 
                                    | (IData)(__Vfunc_h__121__t_b));
            __Vfunc_h__121__res = ((((__Vfunc_h__121__temp 
                                      >> 0x00000010U) 
                                     + __Vfunc_h__121__temp) 
                                    << 0x00000010U) 
                                   | (0x0000ffffU & 
                                      ((__Vfunc_h__121__temp 
                                        >> 0x00000010U) 
                                       - __Vfunc_h__121__temp)));
            __Vfunc_h__121__Vfuncout = __Vfunc_h__121__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk18__DOT__unnamedblk19__DOT__b_res 
                = __Vfunc_h__121__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v126 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk18__DOT__unnamedblk19__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v126 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v127 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk18__DOT__unnamedblk19__DOT__b_res);
            __Vfunc_h__121__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[7U];
            __Vfunc_h__121__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[6U];
            __Vfunc_h__121__temp = (((IData)(__Vfunc_h__121__t_b) 
                                     << 0x00000010U) 
                                    | (IData)(__Vfunc_h__121__t_a));
            __Vfunc_h__121__res = ((((__Vfunc_h__121__temp 
                                      >> 0x00000010U) 
                                     + __Vfunc_h__121__temp) 
                                    << 0x00000010U) 
                                   | (0x0000ffffU & 
                                      ((__Vfunc_h__121__temp 
                                        >> 0x00000010U) 
                                       - __Vfunc_h__121__temp)));
            __Vfunc_h__121__Vfuncout = __Vfunc_h__121__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk18__DOT__unnamedblk19__DOT__b_res 
                = __Vfunc_h__121__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v128 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk18__DOT__unnamedblk19__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v128 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v129 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk18__DOT__unnamedblk19__DOT__b_res);
        } else {
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk16__DOT__unnamedblk17__DOT__b_res 
                = ([&]() {
                    __Vfunc_b_1__122__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[1U];
                    __Vfunc_b_1__122__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[0U];
                    __Vfunc_b_0__123__t_b = __Vfunc_b_1__122__t_b;
                    __Vfunc_b_0__123__t_a = __Vfunc_b_1__122__t_a;
                    __Vfunc_b_0__123__res = 0;
                    __Vfunc_b_0__123__x = (VL_MULS_III(32, 
                                                       VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__123__t_a)), 
                                                       VL_EXTENDS_II(32,16, 
                                                                     ([&]() {
                                        __Vfunc_cos128__124__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                    }(), (IData)(__Vfunc_cos128__124__Vfuncout)))) 
                                           - VL_MULS_III(32, 
                                                         VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__123__t_b)), 
                                                         VL_EXTENDS_II(32,16, 
                                                                       ([&]() {
                                        __Vfunc_cos128__126__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                        __Vfunc_sin128__125__Vfuncout 
                                            = __Vfunc_cos128__126__Vfuncout;
                                    }(), (IData)(__Vfunc_sin128__125__Vfuncout)))));
                    __Vfunc_b_0__123__y = (VL_MULS_III(32, 
                                                       VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__123__t_a)), 
                                                       VL_EXTENDS_II(32,16, 
                                                                     ([&]() {
                                        __Vfunc_cos128__128__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                        __Vfunc_sin128__127__Vfuncout 
                                            = __Vfunc_cos128__128__Vfuncout;
                                    }(), (IData)(__Vfunc_sin128__127__Vfuncout)))) 
                                           + VL_MULS_III(32, 
                                                         VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__123__t_b)), 
                                                         VL_EXTENDS_II(32,16, 
                                                                       ([&]() {
                                        __Vfunc_cos128__129__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[32U];
                                    }(), (IData)(__Vfunc_cos128__129__Vfuncout)))));
                    __Vfunc_round2__130__x = __Vfunc_b_0__123__x;
                    __Vfunc_round2__130__Vfuncout = 
                        (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                      ((IData)(0x00000800U) 
                                                       + __Vfunc_round2__130__x), 0x0000000cU));
                    __Vfunc_b_0__123__res = ((0x0000ffffU 
                                              & __Vfunc_b_0__123__res) 
                                             | ((IData)(__Vfunc_round2__130__Vfuncout) 
                                                << 0x00000010U));
                    __Vfunc_round2__131__x = __Vfunc_b_0__123__y;
                    __Vfunc_round2__131__Vfuncout = 
                        (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                      ((IData)(0x00000800U) 
                                                       + __Vfunc_round2__131__x), 0x0000000cU));
                    __Vfunc_b_0__123__res = ((0xffff0000U 
                                              & __Vfunc_b_0__123__res) 
                                             | (IData)(__Vfunc_round2__131__Vfuncout));
                    __Vfunc_b_0__123__Vfuncout = __Vfunc_b_0__123__res;
                    __Vfunc_b_1__122__temp = __Vfunc_b_0__123__Vfuncout;
                    __Vfunc_b_1__122__res = ((__Vfunc_b_1__122__temp 
                                              << 0x00000010U) 
                                             | (__Vfunc_b_1__122__temp 
                                                >> 0x00000010U));
                    __Vfunc_b_1__122__Vfuncout = __Vfunc_b_1__122__res;
                }(), __Vfunc_b_1__122__Vfuncout);
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v130 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk16__DOT__unnamedblk17__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v130 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v131 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk16__DOT__unnamedblk17__DOT__b_res);
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk16__DOT__unnamedblk17__DOT__b_res 
                = ([&]() {
                    __Vfunc_b_0__132__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[3U];
                    __Vfunc_b_0__132__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[2U];
                    __Vfunc_b_0__132__res = 0;
                    __Vfunc_b_0__132__x = (VL_MULS_III(32, 
                                                       VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__132__t_a)), 
                                                       VL_EXTENDS_II(32,16, 
                                                                     ([&]() {
                                        __Vfunc_cos128__133__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[48U];
                                    }(), (IData)(__Vfunc_cos128__133__Vfuncout)))) 
                                           - VL_MULS_III(32, 
                                                         VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__132__t_b)), 
                                                         VL_EXTENDS_II(32,16, 
                                                                       ([&]() {
                                        __Vfunc_cos128__135__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[16U];
                                        __Vfunc_sin128__134__Vfuncout 
                                            = __Vfunc_cos128__135__Vfuncout;
                                    }(), (IData)(__Vfunc_sin128__134__Vfuncout)))));
                    __Vfunc_b_0__132__y = (VL_MULS_III(32, 
                                                       VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__132__t_a)), 
                                                       VL_EXTENDS_II(32,16, 
                                                                     ([&]() {
                                        __Vfunc_cos128__137__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[16U];
                                        __Vfunc_sin128__136__Vfuncout 
                                            = __Vfunc_cos128__137__Vfuncout;
                                    }(), (IData)(__Vfunc_sin128__136__Vfuncout)))) 
                                           + VL_MULS_III(32, 
                                                         VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__132__t_b)), 
                                                         VL_EXTENDS_II(32,16, 
                                                                       ([&]() {
                                        __Vfunc_cos128__138__Vfuncout 
                                            = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[48U];
                                    }(), (IData)(__Vfunc_cos128__138__Vfuncout)))));
                    __Vfunc_round2__139__x = __Vfunc_b_0__132__x;
                    __Vfunc_round2__139__Vfuncout = 
                        (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                      ((IData)(0x00000800U) 
                                                       + __Vfunc_round2__139__x), 0x0000000cU));
                    __Vfunc_b_0__132__res = ((0x0000ffffU 
                                              & __Vfunc_b_0__132__res) 
                                             | ((IData)(__Vfunc_round2__139__Vfuncout) 
                                                << 0x00000010U));
                    __Vfunc_round2__140__x = __Vfunc_b_0__132__y;
                    __Vfunc_round2__140__Vfuncout = 
                        (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                                      ((IData)(0x00000800U) 
                                                       + __Vfunc_round2__140__x), 0x0000000cU));
                    __Vfunc_b_0__132__res = ((0xffff0000U 
                                              & __Vfunc_b_0__132__res) 
                                             | (IData)(__Vfunc_round2__140__Vfuncout));
                    __Vfunc_b_0__132__Vfuncout = __Vfunc_b_0__132__res;
                }(), __Vfunc_b_0__132__Vfuncout);
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v132 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk16__DOT__unnamedblk17__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v132 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v133 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk16__DOT__unnamedblk17__DOT__b_res);
        }
    } else if ((4U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
                __Vfunc_b_1__141__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[17U];
                __Vfunc_b_1__141__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[30U];
                __Vfunc_b_0__142__t_b = __Vfunc_b_1__141__t_b;
                __Vfunc_b_0__142__t_a = __Vfunc_b_1__141__t_a;
                __Vfunc_b_0__142__res = 0;
                __Vfunc_b_0__142__x = (VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__142__t_a)), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 ([&]() {
                                    __Vfunc_cos128__143__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[56U];
                                }(), (IData)(__Vfunc_cos128__143__Vfuncout)))) 
                                       - VL_MULS_III(32, 
                                                     VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__142__t_b)), 
                                                     VL_EXTENDS_II(32,16, 
                                                                   ([&]() {
                                    __Vfunc_cos128__145__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[8U];
                                    __Vfunc_sin128__144__Vfuncout 
                                        = __Vfunc_cos128__145__Vfuncout;
                                }(), (IData)(__Vfunc_sin128__144__Vfuncout)))));
                __Vfunc_b_0__142__y = (VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__142__t_a)), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 ([&]() {
                                    __Vfunc_cos128__147__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[8U];
                                    __Vfunc_sin128__146__Vfuncout 
                                        = __Vfunc_cos128__147__Vfuncout;
                                }(), (IData)(__Vfunc_sin128__146__Vfuncout)))) 
                                       + VL_MULS_III(32, 
                                                     VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__142__t_b)), 
                                                     VL_EXTENDS_II(32,16, 
                                                                   ([&]() {
                                    __Vfunc_cos128__148__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[56U];
                                }(), (IData)(__Vfunc_cos128__148__Vfuncout)))));
                __Vfunc_round2__149__x = __Vfunc_b_0__142__x;
                __Vfunc_round2__149__Vfuncout = (0x0000ffffU 
                                                 & VL_SHIFTRS_III(16,32,32, 
                                                                  ((IData)(0x00000800U) 
                                                                   + __Vfunc_round2__149__x), 0x0000000cU));
                __Vfunc_b_0__142__res = ((0x0000ffffU 
                                          & __Vfunc_b_0__142__res) 
                                         | ((IData)(__Vfunc_round2__149__Vfuncout) 
                                            << 0x00000010U));
                __Vfunc_round2__150__x = __Vfunc_b_0__142__y;
                __Vfunc_round2__150__Vfuncout = (0x0000ffffU 
                                                 & VL_SHIFTRS_III(16,32,32, 
                                                                  ((IData)(0x00000800U) 
                                                                   + __Vfunc_round2__150__x), 0x0000000cU));
                __Vfunc_b_0__142__res = ((0xffff0000U 
                                          & __Vfunc_b_0__142__res) 
                                         | (IData)(__Vfunc_round2__150__Vfuncout));
                __Vfunc_b_0__142__Vfuncout = __Vfunc_b_0__142__res;
                __Vfunc_b_1__141__temp = __Vfunc_b_0__142__Vfuncout;
                __Vfunc_b_1__141__res = ((__Vfunc_b_1__141__temp 
                                          << 0x00000010U) 
                                         | (__Vfunc_b_1__141__temp 
                                            >> 0x00000010U));
                __Vfunc_b_1__141__Vfuncout = __Vfunc_b_1__141__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__b_res 
                    = __Vfunc_b_1__141__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v134 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v134 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v135 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__b_res);
                __Vfunc_b_1__141__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[18U];
                __Vfunc_b_1__141__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[29U];
                __Vfunc_b_0__142__t_b = __Vfunc_b_1__141__t_b;
                __Vfunc_b_0__142__t_a = __Vfunc_b_1__141__t_a;
                __Vfunc_b_0__142__res = 0;
                __Vfunc_b_0__142__x = (VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__142__t_a)), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 ([&]() {
                                    __Vfunc_cos128__143__Vfuncout 
                                        = (0x0000ffffU 
                                           & (- vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[8U]));
                                }(), (IData)(__Vfunc_cos128__143__Vfuncout)))) 
                                       - VL_MULS_III(32, 
                                                     VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__142__t_b)), 
                                                     VL_EXTENDS_II(32,16, 
                                                                   ([&]() {
                                    __Vfunc_cos128__145__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[56U];
                                    __Vfunc_sin128__144__Vfuncout 
                                        = __Vfunc_cos128__145__Vfuncout;
                                }(), (IData)(__Vfunc_sin128__144__Vfuncout)))));
                __Vfunc_b_0__142__y = (VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__142__t_a)), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 ([&]() {
                                    __Vfunc_cos128__147__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[56U];
                                    __Vfunc_sin128__146__Vfuncout 
                                        = __Vfunc_cos128__147__Vfuncout;
                                }(), (IData)(__Vfunc_sin128__146__Vfuncout)))) 
                                       + VL_MULS_III(32, 
                                                     VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__142__t_b)), 
                                                     VL_EXTENDS_II(32,16, 
                                                                   ([&]() {
                                    __Vfunc_cos128__148__Vfuncout 
                                        = (0x0000ffffU 
                                           & (- vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[8U]));
                                }(), (IData)(__Vfunc_cos128__148__Vfuncout)))));
                __Vfunc_round2__149__x = __Vfunc_b_0__142__x;
                __Vfunc_round2__149__Vfuncout = (0x0000ffffU 
                                                 & VL_SHIFTRS_III(16,32,32, 
                                                                  ((IData)(0x00000800U) 
                                                                   + __Vfunc_round2__149__x), 0x0000000cU));
                __Vfunc_b_0__142__res = ((0x0000ffffU 
                                          & __Vfunc_b_0__142__res) 
                                         | ((IData)(__Vfunc_round2__149__Vfuncout) 
                                            << 0x00000010U));
                __Vfunc_round2__150__x = __Vfunc_b_0__142__y;
                __Vfunc_round2__150__Vfuncout = (0x0000ffffU 
                                                 & VL_SHIFTRS_III(16,32,32, 
                                                                  ((IData)(0x00000800U) 
                                                                   + __Vfunc_round2__150__x), 0x0000000cU));
                __Vfunc_b_0__142__res = ((0xffff0000U 
                                          & __Vfunc_b_0__142__res) 
                                         | (IData)(__Vfunc_round2__150__Vfuncout));
                __Vfunc_b_0__142__Vfuncout = __Vfunc_b_0__142__res;
                __Vfunc_b_1__141__temp = __Vfunc_b_0__142__Vfuncout;
                __Vfunc_b_1__141__res = ((__Vfunc_b_1__141__temp 
                                          << 0x00000010U) 
                                         | (__Vfunc_b_1__141__temp 
                                            >> 0x00000010U));
                __Vfunc_b_1__141__Vfuncout = __Vfunc_b_1__141__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__b_res 
                    = __Vfunc_b_1__141__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v136 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v136 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v137 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__b_res);
                __Vfunc_b_1__141__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[21U];
                __Vfunc_b_1__141__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[26U];
                __Vfunc_b_0__142__t_b = __Vfunc_b_1__141__t_b;
                __Vfunc_b_0__142__t_a = __Vfunc_b_1__141__t_a;
                __Vfunc_b_0__142__res = 0;
                __Vfunc_b_0__142__x = (VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__142__t_a)), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 ([&]() {
                                    __Vfunc_cos128__143__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[24U];
                                }(), (IData)(__Vfunc_cos128__143__Vfuncout)))) 
                                       - VL_MULS_III(32, 
                                                     VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__142__t_b)), 
                                                     VL_EXTENDS_II(32,16, 
                                                                   ([&]() {
                                    __Vfunc_cos128__145__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[40U];
                                    __Vfunc_sin128__144__Vfuncout 
                                        = __Vfunc_cos128__145__Vfuncout;
                                }(), (IData)(__Vfunc_sin128__144__Vfuncout)))));
                __Vfunc_b_0__142__y = (VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__142__t_a)), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 ([&]() {
                                    __Vfunc_cos128__147__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[40U];
                                    __Vfunc_sin128__146__Vfuncout 
                                        = __Vfunc_cos128__147__Vfuncout;
                                }(), (IData)(__Vfunc_sin128__146__Vfuncout)))) 
                                       + VL_MULS_III(32, 
                                                     VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__142__t_b)), 
                                                     VL_EXTENDS_II(32,16, 
                                                                   ([&]() {
                                    __Vfunc_cos128__148__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[24U];
                                }(), (IData)(__Vfunc_cos128__148__Vfuncout)))));
                __Vfunc_round2__149__x = __Vfunc_b_0__142__x;
                __Vfunc_round2__149__Vfuncout = (0x0000ffffU 
                                                 & VL_SHIFTRS_III(16,32,32, 
                                                                  ((IData)(0x00000800U) 
                                                                   + __Vfunc_round2__149__x), 0x0000000cU));
                __Vfunc_b_0__142__res = ((0x0000ffffU 
                                          & __Vfunc_b_0__142__res) 
                                         | ((IData)(__Vfunc_round2__149__Vfuncout) 
                                            << 0x00000010U));
                __Vfunc_round2__150__x = __Vfunc_b_0__142__y;
                __Vfunc_round2__150__Vfuncout = (0x0000ffffU 
                                                 & VL_SHIFTRS_III(16,32,32, 
                                                                  ((IData)(0x00000800U) 
                                                                   + __Vfunc_round2__150__x), 0x0000000cU));
                __Vfunc_b_0__142__res = ((0xffff0000U 
                                          & __Vfunc_b_0__142__res) 
                                         | (IData)(__Vfunc_round2__150__Vfuncout));
                __Vfunc_b_0__142__Vfuncout = __Vfunc_b_0__142__res;
                __Vfunc_b_1__141__temp = __Vfunc_b_0__142__Vfuncout;
                __Vfunc_b_1__141__res = ((__Vfunc_b_1__141__temp 
                                          << 0x00000010U) 
                                         | (__Vfunc_b_1__141__temp 
                                            >> 0x00000010U));
                __Vfunc_b_1__141__Vfuncout = __Vfunc_b_1__141__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__b_res 
                    = __Vfunc_b_1__141__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v138 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v138 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v139 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__b_res);
                __Vfunc_b_1__141__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[22U];
                __Vfunc_b_1__141__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[25U];
                __Vfunc_b_0__142__t_b = __Vfunc_b_1__141__t_b;
                __Vfunc_b_0__142__t_a = __Vfunc_b_1__141__t_a;
                __Vfunc_b_0__142__res = 0;
                __Vfunc_b_0__142__x = (VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__142__t_a)), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 ([&]() {
                                    __Vfunc_cos128__143__Vfuncout 
                                        = (0x0000ffffU 
                                           & (- vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[40U]));
                                }(), (IData)(__Vfunc_cos128__143__Vfuncout)))) 
                                       - VL_MULS_III(32, 
                                                     VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__142__t_b)), 
                                                     VL_EXTENDS_II(32,16, 
                                                                   ([&]() {
                                    __Vfunc_cos128__145__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[24U];
                                    __Vfunc_sin128__144__Vfuncout 
                                        = __Vfunc_cos128__145__Vfuncout;
                                }(), (IData)(__Vfunc_sin128__144__Vfuncout)))));
                __Vfunc_b_0__142__y = (VL_MULS_III(32, 
                                                   VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__142__t_a)), 
                                                   VL_EXTENDS_II(32,16, 
                                                                 ([&]() {
                                    __Vfunc_cos128__147__Vfuncout 
                                        = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[24U];
                                    __Vfunc_sin128__146__Vfuncout 
                                        = __Vfunc_cos128__147__Vfuncout;
                                }(), (IData)(__Vfunc_sin128__146__Vfuncout)))) 
                                       + VL_MULS_III(32, 
                                                     VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__142__t_b)), 
                                                     VL_EXTENDS_II(32,16, 
                                                                   ([&]() {
                                    __Vfunc_cos128__148__Vfuncout 
                                        = (0x0000ffffU 
                                           & (- vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[40U]));
                                }(), (IData)(__Vfunc_cos128__148__Vfuncout)))));
                __Vfunc_round2__149__x = __Vfunc_b_0__142__x;
                __Vfunc_round2__149__Vfuncout = (0x0000ffffU 
                                                 & VL_SHIFTRS_III(16,32,32, 
                                                                  ((IData)(0x00000800U) 
                                                                   + __Vfunc_round2__149__x), 0x0000000cU));
                __Vfunc_b_0__142__res = ((0x0000ffffU 
                                          & __Vfunc_b_0__142__res) 
                                         | ((IData)(__Vfunc_round2__149__Vfuncout) 
                                            << 0x00000010U));
                __Vfunc_round2__150__x = __Vfunc_b_0__142__y;
                __Vfunc_round2__150__Vfuncout = (0x0000ffffU 
                                                 & VL_SHIFTRS_III(16,32,32, 
                                                                  ((IData)(0x00000800U) 
                                                                   + __Vfunc_round2__150__x), 0x0000000cU));
                __Vfunc_b_0__142__res = ((0xffff0000U 
                                          & __Vfunc_b_0__142__res) 
                                         | (IData)(__Vfunc_round2__150__Vfuncout));
                __Vfunc_b_0__142__Vfuncout = __Vfunc_b_0__142__res;
                __Vfunc_b_1__141__temp = __Vfunc_b_0__142__Vfuncout;
                __Vfunc_b_1__141__res = ((__Vfunc_b_1__141__temp 
                                          << 0x00000010U) 
                                         | (__Vfunc_b_1__141__temp 
                                            >> 0x00000010U));
                __Vfunc_b_1__141__Vfuncout = __Vfunc_b_1__141__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__b_res 
                    = __Vfunc_b_1__141__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v140 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v140 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v141 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__b_res);
            } else {
                __Vfunc_h__151__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[9U];
                __Vfunc_h__151__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[8U];
                __Vfunc_h__151__temp = (((IData)(__Vfunc_h__151__t_a) 
                                         << 0x00000010U) 
                                        | (IData)(__Vfunc_h__151__t_b));
                __Vfunc_h__151__res = ((((__Vfunc_h__151__temp 
                                          >> 0x00000010U) 
                                         + __Vfunc_h__151__temp) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & ((__Vfunc_h__151__temp 
                                              >> 0x00000010U) 
                                             - __Vfunc_h__151__temp)));
                __Vfunc_h__151__Vfuncout = __Vfunc_h__151__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk11__DOT__unnamedblk12__DOT__b_res 
                    = __Vfunc_h__151__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v142 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk11__DOT__unnamedblk12__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v142 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v143 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk11__DOT__unnamedblk12__DOT__b_res);
                __Vfunc_h__151__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[11U];
                __Vfunc_h__151__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[10U];
                __Vfunc_h__151__temp = (((IData)(__Vfunc_h__151__t_b) 
                                         << 0x00000010U) 
                                        | (IData)(__Vfunc_h__151__t_a));
                __Vfunc_h__151__res = ((((__Vfunc_h__151__temp 
                                          >> 0x00000010U) 
                                         + __Vfunc_h__151__temp) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & ((__Vfunc_h__151__temp 
                                              >> 0x00000010U) 
                                             - __Vfunc_h__151__temp)));
                __Vfunc_h__151__Vfuncout = __Vfunc_h__151__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk11__DOT__unnamedblk12__DOT__b_res 
                    = __Vfunc_h__151__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v144 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk11__DOT__unnamedblk12__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v144 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v145 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk11__DOT__unnamedblk12__DOT__b_res);
                __Vfunc_h__151__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[13U];
                __Vfunc_h__151__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[12U];
                __Vfunc_h__151__temp = (((IData)(__Vfunc_h__151__t_a) 
                                         << 0x00000010U) 
                                        | (IData)(__Vfunc_h__151__t_b));
                __Vfunc_h__151__res = ((((__Vfunc_h__151__temp 
                                          >> 0x00000010U) 
                                         + __Vfunc_h__151__temp) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & ((__Vfunc_h__151__temp 
                                              >> 0x00000010U) 
                                             - __Vfunc_h__151__temp)));
                __Vfunc_h__151__Vfuncout = __Vfunc_h__151__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk11__DOT__unnamedblk12__DOT__b_res 
                    = __Vfunc_h__151__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v146 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk11__DOT__unnamedblk12__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v146 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v147 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk11__DOT__unnamedblk12__DOT__b_res);
                __Vfunc_h__151__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[15U];
                __Vfunc_h__151__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[14U];
                __Vfunc_h__151__temp = (((IData)(__Vfunc_h__151__t_b) 
                                         << 0x00000010U) 
                                        | (IData)(__Vfunc_h__151__t_a));
                __Vfunc_h__151__res = ((((__Vfunc_h__151__temp 
                                          >> 0x00000010U) 
                                         + __Vfunc_h__151__temp) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & ((__Vfunc_h__151__temp 
                                              >> 0x00000010U) 
                                             - __Vfunc_h__151__temp)));
                __Vfunc_h__151__Vfuncout = __Vfunc_h__151__res;
                vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk11__DOT__unnamedblk12__DOT__b_res 
                    = __Vfunc_h__151__Vfuncout;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v148 
                    = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk11__DOT__unnamedblk12__DOT__b_res 
                       >> 0x00000010U);
                __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v148 = 1U;
                __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v149 
                    = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk11__DOT__unnamedblk12__DOT__b_res);
            }
        } else if ((1U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
            __Vfunc_b_0__152__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[7U];
            __Vfunc_b_0__152__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[4U];
            __Vfunc_b_0__152__res = 0;
            __Vfunc_b_0__152__x = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__152__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_cos128__153__Vfuncout 
                                    = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[56U];
                            }(), (IData)(__Vfunc_cos128__153__Vfuncout)))) 
                                   - VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__152__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_cos128__155__Vfuncout 
                                    = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[8U];
                                __Vfunc_sin128__154__Vfuncout 
                                    = __Vfunc_cos128__155__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__154__Vfuncout)))));
            __Vfunc_b_0__152__y = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__152__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_cos128__157__Vfuncout 
                                    = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[8U];
                                __Vfunc_sin128__156__Vfuncout 
                                    = __Vfunc_cos128__157__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__156__Vfuncout)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__152__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_cos128__158__Vfuncout 
                                    = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[56U];
                            }(), (IData)(__Vfunc_cos128__158__Vfuncout)))));
            __Vfunc_round2__159__x = __Vfunc_b_0__152__x;
            __Vfunc_round2__159__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__159__x), 0x0000000cU));
            __Vfunc_b_0__152__res = ((0x0000ffffU & __Vfunc_b_0__152__res) 
                                     | ((IData)(__Vfunc_round2__159__Vfuncout) 
                                        << 0x00000010U));
            __Vfunc_round2__160__x = __Vfunc_b_0__152__y;
            __Vfunc_round2__160__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__160__x), 0x0000000cU));
            __Vfunc_b_0__152__res = ((0xffff0000U & __Vfunc_b_0__152__res) 
                                     | (IData)(__Vfunc_round2__160__Vfuncout));
            __Vfunc_b_0__152__Vfuncout = __Vfunc_b_0__152__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk9__DOT__unnamedblk10__DOT__b_res 
                = __Vfunc_b_0__152__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v150 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk9__DOT__unnamedblk10__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v150 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v151 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk9__DOT__unnamedblk10__DOT__b_res);
            __Vfunc_b_0__152__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[6U];
            __Vfunc_b_0__152__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[5U];
            __Vfunc_b_0__152__res = 0;
            __Vfunc_b_0__152__x = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__152__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_cos128__153__Vfuncout 
                                    = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[24U];
                            }(), (IData)(__Vfunc_cos128__153__Vfuncout)))) 
                                   - VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__152__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_cos128__155__Vfuncout 
                                    = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[40U];
                                __Vfunc_sin128__154__Vfuncout 
                                    = __Vfunc_cos128__155__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__154__Vfuncout)))));
            __Vfunc_b_0__152__y = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__152__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_cos128__157__Vfuncout 
                                    = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[40U];
                                __Vfunc_sin128__156__Vfuncout 
                                    = __Vfunc_cos128__157__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__156__Vfuncout)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__152__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_cos128__158__Vfuncout 
                                    = vlSymsp->TOP__av1_helper_functions.Cos128_Lookup[24U];
                            }(), (IData)(__Vfunc_cos128__158__Vfuncout)))));
            __Vfunc_round2__159__x = __Vfunc_b_0__152__x;
            __Vfunc_round2__159__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__159__x), 0x0000000cU));
            __Vfunc_b_0__152__res = ((0x0000ffffU & __Vfunc_b_0__152__res) 
                                     | ((IData)(__Vfunc_round2__159__Vfuncout) 
                                        << 0x00000010U));
            __Vfunc_round2__160__x = __Vfunc_b_0__152__y;
            __Vfunc_round2__160__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__160__x), 0x0000000cU));
            __Vfunc_b_0__152__res = ((0xffff0000U & __Vfunc_b_0__152__res) 
                                     | (IData)(__Vfunc_round2__160__Vfuncout));
            __Vfunc_b_0__152__Vfuncout = __Vfunc_b_0__152__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk9__DOT__unnamedblk10__DOT__b_res 
                = __Vfunc_b_0__152__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v152 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk9__DOT__unnamedblk10__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v152 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v153 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk9__DOT__unnamedblk10__DOT__b_res);
        } else {
            __Vfunc_h__161__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[17U];
            __Vfunc_h__161__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[16U];
            __Vfunc_h__161__temp = (((IData)(__Vfunc_h__161__t_a) 
                                     << 0x00000010U) 
                                    | (IData)(__Vfunc_h__161__t_b));
            __Vfunc_h__161__res = ((((__Vfunc_h__161__temp 
                                      >> 0x00000010U) 
                                     + __Vfunc_h__161__temp) 
                                    << 0x00000010U) 
                                   | (0x0000ffffU & 
                                      ((__Vfunc_h__161__temp 
                                        >> 0x00000010U) 
                                       - __Vfunc_h__161__temp)));
            __Vfunc_h__161__Vfuncout = __Vfunc_h__161__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res 
                = __Vfunc_h__161__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v154 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v154 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v155 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res);
            __Vfunc_h__161__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[19U];
            __Vfunc_h__161__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[18U];
            __Vfunc_h__161__temp = (((IData)(__Vfunc_h__161__t_b) 
                                     << 0x00000010U) 
                                    | (IData)(__Vfunc_h__161__t_a));
            __Vfunc_h__161__res = ((((__Vfunc_h__161__temp 
                                      >> 0x00000010U) 
                                     + __Vfunc_h__161__temp) 
                                    << 0x00000010U) 
                                   | (0x0000ffffU & 
                                      ((__Vfunc_h__161__temp 
                                        >> 0x00000010U) 
                                       - __Vfunc_h__161__temp)));
            __Vfunc_h__161__Vfuncout = __Vfunc_h__161__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res 
                = __Vfunc_h__161__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v156 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v156 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v157 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res);
            __Vfunc_h__161__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[21U];
            __Vfunc_h__161__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[20U];
            __Vfunc_h__161__temp = (((IData)(__Vfunc_h__161__t_a) 
                                     << 0x00000010U) 
                                    | (IData)(__Vfunc_h__161__t_b));
            __Vfunc_h__161__res = ((((__Vfunc_h__161__temp 
                                      >> 0x00000010U) 
                                     + __Vfunc_h__161__temp) 
                                    << 0x00000010U) 
                                   | (0x0000ffffU & 
                                      ((__Vfunc_h__161__temp 
                                        >> 0x00000010U) 
                                       - __Vfunc_h__161__temp)));
            __Vfunc_h__161__Vfuncout = __Vfunc_h__161__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res 
                = __Vfunc_h__161__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v158 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v158 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v159 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res);
            __Vfunc_h__161__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[23U];
            __Vfunc_h__161__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[22U];
            __Vfunc_h__161__temp = (((IData)(__Vfunc_h__161__t_b) 
                                     << 0x00000010U) 
                                    | (IData)(__Vfunc_h__161__t_a));
            __Vfunc_h__161__res = ((((__Vfunc_h__161__temp 
                                      >> 0x00000010U) 
                                     + __Vfunc_h__161__temp) 
                                    << 0x00000010U) 
                                   | (0x0000ffffU & 
                                      ((__Vfunc_h__161__temp 
                                        >> 0x00000010U) 
                                       - __Vfunc_h__161__temp)));
            __Vfunc_h__161__Vfuncout = __Vfunc_h__161__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res 
                = __Vfunc_h__161__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v160 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v160 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v161 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res);
            __Vfunc_h__161__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[25U];
            __Vfunc_h__161__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[24U];
            __Vfunc_h__161__temp = (((IData)(__Vfunc_h__161__t_a) 
                                     << 0x00000010U) 
                                    | (IData)(__Vfunc_h__161__t_b));
            __Vfunc_h__161__res = ((((__Vfunc_h__161__temp 
                                      >> 0x00000010U) 
                                     + __Vfunc_h__161__temp) 
                                    << 0x00000010U) 
                                   | (0x0000ffffU & 
                                      ((__Vfunc_h__161__temp 
                                        >> 0x00000010U) 
                                       - __Vfunc_h__161__temp)));
            __Vfunc_h__161__Vfuncout = __Vfunc_h__161__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res 
                = __Vfunc_h__161__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v162 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v162 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v163 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res);
            __Vfunc_h__161__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[27U];
            __Vfunc_h__161__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[26U];
            __Vfunc_h__161__temp = (((IData)(__Vfunc_h__161__t_b) 
                                     << 0x00000010U) 
                                    | (IData)(__Vfunc_h__161__t_a));
            __Vfunc_h__161__res = ((((__Vfunc_h__161__temp 
                                      >> 0x00000010U) 
                                     + __Vfunc_h__161__temp) 
                                    << 0x00000010U) 
                                   | (0x0000ffffU & 
                                      ((__Vfunc_h__161__temp 
                                        >> 0x00000010U) 
                                       - __Vfunc_h__161__temp)));
            __Vfunc_h__161__Vfuncout = __Vfunc_h__161__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res 
                = __Vfunc_h__161__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v164 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v164 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v165 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res);
            __Vfunc_h__161__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[29U];
            __Vfunc_h__161__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[28U];
            __Vfunc_h__161__temp = (((IData)(__Vfunc_h__161__t_a) 
                                     << 0x00000010U) 
                                    | (IData)(__Vfunc_h__161__t_b));
            __Vfunc_h__161__res = ((((__Vfunc_h__161__temp 
                                      >> 0x00000010U) 
                                     + __Vfunc_h__161__temp) 
                                    << 0x00000010U) 
                                   | (0x0000ffffU & 
                                      ((__Vfunc_h__161__temp 
                                        >> 0x00000010U) 
                                       - __Vfunc_h__161__temp)));
            __Vfunc_h__161__Vfuncout = __Vfunc_h__161__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res 
                = __Vfunc_h__161__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v166 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v166 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v167 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res);
            __Vfunc_h__161__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[31U];
            __Vfunc_h__161__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[30U];
            __Vfunc_h__161__temp = (((IData)(__Vfunc_h__161__t_b) 
                                     << 0x00000010U) 
                                    | (IData)(__Vfunc_h__161__t_a));
            __Vfunc_h__161__res = ((((__Vfunc_h__161__temp 
                                      >> 0x00000010U) 
                                     + __Vfunc_h__161__temp) 
                                    << 0x00000010U) 
                                   | (0x0000ffffU & 
                                      ((__Vfunc_h__161__temp 
                                        >> 0x00000010U) 
                                       - __Vfunc_h__161__temp)));
            __Vfunc_h__161__Vfuncout = __Vfunc_h__161__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res 
                = __Vfunc_h__161__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v168 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v168 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v169 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res);
        }
    } else if ((2U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
            __Vfunc_b_0__162__angle = (0x000000ffU 
                                       & ((IData)(0x0cU) 
                                          + VL_SHIFTL_III(8,32,32, 
                                                          VL_EXTEND_II(32,16, 
                                                                       ([&]() {
                                    __Vfunc_brev__163__in_val = 3U;
                                    __Vfunc_brev__163__numBits = 2U;
                                    __Vfunc_brev__163__out_val = 0U;
                                    __Vfunc_brev__163__unnamedblk1__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_brev__163__unnamedblk1__DOT__i, __Vfunc_brev__163__numBits)) {
                                        __Vfunc_brev__163__out_val 
                                            = (0x0000ffffU 
                                               & ((IData)(__Vfunc_brev__163__out_val) 
                                                  + 
                                                  VL_SHIFTL_III(16,32,32, 
                                                                (1U 
                                                                 & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__163__in_val), __Vfunc_brev__163__unnamedblk1__DOT__i)), 
                                                                ((__Vfunc_brev__163__numBits 
                                                                  - (IData)(1U)) 
                                                                 - __Vfunc_brev__163__unnamedblk1__DOT__i))));
                                        __Vfunc_brev__163__unnamedblk1__DOT__i 
                                            = ((IData)(1U) 
                                               + __Vfunc_brev__163__unnamedblk1__DOT__i);
                                    }
                                    __Vfunc_brev__163__Vfuncout 
                                        = __Vfunc_brev__163__out_val;
                                }(), (IData)(__Vfunc_brev__163__Vfuncout))), 4U)));
            __Vfunc_b_0__162__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[15U];
            __Vfunc_b_0__162__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[8U];
            __Vfunc_b_0__162__res = 0;
            __Vfunc_b_0__162__x = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__162__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_cos128__164__angle 
                                    = __Vfunc_b_0__162__angle;
                                __Vfunc_cos128__164__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__164__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__164__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__164__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__164__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__164__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__164__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__164__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__164__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__164__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__164__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__164__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__164__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__164__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__164__Vfuncout)))) 
                                   - VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__162__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_sin128__165__angle 
                                    = __Vfunc_b_0__162__angle;
                                __Vfunc_cos128__166__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__165__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__166__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__166__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__166__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__166__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__166__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__166__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__166__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__166__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__166__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__166__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__166__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__166__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__166__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__166__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__165__Vfuncout 
                                    = __Vfunc_cos128__166__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__165__Vfuncout)))));
            __Vfunc_b_0__162__y = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__162__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_sin128__167__angle 
                                    = __Vfunc_b_0__162__angle;
                                __Vfunc_cos128__168__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__167__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__168__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__168__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__168__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__168__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__168__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__168__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__168__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__168__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__168__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__168__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__168__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__168__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__168__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__168__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__167__Vfuncout 
                                    = __Vfunc_cos128__168__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__167__Vfuncout)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__162__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_cos128__169__angle 
                                    = __Vfunc_b_0__162__angle;
                                __Vfunc_cos128__169__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__169__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__169__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__169__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__169__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__169__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__169__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__169__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__169__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__169__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__169__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__169__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__169__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__169__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__169__Vfuncout)))));
            __Vfunc_round2__170__x = __Vfunc_b_0__162__x;
            __Vfunc_round2__170__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__170__x), 0x0000000cU));
            __Vfunc_b_0__162__res = ((0x0000ffffU & __Vfunc_b_0__162__res) 
                                     | ((IData)(__Vfunc_round2__170__Vfuncout) 
                                        << 0x00000010U));
            __Vfunc_round2__171__x = __Vfunc_b_0__162__y;
            __Vfunc_round2__171__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__171__x), 0x0000000cU));
            __Vfunc_b_0__162__res = ((0xffff0000U & __Vfunc_b_0__162__res) 
                                     | (IData)(__Vfunc_round2__171__Vfuncout));
            __Vfunc_b_0__162__Vfuncout = __Vfunc_b_0__162__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_res 
                = __Vfunc_b_0__162__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v170 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v170 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v171 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_res);
            __Vfunc_b_0__162__angle = (0x000000ffU 
                                       & ((IData)(0x0cU) 
                                          + VL_SHIFTL_III(8,32,32, 
                                                          VL_EXTEND_II(32,16, 
                                                                       ([&]() {
                                    __Vfunc_brev__163__in_val = 2U;
                                    __Vfunc_brev__163__numBits = 2U;
                                    __Vfunc_brev__163__out_val = 0U;
                                    __Vfunc_brev__163__unnamedblk1__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_brev__163__unnamedblk1__DOT__i, __Vfunc_brev__163__numBits)) {
                                        __Vfunc_brev__163__out_val 
                                            = (0x0000ffffU 
                                               & ((IData)(__Vfunc_brev__163__out_val) 
                                                  + 
                                                  VL_SHIFTL_III(16,32,32, 
                                                                (1U 
                                                                 & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__163__in_val), __Vfunc_brev__163__unnamedblk1__DOT__i)), 
                                                                ((__Vfunc_brev__163__numBits 
                                                                  - (IData)(1U)) 
                                                                 - __Vfunc_brev__163__unnamedblk1__DOT__i))));
                                        __Vfunc_brev__163__unnamedblk1__DOT__i 
                                            = ((IData)(1U) 
                                               + __Vfunc_brev__163__unnamedblk1__DOT__i);
                                    }
                                    __Vfunc_brev__163__Vfuncout 
                                        = __Vfunc_brev__163__out_val;
                                }(), (IData)(__Vfunc_brev__163__Vfuncout))), 4U)));
            __Vfunc_b_0__162__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[14U];
            __Vfunc_b_0__162__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[9U];
            __Vfunc_b_0__162__res = 0;
            __Vfunc_b_0__162__x = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__162__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_cos128__164__angle 
                                    = __Vfunc_b_0__162__angle;
                                __Vfunc_cos128__164__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__164__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__164__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__164__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__164__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__164__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__164__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__164__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__164__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__164__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__164__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__164__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__164__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__164__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__164__Vfuncout)))) 
                                   - VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__162__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_sin128__165__angle 
                                    = __Vfunc_b_0__162__angle;
                                __Vfunc_cos128__166__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__165__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__166__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__166__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__166__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__166__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__166__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__166__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__166__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__166__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__166__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__166__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__166__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__166__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__166__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__166__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__165__Vfuncout 
                                    = __Vfunc_cos128__166__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__165__Vfuncout)))));
            __Vfunc_b_0__162__y = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__162__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_sin128__167__angle 
                                    = __Vfunc_b_0__162__angle;
                                __Vfunc_cos128__168__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__167__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__168__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__168__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__168__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__168__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__168__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__168__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__168__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__168__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__168__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__168__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__168__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__168__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__168__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__168__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__167__Vfuncout 
                                    = __Vfunc_cos128__168__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__167__Vfuncout)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__162__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_cos128__169__angle 
                                    = __Vfunc_b_0__162__angle;
                                __Vfunc_cos128__169__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__169__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__169__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__169__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__169__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__169__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__169__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__169__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__169__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__169__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__169__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__169__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__169__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__169__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__169__Vfuncout)))));
            __Vfunc_round2__170__x = __Vfunc_b_0__162__x;
            __Vfunc_round2__170__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__170__x), 0x0000000cU));
            __Vfunc_b_0__162__res = ((0x0000ffffU & __Vfunc_b_0__162__res) 
                                     | ((IData)(__Vfunc_round2__170__Vfuncout) 
                                        << 0x00000010U));
            __Vfunc_round2__171__x = __Vfunc_b_0__162__y;
            __Vfunc_round2__171__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__171__x), 0x0000000cU));
            __Vfunc_b_0__162__res = ((0xffff0000U & __Vfunc_b_0__162__res) 
                                     | (IData)(__Vfunc_round2__171__Vfuncout));
            __Vfunc_b_0__162__Vfuncout = __Vfunc_b_0__162__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_res 
                = __Vfunc_b_0__162__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v172 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v172 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v173 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_res);
            __Vfunc_b_0__162__angle = (0x000000ffU 
                                       & ((IData)(0x0cU) 
                                          + VL_SHIFTL_III(8,32,32, 
                                                          VL_EXTEND_II(32,16, 
                                                                       ([&]() {
                                    __Vfunc_brev__163__in_val = 1U;
                                    __Vfunc_brev__163__numBits = 2U;
                                    __Vfunc_brev__163__out_val = 0U;
                                    __Vfunc_brev__163__unnamedblk1__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_brev__163__unnamedblk1__DOT__i, __Vfunc_brev__163__numBits)) {
                                        __Vfunc_brev__163__out_val 
                                            = (0x0000ffffU 
                                               & ((IData)(__Vfunc_brev__163__out_val) 
                                                  + 
                                                  VL_SHIFTL_III(16,32,32, 
                                                                (1U 
                                                                 & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__163__in_val), __Vfunc_brev__163__unnamedblk1__DOT__i)), 
                                                                ((__Vfunc_brev__163__numBits 
                                                                  - (IData)(1U)) 
                                                                 - __Vfunc_brev__163__unnamedblk1__DOT__i))));
                                        __Vfunc_brev__163__unnamedblk1__DOT__i 
                                            = ((IData)(1U) 
                                               + __Vfunc_brev__163__unnamedblk1__DOT__i);
                                    }
                                    __Vfunc_brev__163__Vfuncout 
                                        = __Vfunc_brev__163__out_val;
                                }(), (IData)(__Vfunc_brev__163__Vfuncout))), 4U)));
            __Vfunc_b_0__162__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[13U];
            __Vfunc_b_0__162__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[10U];
            __Vfunc_b_0__162__res = 0;
            __Vfunc_b_0__162__x = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__162__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_cos128__164__angle 
                                    = __Vfunc_b_0__162__angle;
                                __Vfunc_cos128__164__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__164__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__164__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__164__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__164__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__164__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__164__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__164__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__164__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__164__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__164__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__164__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__164__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__164__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__164__Vfuncout)))) 
                                   - VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__162__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_sin128__165__angle 
                                    = __Vfunc_b_0__162__angle;
                                __Vfunc_cos128__166__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__165__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__166__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__166__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__166__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__166__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__166__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__166__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__166__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__166__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__166__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__166__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__166__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__166__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__166__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__166__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__165__Vfuncout 
                                    = __Vfunc_cos128__166__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__165__Vfuncout)))));
            __Vfunc_b_0__162__y = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__162__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_sin128__167__angle 
                                    = __Vfunc_b_0__162__angle;
                                __Vfunc_cos128__168__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__167__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__168__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__168__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__168__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__168__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__168__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__168__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__168__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__168__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__168__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__168__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__168__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__168__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__168__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__168__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__167__Vfuncout 
                                    = __Vfunc_cos128__168__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__167__Vfuncout)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__162__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_cos128__169__angle 
                                    = __Vfunc_b_0__162__angle;
                                __Vfunc_cos128__169__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__169__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__169__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__169__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__169__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__169__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__169__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__169__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__169__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__169__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__169__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__169__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__169__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__169__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__169__Vfuncout)))));
            __Vfunc_round2__170__x = __Vfunc_b_0__162__x;
            __Vfunc_round2__170__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__170__x), 0x0000000cU));
            __Vfunc_b_0__162__res = ((0x0000ffffU & __Vfunc_b_0__162__res) 
                                     | ((IData)(__Vfunc_round2__170__Vfuncout) 
                                        << 0x00000010U));
            __Vfunc_round2__171__x = __Vfunc_b_0__162__y;
            __Vfunc_round2__171__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__171__x), 0x0000000cU));
            __Vfunc_b_0__162__res = ((0xffff0000U & __Vfunc_b_0__162__res) 
                                     | (IData)(__Vfunc_round2__171__Vfuncout));
            __Vfunc_b_0__162__Vfuncout = __Vfunc_b_0__162__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_res 
                = __Vfunc_b_0__162__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v174 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v174 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v175 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_res);
            __Vfunc_b_0__162__angle = (0x000000ffU 
                                       & ((IData)(0x0cU) 
                                          + VL_SHIFTL_III(8,32,32, 
                                                          VL_EXTEND_II(32,16, 
                                                                       ([&]() {
                                    __Vfunc_brev__163__in_val = 0U;
                                    __Vfunc_brev__163__numBits = 2U;
                                    __Vfunc_brev__163__out_val = 0U;
                                    __Vfunc_brev__163__unnamedblk1__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_brev__163__unnamedblk1__DOT__i, __Vfunc_brev__163__numBits)) {
                                        __Vfunc_brev__163__out_val 
                                            = (0x0000ffffU 
                                               & ((IData)(__Vfunc_brev__163__out_val) 
                                                  + 
                                                  VL_SHIFTL_III(16,32,32, 
                                                                (1U 
                                                                 & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__163__in_val), __Vfunc_brev__163__unnamedblk1__DOT__i)), 
                                                                ((__Vfunc_brev__163__numBits 
                                                                  - (IData)(1U)) 
                                                                 - __Vfunc_brev__163__unnamedblk1__DOT__i))));
                                        __Vfunc_brev__163__unnamedblk1__DOT__i 
                                            = ((IData)(1U) 
                                               + __Vfunc_brev__163__unnamedblk1__DOT__i);
                                    }
                                    __Vfunc_brev__163__Vfuncout 
                                        = __Vfunc_brev__163__out_val;
                                }(), (IData)(__Vfunc_brev__163__Vfuncout))), 4U)));
            __Vfunc_b_0__162__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[12U];
            __Vfunc_b_0__162__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[11U];
            __Vfunc_b_0__162__res = 0;
            __Vfunc_b_0__162__x = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__162__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_cos128__164__angle 
                                    = __Vfunc_b_0__162__angle;
                                __Vfunc_cos128__164__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__164__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__164__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__164__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__164__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__164__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__164__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__164__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__164__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__164__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__164__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__164__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__164__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__164__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__164__Vfuncout)))) 
                                   - VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__162__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_sin128__165__angle 
                                    = __Vfunc_b_0__162__angle;
                                __Vfunc_cos128__166__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__165__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__166__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__166__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__166__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__166__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__166__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__166__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__166__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__166__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__166__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__166__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__166__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__166__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__166__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__166__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__165__Vfuncout 
                                    = __Vfunc_cos128__166__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__165__Vfuncout)))));
            __Vfunc_b_0__162__y = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__162__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_sin128__167__angle 
                                    = __Vfunc_b_0__162__angle;
                                __Vfunc_cos128__168__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__167__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__168__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__168__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__168__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__168__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__168__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__168__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__168__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__168__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__168__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__168__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__168__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__168__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__168__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__168__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__167__Vfuncout 
                                    = __Vfunc_cos128__168__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__167__Vfuncout)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__162__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_cos128__169__angle 
                                    = __Vfunc_b_0__162__angle;
                                __Vfunc_cos128__169__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__169__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__169__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__169__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__169__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__169__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__169__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__169__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__169__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__169__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__169__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__169__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__169__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__169__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__169__Vfuncout)))));
            __Vfunc_round2__170__x = __Vfunc_b_0__162__x;
            __Vfunc_round2__170__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__170__x), 0x0000000cU));
            __Vfunc_b_0__162__res = ((0x0000ffffU & __Vfunc_b_0__162__res) 
                                     | ((IData)(__Vfunc_round2__170__Vfuncout) 
                                        << 0x00000010U));
            __Vfunc_round2__171__x = __Vfunc_b_0__162__y;
            __Vfunc_round2__171__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__171__x), 0x0000000cU));
            __Vfunc_b_0__162__res = ((0xffff0000U & __Vfunc_b_0__162__res) 
                                     | (IData)(__Vfunc_round2__171__Vfuncout));
            __Vfunc_b_0__162__Vfuncout = __Vfunc_b_0__162__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_res 
                = __Vfunc_b_0__162__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v176 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v176 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v177 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_res);
        } else {
            __Vfunc_b_0__172__angle = (0x000000ffU 
                                       & ((IData)(6U) 
                                          + VL_SHIFTL_III(8,32,32, 
                                                          VL_EXTEND_II(32,16, 
                                                                       ([&]() {
                                    __Vfunc_brev__173__in_val = 7U;
                                    __Vfunc_brev__173__numBits = 3U;
                                    __Vfunc_brev__173__out_val = 0U;
                                    __Vfunc_brev__173__unnamedblk1__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_brev__173__unnamedblk1__DOT__i, __Vfunc_brev__173__numBits)) {
                                        __Vfunc_brev__173__out_val 
                                            = (0x0000ffffU 
                                               & ((IData)(__Vfunc_brev__173__out_val) 
                                                  + 
                                                  VL_SHIFTL_III(16,32,32, 
                                                                (1U 
                                                                 & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__173__in_val), __Vfunc_brev__173__unnamedblk1__DOT__i)), 
                                                                ((__Vfunc_brev__173__numBits 
                                                                  - (IData)(1U)) 
                                                                 - __Vfunc_brev__173__unnamedblk1__DOT__i))));
                                        __Vfunc_brev__173__unnamedblk1__DOT__i 
                                            = ((IData)(1U) 
                                               + __Vfunc_brev__173__unnamedblk1__DOT__i);
                                    }
                                    __Vfunc_brev__173__Vfuncout 
                                        = __Vfunc_brev__173__out_val;
                                }(), (IData)(__Vfunc_brev__173__Vfuncout))), 3U)));
            __Vfunc_b_0__172__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[31U];
            __Vfunc_b_0__172__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[16U];
            __Vfunc_b_0__172__res = 0;
            __Vfunc_b_0__172__x = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_cos128__174__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__174__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__174__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__174__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__174__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__174__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__174__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__174__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__174__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__174__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__174__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__174__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__174__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__174__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__174__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__174__Vfuncout)))) 
                                   - VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_sin128__175__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__176__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__175__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__176__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__176__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__176__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__176__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__176__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__176__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__176__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__176__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__176__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__176__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__176__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__176__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__176__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__176__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__175__Vfuncout 
                                    = __Vfunc_cos128__176__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__175__Vfuncout)))));
            __Vfunc_b_0__172__y = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_sin128__177__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__178__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__177__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__178__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__178__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__178__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__178__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__178__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__178__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__178__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__178__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__178__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__178__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__178__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__178__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__178__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__178__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__177__Vfuncout 
                                    = __Vfunc_cos128__178__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__177__Vfuncout)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_cos128__179__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__179__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__179__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__179__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__179__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__179__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__179__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__179__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__179__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__179__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__179__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__179__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__179__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__179__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__179__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__179__Vfuncout)))));
            __Vfunc_round2__180__x = __Vfunc_b_0__172__x;
            __Vfunc_round2__180__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__180__x), 0x0000000cU));
            __Vfunc_b_0__172__res = ((0x0000ffffU & __Vfunc_b_0__172__res) 
                                     | ((IData)(__Vfunc_round2__180__Vfuncout) 
                                        << 0x00000010U));
            __Vfunc_round2__181__x = __Vfunc_b_0__172__y;
            __Vfunc_round2__181__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__181__x), 0x0000000cU));
            __Vfunc_b_0__172__res = ((0xffff0000U & __Vfunc_b_0__172__res) 
                                     | (IData)(__Vfunc_round2__181__Vfuncout));
            __Vfunc_b_0__172__Vfuncout = __Vfunc_b_0__172__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res 
                = __Vfunc_b_0__172__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v178 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v178 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v179 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res);
            __Vfunc_b_0__172__angle = (0x000000ffU 
                                       & ((IData)(6U) 
                                          + VL_SHIFTL_III(8,32,32, 
                                                          VL_EXTEND_II(32,16, 
                                                                       ([&]() {
                                    __Vfunc_brev__173__in_val = 6U;
                                    __Vfunc_brev__173__numBits = 3U;
                                    __Vfunc_brev__173__out_val = 0U;
                                    __Vfunc_brev__173__unnamedblk1__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_brev__173__unnamedblk1__DOT__i, __Vfunc_brev__173__numBits)) {
                                        __Vfunc_brev__173__out_val 
                                            = (0x0000ffffU 
                                               & ((IData)(__Vfunc_brev__173__out_val) 
                                                  + 
                                                  VL_SHIFTL_III(16,32,32, 
                                                                (1U 
                                                                 & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__173__in_val), __Vfunc_brev__173__unnamedblk1__DOT__i)), 
                                                                ((__Vfunc_brev__173__numBits 
                                                                  - (IData)(1U)) 
                                                                 - __Vfunc_brev__173__unnamedblk1__DOT__i))));
                                        __Vfunc_brev__173__unnamedblk1__DOT__i 
                                            = ((IData)(1U) 
                                               + __Vfunc_brev__173__unnamedblk1__DOT__i);
                                    }
                                    __Vfunc_brev__173__Vfuncout 
                                        = __Vfunc_brev__173__out_val;
                                }(), (IData)(__Vfunc_brev__173__Vfuncout))), 3U)));
            __Vfunc_b_0__172__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[30U];
            __Vfunc_b_0__172__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[17U];
            __Vfunc_b_0__172__res = 0;
            __Vfunc_b_0__172__x = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_cos128__174__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__174__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__174__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__174__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__174__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__174__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__174__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__174__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__174__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__174__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__174__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__174__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__174__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__174__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__174__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__174__Vfuncout)))) 
                                   - VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_sin128__175__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__176__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__175__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__176__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__176__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__176__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__176__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__176__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__176__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__176__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__176__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__176__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__176__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__176__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__176__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__176__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__176__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__175__Vfuncout 
                                    = __Vfunc_cos128__176__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__175__Vfuncout)))));
            __Vfunc_b_0__172__y = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_sin128__177__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__178__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__177__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__178__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__178__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__178__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__178__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__178__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__178__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__178__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__178__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__178__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__178__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__178__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__178__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__178__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__178__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__177__Vfuncout 
                                    = __Vfunc_cos128__178__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__177__Vfuncout)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_cos128__179__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__179__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__179__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__179__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__179__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__179__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__179__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__179__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__179__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__179__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__179__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__179__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__179__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__179__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__179__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__179__Vfuncout)))));
            __Vfunc_round2__180__x = __Vfunc_b_0__172__x;
            __Vfunc_round2__180__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__180__x), 0x0000000cU));
            __Vfunc_b_0__172__res = ((0x0000ffffU & __Vfunc_b_0__172__res) 
                                     | ((IData)(__Vfunc_round2__180__Vfuncout) 
                                        << 0x00000010U));
            __Vfunc_round2__181__x = __Vfunc_b_0__172__y;
            __Vfunc_round2__181__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__181__x), 0x0000000cU));
            __Vfunc_b_0__172__res = ((0xffff0000U & __Vfunc_b_0__172__res) 
                                     | (IData)(__Vfunc_round2__181__Vfuncout));
            __Vfunc_b_0__172__Vfuncout = __Vfunc_b_0__172__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res 
                = __Vfunc_b_0__172__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v180 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v180 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v181 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res);
            __Vfunc_b_0__172__angle = (0x000000ffU 
                                       & ((IData)(6U) 
                                          + VL_SHIFTL_III(8,32,32, 
                                                          VL_EXTEND_II(32,16, 
                                                                       ([&]() {
                                    __Vfunc_brev__173__in_val = 5U;
                                    __Vfunc_brev__173__numBits = 3U;
                                    __Vfunc_brev__173__out_val = 0U;
                                    __Vfunc_brev__173__unnamedblk1__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_brev__173__unnamedblk1__DOT__i, __Vfunc_brev__173__numBits)) {
                                        __Vfunc_brev__173__out_val 
                                            = (0x0000ffffU 
                                               & ((IData)(__Vfunc_brev__173__out_val) 
                                                  + 
                                                  VL_SHIFTL_III(16,32,32, 
                                                                (1U 
                                                                 & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__173__in_val), __Vfunc_brev__173__unnamedblk1__DOT__i)), 
                                                                ((__Vfunc_brev__173__numBits 
                                                                  - (IData)(1U)) 
                                                                 - __Vfunc_brev__173__unnamedblk1__DOT__i))));
                                        __Vfunc_brev__173__unnamedblk1__DOT__i 
                                            = ((IData)(1U) 
                                               + __Vfunc_brev__173__unnamedblk1__DOT__i);
                                    }
                                    __Vfunc_brev__173__Vfuncout 
                                        = __Vfunc_brev__173__out_val;
                                }(), (IData)(__Vfunc_brev__173__Vfuncout))), 3U)));
            __Vfunc_b_0__172__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[29U];
            __Vfunc_b_0__172__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[18U];
            __Vfunc_b_0__172__res = 0;
            __Vfunc_b_0__172__x = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_cos128__174__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__174__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__174__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__174__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__174__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__174__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__174__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__174__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__174__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__174__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__174__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__174__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__174__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__174__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__174__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__174__Vfuncout)))) 
                                   - VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_sin128__175__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__176__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__175__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__176__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__176__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__176__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__176__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__176__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__176__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__176__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__176__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__176__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__176__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__176__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__176__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__176__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__176__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__175__Vfuncout 
                                    = __Vfunc_cos128__176__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__175__Vfuncout)))));
            __Vfunc_b_0__172__y = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_sin128__177__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__178__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__177__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__178__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__178__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__178__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__178__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__178__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__178__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__178__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__178__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__178__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__178__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__178__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__178__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__178__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__178__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__177__Vfuncout 
                                    = __Vfunc_cos128__178__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__177__Vfuncout)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_cos128__179__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__179__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__179__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__179__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__179__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__179__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__179__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__179__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__179__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__179__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__179__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__179__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__179__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__179__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__179__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__179__Vfuncout)))));
            __Vfunc_round2__180__x = __Vfunc_b_0__172__x;
            __Vfunc_round2__180__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__180__x), 0x0000000cU));
            __Vfunc_b_0__172__res = ((0x0000ffffU & __Vfunc_b_0__172__res) 
                                     | ((IData)(__Vfunc_round2__180__Vfuncout) 
                                        << 0x00000010U));
            __Vfunc_round2__181__x = __Vfunc_b_0__172__y;
            __Vfunc_round2__181__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__181__x), 0x0000000cU));
            __Vfunc_b_0__172__res = ((0xffff0000U & __Vfunc_b_0__172__res) 
                                     | (IData)(__Vfunc_round2__181__Vfuncout));
            __Vfunc_b_0__172__Vfuncout = __Vfunc_b_0__172__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res 
                = __Vfunc_b_0__172__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v182 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v182 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v183 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res);
            __Vfunc_b_0__172__angle = (0x000000ffU 
                                       & ((IData)(6U) 
                                          + VL_SHIFTL_III(8,32,32, 
                                                          VL_EXTEND_II(32,16, 
                                                                       ([&]() {
                                    __Vfunc_brev__173__in_val = 4U;
                                    __Vfunc_brev__173__numBits = 3U;
                                    __Vfunc_brev__173__out_val = 0U;
                                    __Vfunc_brev__173__unnamedblk1__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_brev__173__unnamedblk1__DOT__i, __Vfunc_brev__173__numBits)) {
                                        __Vfunc_brev__173__out_val 
                                            = (0x0000ffffU 
                                               & ((IData)(__Vfunc_brev__173__out_val) 
                                                  + 
                                                  VL_SHIFTL_III(16,32,32, 
                                                                (1U 
                                                                 & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__173__in_val), __Vfunc_brev__173__unnamedblk1__DOT__i)), 
                                                                ((__Vfunc_brev__173__numBits 
                                                                  - (IData)(1U)) 
                                                                 - __Vfunc_brev__173__unnamedblk1__DOT__i))));
                                        __Vfunc_brev__173__unnamedblk1__DOT__i 
                                            = ((IData)(1U) 
                                               + __Vfunc_brev__173__unnamedblk1__DOT__i);
                                    }
                                    __Vfunc_brev__173__Vfuncout 
                                        = __Vfunc_brev__173__out_val;
                                }(), (IData)(__Vfunc_brev__173__Vfuncout))), 3U)));
            __Vfunc_b_0__172__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[28U];
            __Vfunc_b_0__172__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[19U];
            __Vfunc_b_0__172__res = 0;
            __Vfunc_b_0__172__x = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_cos128__174__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__174__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__174__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__174__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__174__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__174__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__174__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__174__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__174__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__174__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__174__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__174__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__174__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__174__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__174__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__174__Vfuncout)))) 
                                   - VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_sin128__175__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__176__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__175__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__176__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__176__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__176__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__176__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__176__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__176__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__176__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__176__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__176__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__176__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__176__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__176__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__176__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__176__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__175__Vfuncout 
                                    = __Vfunc_cos128__176__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__175__Vfuncout)))));
            __Vfunc_b_0__172__y = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_sin128__177__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__178__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__177__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__178__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__178__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__178__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__178__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__178__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__178__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__178__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__178__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__178__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__178__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__178__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__178__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__178__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__178__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__177__Vfuncout 
                                    = __Vfunc_cos128__178__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__177__Vfuncout)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_cos128__179__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__179__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__179__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__179__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__179__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__179__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__179__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__179__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__179__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__179__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__179__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__179__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__179__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__179__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__179__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__179__Vfuncout)))));
            __Vfunc_round2__180__x = __Vfunc_b_0__172__x;
            __Vfunc_round2__180__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__180__x), 0x0000000cU));
            __Vfunc_b_0__172__res = ((0x0000ffffU & __Vfunc_b_0__172__res) 
                                     | ((IData)(__Vfunc_round2__180__Vfuncout) 
                                        << 0x00000010U));
            __Vfunc_round2__181__x = __Vfunc_b_0__172__y;
            __Vfunc_round2__181__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__181__x), 0x0000000cU));
            __Vfunc_b_0__172__res = ((0xffff0000U & __Vfunc_b_0__172__res) 
                                     | (IData)(__Vfunc_round2__181__Vfuncout));
            __Vfunc_b_0__172__Vfuncout = __Vfunc_b_0__172__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res 
                = __Vfunc_b_0__172__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v184 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v184 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v185 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res);
            __Vfunc_b_0__172__angle = (0x000000ffU 
                                       & ((IData)(6U) 
                                          + VL_SHIFTL_III(8,32,32, 
                                                          VL_EXTEND_II(32,16, 
                                                                       ([&]() {
                                    __Vfunc_brev__173__in_val = 3U;
                                    __Vfunc_brev__173__numBits = 3U;
                                    __Vfunc_brev__173__out_val = 0U;
                                    __Vfunc_brev__173__unnamedblk1__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_brev__173__unnamedblk1__DOT__i, __Vfunc_brev__173__numBits)) {
                                        __Vfunc_brev__173__out_val 
                                            = (0x0000ffffU 
                                               & ((IData)(__Vfunc_brev__173__out_val) 
                                                  + 
                                                  VL_SHIFTL_III(16,32,32, 
                                                                (1U 
                                                                 & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__173__in_val), __Vfunc_brev__173__unnamedblk1__DOT__i)), 
                                                                ((__Vfunc_brev__173__numBits 
                                                                  - (IData)(1U)) 
                                                                 - __Vfunc_brev__173__unnamedblk1__DOT__i))));
                                        __Vfunc_brev__173__unnamedblk1__DOT__i 
                                            = ((IData)(1U) 
                                               + __Vfunc_brev__173__unnamedblk1__DOT__i);
                                    }
                                    __Vfunc_brev__173__Vfuncout 
                                        = __Vfunc_brev__173__out_val;
                                }(), (IData)(__Vfunc_brev__173__Vfuncout))), 3U)));
            __Vfunc_b_0__172__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[27U];
            __Vfunc_b_0__172__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[20U];
            __Vfunc_b_0__172__res = 0;
            __Vfunc_b_0__172__x = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_cos128__174__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__174__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__174__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__174__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__174__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__174__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__174__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__174__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__174__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__174__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__174__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__174__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__174__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__174__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__174__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__174__Vfuncout)))) 
                                   - VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_sin128__175__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__176__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__175__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__176__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__176__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__176__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__176__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__176__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__176__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__176__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__176__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__176__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__176__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__176__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__176__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__176__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__176__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__175__Vfuncout 
                                    = __Vfunc_cos128__176__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__175__Vfuncout)))));
            __Vfunc_b_0__172__y = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_sin128__177__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__178__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__177__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__178__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__178__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__178__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__178__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__178__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__178__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__178__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__178__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__178__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__178__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__178__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__178__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__178__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__178__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__177__Vfuncout 
                                    = __Vfunc_cos128__178__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__177__Vfuncout)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_cos128__179__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__179__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__179__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__179__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__179__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__179__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__179__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__179__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__179__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__179__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__179__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__179__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__179__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__179__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__179__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__179__Vfuncout)))));
            __Vfunc_round2__180__x = __Vfunc_b_0__172__x;
            __Vfunc_round2__180__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__180__x), 0x0000000cU));
            __Vfunc_b_0__172__res = ((0x0000ffffU & __Vfunc_b_0__172__res) 
                                     | ((IData)(__Vfunc_round2__180__Vfuncout) 
                                        << 0x00000010U));
            __Vfunc_round2__181__x = __Vfunc_b_0__172__y;
            __Vfunc_round2__181__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__181__x), 0x0000000cU));
            __Vfunc_b_0__172__res = ((0xffff0000U & __Vfunc_b_0__172__res) 
                                     | (IData)(__Vfunc_round2__181__Vfuncout));
            __Vfunc_b_0__172__Vfuncout = __Vfunc_b_0__172__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res 
                = __Vfunc_b_0__172__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v186 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v186 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v187 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res);
            __Vfunc_b_0__172__angle = (0x000000ffU 
                                       & ((IData)(6U) 
                                          + VL_SHIFTL_III(8,32,32, 
                                                          VL_EXTEND_II(32,16, 
                                                                       ([&]() {
                                    __Vfunc_brev__173__in_val = 2U;
                                    __Vfunc_brev__173__numBits = 3U;
                                    __Vfunc_brev__173__out_val = 0U;
                                    __Vfunc_brev__173__unnamedblk1__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_brev__173__unnamedblk1__DOT__i, __Vfunc_brev__173__numBits)) {
                                        __Vfunc_brev__173__out_val 
                                            = (0x0000ffffU 
                                               & ((IData)(__Vfunc_brev__173__out_val) 
                                                  + 
                                                  VL_SHIFTL_III(16,32,32, 
                                                                (1U 
                                                                 & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__173__in_val), __Vfunc_brev__173__unnamedblk1__DOT__i)), 
                                                                ((__Vfunc_brev__173__numBits 
                                                                  - (IData)(1U)) 
                                                                 - __Vfunc_brev__173__unnamedblk1__DOT__i))));
                                        __Vfunc_brev__173__unnamedblk1__DOT__i 
                                            = ((IData)(1U) 
                                               + __Vfunc_brev__173__unnamedblk1__DOT__i);
                                    }
                                    __Vfunc_brev__173__Vfuncout 
                                        = __Vfunc_brev__173__out_val;
                                }(), (IData)(__Vfunc_brev__173__Vfuncout))), 3U)));
            __Vfunc_b_0__172__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[26U];
            __Vfunc_b_0__172__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[21U];
            __Vfunc_b_0__172__res = 0;
            __Vfunc_b_0__172__x = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_cos128__174__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__174__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__174__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__174__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__174__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__174__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__174__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__174__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__174__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__174__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__174__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__174__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__174__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__174__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__174__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__174__Vfuncout)))) 
                                   - VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_sin128__175__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__176__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__175__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__176__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__176__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__176__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__176__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__176__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__176__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__176__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__176__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__176__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__176__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__176__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__176__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__176__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__176__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__175__Vfuncout 
                                    = __Vfunc_cos128__176__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__175__Vfuncout)))));
            __Vfunc_b_0__172__y = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_sin128__177__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__178__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__177__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__178__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__178__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__178__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__178__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__178__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__178__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__178__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__178__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__178__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__178__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__178__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__178__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__178__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__178__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__177__Vfuncout 
                                    = __Vfunc_cos128__178__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__177__Vfuncout)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_cos128__179__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__179__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__179__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__179__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__179__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__179__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__179__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__179__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__179__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__179__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__179__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__179__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__179__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__179__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__179__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__179__Vfuncout)))));
            __Vfunc_round2__180__x = __Vfunc_b_0__172__x;
            __Vfunc_round2__180__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__180__x), 0x0000000cU));
            __Vfunc_b_0__172__res = ((0x0000ffffU & __Vfunc_b_0__172__res) 
                                     | ((IData)(__Vfunc_round2__180__Vfuncout) 
                                        << 0x00000010U));
            __Vfunc_round2__181__x = __Vfunc_b_0__172__y;
            __Vfunc_round2__181__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__181__x), 0x0000000cU));
            __Vfunc_b_0__172__res = ((0xffff0000U & __Vfunc_b_0__172__res) 
                                     | (IData)(__Vfunc_round2__181__Vfuncout));
            __Vfunc_b_0__172__Vfuncout = __Vfunc_b_0__172__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res 
                = __Vfunc_b_0__172__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v188 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v188 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v189 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res);
            __Vfunc_b_0__172__angle = (0x000000ffU 
                                       & ((IData)(6U) 
                                          + VL_SHIFTL_III(8,32,32, 
                                                          VL_EXTEND_II(32,16, 
                                                                       ([&]() {
                                    __Vfunc_brev__173__in_val = 1U;
                                    __Vfunc_brev__173__numBits = 3U;
                                    __Vfunc_brev__173__out_val = 0U;
                                    __Vfunc_brev__173__unnamedblk1__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_brev__173__unnamedblk1__DOT__i, __Vfunc_brev__173__numBits)) {
                                        __Vfunc_brev__173__out_val 
                                            = (0x0000ffffU 
                                               & ((IData)(__Vfunc_brev__173__out_val) 
                                                  + 
                                                  VL_SHIFTL_III(16,32,32, 
                                                                (1U 
                                                                 & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__173__in_val), __Vfunc_brev__173__unnamedblk1__DOT__i)), 
                                                                ((__Vfunc_brev__173__numBits 
                                                                  - (IData)(1U)) 
                                                                 - __Vfunc_brev__173__unnamedblk1__DOT__i))));
                                        __Vfunc_brev__173__unnamedblk1__DOT__i 
                                            = ((IData)(1U) 
                                               + __Vfunc_brev__173__unnamedblk1__DOT__i);
                                    }
                                    __Vfunc_brev__173__Vfuncout 
                                        = __Vfunc_brev__173__out_val;
                                }(), (IData)(__Vfunc_brev__173__Vfuncout))), 3U)));
            __Vfunc_b_0__172__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[25U];
            __Vfunc_b_0__172__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[22U];
            __Vfunc_b_0__172__res = 0;
            __Vfunc_b_0__172__x = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_cos128__174__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__174__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__174__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__174__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__174__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__174__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__174__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__174__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__174__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__174__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__174__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__174__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__174__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__174__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__174__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__174__Vfuncout)))) 
                                   - VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_sin128__175__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__176__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__175__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__176__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__176__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__176__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__176__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__176__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__176__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__176__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__176__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__176__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__176__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__176__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__176__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__176__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__176__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__175__Vfuncout 
                                    = __Vfunc_cos128__176__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__175__Vfuncout)))));
            __Vfunc_b_0__172__y = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_sin128__177__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__178__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__177__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__178__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__178__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__178__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__178__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__178__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__178__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__178__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__178__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__178__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__178__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__178__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__178__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__178__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__178__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__177__Vfuncout 
                                    = __Vfunc_cos128__178__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__177__Vfuncout)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_cos128__179__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__179__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__179__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__179__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__179__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__179__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__179__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__179__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__179__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__179__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__179__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__179__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__179__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__179__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__179__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__179__Vfuncout)))));
            __Vfunc_round2__180__x = __Vfunc_b_0__172__x;
            __Vfunc_round2__180__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__180__x), 0x0000000cU));
            __Vfunc_b_0__172__res = ((0x0000ffffU & __Vfunc_b_0__172__res) 
                                     | ((IData)(__Vfunc_round2__180__Vfuncout) 
                                        << 0x00000010U));
            __Vfunc_round2__181__x = __Vfunc_b_0__172__y;
            __Vfunc_round2__181__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__181__x), 0x0000000cU));
            __Vfunc_b_0__172__res = ((0xffff0000U & __Vfunc_b_0__172__res) 
                                     | (IData)(__Vfunc_round2__181__Vfuncout));
            __Vfunc_b_0__172__Vfuncout = __Vfunc_b_0__172__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res 
                = __Vfunc_b_0__172__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v190 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v190 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v191 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res);
            __Vfunc_b_0__172__angle = (0x000000ffU 
                                       & ((IData)(6U) 
                                          + VL_SHIFTL_III(8,32,32, 
                                                          VL_EXTEND_II(32,16, 
                                                                       ([&]() {
                                    __Vfunc_brev__173__in_val = 0U;
                                    __Vfunc_brev__173__numBits = 3U;
                                    __Vfunc_brev__173__out_val = 0U;
                                    __Vfunc_brev__173__unnamedblk1__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_brev__173__unnamedblk1__DOT__i, __Vfunc_brev__173__numBits)) {
                                        __Vfunc_brev__173__out_val 
                                            = (0x0000ffffU 
                                               & ((IData)(__Vfunc_brev__173__out_val) 
                                                  + 
                                                  VL_SHIFTL_III(16,32,32, 
                                                                (1U 
                                                                 & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__173__in_val), __Vfunc_brev__173__unnamedblk1__DOT__i)), 
                                                                ((__Vfunc_brev__173__numBits 
                                                                  - (IData)(1U)) 
                                                                 - __Vfunc_brev__173__unnamedblk1__DOT__i))));
                                        __Vfunc_brev__173__unnamedblk1__DOT__i 
                                            = ((IData)(1U) 
                                               + __Vfunc_brev__173__unnamedblk1__DOT__i);
                                    }
                                    __Vfunc_brev__173__Vfuncout 
                                        = __Vfunc_brev__173__out_val;
                                }(), (IData)(__Vfunc_brev__173__Vfuncout))), 3U)));
            __Vfunc_b_0__172__t_b = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[24U];
            __Vfunc_b_0__172__t_a = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[23U];
            __Vfunc_b_0__172__res = 0;
            __Vfunc_b_0__172__x = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_cos128__174__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__174__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__174__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__174__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__174__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__174__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__174__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__174__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__174__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__174__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__174__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__174__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__174__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__174__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__174__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__174__Vfuncout)))) 
                                   - VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_sin128__175__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__176__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__175__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__176__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__176__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__176__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__176__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__176__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__176__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__176__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__176__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__176__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__176__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__176__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__176__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__176__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__176__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__175__Vfuncout 
                                    = __Vfunc_cos128__176__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__175__Vfuncout)))));
            __Vfunc_b_0__172__y = (VL_MULS_III(32, 
                                               VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_a)), 
                                               VL_EXTENDS_II(32,16, 
                                                             ([&]() {
                                __Vfunc_sin128__177__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__178__angle 
                                    = (0x000000ffU 
                                       & ((IData)(__Vfunc_sin128__177__angle) 
                                          - (IData)(0x40U)));
                                __Vfunc_cos128__178__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__178__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__178__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__178__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__178__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__178__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__178__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__178__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__178__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__178__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__178__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__178__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__178__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__178__angle)))]
                                                    : 0U)))));
                                __Vfunc_sin128__177__Vfuncout 
                                    = __Vfunc_cos128__178__Vfuncout;
                            }(), (IData)(__Vfunc_sin128__177__Vfuncout)))) 
                                   + VL_MULS_III(32, 
                                                 VL_EXTENDS_II(32,16, (IData)(__Vfunc_b_0__172__t_b)), 
                                                 VL_EXTENDS_II(32,16, 
                                                               ([&]() {
                                __Vfunc_cos128__179__angle 
                                    = __Vfunc_b_0__172__angle;
                                __Vfunc_cos128__179__Vfuncout 
                                    = (0x0000ffffU 
                                       & ((0x40U >= (IData)(__Vfunc_cos128__179__angle))
                                           ? ((0x40U 
                                               >= (0x0000007fU 
                                                   & (IData)(__Vfunc_cos128__179__angle)))
                                               ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                              [(0x0000007fU 
                                                & (IData)(__Vfunc_cos128__179__angle))]
                                               : 0U)
                                           : (((0x40U 
                                                < (IData)(__Vfunc_cos128__179__angle)) 
                                               & (0x80U 
                                                  >= (IData)(__Vfunc_cos128__179__angle)))
                                               ? (- 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__179__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__179__angle)))]
                                                    : 0U))
                                               : ((
                                                   (0x80U 
                                                    < (IData)(__Vfunc_cos128__179__angle)) 
                                                   & (0xc0U 
                                                      >= (IData)(__Vfunc_cos128__179__angle)))
                                                   ? 
                                                  (- 
                                                   ((0x40U 
                                                     >= 
                                                     (0x0000007fU 
                                                      & (IData)(__Vfunc_cos128__179__angle)))
                                                     ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                    [
                                                    (0x0000007fU 
                                                     & (IData)(__Vfunc_cos128__179__angle))]
                                                     : 0U))
                                                   : 
                                                  ((0x40U 
                                                    >= 
                                                    (0x0000007fU 
                                                     & (- (IData)(__Vfunc_cos128__179__angle))))
                                                    ? vlSymsp->TOP__av1_helper_functions.Cos128_Lookup
                                                   [
                                                   (0x0000007fU 
                                                    & (- (IData)(__Vfunc_cos128__179__angle)))]
                                                    : 0U)))));
                            }(), (IData)(__Vfunc_cos128__179__Vfuncout)))));
            __Vfunc_round2__180__x = __Vfunc_b_0__172__x;
            __Vfunc_round2__180__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__180__x), 0x0000000cU));
            __Vfunc_b_0__172__res = ((0x0000ffffU & __Vfunc_b_0__172__res) 
                                     | ((IData)(__Vfunc_round2__180__Vfuncout) 
                                        << 0x00000010U));
            __Vfunc_round2__181__x = __Vfunc_b_0__172__y;
            __Vfunc_round2__181__Vfuncout = (0x0000ffffU 
                                             & VL_SHIFTRS_III(16,32,32, 
                                                              ((IData)(0x00000800U) 
                                                               + __Vfunc_round2__181__x), 0x0000000cU));
            __Vfunc_b_0__172__res = ((0xffff0000U & __Vfunc_b_0__172__res) 
                                     | (IData)(__Vfunc_round2__181__Vfuncout));
            __Vfunc_b_0__172__Vfuncout = __Vfunc_b_0__172__res;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res 
                = __Vfunc_b_0__172__Vfuncout;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v192 
                = (vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res 
                   >> 0x00000010U);
            __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v192 = 1U;
            __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v193 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res);
        }
    } else if ((1U & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v194 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v194 = 1U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v195 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 1U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v196 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 2U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v197 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 3U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v198 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 4U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v199 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 5U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v200 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 6U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v201 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 7U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v202 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 8U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v203 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 9U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v204 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x000aU;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v205 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x000bU;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v206 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x000cU;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v207 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x000dU;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v208 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x000eU;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v209 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x000fU;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v210 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x0010U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v211 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x0011U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v212 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x0012U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v213 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x0013U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v214 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x0014U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v215 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x0015U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v216 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x0016U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v217 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x0017U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v218 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x0018U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v219 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x0019U;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v220 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x001aU;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v221 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x001bU;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v222 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x001cU;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v223 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x001dU;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v224 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x001eU;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v225 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array
            [(0x0000001fU & ([&]() {
                    __Vfunc_brev__182__in_val = 0x001fU;
                    __Vfunc_brev__182__numBits = 5U;
                    __Vfunc_brev__182__out_val = 0U;
                    __Vfunc_brev__182__unnamedblk1__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vfunc_brev__182__unnamedblk1__DOT__i, __Vfunc_brev__182__numBits)) {
                        __Vfunc_brev__182__out_val 
                            = (0x0000ffffU & ((IData)(__Vfunc_brev__182__out_val) 
                                              + VL_SHIFTL_III(16,32,32, 
                                                              (1U 
                                                               & VL_SHIFTR_III(32,32,32, (IData)(__Vfunc_brev__182__in_val), __Vfunc_brev__182__unnamedblk1__DOT__i)), 
                                                              ((__Vfunc_brev__182__numBits 
                                                                - (IData)(1U)) 
                                                               - __Vfunc_brev__182__unnamedblk1__DOT__i))));
                        __Vfunc_brev__182__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_brev__182__unnamedblk1__DOT__i);
                    }
                    __Vfunc_brev__182__Vfuncout = __Vfunc_brev__182__out_val;
                }(), (IData)(__Vfunc_brev__182__Vfuncout)))];
    } else if (vlSelfRef.single_block_bench__DOT__DUT__DOT__start_compute) {
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v0 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[0U];
        __VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v0 = 1U;
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v1 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[1U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v2 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[2U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v3 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[3U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v4 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[4U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v5 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[5U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v6 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[6U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v7 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[7U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v8 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[8U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v9 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[9U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v10 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[10U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v11 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[11U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v12 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[12U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v13 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[13U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v14 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[14U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v15 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[15U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v16 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[16U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v17 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[17U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v18 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[18U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v19 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[19U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v20 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[20U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v21 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[21U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v22 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[22U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v23 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[23U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v24 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[24U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v25 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[25U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v26 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[26U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v27 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[27U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v28 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[28U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v29 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[29U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v30 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[30U];
        __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v31 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr[31U];
    }
    vlSelfRef.single_block_bench__DOT__DUT__DOT__write_ready_prev 
        = ((~ (IData)(vlSelfRef.single_block_bench__DOT__rst)) 
           & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__ready_reg));
    vlSelfRef.single_block_bench__DOT__start_addr = __Vdly__single_block_bench__DOT__start_addr;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[0U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v0;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[1U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v1;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[2U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v2;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[3U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v3;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[4U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v4;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[5U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v5;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[6U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v6;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[7U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v7;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[8U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v8;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[9U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v9;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[10U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v10;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[11U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v11;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[12U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v12;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[13U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v13;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[14U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v14;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[15U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v15;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[16U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v16;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[17U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v17;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[18U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v18;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[19U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v19;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[20U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v20;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[21U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v21;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[22U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v22;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[23U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v23;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[24U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v24;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[25U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v25;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[26U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v26;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[27U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v27;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[28U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v28;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[29U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v29;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[30U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v30;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal[31U] 
        = __VdlyVal__single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal__v31;
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v0) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[0U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[1U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[2U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[3U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[4U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[5U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[6U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[7U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[8U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[9U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[10U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[11U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[12U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[13U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[14U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[15U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[16U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[17U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[18U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[19U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[20U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[21U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[22U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[23U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[24U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[25U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[26U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[27U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[28U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[29U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[30U] = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[31U] = 0U;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v32) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[0U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v32;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[1U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v33;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[2U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v34;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[3U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v35;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[4U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v36;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[5U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v37;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[6U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v38;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[7U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v39;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[8U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v40;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[9U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v41;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[10U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v42;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[11U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v43;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[12U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v44;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[13U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v45;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[14U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v46;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[15U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v47;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[16U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v48;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[17U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v49;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[18U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v50;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[19U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v51;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[20U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v52;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[21U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v53;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[22U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v54;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[23U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v55;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[24U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v56;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[25U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v57;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[26U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v58;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[27U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v59;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[28U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v60;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[29U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v61;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[30U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v62;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal[31U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal__v63;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v0) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[0U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v0;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[1U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v1;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[2U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v2;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[3U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v3;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[4U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v4;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[5U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v5;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[6U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v6;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[7U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v7;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[8U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v8;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[9U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v9;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[10U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v10;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[11U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v11;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[12U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v12;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[13U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v13;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[14U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v14;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[15U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v15;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[16U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v16;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[17U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v17;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[18U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v18;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[19U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v19;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[20U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v20;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[21U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v21;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[22U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v22;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[23U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v23;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[24U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v24;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[25U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v25;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[26U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v26;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[27U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v27;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[28U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v28;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[29U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v29;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[30U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v30;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array[31U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array__v31;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v0) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[0U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v0;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[31U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v1;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v2) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[1U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v2;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[30U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v3;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v4) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[2U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v4;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[29U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v5;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v6) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[3U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v6;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[28U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v7;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v8) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[4U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v8;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[27U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v9;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v10) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[5U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v10;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[26U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v11;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v12) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[6U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v12;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[25U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v13;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v14) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[7U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v14;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[24U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v15;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v16) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[8U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v16;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[23U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v17;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v18) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[9U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v18;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[22U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v19;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v20) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[10U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v20;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[21U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v21;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v22) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[11U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v22;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[20U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v23;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v24) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[12U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v24;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[19U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v25;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v26) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[13U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v26;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[18U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v27;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v28) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[14U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v28;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[17U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v29;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v30) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[15U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v30;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[16U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v31;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v32) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[27U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v32;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[20U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v33;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v34) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[26U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v34;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[21U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v35;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v36) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[25U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v36;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[22U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v37;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v38) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[24U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v38;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[23U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v39;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v40) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[0U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v40;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[15U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v41;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v42) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[1U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v42;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[14U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v43;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v44) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[2U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v44;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[13U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v45;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v46) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[3U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v46;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[12U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v47;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v48) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[4U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v48;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[11U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v49;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v50) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[5U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v50;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[10U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v51;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v52) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[6U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v52;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[9U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v53;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v54) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[7U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v54;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[8U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v55;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v56) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[16U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v56;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[23U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v57;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v58) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[17U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v58;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[22U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v59;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v60) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[18U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v60;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[21U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v61;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v62) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[19U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v62;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[20U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v63;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v64) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[24U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v64;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[31U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v65;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v66) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[25U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v66;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[30U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v67;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v68) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[26U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v68;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[29U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v69;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v70) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[27U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v70;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[28U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v71;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v72) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[13U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v72;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[10U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v73;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v74) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[12U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v74;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[11U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v75;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v76) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[0U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v76;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[7U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v77;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v78) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[1U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v78;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[6U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v79;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v80) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[2U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v80;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[5U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v81;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v82) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[3U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v82;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[4U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v83;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v84) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[29U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v84;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[18U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v85;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v86) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[28U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v86;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[19U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v87;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v88) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[27U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v88;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[20U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v89;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v90) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[26U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v90;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[21U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v91;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v92) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[8U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v92;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[11U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v93;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v94) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[9U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v94;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[10U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v95;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v96) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[12U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v96;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[15U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v97;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v98) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[13U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v98;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[14U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v99;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v100) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[6U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v100;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[5U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v101;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v102) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[0U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v102;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[3U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v103;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v104) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[1U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v104;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[2U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v105;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v106) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[16U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v106;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[19U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v107;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v108) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[17U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v108;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[18U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v109;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v110) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[20U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v110;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[23U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v111;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v112) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[21U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v112;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[22U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v113;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v114) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[24U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v114;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[27U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v115;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v116) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[25U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v116;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[26U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v117;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v118) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[28U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v118;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[31U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v119;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v120) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[29U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v120;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[30U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v121;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v122) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[14U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v122;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[9U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v123;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v124) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[13U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v124;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[10U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v125;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v126) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[4U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v126;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[5U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v127;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v128) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[6U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v128;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[7U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v129;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v130) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[0U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v130;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[1U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v131;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v132) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[2U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v132;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[3U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v133;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v134) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[30U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v134;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[17U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v135;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v136) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[29U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v136;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[18U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v137;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v138) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[26U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v138;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[21U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v139;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v140) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[25U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v140;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[22U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v141;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v142) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[8U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v142;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[9U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v143;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v144) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[10U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v144;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[11U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v145;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v146) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[12U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v146;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[13U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v147;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v148) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[14U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v148;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[15U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v149;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v150) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[4U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v150;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[7U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v151;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v152) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[5U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v152;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[6U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v153;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v154) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[16U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v154;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[17U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v155;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v156) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[18U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v156;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[19U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v157;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v158) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[20U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v158;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[21U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v159;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v160) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[22U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v160;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[23U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v161;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v162) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[24U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v162;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[25U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v163;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v164) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[26U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v164;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[27U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v165;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v166) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[28U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v166;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[29U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v167;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v168) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[30U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v168;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[31U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v169;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v170) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[8U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v170;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[15U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v171;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v172) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[9U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v172;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[14U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v173;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v174) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[10U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v174;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[13U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v175;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v176) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[11U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v176;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[12U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v177;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v178) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[16U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v178;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[31U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v179;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v180) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[17U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v180;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[30U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v181;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v182) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[18U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v182;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[29U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v183;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v184) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[19U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v184;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[28U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v185;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v186) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[20U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v186;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[27U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v187;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v188) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[21U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v188;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[26U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v189;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v190) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[22U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v190;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[25U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v191;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v192) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[23U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v192;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[24U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v193;
    }
    if (__VdlySet__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v194) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[0U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v194;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[1U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v195;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[2U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v196;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[3U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v197;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[4U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v198;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[5U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v199;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[6U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v200;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[7U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v201;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[8U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v202;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[9U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v203;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[10U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v204;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[11U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v205;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[12U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v206;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[13U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v207;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[14U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v208;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[15U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v209;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[16U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v210;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[17U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v211;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[18U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v212;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[19U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v213;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[20U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v214;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[21U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v215;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[22U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v216;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[23U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v217;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[24U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v218;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[25U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v219;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[26U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v220;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[27U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v221;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[28U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v222;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[29U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v223;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[30U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v224;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T[31U] 
            = __VdlyVal__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T__v225;
    }
    vlSelfRef.single_block_bench__DOT__DUT__DOT__prev_state 
        = ((IData)(vlSelfRef.single_block_bench__DOT__rst)
            ? 0U : (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__state));
    if (vlSelfRef.single_block_bench__DOT__DUT__DOT____Vcellinp__inv_dct__rst) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__valid_reg = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__valid_reg = 0U;
    } else {
        if (((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__start_compute) 
             & (0U == (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state)))) {
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__valid_reg = 0U;
        } else if ((0x16U == (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state))) {
            vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__valid_reg = 1U;
        }
        if ((1U & (IData)((vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                           >> 0x20U)))) {
            vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__valid_reg = 1U;
        } else if (vlSelfRef.single_block_bench__DOT__DUT__DOT__start_read) {
            vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__valid_reg = 0U;
        }
    }
    if (VL_UNLIKELY(((0x00001770U == vlSelfRef.single_block_bench__DOT__count)))) {
        VL_FINISH_MT("testbenches/single_block_bench.sv", 46, "");
    }
    vlSelfRef.single_block_bench__DOT__DUT__DOT__start_read_prev 
        = ((~ (IData)(vlSelfRef.single_block_bench__DOT__rst)) 
           & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__start_read));
    if (vlSelfRef.single_block_bench__DOT__rst) {
        vlSelfRef.single_block_bench__DOT__is_column = 0U;
        vlSelfRef.single_block_bench__DOT__start_write = 1U;
    }
    vlSelfRef.single_block_bench__DOT__start_write 
        = (0U == (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__state));
    if (vlSelfRef.single_block_bench__DOT__DUT__DOT____Vcellinp__inv_dct__rst) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__job_id = 0x006fU;
    } else if (((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__start_compute) 
                & (0U == (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state)))) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__job_id 
            = vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_read_counter;
    }
    if (vlSelfRef.single_block_bench__DOT__rst) {
        vlSelfRef.single_block_bench__DOT__TESTMEM_16_1024__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000400U, vlSelfRef.single_block_bench__DOT__TESTMEM_16_1024__DOT__i)) {
            vlSelfRef.single_block_bench__DOT__TESTMEM_16_1024__DOT__mem[(0x000003ffU 
                                                                          & vlSelfRef.single_block_bench__DOT__TESTMEM_16_1024__DOT__i)] 
                = (0x0000ffffU & vlSelfRef.single_block_bench__DOT__TESTMEM_16_1024__DOT__i);
            vlSelfRef.single_block_bench__DOT__TESTMEM_16_1024__DOT__i 
                = ((IData)(1U) + vlSelfRef.single_block_bench__DOT__TESTMEM_16_1024__DOT__i);
        }
    }
    if (vlSelfRef.single_block_bench__DOT__DUT__DOT____Vcellinp__inv_dct__rst) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__ready_reg = 1U;
        __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read = 0ULL;
        __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__mem_read_addr_reg = 0U;
        __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__try_get_lock = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__mem_lock_request_reg = 0U;
        __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__state_mem_write = 0U;
        __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_addr_reg = 0U;
        __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_counter = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__ready_reg = 1U;
        __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__try_get_lock = 0U;
        vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__mem_lock_req_reg = 0U;
    } else {
        if (((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__start_read) 
             & (~ (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__try_get_lock)))) {
            __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__try_get_lock = 1U;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__mem_lock_request_reg = 1U;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__ready_reg = 0U;
            __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__mem_read_addr_reg 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT____Vcellinp__reader__start_addr;
        } else if (vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__try_get_lock) {
            if (vlSelfRef.single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__read_lock_reg) {
                __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read = 1ULL;
                __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__try_get_lock = 0U;
            }
        } else if ((0ULL != vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read)) {
            __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
                = (0x00000001ffffffffULL & VL_SHIFTL_QQI(33,33,32, vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read, 1U));
            __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__mem_read_addr_reg 
                = (0x000003ffU & ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
                                   ? ((IData)(0x00000020U) 
                                      + (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__mem_read_addr_reg))
                                   : ((IData)(1U) + (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__mem_read_addr_reg))));
            vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__ready_reg = 0U;
        } else {
            __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read = 0ULL;
            __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__mem_read_addr_reg 
                = vlSelfRef.single_block_bench__DOT__DUT__DOT____Vcellinp__reader__start_addr;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__ready_reg = 1U;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__mem_lock_request_reg = 0U;
        }
        if (((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__start_write) 
             & (~ (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__try_get_lock)))) {
            __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__try_get_lock = 1U;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__mem_lock_req_reg = 1U;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__ready_reg = 0U;
            __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_addr_reg 
                = (0x000003ffU & ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
                                   ? (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_write_counter)
                                   : VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_write_counter), 5U)));
        } else if (vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__try_get_lock) {
            if (vlSelfRef.single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__write_lock_reg) {
                __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__state_mem_write = 1U;
                __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_counter = 0U;
                __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__try_get_lock = 0U;
            }
        } else if ((0U != vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__state_mem_write)) {
            __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__state_mem_write 
                = VL_SHIFTL_III(32,32,32, vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__state_mem_write, 1U);
            __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_addr_reg 
                = (0x000003ffU & ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows)
                                   ? ((IData)(0x00000020U) 
                                      + (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_addr_reg))
                                   : ((IData)(1U) + (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_addr_reg))));
            __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_counter 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_counter)));
            vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__ready_reg = 0U;
        } else {
            __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__state_mem_write = 0U;
            __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_addr_reg = 0U;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__ready_reg = 1U;
            vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__mem_lock_req_reg = 0U;
        }
    }
    if (vlSelfRef.single_block_bench__DOT__rst) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__read_last = 0U;
    } else if (vlSelfRef.single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__read_lock_reg) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__read_last = 1U;
    } else if (vlSelfRef.single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__write_lock_reg) {
        vlSelfRef.single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__read_last = 0U;
    }
    vlSelfRef.single_block_bench__DOT__mem_read_q = vlSelfRef.single_block_bench__DOT__TESTMEM_16_1024__DOT__mem
        [vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__mem_read_addr_reg];
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
    vlSelfRef.single_block_bench__DOT__DUT__DOT__state 
        = __Vdly__single_block_bench__DOT__DUT__DOT__state;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_read_counter 
        = __Vdly__single_block_bench__DOT__DUT__DOT__arr_read_counter;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state 
        = __Vdly__single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state;
    if (__VdlySet__single_block_bench__DOT__TESTMEM_16_1024__DOT__mem__v0) {
        vlSelfRef.single_block_bench__DOT__TESTMEM_16_1024__DOT__mem[__VdlyDim0__single_block_bench__DOT__TESTMEM_16_1024__DOT__mem__v0] 
            = __VdlyVal__single_block_bench__DOT__TESTMEM_16_1024__DOT__mem__v0;
    }
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
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__try_get_lock 
        = __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__try_get_lock;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__mem_read_addr_reg 
        = __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__mem_read_addr_reg;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__read_lock_reg 
        = __Vdly__single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__read_lock_reg;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read 
        = __Vdly__single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read;
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
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__try_get_lock 
        = __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__try_get_lock;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__state_mem_write 
        = __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__state_mem_write;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_addr_reg 
        = __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_addr_reg;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_counter 
        = __Vdly__single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_counter;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__arr_write_counter 
        = __Vdly__single_block_bench__DOT__DUT__DOT__arr_write_counter;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__write_lock_reg 
        = __Vdly__single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__write_lock_reg;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__done_rows 
        = __Vdly__single_block_bench__DOT__DUT__DOT__done_rows;
    vlSelfRef.single_block_bench__DOT__DUT__DOT__write_ready_pos_edge 
        = ((~ (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__write_ready_prev)) 
           & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__ready_reg));
    vlSelfRef.single_block_bench__DOT__DUT__DOT__start_write 
        = ((2U == (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__state)) 
           & ((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__valid_reg) 
              & (((IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__job_id_prev) 
                  != (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__inv_dct__DOT__job_id)) 
                 & (IData)(vlSelfRef.single_block_bench__DOT__DUT__DOT__writer__DOT__ready_reg))));
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
}
