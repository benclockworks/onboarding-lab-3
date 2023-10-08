// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise4.h for the primary calling header

#include "verilated.h"

#include "VExercise4__Syms.h"
#include "VExercise4__Syms.h"
#include "VExercise4___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise4___024root___dump_triggers__ico(VExercise4___024root* vlSelf);
#endif  // VL_DEBUG

void VExercise4___024root___eval_triggers__ico(VExercise4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExercise4___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VExercise4___024root___ico_sequent__TOP__0(VExercise4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->cs) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        if ((0U != (IData)(vlSelf->sel))) {
            if ((1U == (IData)(vlSelf->sel))) {
                vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U != (IData)(vlSelf->sel))) {
                if ((2U == (IData)(vlSelf->sel))) {
                    vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
                }
                if ((2U != (IData)(vlSelf->sel))) {
                    vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((0U == (IData)(vlSelf->sel))) {
            vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
            vlSelf->out = vlSelf->alpha;
        } else {
            vlSelf->out = ((1U == (IData)(vlSelf->sel))
                            ? (IData)(vlSelf->beta)
                            : ((2U == (IData)(vlSelf->sel))
                                ? (IData)(vlSelf->gamma)
                                : ((IData)(vlSelf->alpha) 
                                   & ((IData)(vlSelf->beta) 
                                      | (IData)(vlSelf->gamma)))));
        }
    } else {
        vlSelf->out = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->cs)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->cs) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__cs))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__cs = vlSelf->cs;
    }
    if ((1U & ((IData)(vlSelf->sel) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__sel)))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__sel = ((2U 
                                                   & (IData)(vlSelf->Exercise4__DOT____Vtogcov__sel)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->sel)));
    }
    if ((2U & ((IData)(vlSelf->sel) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__sel)))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__sel = ((1U 
                                                   & (IData)(vlSelf->Exercise4__DOT____Vtogcov__sel)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->sel)));
    }
    if ((1U & ((IData)(vlSelf->alpha) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__alpha)))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__alpha = 
            ((0xfeU & (IData)(vlSelf->Exercise4__DOT____Vtogcov__alpha)) 
             | (1U & (IData)(vlSelf->alpha)));
    }
    if ((2U & ((IData)(vlSelf->alpha) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__alpha)))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__alpha = 
            ((0xfdU & (IData)(vlSelf->Exercise4__DOT____Vtogcov__alpha)) 
             | (2U & (IData)(vlSelf->alpha)));
    }
    if ((4U & ((IData)(vlSelf->alpha) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__alpha)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__alpha = 
            ((0xfbU & (IData)(vlSelf->Exercise4__DOT____Vtogcov__alpha)) 
             | (4U & (IData)(vlSelf->alpha)));
    }
    if ((8U & ((IData)(vlSelf->alpha) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__alpha)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__alpha = 
            ((0xf7U & (IData)(vlSelf->Exercise4__DOT____Vtogcov__alpha)) 
             | (8U & (IData)(vlSelf->alpha)));
    }
    if ((0x10U & ((IData)(vlSelf->alpha) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__alpha)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__alpha = 
            ((0xefU & (IData)(vlSelf->Exercise4__DOT____Vtogcov__alpha)) 
             | (0x10U & (IData)(vlSelf->alpha)));
    }
    if ((0x20U & ((IData)(vlSelf->alpha) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__alpha)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__alpha = 
            ((0xdfU & (IData)(vlSelf->Exercise4__DOT____Vtogcov__alpha)) 
             | (0x20U & (IData)(vlSelf->alpha)));
    }
    if ((0x40U & ((IData)(vlSelf->alpha) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__alpha)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__alpha = 
            ((0xbfU & (IData)(vlSelf->Exercise4__DOT____Vtogcov__alpha)) 
             | (0x40U & (IData)(vlSelf->alpha)));
    }
    if ((0x80U & ((IData)(vlSelf->alpha) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__alpha)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__alpha = 
            ((0x7fU & (IData)(vlSelf->Exercise4__DOT____Vtogcov__alpha)) 
             | (0x80U & (IData)(vlSelf->alpha)));
    }
    if ((1U & ((IData)(vlSelf->beta) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__beta)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__beta = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->Exercise4__DOT____Vtogcov__beta)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->beta)));
    }
    if ((2U & ((IData)(vlSelf->beta) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__beta)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__beta = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->Exercise4__DOT____Vtogcov__beta)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->beta)));
    }
    if ((4U & ((IData)(vlSelf->beta) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__beta)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__beta = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->Exercise4__DOT____Vtogcov__beta)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->beta)));
    }
    if ((8U & ((IData)(vlSelf->beta) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__beta)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__beta = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->Exercise4__DOT____Vtogcov__beta)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->beta)));
    }
    if ((0x10U & ((IData)(vlSelf->beta) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__beta)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__beta = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->Exercise4__DOT____Vtogcov__beta)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->beta)));
    }
    if ((0x20U & ((IData)(vlSelf->beta) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__beta)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__beta = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->Exercise4__DOT____Vtogcov__beta)) 
                                                   | (0x20U 
                                                      & (IData)(vlSelf->beta)));
    }
    if ((0x40U & ((IData)(vlSelf->beta) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__beta)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__beta = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->Exercise4__DOT____Vtogcov__beta)) 
                                                   | (0x40U 
                                                      & (IData)(vlSelf->beta)));
    }
    if ((0x80U & ((IData)(vlSelf->beta) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__beta)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__beta = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->Exercise4__DOT____Vtogcov__beta)) 
                                                   | (0x80U 
                                                      & (IData)(vlSelf->beta)));
    }
    if ((1U & ((IData)(vlSelf->gamma) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__gamma)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__gamma = 
            ((0xfeU & (IData)(vlSelf->Exercise4__DOT____Vtogcov__gamma)) 
             | (1U & (IData)(vlSelf->gamma)));
    }
    if ((2U & ((IData)(vlSelf->gamma) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__gamma)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__gamma = 
            ((0xfdU & (IData)(vlSelf->Exercise4__DOT____Vtogcov__gamma)) 
             | (2U & (IData)(vlSelf->gamma)));
    }
    if ((4U & ((IData)(vlSelf->gamma) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__gamma)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__gamma = 
            ((0xfbU & (IData)(vlSelf->Exercise4__DOT____Vtogcov__gamma)) 
             | (4U & (IData)(vlSelf->gamma)));
    }
    if ((8U & ((IData)(vlSelf->gamma) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__gamma)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__gamma = 
            ((0xf7U & (IData)(vlSelf->Exercise4__DOT____Vtogcov__gamma)) 
             | (8U & (IData)(vlSelf->gamma)));
    }
    if ((0x10U & ((IData)(vlSelf->gamma) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__gamma)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__gamma = 
            ((0xefU & (IData)(vlSelf->Exercise4__DOT____Vtogcov__gamma)) 
             | (0x10U & (IData)(vlSelf->gamma)));
    }
    if ((0x20U & ((IData)(vlSelf->gamma) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__gamma)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__gamma = 
            ((0xdfU & (IData)(vlSelf->Exercise4__DOT____Vtogcov__gamma)) 
             | (0x20U & (IData)(vlSelf->gamma)));
    }
    if ((0x40U & ((IData)(vlSelf->gamma) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__gamma)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__gamma = 
            ((0xbfU & (IData)(vlSelf->Exercise4__DOT____Vtogcov__gamma)) 
             | (0x40U & (IData)(vlSelf->gamma)));
    }
    if ((0x80U & ((IData)(vlSelf->gamma) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__gamma)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__gamma = 
            ((0x7fU & (IData)(vlSelf->Exercise4__DOT____Vtogcov__gamma)) 
             | (0x80U & (IData)(vlSelf->gamma)));
    }
    if ((1U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__out = ((0xfeU 
                                                   & (IData)(vlSelf->Exercise4__DOT____Vtogcov__out)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((2U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__out = ((0xfdU 
                                                   & (IData)(vlSelf->Exercise4__DOT____Vtogcov__out)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((4U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__out = ((0xfbU 
                                                   & (IData)(vlSelf->Exercise4__DOT____Vtogcov__out)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((8U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__out = ((0xf7U 
                                                   & (IData)(vlSelf->Exercise4__DOT____Vtogcov__out)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x10U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__out = ((0xefU 
                                                   & (IData)(vlSelf->Exercise4__DOT____Vtogcov__out)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x20U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__out = ((0xdfU 
                                                   & (IData)(vlSelf->Exercise4__DOT____Vtogcov__out)) 
                                                  | (0x20U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x40U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__out = ((0xbfU 
                                                   & (IData)(vlSelf->Exercise4__DOT____Vtogcov__out)) 
                                                  | (0x40U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x80U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise4__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise4__DOT____Vtogcov__out = ((0x7fU 
                                                   & (IData)(vlSelf->Exercise4__DOT____Vtogcov__out)) 
                                                  | (0x80U 
                                                     & (IData)(vlSelf->out)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise4___024root___dump_triggers__act(VExercise4___024root* vlSelf);
#endif  // VL_DEBUG

void VExercise4___024root___eval_triggers__act(VExercise4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise4___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExercise4___024root___dump_triggers__act(vlSelf);
    }
#endif
}
