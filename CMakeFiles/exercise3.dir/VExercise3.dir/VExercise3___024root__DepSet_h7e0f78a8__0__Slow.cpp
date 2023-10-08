// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise3.h for the primary calling header

#include "verilated.h"

#include "VExercise3__Syms.h"
#include "VExercise3__Syms.h"
#include "VExercise3___024root.h"

VL_ATTR_COLD void VExercise3___024root___eval_initial__TOP(VExercise3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise3___024root___dump_triggers__stl(VExercise3___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VExercise3___024root___eval_triggers__stl(VExercise3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExercise3___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VExercise3___024root___stl_sequent__TOP__0(VExercise3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((0U == (3U & (IData)(vlSelf->a)))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT__a_in = ((0xc0U & ((IData)(vlSelf->a) 
                                                  << 6U)) 
                                        | ((0x38U & 
                                            ((IData)(vlSelf->b) 
                                             << 3U)) 
                                           | (7U & (IData)(vlSelf->c))));
    } else if ((1U == (3U & (IData)(vlSelf->a)))) {
        vlSelf->Exercise3__DOT__a_in = ((0xc0U & ((IData)(vlSelf->a) 
                                                  << 6U)) 
                                        | ((0x38U & 
                                            ((IData)(vlSelf->c) 
                                             << 3U)) 
                                           | (7U & (IData)(vlSelf->b))));
    } else if ((2U == (3U & (IData)(vlSelf->a)))) {
        vlSelf->Exercise3__DOT__a_in = (0xffU & (IData)(vlSelf->b));
    } else if ((3U == (3U & (IData)(vlSelf->a)))) {
        vlSelf->Exercise3__DOT__a_in = (0xffU & (IData)(vlSelf->c));
    }
    if ((0U != (3U & (IData)(vlSelf->a)))) {
        if ((1U == (3U & (IData)(vlSelf->a)))) {
            vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U != (3U & (IData)(vlSelf->a)))) {
            if ((2U == (3U & (IData)(vlSelf->a)))) {
                vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (3U & (IData)(vlSelf->a)))) {
                if ((3U == (3U & (IData)(vlSelf->a)))) {
                    vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((0U == (3U & ((IData)(vlSelf->a) >> 2U)))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT__b_in = ((0xc0U & ((IData)(vlSelf->a) 
                                                  << 4U)) 
                                        | ((0x38U & 
                                            ((IData)(vlSelf->b) 
                                             >> 5U)) 
                                           | (7U & 
                                              ((IData)(vlSelf->c) 
                                               >> 8U))));
    } else if ((1U == (3U & ((IData)(vlSelf->a) >> 2U)))) {
        vlSelf->Exercise3__DOT__b_in = ((0xc0U & ((IData)(vlSelf->a) 
                                                  << 4U)) 
                                        | ((0x38U & 
                                            ((IData)(vlSelf->c) 
                                             >> 5U)) 
                                           | (7U & 
                                              ((IData)(vlSelf->b) 
                                               >> 8U))));
    } else if ((2U == (3U & ((IData)(vlSelf->a) >> 2U)))) {
        vlSelf->Exercise3__DOT__b_in = (0xffU & ((IData)(vlSelf->b) 
                                                 >> 8U));
    } else if ((3U == (3U & ((IData)(vlSelf->a) >> 2U)))) {
        vlSelf->Exercise3__DOT__b_in = (0xffU & ((IData)(vlSelf->c) 
                                                 >> 8U));
    }
    if ((0U != (3U & ((IData)(vlSelf->a) >> 2U)))) {
        if ((1U == (3U & ((IData)(vlSelf->a) >> 2U)))) {
            vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U != (3U & ((IData)(vlSelf->a) >> 2U)))) {
            if ((2U == (3U & ((IData)(vlSelf->a) >> 2U)))) {
                vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (3U & ((IData)(vlSelf->a) >> 2U)))) {
                if ((3U == (3U & ((IData)(vlSelf->a) 
                                  >> 2U)))) {
                    vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->reset) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__reset = vlSelf->reset;
    }
    if ((1U & ((IData)(vlSelf->Exercise3__DOT__gamma__DOT__count) 
               ^ (IData)(vlSelf->Exercise3__DOT__gamma__DOT____Vtogcov__count)))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT__gamma__DOT____Vtogcov__count 
            = ((6U & (IData)(vlSelf->Exercise3__DOT__gamma__DOT____Vtogcov__count)) 
               | (1U & (IData)(vlSelf->Exercise3__DOT__gamma__DOT__count)));
    }
    if ((2U & ((IData)(vlSelf->Exercise3__DOT__gamma__DOT__count) 
               ^ (IData)(vlSelf->Exercise3__DOT__gamma__DOT____Vtogcov__count)))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT__gamma__DOT____Vtogcov__count 
            = ((5U & (IData)(vlSelf->Exercise3__DOT__gamma__DOT____Vtogcov__count)) 
               | (2U & (IData)(vlSelf->Exercise3__DOT__gamma__DOT__count)));
    }
    if ((4U & ((IData)(vlSelf->Exercise3__DOT__gamma__DOT__count) 
               ^ (IData)(vlSelf->Exercise3__DOT__gamma__DOT____Vtogcov__count)))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT__gamma__DOT____Vtogcov__count 
            = ((3U & (IData)(vlSelf->Exercise3__DOT__gamma__DOT____Vtogcov__count)) 
               | (4U & (IData)(vlSelf->Exercise3__DOT__gamma__DOT__count)));
    }
    if ((1U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__a = ((0xeU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__a)) 
                                                | (1U 
                                                   & (IData)(vlSelf->a)));
    }
    if ((2U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__a = ((0xdU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__a)) 
                                                | (2U 
                                                   & (IData)(vlSelf->a)));
    }
    if ((4U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__a = ((0xbU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__a)) 
                                                | (4U 
                                                   & (IData)(vlSelf->a)));
    }
    if ((8U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__a)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__a = ((7U 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__a)) 
                                                | (8U 
                                                   & (IData)(vlSelf->a)));
    }
    if ((1U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b = ((0xfffeU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)) 
                                                | (1U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((2U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b = ((0xfffdU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)) 
                                                | (2U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((4U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b = ((0xfffbU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)) 
                                                | (4U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((8U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b = ((0xfff7U 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)) 
                                                | (8U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((0x10U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b = ((0xffefU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x10U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((0x20U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b = ((0xffdfU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x20U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((0x40U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b = ((0xffbfU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x40U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((0x80U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b = ((0xff7fU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x80U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((0x100U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b = ((0xfeffU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x100U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((0x200U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b = ((0xfdffU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x200U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((0x400U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b = ((0xfbffU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x400U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((0x800U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b = ((0xf7ffU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x800U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((0x1000U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b = ((0xefffU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x1000U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((0x2000U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b = ((0xdfffU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x2000U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((0x4000U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b = ((0xbfffU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x4000U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((0x8000U & ((IData)(vlSelf->b) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b = ((0x7fffU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b)) 
                                                | (0x8000U 
                                                   & (IData)(vlSelf->b)));
    }
    if ((1U & ((IData)(vlSelf->c) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__c = ((0xfffeU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)) 
                                                | (1U 
                                                   & (IData)(vlSelf->c)));
    }
    if ((2U & ((IData)(vlSelf->c) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__c = ((0xfffdU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)) 
                                                | (2U 
                                                   & (IData)(vlSelf->c)));
    }
    if ((4U & ((IData)(vlSelf->c) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__c = ((0xfffbU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)) 
                                                | (4U 
                                                   & (IData)(vlSelf->c)));
    }
    if ((8U & ((IData)(vlSelf->c) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__c = ((0xfff7U 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)) 
                                                | (8U 
                                                   & (IData)(vlSelf->c)));
    }
    if ((0x10U & ((IData)(vlSelf->c) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__c = ((0xffefU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x10U 
                                                   & (IData)(vlSelf->c)));
    }
    if ((0x20U & ((IData)(vlSelf->c) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__c = ((0xffdfU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x20U 
                                                   & (IData)(vlSelf->c)));
    }
    if ((0x40U & ((IData)(vlSelf->c) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__c = ((0xffbfU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x40U 
                                                   & (IData)(vlSelf->c)));
    }
    if ((0x80U & ((IData)(vlSelf->c) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__c = ((0xff7fU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x80U 
                                                   & (IData)(vlSelf->c)));
    }
    if ((0x100U & ((IData)(vlSelf->c) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__c = ((0xfeffU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x100U 
                                                   & (IData)(vlSelf->c)));
    }
    if ((0x200U & ((IData)(vlSelf->c) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__c = ((0xfdffU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x200U 
                                                   & (IData)(vlSelf->c)));
    }
    if ((0x400U & ((IData)(vlSelf->c) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__c = ((0xfbffU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x400U 
                                                   & (IData)(vlSelf->c)));
    }
    if ((0x800U & ((IData)(vlSelf->c) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__c = ((0xf7ffU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x800U 
                                                   & (IData)(vlSelf->c)));
    }
    if ((0x1000U & ((IData)(vlSelf->c) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__c = ((0xefffU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x1000U 
                                                   & (IData)(vlSelf->c)));
    }
    if ((0x2000U & ((IData)(vlSelf->c) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__c = ((0xdfffU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x2000U 
                                                   & (IData)(vlSelf->c)));
    }
    if ((0x4000U & ((IData)(vlSelf->c) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__c = ((0xbfffU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x4000U 
                                                   & (IData)(vlSelf->c)));
    }
    if ((0x8000U & ((IData)(vlSelf->c) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__c = ((0x7fffU 
                                                 & (IData)(vlSelf->Exercise3__DOT____Vtogcov__c)) 
                                                | (0x8000U 
                                                   & (IData)(vlSelf->c)));
    }
    if ((1U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__out = ((0xfffeU 
                                                   & (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((2U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__out = ((0xfffdU 
                                                   & (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((4U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__out = ((0xfffbU 
                                                   & (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((8U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__out = ((0xfff7U 
                                                   & (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x10U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__out = ((0xffefU 
                                                   & (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x20U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__out = ((0xffdfU 
                                                   & (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x20U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x40U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__out = ((0xffbfU 
                                                   & (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x40U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x80U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__out = ((0xff7fU 
                                                   & (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x80U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x100U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__out = ((0xfeffU 
                                                   & (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x100U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x200U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__out = ((0xfdffU 
                                                   & (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x200U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x400U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__out = ((0xfbffU 
                                                   & (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x400U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x800U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__out = ((0xf7ffU 
                                                   & (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x800U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x1000U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__out = ((0xefffU 
                                                   & (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x1000U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x2000U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__out = ((0xdfffU 
                                                   & (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x2000U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x4000U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__out = ((0xbfffU 
                                                   & (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x4000U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((0x8000U & ((IData)(vlSelf->out) ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__out = ((0x7fffU 
                                                   & (IData)(vlSelf->Exercise3__DOT____Vtogcov__out)) 
                                                  | (0x8000U 
                                                     & (IData)(vlSelf->out)));
    }
    if ((1U & ((IData)(vlSelf->Exercise3__DOT__a_in) 
               ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__a_in)))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__a_in = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->Exercise3__DOT____Vtogcov__a_in)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->Exercise3__DOT__a_in)));
    }
    if ((2U & ((IData)(vlSelf->Exercise3__DOT__a_in) 
               ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__a_in)))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__a_in = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->Exercise3__DOT____Vtogcov__a_in)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->Exercise3__DOT__a_in)));
    }
    if ((4U & ((IData)(vlSelf->Exercise3__DOT__a_in) 
               ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__a_in)))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__a_in = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->Exercise3__DOT____Vtogcov__a_in)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->Exercise3__DOT__a_in)));
    }
    if ((8U & ((IData)(vlSelf->Exercise3__DOT__a_in) 
               ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__a_in)))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__a_in = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->Exercise3__DOT____Vtogcov__a_in)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->Exercise3__DOT__a_in)));
    }
    if ((0x10U & ((IData)(vlSelf->Exercise3__DOT__a_in) 
                  ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__a_in)))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__a_in = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->Exercise3__DOT____Vtogcov__a_in)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->Exercise3__DOT__a_in)));
    }
    if ((0x20U & ((IData)(vlSelf->Exercise3__DOT__a_in) 
                  ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__a_in)))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__a_in = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->Exercise3__DOT____Vtogcov__a_in)) 
                                                   | (0x20U 
                                                      & (IData)(vlSelf->Exercise3__DOT__a_in)));
    }
    if ((0x40U & ((IData)(vlSelf->Exercise3__DOT__a_in) 
                  ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__a_in)))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__a_in = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->Exercise3__DOT____Vtogcov__a_in)) 
                                                   | (0x40U 
                                                      & (IData)(vlSelf->Exercise3__DOT__a_in)));
    }
    if ((0x80U & ((IData)(vlSelf->Exercise3__DOT__a_in) 
                  ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__a_in)))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__a_in = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->Exercise3__DOT____Vtogcov__a_in)) 
                                                   | (0x80U 
                                                      & (IData)(vlSelf->Exercise3__DOT__a_in)));
    }
    if ((1U & ((IData)(vlSelf->Exercise3__DOT__b_in) 
               ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b_in)))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b_in = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b_in)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->Exercise3__DOT__b_in)));
    }
    if ((2U & ((IData)(vlSelf->Exercise3__DOT__b_in) 
               ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b_in)))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b_in = (
                                                   (0xfdU 
                                                    & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b_in)) 
                                                   | (2U 
                                                      & (IData)(vlSelf->Exercise3__DOT__b_in)));
    }
    if ((4U & ((IData)(vlSelf->Exercise3__DOT__b_in) 
               ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b_in)))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b_in = (
                                                   (0xfbU 
                                                    & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b_in)) 
                                                   | (4U 
                                                      & (IData)(vlSelf->Exercise3__DOT__b_in)));
    }
    if ((8U & ((IData)(vlSelf->Exercise3__DOT__b_in) 
               ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b_in)))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b_in = (
                                                   (0xf7U 
                                                    & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b_in)) 
                                                   | (8U 
                                                      & (IData)(vlSelf->Exercise3__DOT__b_in)));
    }
    if ((0x10U & ((IData)(vlSelf->Exercise3__DOT__b_in) 
                  ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b_in)))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b_in = (
                                                   (0xefU 
                                                    & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b_in)) 
                                                   | (0x10U 
                                                      & (IData)(vlSelf->Exercise3__DOT__b_in)));
    }
    if ((0x20U & ((IData)(vlSelf->Exercise3__DOT__b_in) 
                  ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b_in)))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b_in = (
                                                   (0xdfU 
                                                    & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b_in)) 
                                                   | (0x20U 
                                                      & (IData)(vlSelf->Exercise3__DOT__b_in)));
    }
    if ((0x40U & ((IData)(vlSelf->Exercise3__DOT__b_in) 
                  ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b_in)))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b_in = (
                                                   (0xbfU 
                                                    & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b_in)) 
                                                   | (0x40U 
                                                      & (IData)(vlSelf->Exercise3__DOT__b_in)));
    }
    if ((0x80U & ((IData)(vlSelf->Exercise3__DOT__b_in) 
                  ^ (IData)(vlSelf->Exercise3__DOT____Vtogcov__b_in)))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->Exercise3__DOT____Vtogcov__b_in = (
                                                   (0x7fU 
                                                    & (IData)(vlSelf->Exercise3__DOT____Vtogcov__b_in)) 
                                                   | (0x80U 
                                                      & (IData)(vlSelf->Exercise3__DOT__b_in)));
    }
}

VL_ATTR_COLD void VExercise3___024root___configure_coverage(VExercise3___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise3___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 13, 11, ".Exercise3", "v_toggle/Exercise3", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 14, 11, ".Exercise3", "v_toggle/Exercise3", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 15, 17, ".Exercise3", "v_toggle/Exercise3", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 15, 17, ".Exercise3", "v_toggle/Exercise3", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 15, 17, ".Exercise3", "v_toggle/Exercise3", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 15, 17, ".Exercise3", "v_toggle/Exercise3", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 16, 18, ".Exercise3", "v_toggle/Exercise3", "b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 17, 18, ".Exercise3", "v_toggle/Exercise3", "c[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 18, 19, ".Exercise3", "v_toggle/Exercise3", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 20, 15, ".Exercise3", "v_toggle/Exercise3", "a_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 20, 15, ".Exercise3", "v_toggle/Exercise3", "a_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 20, 15, ".Exercise3", "v_toggle/Exercise3", "a_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 20, 15, ".Exercise3", "v_toggle/Exercise3", "a_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 20, 15, ".Exercise3", "v_toggle/Exercise3", "a_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 20, 15, ".Exercise3", "v_toggle/Exercise3", "a_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 20, 15, ".Exercise3", "v_toggle/Exercise3", "a_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 20, 15, ".Exercise3", "v_toggle/Exercise3", "a_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 21, 15, ".Exercise3", "v_toggle/Exercise3", "b_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 21, 15, ".Exercise3", "v_toggle/Exercise3", "b_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 21, 15, ".Exercise3", "v_toggle/Exercise3", "b_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 21, 15, ".Exercise3", "v_toggle/Exercise3", "b_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 21, 15, ".Exercise3", "v_toggle/Exercise3", "b_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 21, 15, ".Exercise3", "v_toggle/Exercise3", "b_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 21, 15, ".Exercise3", "v_toggle/Exercise3", "b_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Exercise3.sv", 21, 15, ".Exercise3", "v_toggle/Exercise3", "b_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 11, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 11, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "c[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "c[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "c[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "c[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "c[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "c[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "c[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.alpha", "v_toggle/Mystery1", "c[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.alpha", "v_toggle/Mystery1", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.alpha", "v_toggle/Mystery1", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.alpha", "v_toggle/Mystery1", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.alpha", "v_toggle/Mystery1", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.alpha", "v_toggle/Mystery1", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.alpha", "v_toggle/Mystery1", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.alpha", "v_toggle/Mystery1", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.alpha", "v_toggle/Mystery1", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 18, 8, ".Exercise3.alpha", "v_line/Mystery1", "case", "18-21");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 23, 8, ".Exercise3.alpha", "v_line/Mystery1", "case", "23-26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 28, 8, ".Exercise3.alpha", "v_line/Mystery1", "case", "28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 29, 8, ".Exercise3.alpha", "v_line/Mystery1", "case", "29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 16, 3, ".Exercise3.alpha", "v_line/Mystery1", "block", "16-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 11, 17, ".Exercise3.beta", "v_toggle/Mystery1", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 11, 17, ".Exercise3.beta", "v_toggle/Mystery1", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.beta", "v_toggle/Mystery1", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.beta", "v_toggle/Mystery1", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.beta", "v_toggle/Mystery1", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.beta", "v_toggle/Mystery1", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.beta", "v_toggle/Mystery1", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.beta", "v_toggle/Mystery1", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.beta", "v_toggle/Mystery1", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 12, 17, ".Exercise3.beta", "v_toggle/Mystery1", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.beta", "v_toggle/Mystery1", "c[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.beta", "v_toggle/Mystery1", "c[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.beta", "v_toggle/Mystery1", "c[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.beta", "v_toggle/Mystery1", "c[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.beta", "v_toggle/Mystery1", "c[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.beta", "v_toggle/Mystery1", "c[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.beta", "v_toggle/Mystery1", "c[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 13, 17, ".Exercise3.beta", "v_toggle/Mystery1", "c[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.beta", "v_toggle/Mystery1", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.beta", "v_toggle/Mystery1", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.beta", "v_toggle/Mystery1", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.beta", "v_toggle/Mystery1", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.beta", "v_toggle/Mystery1", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.beta", "v_toggle/Mystery1", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.beta", "v_toggle/Mystery1", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 14, 24, ".Exercise3.beta", "v_toggle/Mystery1", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 18, 8, ".Exercise3.beta", "v_line/Mystery1", "case", "18-21");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 23, 8, ".Exercise3.beta", "v_line/Mystery1", "case", "23-26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 28, 8, ".Exercise3.beta", "v_line/Mystery1", "case", "28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 29, 8, ".Exercise3.beta", "v_line/Mystery1", "case", "29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery1.sv", 16, 3, ".Exercise3.beta", "v_line/Mystery1", "block", "16-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 12, 11, ".Exercise3.gamma", "v_toggle/Mystery2", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 13, 11, ".Exercise3.gamma", "v_toggle/Mystery2", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 14, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "a_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 14, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "a_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 14, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "a_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 14, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "a_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 14, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "a_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 14, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "a_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 14, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "a_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 14, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "a_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 15, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "b_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 15, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "b_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 15, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "b_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 15, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "b_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 15, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "b_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 15, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "b_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 15, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "b_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 15, 17, ".Exercise3.gamma", "v_toggle/Mystery2", "b_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 16, 25, ".Exercise3.gamma", "v_toggle/Mystery2", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 18, 15, ".Exercise3.gamma", "v_toggle/Mystery2", "count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 18, 15, ".Exercise3.gamma", "v_toggle/Mystery2", "count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 18, 15, ".Exercise3.gamma", "v_toggle/Mystery2", "count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 25, 10, ".Exercise3.gamma", "v_line/Mystery2", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 26, 10, ".Exercise3.gamma", "v_line/Mystery2", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 27, 10, ".Exercise3.gamma", "v_line/Mystery2", "case", "27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 28, 10, ".Exercise3.gamma", "v_line/Mystery2", "case", "28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 29, 10, ".Exercise3.gamma", "v_line/Mystery2", "case", "29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 20, 5, ".Exercise3.gamma", "v_branch/Mystery2", "if", "20-22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 20, 6, ".Exercise3.gamma", "v_branch/Mystery2", "else", "23-24,31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "/Users/benchikbayor/Desktop/onboarding-lab-3/rtl/Mysteries/Mystery2.sv", 19, 3, ".Exercise3.gamma", "v_line/Mystery2", "block", "19");
}
