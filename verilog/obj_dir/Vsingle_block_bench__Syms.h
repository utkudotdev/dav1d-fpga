// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSINGLE_BLOCK_BENCH__SYMS_H_
#define VERILATED_VSINGLE_BLOCK_BENCH__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vsingle_block_bench.h"

// INCLUDE MODULE CLASSES
#include "Vsingle_block_bench___024root.h"
#include "Vsingle_block_bench___024unit.h"
#include "Vsingle_block_bench_av1_helper_functions.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vsingle_block_bench__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsingle_block_bench* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsingle_block_bench___024root  TOP;
    Vsingle_block_bench_av1_helper_functions TOP__av1_helper_functions;

    // CONSTRUCTORS
    Vsingle_block_bench__Syms(VerilatedContext* contextp, const char* namep, Vsingle_block_bench* modelp);
    ~Vsingle_block_bench__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
