// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise1.h for the primary calling header

#include "verilated.h"

#include "VExercise1__Syms.h"
#include "VExercise1__Syms.h"
#include "VExercise1___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise1___024root___dump_triggers__ico(VExercise1___024root* vlSelf);
#endif  // VL_DEBUG

void VExercise1___024root___eval_triggers__ico(VExercise1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExercise1___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VExercise1___024root___ico_sequent__TOP__0(VExercise1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1___024root___ico_sequent__TOP__0\n"); );
    // Body
    if ((0U == (IData)(vlSelf->op))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->out = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
    } else if ((1U == (IData)(vlSelf->op))) {
        vlSelf->out = ((7U >= (IData)(vlSelf->b)) ? 
                       (0xffU & ((IData)(vlSelf->a) 
                                 << (IData)(vlSelf->b)))
                        : 0U);
    } else if ((2U == (IData)(vlSelf->op))) {
        vlSelf->out = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->a), (IData)(vlSelf->b)));
    } else if ((3U == (IData)(vlSelf->op))) {
        vlSelf->out = (0xffU & (~ ((IData)(vlSelf->a) 
                                   & (IData)(vlSelf->b))));
    }
    if ((0U != (IData)(vlSelf->op))) {
        if ((1U == (IData)(vlSelf->op))) {
            vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U != (IData)(vlSelf->op))) {
            if ((2U == (IData)(vlSelf->op))) {
                vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->op))) {
                if ((3U == (IData)(vlSelf->op))) {
                    vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->op) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__op)))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__op = ((2U 
                                                  & (IData)(vlSelf->Exercise1__DOT____Vtogcov__op)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->op)));
    }
    if ((2U & ((IData)(vlSelf->op) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__op)))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__op = ((1U 
                                                  & (IData)(vlSelf->Exercise1__DOT____Vtogcov__op)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->op)));
    }
    if ((1U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__a = ((0xfeU 
                                                 & (IData)(vlSelf->Exercise1__DOT____Vtogcov__a)) 
                                                | (1U 
                                                   & (IData)(vlSelf->a)));
    }
    if ((2U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__a = ((0xfdU 
                                                 & (IData)(vlSelf->Exercise1__DOT____Vtogcov__a)) 
                                                | (2U 
                                                   & (IData)(vlSelf->a)));
    }
    if ((4U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__a = ((0xfbU 
                                                 & (IData)(vlSelf->Exercise1__DOT____Vtogcov__a)) 
                                                | (4U 
                                                   & (IData)(vlSelf->a)));
    }
    if ((8U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__a = ((0xf7U 
                                                 & (IData)(vlSelf->Exercise1__DOT____Vtogcov__a)) 
                                                | (8U 
                                                   & (IData)(vlSelf->a)));
    }
    if ((0x10U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__a = ((0xefU 
                                                 & (IData)(vlSelf->Exercise1__DOT____Vtogcov__a)) 
                                                | (0x10U 
                                                   & (IData)(vlSelf->a)));
    }
    if ((0x20U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__a = ((0xdfU 
                                                 & (IData)(vlSelf->Exercise1__DOT____Vtogcov__a)) 
                                                | (0x20U 
                                                   & (IData)(vlSelf->a)));
    }
    if ((0x40U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__a = ((0xbfU 
                                                 & (IData)(vlSelf->Exercise1__DOT____Vtogcov__a)) 
                                                | (0x40U 
                                                   & (IData)(vlSelf->a)));
    }
    if ((0x80U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__a = ((0x7fU 
                                                 & (IData)(vlSelf->Exercise1__DOT____Vtogcov__a)) 
                                                | (0x80U 
                                                   & (IData)(vlSelf->a)));
    }
    if ((1U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__b = ((0xfeU 
                                                 & (IData)(vlSelf->Exercise1__DOT____Vtogcov__b)) 
                                                | (1U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((2U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__b = ((0xfdU 
                                                 & (IData)(vlSelf->Exercise1__DOT____Vtogcov__b)) 
                                                | (2U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((4U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__b = ((0xfbU 
                                                 & (IData)(vlSelf->Exercise1__DOT____Vtogcov__b)) 
                                                | (4U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((8U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__b = ((0xf7U 
                                                 & (IData)(vlSelf->Exercise1__DOT____Vtogcov__b)) 
                                                | (8U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((0x10U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__b = ((0xefU 
                                                 & (IData)(vlSelf->Exercise1__DOT____Vtogcov__b)) 
                                                | (0x10U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((0x20U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__b = ((0xdfU 
                                                 & (IData)(vlSelf->Exercise1__DOT____Vtogcov__b)) 
                                                | (0x20U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((0x40U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__b = ((0xbfU 
                                                 & (IData)(vlSelf->Exercise1__DOT____Vtogcov__b)) 
                                                | (0x40U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((0x80U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__b = ((0x7fU 
                                                 & (IData)(vlSelf->Exercise1__DOT____Vtogcov__b)) 
                                                | (0x80U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((1U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__out = ((0xfeU 
                                                   & (IData)(vlSelf->Exercise1__DOT____Vtogcov__out)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((2U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__out = ((0xfdU 
                                                   & (IData)(vlSelf->Exercise1__DOT____Vtogcov__out)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((4U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__out = ((0xfbU 
                                                   & (IData)(vlSelf->Exercise1__DOT____Vtogcov__out)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((8U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__out = ((0xf7U 
                                                   & (IData)(vlSelf->Exercise1__DOT____Vtogcov__out)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x10U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__out = ((0xefU 
                                                   & (IData)(vlSelf->Exercise1__DOT____Vtogcov__out)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x20U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__out = ((0xdfU 
                                                   & (IData)(vlSelf->Exercise1__DOT____Vtogcov__out)) 
                                                  | (0x20U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x40U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__out = ((0xbfU 
                                                   & (IData)(vlSelf->Exercise1__DOT____Vtogcov__out)) 
                                                  | (0x40U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x80U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise1__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise1__DOT____Vtogcov__out = ((0x7fU 
                                                   & (IData)(vlSelf->Exercise1__DOT____Vtogcov__out)) 
                                                  | (0x80U 
                                                     & (IData)(vlSelf->out)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise1___024root___dump_triggers__act(VExercise1___024root* vlSelf);
#endif  // VL_DEBUG

void VExercise1___024root___eval_triggers__act(VExercise1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExercise1___024root___dump_triggers__act(vlSelf);
    }
#endif
}
