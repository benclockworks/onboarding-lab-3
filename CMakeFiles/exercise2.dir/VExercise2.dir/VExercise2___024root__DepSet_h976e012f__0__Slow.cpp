// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise2.h for the primary calling header

#include "verilated.h"

#include "VExercise2__Syms.h"
#include "VExercise2__Syms.h"
#include "VExercise2___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise2___024root___dump_triggers__stl(VExercise2___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VExercise2___024root___eval_triggers__stl(VExercise2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExercise2___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VExercise2___024root___stl_sequent__TOP__0(VExercise2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2___024root___stl_sequent__TOP__0\n"); );
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

VL_ATTR_COLD void VExercise2___024root___configure_coverage(VExercise2___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise2___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 10, 11, ".Exercise2", "v_toggle/Exercise2", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 11, 11, ".Exercise2", "v_toggle/Exercise2", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 12, 18, ".Exercise2", "v_toggle/Exercise2", "init[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 13, 25, ".Exercise2", "v_toggle/Exercise2", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 16, 5, ".Exercise2", "v_branch/Exercise2", "if", "16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 16, 6, ".Exercise2", "v_branch/Exercise2", "else", "17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise2.sv", 15, 3, ".Exercise2", "v_line/Exercise2", "block", "15");
}
