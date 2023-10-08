// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise2.h for the primary calling header

#include "verilated.h"

#include "VExercise2__Syms.h"
#include "VExercise2__Syms.h"
#include "VExercise2___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise2___024root___dump_triggers__ico(VExercise2___024root* vlSelf);
#endif  // VL_DEBUG

void VExercise2___024root___eval_triggers__ico(VExercise2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExercise2___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VExercise2___024root___ico_sequent__TOP__0(VExercise2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->reset) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__reset = vlSelf->reset;
    }
    if ((1U & ((IData)(vlSelf->init) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__init = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->init)));
    }
    if ((2U & ((IData)(vlSelf->init) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__init = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->init)));
    }
    if ((4U & ((IData)(vlSelf->init) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__init = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->init)));
    }
    if ((8U & ((IData)(vlSelf->init) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__init = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->init)));
    }
    if ((0x10U & ((IData)(vlSelf->init) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__init = (
                                                   (0xffefU 
                                                    & (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->init)));
    }
    if ((0x20U & ((IData)(vlSelf->init) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__init = (
                                                   (0xffdfU 
                                                    & (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x20U 
                                                      & (IData)(vlSelf->init)));
    }
    if ((0x40U & ((IData)(vlSelf->init) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__init = (
                                                   (0xffbfU 
                                                    & (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x40U 
                                                      & (IData)(vlSelf->init)));
    }
    if ((0x80U & ((IData)(vlSelf->init) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__init = (
                                                   (0xff7fU 
                                                    & (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x80U 
                                                      & (IData)(vlSelf->init)));
    }
    if ((0x100U & ((IData)(vlSelf->init) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__init = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x100U 
                                                      & (IData)(vlSelf->init)));
    }
    if ((0x200U & ((IData)(vlSelf->init) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__init = (
                                                   (0xfdffU 
                                                    & (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x200U 
                                                      & (IData)(vlSelf->init)));
    }
    if ((0x400U & ((IData)(vlSelf->init) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__init = (
                                                   (0xfbffU 
                                                    & (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x400U 
                                                      & (IData)(vlSelf->init)));
    }
    if ((0x800U & ((IData)(vlSelf->init) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__init = (
                                                   (0xf7ffU 
                                                    & (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x800U 
                                                      & (IData)(vlSelf->init)));
    }
    if ((0x1000U & ((IData)(vlSelf->init) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__init = (
                                                   (0xefffU 
                                                    & (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x1000U 
                                                      & (IData)(vlSelf->init)));
    }
    if ((0x2000U & ((IData)(vlSelf->init) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__init = (
                                                   (0xdfffU 
                                                    & (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x2000U 
                                                      & (IData)(vlSelf->init)));
    }
    if ((0x4000U & ((IData)(vlSelf->init) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__init = (
                                                   (0xbfffU 
                                                    & (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x4000U 
                                                      & (IData)(vlSelf->init)));
    }
    if ((0x8000U & ((IData)(vlSelf->init) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__init = (
                                                   (0x7fffU 
                                                    & (IData)(vlSelf->Exercise2__DOT____Vtogcov__init)) 
                                                   | (0x8000U 
                                                      & (IData)(vlSelf->init)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise2___024root___dump_triggers__act(VExercise2___024root* vlSelf);
#endif  // VL_DEBUG

void VExercise2___024root___eval_triggers__act(VExercise2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExercise2___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VExercise2___024root___nba_sequent__TOP__0(VExercise2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->reset) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->out = (0xffffU & (~ (IData)(vlSelf->init)));
    } else {
        vlSelf->out = (0xffffU & ((0xfffeU & ((IData)(vlSelf->out) 
                                              << 1U)) 
                                  | (1U & VL_REDXOR_16(
                                                       (0x50aU 
                                                        & (IData)(vlSelf->out))))));
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__out = ((0xfffeU 
                                                   & (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((2U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__out = ((0xfffdU 
                                                   & (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((4U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__out = ((0xfffbU 
                                                   & (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((8U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__out = ((0xfff7U 
                                                   & (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x10U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__out = ((0xffefU 
                                                   & (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x20U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__out = ((0xffdfU 
                                                   & (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x20U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x40U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__out = ((0xffbfU 
                                                   & (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x40U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x80U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__out = ((0xff7fU 
                                                   & (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x80U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x100U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__out = ((0xfeffU 
                                                   & (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x100U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x200U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__out = ((0xfdffU 
                                                   & (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x200U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x400U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__out = ((0xfbffU 
                                                   & (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x400U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x800U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__out = ((0xf7ffU 
                                                   & (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x800U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x1000U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__out = ((0xefffU 
                                                   & (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x1000U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x2000U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__out = ((0xdfffU 
                                                   & (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x2000U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x4000U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__out = ((0xbfffU 
                                                   & (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x4000U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x8000U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise2__DOT____Vtogcov__out = ((0x7fffU 
                                                   & (IData)(vlSelf->Exercise2__DOT____Vtogcov__out)) 
                                                  | (0x8000U 
                                                     & (IData)(vlSelf->out)));
    }
}
