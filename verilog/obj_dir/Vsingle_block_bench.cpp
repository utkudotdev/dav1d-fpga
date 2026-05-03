// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsingle_block_bench__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsingle_block_bench::Vsingle_block_bench(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsingle_block_bench__Syms(contextp(), _vcname__, this)}
    , __PVT__av1_helper_functions{vlSymsp->TOP.__PVT__av1_helper_functions}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsingle_block_bench::Vsingle_block_bench(const char* _vcname__)
    : Vsingle_block_bench(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsingle_block_bench::~Vsingle_block_bench() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsingle_block_bench___024root___eval_debug_assertions(Vsingle_block_bench___024root* vlSelf);
#endif  // VL_DEBUG
void Vsingle_block_bench___024root___eval_static(Vsingle_block_bench___024root* vlSelf);
void Vsingle_block_bench___024root___eval_initial(Vsingle_block_bench___024root* vlSelf);
void Vsingle_block_bench___024root___eval_settle(Vsingle_block_bench___024root* vlSelf);
void Vsingle_block_bench___024root___eval(Vsingle_block_bench___024root* vlSelf);

void Vsingle_block_bench::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsingle_block_bench::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsingle_block_bench___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsingle_block_bench___024root___eval_static(&(vlSymsp->TOP));
        Vsingle_block_bench___024root___eval_initial(&(vlSymsp->TOP));
        Vsingle_block_bench___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsingle_block_bench___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vsingle_block_bench::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vsingle_block_bench::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vsingle_block_bench::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vsingle_block_bench::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsingle_block_bench::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsingle_block_bench___024root___eval_final(Vsingle_block_bench___024root* vlSelf);

VL_ATTR_COLD void Vsingle_block_bench::final() {
    Vsingle_block_bench___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsingle_block_bench::hierName() const { return vlSymsp->name(); }
const char* Vsingle_block_bench::modelName() const { return "Vsingle_block_bench"; }
unsigned Vsingle_block_bench::threads() const { return 1; }
void Vsingle_block_bench::prepareClone() const { contextp()->prepareClone(); }
void Vsingle_block_bench::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsingle_block_bench::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsingle_block_bench___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsingle_block_bench___024root__trace_init_top(Vsingle_block_bench___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsingle_block_bench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsingle_block_bench___024root*>(voidSelf);
    Vsingle_block_bench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vsingle_block_bench___024root__trace_decl_types(tracep);
    Vsingle_block_bench___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsingle_block_bench___024root__trace_register(Vsingle_block_bench___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsingle_block_bench::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsingle_block_bench::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 498);
    Vsingle_block_bench___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
