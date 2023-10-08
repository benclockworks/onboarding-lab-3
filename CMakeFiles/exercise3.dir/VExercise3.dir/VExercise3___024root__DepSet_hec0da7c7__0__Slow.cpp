// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise3.h for the primary calling header

#include "verilated.h"

#include "VExercise3__Syms.h"
#include "VExercise3___024root.h"

VL_ATTR_COLD void VExercise3___024root___eval_static(VExercise3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___eval_static\n"); );
}

VL_ATTR_COLD void VExercise3___024root___eval_initial__TOP(VExercise3___024root* vlSelf);

VL_ATTR_COLD void VExercise3___024root___eval_initial(VExercise3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___eval_initial\n"); );
    // Body
    VExercise3___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void VExercise3___024root___eval_final(VExercise3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___eval_final\n"); );
}

VL_ATTR_COLD void VExercise3___024root___eval_triggers__stl(VExercise3___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise3___024root___dump_triggers__stl(VExercise3___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VExercise3___024root___eval_stl(VExercise3___024root* vlSelf);

VL_ATTR_COLD void VExercise3___024root___eval_settle(VExercise3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VExercise3___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VExercise3___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 12, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VExercise3___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise3___024root___dump_triggers__stl(VExercise3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VExercise3___024root___stl_sequent__TOP__0(VExercise3___024root* vlSelf);

VL_ATTR_COLD void VExercise3___024root___eval_stl(VExercise3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VExercise3___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise3___024root___dump_triggers__ico(VExercise3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VExercise3___024root___dump_triggers__act(VExercise3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise3___024root___dump_triggers__nba(VExercise3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VExercise3___024root___ctor_var_reset(VExercise3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->a = VL_RAND_RESET_I(4);
    vlSelf->b = VL_RAND_RESET_I(16);
    vlSelf->c = VL_RAND_RESET_I(16);
    vlSelf->out = VL_RAND_RESET_I(16);
    vlSelf->Exercise3__DOT__a_in = VL_RAND_RESET_I(8);
    vlSelf->Exercise3__DOT__b_in = VL_RAND_RESET_I(8);
    vlSelf->Exercise3__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->Exercise3__DOT____Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->Exercise3__DOT____Vtogcov__a = VL_RAND_RESET_I(4);
    vlSelf->Exercise3__DOT____Vtogcov__b = VL_RAND_RESET_I(16);
    vlSelf->Exercise3__DOT____Vtogcov__c = VL_RAND_RESET_I(16);
    vlSelf->Exercise3__DOT____Vtogcov__out = VL_RAND_RESET_I(16);
    vlSelf->Exercise3__DOT____Vtogcov__a_in = VL_RAND_RESET_I(8);
    vlSelf->Exercise3__DOT____Vtogcov__b_in = VL_RAND_RESET_I(8);
    vlSelf->Exercise3__DOT__gamma__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->Exercise3__DOT__gamma__DOT____Vtogcov__count = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
