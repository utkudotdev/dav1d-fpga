// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsingle_block_bench.h for the primary calling header

#ifndef VERILATED_VSINGLE_BLOCK_BENCH___024ROOT_H_
#define VERILATED_VSINGLE_BLOCK_BENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vsingle_block_bench_av1_helper_functions;


class Vsingle_block_bench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsingle_block_bench___024root final {
  public:
    // CELLS
    Vsingle_block_bench_av1_helper_functions* __PVT__av1_helper_functions;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ single_block_bench__DOT__clk;
        CData/*0:0*/ single_block_bench__DOT__rst;
        CData/*0:0*/ single_block_bench__DOT__start_write;
        CData/*0:0*/ single_block_bench__DOT__is_column;
        CData/*0:0*/ single_block_bench__DOT__valid_out;
        CData/*0:0*/ single_block_bench__DOT__ready_out;
        CData/*1:0*/ single_block_bench__DOT__DUT__DOT__state;
        CData/*1:0*/ single_block_bench__DOT__DUT__DOT__prev_state;
        CData/*0:0*/ single_block_bench__DOT__DUT__DOT__done_rows;
        CData/*0:0*/ single_block_bench__DOT__DUT__DOT__start_write;
        CData/*0:0*/ single_block_bench__DOT__DUT__DOT__write_ready_prev;
        CData/*0:0*/ single_block_bench__DOT__DUT__DOT__write_ready_pos_edge;
        CData/*4:0*/ single_block_bench__DOT__DUT__DOT__arr_write_counter;
        CData/*0:0*/ single_block_bench__DOT__DUT__DOT__start_read;
        CData/*4:0*/ single_block_bench__DOT__DUT__DOT__arr_read_counter;
        CData/*0:0*/ single_block_bench__DOT__DUT__DOT__start_read_prev;
        CData/*0:0*/ single_block_bench__DOT__DUT__DOT__start_compute;
        CData/*0:0*/ single_block_bench__DOT__DUT__DOT____Vcellinp__inv_dct__rst;
        CData/*0:0*/ single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__read_last;
        CData/*0:0*/ single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__read_lock_reg;
        CData/*0:0*/ single_block_bench__DOT__DUT__DOT__lock_mgr__DOT__write_lock_reg;
        CData/*0:0*/ single_block_bench__DOT__DUT__DOT__reader__DOT__try_get_lock;
        CData/*0:0*/ single_block_bench__DOT__DUT__DOT__reader__DOT__mem_lock_request_reg;
        CData/*0:0*/ single_block_bench__DOT__DUT__DOT__reader__DOT__ready_reg;
        CData/*0:0*/ single_block_bench__DOT__DUT__DOT__reader__DOT__valid_reg;
        CData/*0:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__valid_reg;
        CData/*4:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__state;
        CData/*4:0*/ single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_counter;
        CData/*0:0*/ single_block_bench__DOT__DUT__DOT__writer__DOT__ready_reg;
        CData/*0:0*/ single_block_bench__DOT__DUT__DOT__writer__DOT__try_get_lock;
        CData/*0:0*/ single_block_bench__DOT__DUT__DOT__writer__DOT__mem_lock_req_reg;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__single_block_bench__DOT__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*9:0*/ single_block_bench__DOT__start_addr;
        SData/*15:0*/ single_block_bench__DOT__mem_read_q;
        SData/*9:0*/ single_block_bench__DOT__DUT__DOT____Vcellinp__reader__start_addr;
        SData/*15:0*/ single_block_bench__DOT__DUT__DOT__job_id_prev;
        SData/*9:0*/ single_block_bench__DOT__DUT__DOT__reader__DOT__mem_read_addr_reg;
        SData/*15:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__job_id;
        SData/*9:0*/ single_block_bench__DOT__DUT__DOT__writer__DOT__mem_write_addr_reg;
        SData/*15:0*/ __Vfunc_round2__0__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__1__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__2__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__3__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__4__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__5__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__6__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__7__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__8__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__9__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__10__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__11__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__12__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__13__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__14__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__15__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__16__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__17__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__18__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__19__Vfuncout;
    };
    struct {
        SData/*15:0*/ __Vfunc_round2__20__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__21__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__22__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__23__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__24__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__25__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__26__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__27__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__28__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__29__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__30__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__31__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__32__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__33__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__34__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__35__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__36__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__37__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__38__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__39__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__40__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__41__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__42__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__43__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__44__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__45__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__46__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__47__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__48__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__49__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__50__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__51__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__52__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__53__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__54__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__55__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__56__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__57__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__58__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__59__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__60__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__61__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__62__Vfuncout;
        SData/*15:0*/ __Vfunc_round2__63__Vfuncout;
        IData/*31:0*/ single_block_bench__DOT__count;
        IData/*31:0*/ single_block_bench__DOT__TESTMEM_16_1024__DOT__i;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_res;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_res;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_res;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk9__DOT__unnamedblk10__DOT__b_res;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk11__DOT__unnamedblk12__DOT__b_res;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__b_res;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk16__DOT__unnamedblk17__DOT__b_res;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk18__DOT__unnamedblk19__DOT__b_res;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk20__DOT__unnamedblk21__DOT__b_res;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT__b_res;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk25__DOT__unnamedblk26__DOT__b_res;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk27__DOT__b_res;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk28__DOT__unnamedblk29__DOT__unnamedblk30__DOT__b_res;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk31__DOT__unnamedblk32__DOT__b_res;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk33__DOT__unnamedblk34__DOT__b_res;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk35__DOT__unnamedblk36__DOT__b_res;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk37__DOT__unnamedblk38__DOT__unnamedblk39__DOT__b_res;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk40__DOT__unnamedblk41__DOT__b_res;
    };
    struct {
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk42__DOT__unnamedblk43__DOT__b_res;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__inv_dct__DOT__unnamedblk44__DOT__unnamedblk45__DOT__b_res;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__writer__DOT__j;
        IData/*31:0*/ single_block_bench__DOT__DUT__DOT__writer__DOT__state_mem_write;
        IData/*31:0*/ __Vfunc_round2__0__x;
        IData/*31:0*/ __Vfunc_round2__1__x;
        IData/*31:0*/ __Vfunc_round2__2__x;
        IData/*31:0*/ __Vfunc_round2__3__x;
        IData/*31:0*/ __Vfunc_round2__4__x;
        IData/*31:0*/ __Vfunc_round2__5__x;
        IData/*31:0*/ __Vfunc_round2__6__x;
        IData/*31:0*/ __Vfunc_round2__7__x;
        IData/*31:0*/ __Vfunc_round2__8__x;
        IData/*31:0*/ __Vfunc_round2__9__x;
        IData/*31:0*/ __Vfunc_round2__10__x;
        IData/*31:0*/ __Vfunc_round2__11__x;
        IData/*31:0*/ __Vfunc_round2__12__x;
        IData/*31:0*/ __Vfunc_round2__13__x;
        IData/*31:0*/ __Vfunc_round2__14__x;
        IData/*31:0*/ __Vfunc_round2__15__x;
        IData/*31:0*/ __Vfunc_round2__16__x;
        IData/*31:0*/ __Vfunc_round2__17__x;
        IData/*31:0*/ __Vfunc_round2__18__x;
        IData/*31:0*/ __Vfunc_round2__19__x;
        IData/*31:0*/ __Vfunc_round2__20__x;
        IData/*31:0*/ __Vfunc_round2__21__x;
        IData/*31:0*/ __Vfunc_round2__22__x;
        IData/*31:0*/ __Vfunc_round2__23__x;
        IData/*31:0*/ __Vfunc_round2__24__x;
        IData/*31:0*/ __Vfunc_round2__25__x;
        IData/*31:0*/ __Vfunc_round2__26__x;
        IData/*31:0*/ __Vfunc_round2__27__x;
        IData/*31:0*/ __Vfunc_round2__28__x;
        IData/*31:0*/ __Vfunc_round2__29__x;
        IData/*31:0*/ __Vfunc_round2__30__x;
        IData/*31:0*/ __Vfunc_round2__31__x;
        IData/*31:0*/ __Vfunc_round2__32__x;
        IData/*31:0*/ __Vfunc_round2__33__x;
        IData/*31:0*/ __Vfunc_round2__34__x;
        IData/*31:0*/ __Vfunc_round2__35__x;
        IData/*31:0*/ __Vfunc_round2__36__x;
        IData/*31:0*/ __Vfunc_round2__37__x;
        IData/*31:0*/ __Vfunc_round2__38__x;
        IData/*31:0*/ __Vfunc_round2__39__x;
        IData/*31:0*/ __Vfunc_round2__40__x;
        IData/*31:0*/ __Vfunc_round2__41__x;
        IData/*31:0*/ __Vfunc_round2__42__x;
        IData/*31:0*/ __Vfunc_round2__43__x;
        IData/*31:0*/ __Vfunc_round2__44__x;
        IData/*31:0*/ __Vfunc_round2__45__x;
        IData/*31:0*/ __Vfunc_round2__46__x;
        IData/*31:0*/ __Vfunc_round2__47__x;
        IData/*31:0*/ __Vfunc_round2__48__x;
        IData/*31:0*/ __Vfunc_round2__49__x;
        IData/*31:0*/ __Vfunc_round2__50__x;
        IData/*31:0*/ __Vfunc_round2__51__x;
        IData/*31:0*/ __Vfunc_round2__52__x;
        IData/*31:0*/ __Vfunc_round2__53__x;
        IData/*31:0*/ __Vfunc_round2__54__x;
        IData/*31:0*/ __Vfunc_round2__55__x;
        IData/*31:0*/ __Vfunc_round2__56__x;
        IData/*31:0*/ __Vfunc_round2__57__x;
        IData/*31:0*/ __Vfunc_round2__58__x;
        IData/*31:0*/ __Vfunc_round2__59__x;
    };
    struct {
        IData/*31:0*/ __Vfunc_round2__60__x;
        IData/*31:0*/ __Vfunc_round2__61__x;
        IData/*31:0*/ __Vfunc_round2__62__x;
        IData/*31:0*/ __Vfunc_round2__63__x;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        QData/*32:0*/ single_block_bench__DOT__DUT__DOT__reader__DOT__state_mem_read;
        VlUnpacked<SData/*15:0*/, 32> single_block_bench__DOT__arr;
        VlUnpacked<SData/*15:0*/, 32> single_block_bench__DOT__arr_out;
        VlUnpacked<SData/*15:0*/, 1024> single_block_bench__DOT__TESTMEM_16_1024__DOT__mem;
        VlUnpacked<SData/*15:0*/, 32> single_block_bench__DOT__DUT__DOT__arr;
        VlUnpacked<SData/*15:0*/, 32> single_block_bench__DOT__DUT__DOT__tf_out_arr;
        VlUnpacked<SData/*15:0*/, 32> single_block_bench__DOT__DUT__DOT__arr_to_write;
        VlUnpacked<SData/*15:0*/, 32> single_block_bench__DOT__DUT__DOT__reader__DOT__array;
        VlUnpacked<SData/*15:0*/, 32> single_block_bench__DOT__DUT__DOT__reader__DOT__arr_internal;
        VlUnpacked<SData/*15:0*/, 32> single_block_bench__DOT__DUT__DOT__inv_dct__DOT__out;
        VlUnpacked<SData/*15:0*/, 32> single_block_bench__DOT__DUT__DOT__inv_dct__DOT__in_array;
        VlUnpacked<SData/*15:0*/, 32> single_block_bench__DOT__DUT__DOT__inv_dct__DOT__t_array;
        VlUnpacked<SData/*15:0*/, 32> single_block_bench__DOT__DUT__DOT__inv_dct__DOT__T;
        VlUnpacked<SData/*15:0*/, 32> single_block_bench__DOT__DUT__DOT__writer__DOT__arr;
        VlUnpacked<SData/*15:0*/, 32> single_block_bench__DOT__DUT__DOT__writer__DOT__arr_internal;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vsingle_block_bench__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vsingle_block_bench___024root(Vsingle_block_bench__Syms* symsp, const char* namep);
    ~Vsingle_block_bench___024root();
    VL_UNCOPYABLE(Vsingle_block_bench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
