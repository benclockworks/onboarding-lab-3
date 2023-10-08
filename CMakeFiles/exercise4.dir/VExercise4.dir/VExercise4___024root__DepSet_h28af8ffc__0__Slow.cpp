// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise4.h for the primary calling header

#include "verilated.h"

#include "VExercise4__Syms.h"
#include "VExercise4___024root.h"

VL_ATTR_COLD void VExercise4___024root___eval_static(VExercise4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_static\n"); );
}

VL_ATTR_COLD void VExercise4___024root___eval_initial__TOP(VExercise4___024root* vlSelf);

VL_ATTR_COLD void VExercise4___024root___eval_initial(VExercise4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_initial\n"); );
    // Body
    VExercise4___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void VExercise4___024root___eval_final(VExercise4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_final\n"); );
}

VL_ATTR_COLD void VExercise4___024root___eval_triggers__stl(VExercise4___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise4___024root___dump_triggers__stl(VExercise4___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VExercise4___024root___eval_stl(VExercise4___024root* vlSelf);

VL_ATTR_COLD void VExercise4___024root___eval_settle(VExercise4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VExercise4___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VExercise4___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise4.sv", 13, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VExercise4___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise4___024root___dump_triggers__stl(VExercise4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VExercise4___024root___ico_sequent__TOP__0(VExercise4___024root* vlSelf);

VL_ATTR_COLD void VExercise4___024root___eval_stl(VExercise4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VExercise4___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise4___024root___dump_triggers__ico(VExercise4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise4___024root___dump_triggers__act(VExercise4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise4___024root___dump_triggers__nba(VExercise4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VExercise4___024root___ctor_var_reset(VExercise4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->sel = VL_RAND_RESET_I(2);
    vlSelf->cs = VL_RAND_RESET_I(1);
    vlSelf->alpha = VL_RAND_RESET_I(8);
    vlSelf->beta = VL_RAND_RESET_I(8);
    vlSelf->gamma = VL_RAND_RESET_I(8);
    vlSelf->out = VL_RAND_RESET_I(8);
    vlSelf->Exercise4__DOT____Vtogcov__sel = VL_RAND_RESET_I(2);
    vlSelf->Exercise4__DOT____Vtogcov__cs = VL_RAND_RESET_I(1);
    vlSelf->Exercise4__DOT____Vtogcov__alpha = VL_RAND_RESET_I(8);
    vlSelf->Exercise4__DOT____Vtogcov__beta = VL_RAND_RESET_I(8);
    vlSelf->Exercise4__DOT____Vtogcov__gamma = VL_RAND_RESET_I(8);
    vlSelf->Exercise4__DOT____Vtogcov__out = VL_RAND_RESET_I(8);
}
