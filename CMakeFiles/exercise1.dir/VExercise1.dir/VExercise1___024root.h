// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VExercise1.h for the primary calling header

#ifndef VERILATED_VEXERCISE1___024ROOT_H_
#define VERILATED_VEXERCISE1___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class VExercise1__Syms;

class alignas(VL_CACHE_LINE_BYTES) VExercise1___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(op,1,0);
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_OUT8(out,7,0);
    CData/*1:0*/ Exercise1__DOT____Vtogcov__op;
    CData/*7:0*/ Exercise1__DOT____Vtogcov__a;
    CData/*7:0*/ Exercise1__DOT____Vtogcov__b;
    CData/*7:0*/ Exercise1__DOT____Vtogcov__out;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VExercise1__Syms* const vlSymsp;

    // CONSTRUCTORS
    VExercise1___024root(VExercise1__Syms* symsp, const char* v__name);
    ~VExercise1___024root();
    VL_UNCOPYABLE(VExercise1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
