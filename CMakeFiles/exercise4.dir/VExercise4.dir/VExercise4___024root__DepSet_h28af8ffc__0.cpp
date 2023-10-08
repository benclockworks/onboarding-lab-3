// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise4.h for the primary calling header

#include "verilated.h"

#include "VExercise4__Syms.h"
#include "VExercise4___024root.h"

void VExercise4___024root___ico_sequent__TOP__0(VExercise4___024root* vlSelf);

void VExercise4___024root___eval_ico(VExercise4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VExercise4___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VExercise4___024root___eval_act(VExercise4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_act\n"); );
}

void VExercise4___024root___eval_nba(VExercise4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_nba\n"); );
}

void VExercise4___024root___eval_triggers__ico(VExercise4___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise4___024root___dump_triggers__ico(VExercise4___024root* vlSelf);
#endif  // VL_DEBUG
void VExercise4___024root___eval_triggers__act(VExercise4___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise4___024root___dump_triggers__act(VExercise4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise4___024root___dump_triggers__nba(VExercise4___024root* vlSelf);
#endif  // VL_DEBUG

void VExercise4___024root___eval(VExercise4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VExercise4___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VExercise4___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise4.sv", 13, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VExercise4___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VExercise4___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VExercise4___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise4.sv", 13, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VExercise4___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VExercise4___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise4.sv", 13, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VExercise4___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VExercise4___024root___eval_debug_assertions(VExercise4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->sel & 0xfcU))) {
        Verilated::overWidthError("sel");}
    if (VL_UNLIKELY((vlSelf->cs & 0xfeU))) {
        Verilated::overWidthError("cs");}
}
#endif  // VL_DEBUG
