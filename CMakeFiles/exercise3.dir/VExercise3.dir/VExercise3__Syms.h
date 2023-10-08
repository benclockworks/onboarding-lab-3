// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VEXERCISE3__SYMS_H_
#define VERILATED_VEXERCISE3__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VExercise3.h"

// INCLUDE MODULE CLASSES
#include "VExercise3___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VExercise3__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VExercise3* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VExercise3___024root           TOP;

    // COVERAGE
    std::atomic<uint32_t> __Vcoverage[91];

    // CONSTRUCTORS
    VExercise3__Syms(VerilatedContext* contextp, const char* namep, VExercise3* modelp);
    ~VExercise3__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
