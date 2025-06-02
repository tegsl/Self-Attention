// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoftmax_appr.h for the primary calling header

#include "Vsoftmax_appr__pch.h"
#include "Vsoftmax_appr___024root.h"

void Vsoftmax_appr___024root___ico_sequent__TOP__0(Vsoftmax_appr___024root* vlSelf);

void Vsoftmax_appr___024root___eval_ico(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___eval_ico\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vsoftmax_appr___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsoftmax_appr___024root___ico_sequent__TOP__0(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___ico_sequent__TOP__0\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*21:0*/ __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout;
    __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_softmax_appr__DOT__exp_approx__0__x;
    __Vfunc_softmax_appr__DOT__exp_approx__0__x = 0;
    IData/*31:0*/ __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped;
    __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped = 0;
    // Body
    vlSelfRef.softmax_appr__DOT__scores_parallel[0U] 
        = (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                          (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                           + (IData)(vlSelfRef.softmax_appr__DOT__j)), 5U)))
             ? 0U : (vlSelfRef.scores_flat[(((IData)(0x1fU) 
                                             + (0x1ffffU 
                                                & VL_SHIFTL_III(17,32,32, 
                                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                 + (IData)(vlSelfRef.softmax_appr__DOT__j)), 5U))) 
                                            >> 5U)] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           VL_SHIFTL_III(17,32,32, 
                                                         (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                          + (IData)(vlSelfRef.softmax_appr__DOT__j)), 5U))))) 
           | (vlSelfRef.scores_flat[(0xfffU & (VL_SHIFTL_III(17,32,32, 
                                                             (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                              + (IData)(vlSelfRef.softmax_appr__DOT__j)), 5U) 
                                               >> 5U))] 
              >> (0x1fU & VL_SHIFTL_III(17,32,32, (
                                                   VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                   + (IData)(vlSelfRef.softmax_appr__DOT__j)), 5U))));
    vlSelfRef.softmax_appr__DOT__scores_parallel[1U] 
        = ((0x40U > ((IData)(1U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                              ((IData)(1U) 
                                               + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                  + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U)))
                 ? 0U : (vlSelfRef.scores_flat[(((IData)(0x1fU) 
                                                 + 
                                                 (0x1ffffU 
                                                  & VL_SHIFTL_III(17,32,32, 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))) 
                                                >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_SHIFTL_III(17,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                 + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))) 
               | (vlSelfRef.scores_flat[(0xfffU & (
                                                   VL_SHIFTL_III(17,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                   + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U) 
                                                   >> 5U))] 
                  >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                            ((IData)(1U) 
                                             + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))
            : 0x80000000U);
    vlSelfRef.softmax_appr__DOT__scores_parallel[2U] 
        = ((0x40U > ((IData)(2U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                              ((IData)(2U) 
                                               + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                  + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U)))
                 ? 0U : (vlSelfRef.scores_flat[(((IData)(0x1fU) 
                                                 + 
                                                 (0x1ffffU 
                                                  & VL_SHIFTL_III(17,32,32, 
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))) 
                                                >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_SHIFTL_III(17,32,32, 
                                                               ((IData)(2U) 
                                                                + 
                                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                 + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))) 
               | (vlSelfRef.scores_flat[(0xfffU & (
                                                   VL_SHIFTL_III(17,32,32, 
                                                                 ((IData)(2U) 
                                                                  + 
                                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                   + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U) 
                                                   >> 5U))] 
                  >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                            ((IData)(2U) 
                                             + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))
            : 0x80000000U);
    vlSelfRef.softmax_appr__DOT__scores_parallel[3U] 
        = ((0x40U > ((IData)(3U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                              ((IData)(3U) 
                                               + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                  + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U)))
                 ? 0U : (vlSelfRef.scores_flat[(((IData)(0x1fU) 
                                                 + 
                                                 (0x1ffffU 
                                                  & VL_SHIFTL_III(17,32,32, 
                                                                  ((IData)(3U) 
                                                                   + 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))) 
                                                >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_SHIFTL_III(17,32,32, 
                                                               ((IData)(3U) 
                                                                + 
                                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                 + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))) 
               | (vlSelfRef.scores_flat[(0xfffU & (
                                                   VL_SHIFTL_III(17,32,32, 
                                                                 ((IData)(3U) 
                                                                  + 
                                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                   + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U) 
                                                   >> 5U))] 
                  >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                            ((IData)(3U) 
                                             + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))
            : 0x80000000U);
    vlSelfRef.softmax_appr__DOT__scores_parallel[4U] 
        = ((0x40U > ((IData)(4U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                              ((IData)(4U) 
                                               + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                  + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U)))
                 ? 0U : (vlSelfRef.scores_flat[(((IData)(0x1fU) 
                                                 + 
                                                 (0x1ffffU 
                                                  & VL_SHIFTL_III(17,32,32, 
                                                                  ((IData)(4U) 
                                                                   + 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))) 
                                                >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_SHIFTL_III(17,32,32, 
                                                               ((IData)(4U) 
                                                                + 
                                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                 + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))) 
               | (vlSelfRef.scores_flat[(0xfffU & (
                                                   VL_SHIFTL_III(17,32,32, 
                                                                 ((IData)(4U) 
                                                                  + 
                                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                   + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U) 
                                                   >> 5U))] 
                  >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                            ((IData)(4U) 
                                             + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))
            : 0x80000000U);
    vlSelfRef.softmax_appr__DOT__scores_parallel[5U] 
        = ((0x40U > ((IData)(5U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                              ((IData)(5U) 
                                               + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                  + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U)))
                 ? 0U : (vlSelfRef.scores_flat[(((IData)(0x1fU) 
                                                 + 
                                                 (0x1ffffU 
                                                  & VL_SHIFTL_III(17,32,32, 
                                                                  ((IData)(5U) 
                                                                   + 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))) 
                                                >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_SHIFTL_III(17,32,32, 
                                                               ((IData)(5U) 
                                                                + 
                                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                 + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))) 
               | (vlSelfRef.scores_flat[(0xfffU & (
                                                   VL_SHIFTL_III(17,32,32, 
                                                                 ((IData)(5U) 
                                                                  + 
                                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                   + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U) 
                                                   >> 5U))] 
                  >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                            ((IData)(5U) 
                                             + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))
            : 0x80000000U);
    vlSelfRef.softmax_appr__DOT__scores_parallel[6U] 
        = ((0x40U > ((IData)(6U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                              ((IData)(6U) 
                                               + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                  + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U)))
                 ? 0U : (vlSelfRef.scores_flat[(((IData)(0x1fU) 
                                                 + 
                                                 (0x1ffffU 
                                                  & VL_SHIFTL_III(17,32,32, 
                                                                  ((IData)(6U) 
                                                                   + 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))) 
                                                >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_SHIFTL_III(17,32,32, 
                                                               ((IData)(6U) 
                                                                + 
                                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                 + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))) 
               | (vlSelfRef.scores_flat[(0xfffU & (
                                                   VL_SHIFTL_III(17,32,32, 
                                                                 ((IData)(6U) 
                                                                  + 
                                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                   + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U) 
                                                   >> 5U))] 
                  >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                            ((IData)(6U) 
                                             + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))
            : 0x80000000U);
    vlSelfRef.softmax_appr__DOT__scores_parallel[7U] 
        = ((0x40U > ((IData)(7U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                              ((IData)(7U) 
                                               + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                  + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U)))
                 ? 0U : (vlSelfRef.scores_flat[(((IData)(0x1fU) 
                                                 + 
                                                 (0x1ffffU 
                                                  & VL_SHIFTL_III(17,32,32, 
                                                                  ((IData)(7U) 
                                                                   + 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))) 
                                                >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_SHIFTL_III(17,32,32, 
                                                               ((IData)(7U) 
                                                                + 
                                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                 + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))) 
               | (vlSelfRef.scores_flat[(0xfffU & (
                                                   VL_SHIFTL_III(17,32,32, 
                                                                 ((IData)(7U) 
                                                                  + 
                                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                   + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U) 
                                                   >> 5U))] 
                  >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                            ((IData)(7U) 
                                             + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))
            : 0x80000000U);
    __Vfunc_softmax_appr__DOT__exp_approx__0__x = (
                                                   vlSelfRef.softmax_appr__DOT__scores_parallel
                                                   [0U] 
                                                   - vlSelfRef.softmax_appr__DOT__max_score);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared = VL_RAND_RESET_Q(64);
    __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_III(32, 0x18000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
            ? 0x18000U : (VL_GTS_III(32, 0xfffe8000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
                           ? 0xfffe8000U : __Vfunc_softmax_appr__DOT__exp_approx__0__x));
    if (VL_LTES_III(32, 0U, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared 
            = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped), 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)), 0xeU);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (0x3fffffU & ((IData)(0x4000U) + ((IData)(
                                                        VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) 
                                                + (IData)(
                                                          VL_SHIFTRS_QQI(64,64,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared, 1U)))));
    } else {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (- __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (VL_GTS_III(32, 0x4000U, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                ? (0x3fffffU & (((IData)(0x4000U) - vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                + VL_SHIFTRS_III(32,32,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                : 0x100U);
    }
    __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result;
    vlSelfRef.softmax_appr__DOT__exp_vals_parallel[0U] 
        = __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout;
    __Vfunc_softmax_appr__DOT__exp_approx__0__x = (
                                                   vlSelfRef.softmax_appr__DOT__scores_parallel
                                                   [1U] 
                                                   - vlSelfRef.softmax_appr__DOT__max_score);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared = VL_RAND_RESET_Q(64);
    __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_III(32, 0x18000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
            ? 0x18000U : (VL_GTS_III(32, 0xfffe8000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
                           ? 0xfffe8000U : __Vfunc_softmax_appr__DOT__exp_approx__0__x));
    if (VL_LTES_III(32, 0U, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared 
            = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped), 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)), 0xeU);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (0x3fffffU & ((IData)(0x4000U) + ((IData)(
                                                        VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) 
                                                + (IData)(
                                                          VL_SHIFTRS_QQI(64,64,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared, 1U)))));
    } else {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (- __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (VL_GTS_III(32, 0x4000U, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                ? (0x3fffffU & (((IData)(0x4000U) - vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                + VL_SHIFTRS_III(32,32,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                : 0x100U);
    }
    __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result;
    vlSelfRef.softmax_appr__DOT__exp_vals_parallel[1U] 
        = __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout;
    __Vfunc_softmax_appr__DOT__exp_approx__0__x = (
                                                   vlSelfRef.softmax_appr__DOT__scores_parallel
                                                   [2U] 
                                                   - vlSelfRef.softmax_appr__DOT__max_score);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared = VL_RAND_RESET_Q(64);
    __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_III(32, 0x18000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
            ? 0x18000U : (VL_GTS_III(32, 0xfffe8000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
                           ? 0xfffe8000U : __Vfunc_softmax_appr__DOT__exp_approx__0__x));
    if (VL_LTES_III(32, 0U, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared 
            = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped), 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)), 0xeU);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (0x3fffffU & ((IData)(0x4000U) + ((IData)(
                                                        VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) 
                                                + (IData)(
                                                          VL_SHIFTRS_QQI(64,64,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared, 1U)))));
    } else {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (- __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (VL_GTS_III(32, 0x4000U, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                ? (0x3fffffU & (((IData)(0x4000U) - vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                + VL_SHIFTRS_III(32,32,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                : 0x100U);
    }
    __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result;
    vlSelfRef.softmax_appr__DOT__exp_vals_parallel[2U] 
        = __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout;
    __Vfunc_softmax_appr__DOT__exp_approx__0__x = (
                                                   vlSelfRef.softmax_appr__DOT__scores_parallel
                                                   [3U] 
                                                   - vlSelfRef.softmax_appr__DOT__max_score);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared = VL_RAND_RESET_Q(64);
    __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_III(32, 0x18000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
            ? 0x18000U : (VL_GTS_III(32, 0xfffe8000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
                           ? 0xfffe8000U : __Vfunc_softmax_appr__DOT__exp_approx__0__x));
    if (VL_LTES_III(32, 0U, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared 
            = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped), 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)), 0xeU);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (0x3fffffU & ((IData)(0x4000U) + ((IData)(
                                                        VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) 
                                                + (IData)(
                                                          VL_SHIFTRS_QQI(64,64,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared, 1U)))));
    } else {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (- __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (VL_GTS_III(32, 0x4000U, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                ? (0x3fffffU & (((IData)(0x4000U) - vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                + VL_SHIFTRS_III(32,32,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                : 0x100U);
    }
    __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result;
    vlSelfRef.softmax_appr__DOT__exp_vals_parallel[3U] 
        = __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout;
    __Vfunc_softmax_appr__DOT__exp_approx__0__x = (
                                                   vlSelfRef.softmax_appr__DOT__scores_parallel
                                                   [4U] 
                                                   - vlSelfRef.softmax_appr__DOT__max_score);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared = VL_RAND_RESET_Q(64);
    __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_III(32, 0x18000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
            ? 0x18000U : (VL_GTS_III(32, 0xfffe8000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
                           ? 0xfffe8000U : __Vfunc_softmax_appr__DOT__exp_approx__0__x));
    if (VL_LTES_III(32, 0U, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared 
            = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped), 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)), 0xeU);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (0x3fffffU & ((IData)(0x4000U) + ((IData)(
                                                        VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) 
                                                + (IData)(
                                                          VL_SHIFTRS_QQI(64,64,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared, 1U)))));
    } else {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (- __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (VL_GTS_III(32, 0x4000U, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                ? (0x3fffffU & (((IData)(0x4000U) - vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                + VL_SHIFTRS_III(32,32,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                : 0x100U);
    }
    __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result;
    vlSelfRef.softmax_appr__DOT__exp_vals_parallel[4U] 
        = __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout;
    __Vfunc_softmax_appr__DOT__exp_approx__0__x = (
                                                   vlSelfRef.softmax_appr__DOT__scores_parallel
                                                   [5U] 
                                                   - vlSelfRef.softmax_appr__DOT__max_score);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared = VL_RAND_RESET_Q(64);
    __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_III(32, 0x18000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
            ? 0x18000U : (VL_GTS_III(32, 0xfffe8000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
                           ? 0xfffe8000U : __Vfunc_softmax_appr__DOT__exp_approx__0__x));
    if (VL_LTES_III(32, 0U, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared 
            = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped), 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)), 0xeU);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (0x3fffffU & ((IData)(0x4000U) + ((IData)(
                                                        VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) 
                                                + (IData)(
                                                          VL_SHIFTRS_QQI(64,64,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared, 1U)))));
    } else {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (- __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (VL_GTS_III(32, 0x4000U, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                ? (0x3fffffU & (((IData)(0x4000U) - vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                + VL_SHIFTRS_III(32,32,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                : 0x100U);
    }
    __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result;
    vlSelfRef.softmax_appr__DOT__exp_vals_parallel[5U] 
        = __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout;
    __Vfunc_softmax_appr__DOT__exp_approx__0__x = (
                                                   vlSelfRef.softmax_appr__DOT__scores_parallel
                                                   [6U] 
                                                   - vlSelfRef.softmax_appr__DOT__max_score);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared = VL_RAND_RESET_Q(64);
    __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_III(32, 0x18000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
            ? 0x18000U : (VL_GTS_III(32, 0xfffe8000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
                           ? 0xfffe8000U : __Vfunc_softmax_appr__DOT__exp_approx__0__x));
    if (VL_LTES_III(32, 0U, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared 
            = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped), 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)), 0xeU);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (0x3fffffU & ((IData)(0x4000U) + ((IData)(
                                                        VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) 
                                                + (IData)(
                                                          VL_SHIFTRS_QQI(64,64,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared, 1U)))));
    } else {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (- __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (VL_GTS_III(32, 0x4000U, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                ? (0x3fffffU & (((IData)(0x4000U) - vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                + VL_SHIFTRS_III(32,32,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                : 0x100U);
    }
    __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result;
    vlSelfRef.softmax_appr__DOT__exp_vals_parallel[6U] 
        = __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout;
    __Vfunc_softmax_appr__DOT__exp_approx__0__x = (
                                                   vlSelfRef.softmax_appr__DOT__scores_parallel
                                                   [7U] 
                                                   - vlSelfRef.softmax_appr__DOT__max_score);
    __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_III(32, 0x18000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
            ? 0x18000U : (VL_GTS_III(32, 0xfffe8000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
                           ? 0xfffe8000U : __Vfunc_softmax_appr__DOT__exp_approx__0__x));
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared = VL_RAND_RESET_Q(64);
    if (VL_LTES_III(32, 0U, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared 
            = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped), 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)), 0xeU);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (0x3fffffU & ((IData)(0x4000U) + ((IData)(
                                                        VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) 
                                                + (IData)(
                                                          VL_SHIFTRS_QQI(64,64,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared, 1U)))));
    } else {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (- __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (VL_GTS_III(32, 0x4000U, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                ? (0x3fffffU & (((IData)(0x4000U) - vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                + VL_SHIFTRS_III(32,32,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                : 0x100U);
    }
    __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result;
    vlSelfRef.softmax_appr__DOT__exp_vals_parallel[7U] 
        = __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout;
}

void Vsoftmax_appr___024root___eval_triggers__ico(Vsoftmax_appr___024root* vlSelf);

bool Vsoftmax_appr___024root___eval_phase__ico(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___eval_phase__ico\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vsoftmax_appr___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vsoftmax_appr___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vsoftmax_appr___024root___eval_act(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___eval_act\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsoftmax_appr___024root___nba_sequent__TOP__0(Vsoftmax_appr___024root* vlSelf);

void Vsoftmax_appr___024root___eval_nba(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___eval_nba\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsoftmax_appr___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsoftmax_appr___024root___nba_sequent__TOP__0(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___nba_sequent__TOP__0\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*35:0*/ softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__scaled;
    softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__scaled = 0;
    QData/*35:0*/ softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm;
    softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm = 0;
    IData/*31:0*/ softmax_appr__DOT__unnamedblk11__DOT__m;
    softmax_appr__DOT__unnamedblk11__DOT__m = 0;
    IData/*21:0*/ __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout;
    __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_softmax_appr__DOT__exp_approx__0__x;
    __Vfunc_softmax_appr__DOT__exp_approx__0__x = 0;
    IData/*31:0*/ __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped;
    __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped = 0;
    CData/*2:0*/ __Vdly__softmax_appr__DOT__state;
    __Vdly__softmax_appr__DOT__state = 0;
    CData/*5:0*/ __Vdly__softmax_appr__DOT__i;
    __Vdly__softmax_appr__DOT__i = 0;
    CData/*5:0*/ __Vdly__softmax_appr__DOT__j;
    __Vdly__softmax_appr__DOT__j = 0;
    IData/*31:0*/ __Vdly__softmax_appr__DOT__max_score;
    __Vdly__softmax_appr__DOT__max_score = 0;
    IData/*27:0*/ __Vdly__softmax_appr__DOT__sum_exp;
    __Vdly__softmax_appr__DOT__sum_exp = 0;
    IData/*31:0*/ __VdlyVal__softmax_appr__DOT__softmax_out__v0;
    __VdlyVal__softmax_appr__DOT__softmax_out__v0 = 0;
    CData/*5:0*/ __VdlyDim0__softmax_appr__DOT__softmax_out__v0;
    __VdlyDim0__softmax_appr__DOT__softmax_out__v0 = 0;
    CData/*5:0*/ __VdlyDim1__softmax_appr__DOT__softmax_out__v0;
    __VdlyDim1__softmax_appr__DOT__softmax_out__v0 = 0;
    CData/*0:0*/ __VdlySet__softmax_appr__DOT__softmax_out__v0;
    __VdlySet__softmax_appr__DOT__softmax_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__softmax_appr__DOT__softmax_out__v1;
    __VdlyVal__softmax_appr__DOT__softmax_out__v1 = 0;
    CData/*5:0*/ __VdlyDim0__softmax_appr__DOT__softmax_out__v1;
    __VdlyDim0__softmax_appr__DOT__softmax_out__v1 = 0;
    CData/*5:0*/ __VdlyDim1__softmax_appr__DOT__softmax_out__v1;
    __VdlyDim1__softmax_appr__DOT__softmax_out__v1 = 0;
    CData/*0:0*/ __VdlySet__softmax_appr__DOT__softmax_out__v1;
    __VdlySet__softmax_appr__DOT__softmax_out__v1 = 0;
    IData/*31:0*/ __VdlyVal__softmax_appr__DOT__softmax_out__v2;
    __VdlyVal__softmax_appr__DOT__softmax_out__v2 = 0;
    CData/*5:0*/ __VdlyDim0__softmax_appr__DOT__softmax_out__v2;
    __VdlyDim0__softmax_appr__DOT__softmax_out__v2 = 0;
    CData/*5:0*/ __VdlyDim1__softmax_appr__DOT__softmax_out__v2;
    __VdlyDim1__softmax_appr__DOT__softmax_out__v2 = 0;
    CData/*0:0*/ __VdlySet__softmax_appr__DOT__softmax_out__v2;
    __VdlySet__softmax_appr__DOT__softmax_out__v2 = 0;
    IData/*31:0*/ __VdlyVal__softmax_appr__DOT__softmax_out__v3;
    __VdlyVal__softmax_appr__DOT__softmax_out__v3 = 0;
    CData/*5:0*/ __VdlyDim0__softmax_appr__DOT__softmax_out__v3;
    __VdlyDim0__softmax_appr__DOT__softmax_out__v3 = 0;
    CData/*5:0*/ __VdlyDim1__softmax_appr__DOT__softmax_out__v3;
    __VdlyDim1__softmax_appr__DOT__softmax_out__v3 = 0;
    CData/*0:0*/ __VdlySet__softmax_appr__DOT__softmax_out__v3;
    __VdlySet__softmax_appr__DOT__softmax_out__v3 = 0;
    IData/*31:0*/ __VdlyVal__softmax_appr__DOT__softmax_out__v4;
    __VdlyVal__softmax_appr__DOT__softmax_out__v4 = 0;
    CData/*5:0*/ __VdlyDim0__softmax_appr__DOT__softmax_out__v4;
    __VdlyDim0__softmax_appr__DOT__softmax_out__v4 = 0;
    CData/*5:0*/ __VdlyDim1__softmax_appr__DOT__softmax_out__v4;
    __VdlyDim1__softmax_appr__DOT__softmax_out__v4 = 0;
    CData/*0:0*/ __VdlySet__softmax_appr__DOT__softmax_out__v4;
    __VdlySet__softmax_appr__DOT__softmax_out__v4 = 0;
    IData/*31:0*/ __VdlyVal__softmax_appr__DOT__softmax_out__v5;
    __VdlyVal__softmax_appr__DOT__softmax_out__v5 = 0;
    CData/*5:0*/ __VdlyDim0__softmax_appr__DOT__softmax_out__v5;
    __VdlyDim0__softmax_appr__DOT__softmax_out__v5 = 0;
    CData/*5:0*/ __VdlyDim1__softmax_appr__DOT__softmax_out__v5;
    __VdlyDim1__softmax_appr__DOT__softmax_out__v5 = 0;
    CData/*0:0*/ __VdlySet__softmax_appr__DOT__softmax_out__v5;
    __VdlySet__softmax_appr__DOT__softmax_out__v5 = 0;
    IData/*31:0*/ __VdlyVal__softmax_appr__DOT__softmax_out__v6;
    __VdlyVal__softmax_appr__DOT__softmax_out__v6 = 0;
    CData/*5:0*/ __VdlyDim0__softmax_appr__DOT__softmax_out__v6;
    __VdlyDim0__softmax_appr__DOT__softmax_out__v6 = 0;
    CData/*5:0*/ __VdlyDim1__softmax_appr__DOT__softmax_out__v6;
    __VdlyDim1__softmax_appr__DOT__softmax_out__v6 = 0;
    CData/*0:0*/ __VdlySet__softmax_appr__DOT__softmax_out__v6;
    __VdlySet__softmax_appr__DOT__softmax_out__v6 = 0;
    IData/*31:0*/ __VdlyVal__softmax_appr__DOT__softmax_out__v7;
    __VdlyVal__softmax_appr__DOT__softmax_out__v7 = 0;
    CData/*5:0*/ __VdlyDim0__softmax_appr__DOT__softmax_out__v7;
    __VdlyDim0__softmax_appr__DOT__softmax_out__v7 = 0;
    CData/*5:0*/ __VdlyDim1__softmax_appr__DOT__softmax_out__v7;
    __VdlyDim1__softmax_appr__DOT__softmax_out__v7 = 0;
    CData/*0:0*/ __VdlySet__softmax_appr__DOT__softmax_out__v7;
    __VdlySet__softmax_appr__DOT__softmax_out__v7 = 0;
    IData/*21:0*/ __VdlyVal__softmax_appr__DOT__exp_scores__v0;
    __VdlyVal__softmax_appr__DOT__exp_scores__v0 = 0;
    CData/*5:0*/ __VdlyDim0__softmax_appr__DOT__exp_scores__v0;
    __VdlyDim0__softmax_appr__DOT__exp_scores__v0 = 0;
    CData/*5:0*/ __VdlyDim1__softmax_appr__DOT__exp_scores__v0;
    __VdlyDim1__softmax_appr__DOT__exp_scores__v0 = 0;
    CData/*0:0*/ __VdlySet__softmax_appr__DOT__exp_scores__v0;
    __VdlySet__softmax_appr__DOT__exp_scores__v0 = 0;
    IData/*21:0*/ __VdlyVal__softmax_appr__DOT__exp_scores__v1;
    __VdlyVal__softmax_appr__DOT__exp_scores__v1 = 0;
    CData/*5:0*/ __VdlyDim0__softmax_appr__DOT__exp_scores__v1;
    __VdlyDim0__softmax_appr__DOT__exp_scores__v1 = 0;
    CData/*5:0*/ __VdlyDim1__softmax_appr__DOT__exp_scores__v1;
    __VdlyDim1__softmax_appr__DOT__exp_scores__v1 = 0;
    CData/*0:0*/ __VdlySet__softmax_appr__DOT__exp_scores__v1;
    __VdlySet__softmax_appr__DOT__exp_scores__v1 = 0;
    IData/*21:0*/ __VdlyVal__softmax_appr__DOT__exp_scores__v2;
    __VdlyVal__softmax_appr__DOT__exp_scores__v2 = 0;
    CData/*5:0*/ __VdlyDim0__softmax_appr__DOT__exp_scores__v2;
    __VdlyDim0__softmax_appr__DOT__exp_scores__v2 = 0;
    CData/*5:0*/ __VdlyDim1__softmax_appr__DOT__exp_scores__v2;
    __VdlyDim1__softmax_appr__DOT__exp_scores__v2 = 0;
    CData/*0:0*/ __VdlySet__softmax_appr__DOT__exp_scores__v2;
    __VdlySet__softmax_appr__DOT__exp_scores__v2 = 0;
    IData/*21:0*/ __VdlyVal__softmax_appr__DOT__exp_scores__v3;
    __VdlyVal__softmax_appr__DOT__exp_scores__v3 = 0;
    CData/*5:0*/ __VdlyDim0__softmax_appr__DOT__exp_scores__v3;
    __VdlyDim0__softmax_appr__DOT__exp_scores__v3 = 0;
    CData/*5:0*/ __VdlyDim1__softmax_appr__DOT__exp_scores__v3;
    __VdlyDim1__softmax_appr__DOT__exp_scores__v3 = 0;
    CData/*0:0*/ __VdlySet__softmax_appr__DOT__exp_scores__v3;
    __VdlySet__softmax_appr__DOT__exp_scores__v3 = 0;
    IData/*21:0*/ __VdlyVal__softmax_appr__DOT__exp_scores__v4;
    __VdlyVal__softmax_appr__DOT__exp_scores__v4 = 0;
    CData/*5:0*/ __VdlyDim0__softmax_appr__DOT__exp_scores__v4;
    __VdlyDim0__softmax_appr__DOT__exp_scores__v4 = 0;
    CData/*5:0*/ __VdlyDim1__softmax_appr__DOT__exp_scores__v4;
    __VdlyDim1__softmax_appr__DOT__exp_scores__v4 = 0;
    CData/*0:0*/ __VdlySet__softmax_appr__DOT__exp_scores__v4;
    __VdlySet__softmax_appr__DOT__exp_scores__v4 = 0;
    IData/*21:0*/ __VdlyVal__softmax_appr__DOT__exp_scores__v5;
    __VdlyVal__softmax_appr__DOT__exp_scores__v5 = 0;
    CData/*5:0*/ __VdlyDim0__softmax_appr__DOT__exp_scores__v5;
    __VdlyDim0__softmax_appr__DOT__exp_scores__v5 = 0;
    CData/*5:0*/ __VdlyDim1__softmax_appr__DOT__exp_scores__v5;
    __VdlyDim1__softmax_appr__DOT__exp_scores__v5 = 0;
    CData/*0:0*/ __VdlySet__softmax_appr__DOT__exp_scores__v5;
    __VdlySet__softmax_appr__DOT__exp_scores__v5 = 0;
    IData/*21:0*/ __VdlyVal__softmax_appr__DOT__exp_scores__v6;
    __VdlyVal__softmax_appr__DOT__exp_scores__v6 = 0;
    CData/*5:0*/ __VdlyDim0__softmax_appr__DOT__exp_scores__v6;
    __VdlyDim0__softmax_appr__DOT__exp_scores__v6 = 0;
    CData/*5:0*/ __VdlyDim1__softmax_appr__DOT__exp_scores__v6;
    __VdlyDim1__softmax_appr__DOT__exp_scores__v6 = 0;
    CData/*0:0*/ __VdlySet__softmax_appr__DOT__exp_scores__v6;
    __VdlySet__softmax_appr__DOT__exp_scores__v6 = 0;
    IData/*21:0*/ __VdlyVal__softmax_appr__DOT__exp_scores__v7;
    __VdlyVal__softmax_appr__DOT__exp_scores__v7 = 0;
    CData/*5:0*/ __VdlyDim0__softmax_appr__DOT__exp_scores__v7;
    __VdlyDim0__softmax_appr__DOT__exp_scores__v7 = 0;
    CData/*5:0*/ __VdlyDim1__softmax_appr__DOT__exp_scores__v7;
    __VdlyDim1__softmax_appr__DOT__exp_scores__v7 = 0;
    CData/*0:0*/ __VdlySet__softmax_appr__DOT__exp_scores__v7;
    __VdlySet__softmax_appr__DOT__exp_scores__v7 = 0;
    // Body
    __Vdly__softmax_appr__DOT__state = vlSelfRef.softmax_appr__DOT__state;
    __Vdly__softmax_appr__DOT__sum_exp = vlSelfRef.softmax_appr__DOT__sum_exp;
    __Vdly__softmax_appr__DOT__max_score = vlSelfRef.softmax_appr__DOT__max_score;
    __Vdly__softmax_appr__DOT__i = vlSelfRef.softmax_appr__DOT__i;
    __Vdly__softmax_appr__DOT__j = vlSelfRef.softmax_appr__DOT__j;
    __VdlySet__softmax_appr__DOT__softmax_out__v0 = 0U;
    __VdlySet__softmax_appr__DOT__softmax_out__v1 = 0U;
    __VdlySet__softmax_appr__DOT__softmax_out__v2 = 0U;
    __VdlySet__softmax_appr__DOT__softmax_out__v3 = 0U;
    __VdlySet__softmax_appr__DOT__softmax_out__v4 = 0U;
    __VdlySet__softmax_appr__DOT__softmax_out__v5 = 0U;
    __VdlySet__softmax_appr__DOT__softmax_out__v6 = 0U;
    __VdlySet__softmax_appr__DOT__softmax_out__v7 = 0U;
    __VdlySet__softmax_appr__DOT__exp_scores__v0 = 0U;
    __VdlySet__softmax_appr__DOT__exp_scores__v1 = 0U;
    __VdlySet__softmax_appr__DOT__exp_scores__v2 = 0U;
    __VdlySet__softmax_appr__DOT__exp_scores__v3 = 0U;
    __VdlySet__softmax_appr__DOT__exp_scores__v4 = 0U;
    __VdlySet__softmax_appr__DOT__exp_scores__v5 = 0U;
    __VdlySet__softmax_appr__DOT__exp_scores__v6 = 0U;
    __VdlySet__softmax_appr__DOT__exp_scores__v7 = 0U;
    if (vlSelfRef.rst) {
        __Vdly__softmax_appr__DOT__state = 0U;
        __Vdly__softmax_appr__DOT__i = 0U;
        __Vdly__softmax_appr__DOT__j = 0U;
        vlSelfRef.done = 0U;
        __Vdly__softmax_appr__DOT__max_score = 0x80000000U;
        __Vdly__softmax_appr__DOT__sum_exp = 0U;
    } else if ((4U & (IData)(vlSelfRef.softmax_appr__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.softmax_appr__DOT__state))) {
            __Vdly__softmax_appr__DOT__state = 0U;
        } else if ((1U & (IData)(vlSelfRef.softmax_appr__DOT__state))) {
            vlSelfRef.done = 1U;
            __Vdly__softmax_appr__DOT__state = 0U;
        } else {
            __VdlyVal__softmax_appr__DOT__softmax_out__v0 
                = vlSelfRef.softmax_appr__DOT__norm_vals_parallel
                [0U];
            __VdlyDim0__softmax_appr__DOT__softmax_out__v0 
                = vlSelfRef.softmax_appr__DOT__j;
            __VdlyDim1__softmax_appr__DOT__softmax_out__v0 
                = vlSelfRef.softmax_appr__DOT__i;
            __VdlySet__softmax_appr__DOT__softmax_out__v0 = 1U;
            if ((0x40U > ((IData)(1U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                __VdlyVal__softmax_appr__DOT__softmax_out__v1 
                    = vlSelfRef.softmax_appr__DOT__norm_vals_parallel
                    [1U];
                __VdlyDim0__softmax_appr__DOT__softmax_out__v1 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.softmax_appr__DOT__j)));
                __VdlyDim1__softmax_appr__DOT__softmax_out__v1 
                    = vlSelfRef.softmax_appr__DOT__i;
                __VdlySet__softmax_appr__DOT__softmax_out__v1 = 1U;
            }
            if ((0x40U > ((IData)(2U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                __VdlyVal__softmax_appr__DOT__softmax_out__v2 
                    = vlSelfRef.softmax_appr__DOT__norm_vals_parallel
                    [2U];
                __VdlyDim0__softmax_appr__DOT__softmax_out__v2 
                    = (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.softmax_appr__DOT__j)));
                __VdlyDim1__softmax_appr__DOT__softmax_out__v2 
                    = vlSelfRef.softmax_appr__DOT__i;
                __VdlySet__softmax_appr__DOT__softmax_out__v2 = 1U;
            }
            if ((0x40U > ((IData)(3U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                __VdlyVal__softmax_appr__DOT__softmax_out__v3 
                    = vlSelfRef.softmax_appr__DOT__norm_vals_parallel
                    [3U];
                __VdlyDim0__softmax_appr__DOT__softmax_out__v3 
                    = (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.softmax_appr__DOT__j)));
                __VdlyDim1__softmax_appr__DOT__softmax_out__v3 
                    = vlSelfRef.softmax_appr__DOT__i;
                __VdlySet__softmax_appr__DOT__softmax_out__v3 = 1U;
            }
            if ((0x40U > ((IData)(4U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                __VdlyVal__softmax_appr__DOT__softmax_out__v4 
                    = vlSelfRef.softmax_appr__DOT__norm_vals_parallel
                    [4U];
                __VdlyDim0__softmax_appr__DOT__softmax_out__v4 
                    = (0x3fU & ((IData)(4U) + (IData)(vlSelfRef.softmax_appr__DOT__j)));
                __VdlyDim1__softmax_appr__DOT__softmax_out__v4 
                    = vlSelfRef.softmax_appr__DOT__i;
                __VdlySet__softmax_appr__DOT__softmax_out__v4 = 1U;
            }
            if ((0x40U > ((IData)(5U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                __VdlyVal__softmax_appr__DOT__softmax_out__v5 
                    = vlSelfRef.softmax_appr__DOT__norm_vals_parallel
                    [5U];
                __VdlyDim0__softmax_appr__DOT__softmax_out__v5 
                    = (0x3fU & ((IData)(5U) + (IData)(vlSelfRef.softmax_appr__DOT__j)));
                __VdlyDim1__softmax_appr__DOT__softmax_out__v5 
                    = vlSelfRef.softmax_appr__DOT__i;
                __VdlySet__softmax_appr__DOT__softmax_out__v5 = 1U;
            }
            if ((0x40U > ((IData)(6U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                __VdlyVal__softmax_appr__DOT__softmax_out__v6 
                    = vlSelfRef.softmax_appr__DOT__norm_vals_parallel
                    [6U];
                __VdlyDim0__softmax_appr__DOT__softmax_out__v6 
                    = (0x3fU & ((IData)(6U) + (IData)(vlSelfRef.softmax_appr__DOT__j)));
                __VdlyDim1__softmax_appr__DOT__softmax_out__v6 
                    = vlSelfRef.softmax_appr__DOT__i;
                __VdlySet__softmax_appr__DOT__softmax_out__v6 = 1U;
            }
            if ((0x40U > ((IData)(7U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                __VdlyVal__softmax_appr__DOT__softmax_out__v7 
                    = vlSelfRef.softmax_appr__DOT__norm_vals_parallel
                    [7U];
                __VdlyDim0__softmax_appr__DOT__softmax_out__v7 
                    = (0x3fU & ((IData)(7U) + (IData)(vlSelfRef.softmax_appr__DOT__j)));
                __VdlyDim1__softmax_appr__DOT__softmax_out__v7 
                    = vlSelfRef.softmax_appr__DOT__i;
                __VdlySet__softmax_appr__DOT__softmax_out__v7 = 1U;
            }
            if ((0x40U <= ((IData)(8U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                __Vdly__softmax_appr__DOT__j = 0U;
                if ((0x3fU == (IData)(vlSelfRef.softmax_appr__DOT__i))) {
                    __Vdly__softmax_appr__DOT__state = 5U;
                } else {
                    __Vdly__softmax_appr__DOT__i = 
                        (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.softmax_appr__DOT__i)));
                    __Vdly__softmax_appr__DOT__max_score = 0x80000000U;
                    __Vdly__softmax_appr__DOT__sum_exp = 0U;
                    __Vdly__softmax_appr__DOT__state = 1U;
                }
            } else {
                __Vdly__softmax_appr__DOT__j = (0x3fU 
                                                & ((IData)(8U) 
                                                   + (IData)(vlSelfRef.softmax_appr__DOT__j)));
            }
        }
    } else if ((2U & (IData)(vlSelfRef.softmax_appr__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.softmax_appr__DOT__state))) {
            vlSelfRef.softmax_appr__DOT__unnamedblk8__DOT__temp_sum 
                = vlSelfRef.softmax_appr__DOT__sum_exp;
            vlSelfRef.softmax_appr__DOT__unnamedblk8__DOT__temp_sum 
                = (0xfffffffU & (vlSelfRef.softmax_appr__DOT__unnamedblk8__DOT__temp_sum 
                                 + vlSelfRef.softmax_appr__DOT__exp_scores
                                 [vlSelfRef.softmax_appr__DOT__i]
                                 [vlSelfRef.softmax_appr__DOT__j]));
            if ((0x40U > ((IData)(1U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                vlSelfRef.softmax_appr__DOT__unnamedblk8__DOT__temp_sum 
                    = (0xfffffffU & (vlSelfRef.softmax_appr__DOT__unnamedblk8__DOT__temp_sum 
                                     + vlSelfRef.softmax_appr__DOT__exp_scores
                                     [vlSelfRef.softmax_appr__DOT__i]
                                     [(0x3fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j)))]));
            }
            if ((0x40U > ((IData)(2U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                vlSelfRef.softmax_appr__DOT__unnamedblk8__DOT__temp_sum 
                    = (0xfffffffU & (vlSelfRef.softmax_appr__DOT__unnamedblk8__DOT__temp_sum 
                                     + vlSelfRef.softmax_appr__DOT__exp_scores
                                     [vlSelfRef.softmax_appr__DOT__i]
                                     [(0x3fU & ((IData)(2U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j)))]));
            }
            if ((0x40U > ((IData)(3U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                vlSelfRef.softmax_appr__DOT__unnamedblk8__DOT__temp_sum 
                    = (0xfffffffU & (vlSelfRef.softmax_appr__DOT__unnamedblk8__DOT__temp_sum 
                                     + vlSelfRef.softmax_appr__DOT__exp_scores
                                     [vlSelfRef.softmax_appr__DOT__i]
                                     [(0x3fU & ((IData)(3U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j)))]));
            }
            if ((0x40U > ((IData)(4U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                vlSelfRef.softmax_appr__DOT__unnamedblk8__DOT__temp_sum 
                    = (0xfffffffU & (vlSelfRef.softmax_appr__DOT__unnamedblk8__DOT__temp_sum 
                                     + vlSelfRef.softmax_appr__DOT__exp_scores
                                     [vlSelfRef.softmax_appr__DOT__i]
                                     [(0x3fU & ((IData)(4U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j)))]));
            }
            if ((0x40U > ((IData)(5U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                vlSelfRef.softmax_appr__DOT__unnamedblk8__DOT__temp_sum 
                    = (0xfffffffU & (vlSelfRef.softmax_appr__DOT__unnamedblk8__DOT__temp_sum 
                                     + vlSelfRef.softmax_appr__DOT__exp_scores
                                     [vlSelfRef.softmax_appr__DOT__i]
                                     [(0x3fU & ((IData)(5U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j)))]));
            }
            if ((0x40U > ((IData)(6U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                vlSelfRef.softmax_appr__DOT__unnamedblk8__DOT__temp_sum 
                    = (0xfffffffU & (vlSelfRef.softmax_appr__DOT__unnamedblk8__DOT__temp_sum 
                                     + vlSelfRef.softmax_appr__DOT__exp_scores
                                     [vlSelfRef.softmax_appr__DOT__i]
                                     [(0x3fU & ((IData)(6U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j)))]));
            }
            if ((0x40U > ((IData)(7U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                vlSelfRef.softmax_appr__DOT__unnamedblk8__DOT__temp_sum 
                    = (0xfffffffU & (vlSelfRef.softmax_appr__DOT__unnamedblk8__DOT__temp_sum 
                                     + vlSelfRef.softmax_appr__DOT__exp_scores
                                     [vlSelfRef.softmax_appr__DOT__i]
                                     [(0x3fU & ((IData)(7U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j)))]));
            }
            __Vdly__softmax_appr__DOT__sum_exp = vlSelfRef.softmax_appr__DOT__unnamedblk8__DOT__temp_sum;
            if ((0x40U <= ((IData)(8U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                __Vdly__softmax_appr__DOT__j = 0U;
                __Vdly__softmax_appr__DOT__state = 4U;
            } else {
                __Vdly__softmax_appr__DOT__j = (0x3fU 
                                                & ((IData)(8U) 
                                                   + (IData)(vlSelfRef.softmax_appr__DOT__j)));
            }
        } else {
            __VdlyVal__softmax_appr__DOT__exp_scores__v0 
                = vlSelfRef.softmax_appr__DOT__exp_vals_parallel
                [0U];
            __VdlyDim0__softmax_appr__DOT__exp_scores__v0 
                = vlSelfRef.softmax_appr__DOT__j;
            __VdlyDim1__softmax_appr__DOT__exp_scores__v0 
                = vlSelfRef.softmax_appr__DOT__i;
            __VdlySet__softmax_appr__DOT__exp_scores__v0 = 1U;
            if ((0x40U > ((IData)(1U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                __VdlyVal__softmax_appr__DOT__exp_scores__v1 
                    = vlSelfRef.softmax_appr__DOT__exp_vals_parallel
                    [1U];
                __VdlyDim0__softmax_appr__DOT__exp_scores__v1 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.softmax_appr__DOT__j)));
                __VdlyDim1__softmax_appr__DOT__exp_scores__v1 
                    = vlSelfRef.softmax_appr__DOT__i;
                __VdlySet__softmax_appr__DOT__exp_scores__v1 = 1U;
            }
            if ((0x40U > ((IData)(2U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                __VdlyVal__softmax_appr__DOT__exp_scores__v2 
                    = vlSelfRef.softmax_appr__DOT__exp_vals_parallel
                    [2U];
                __VdlyDim0__softmax_appr__DOT__exp_scores__v2 
                    = (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.softmax_appr__DOT__j)));
                __VdlyDim1__softmax_appr__DOT__exp_scores__v2 
                    = vlSelfRef.softmax_appr__DOT__i;
                __VdlySet__softmax_appr__DOT__exp_scores__v2 = 1U;
            }
            if ((0x40U > ((IData)(3U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                __VdlyVal__softmax_appr__DOT__exp_scores__v3 
                    = vlSelfRef.softmax_appr__DOT__exp_vals_parallel
                    [3U];
                __VdlyDim0__softmax_appr__DOT__exp_scores__v3 
                    = (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.softmax_appr__DOT__j)));
                __VdlyDim1__softmax_appr__DOT__exp_scores__v3 
                    = vlSelfRef.softmax_appr__DOT__i;
                __VdlySet__softmax_appr__DOT__exp_scores__v3 = 1U;
            }
            if ((0x40U > ((IData)(4U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                __VdlyVal__softmax_appr__DOT__exp_scores__v4 
                    = vlSelfRef.softmax_appr__DOT__exp_vals_parallel
                    [4U];
                __VdlyDim0__softmax_appr__DOT__exp_scores__v4 
                    = (0x3fU & ((IData)(4U) + (IData)(vlSelfRef.softmax_appr__DOT__j)));
                __VdlyDim1__softmax_appr__DOT__exp_scores__v4 
                    = vlSelfRef.softmax_appr__DOT__i;
                __VdlySet__softmax_appr__DOT__exp_scores__v4 = 1U;
            }
            if ((0x40U > ((IData)(5U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                __VdlyVal__softmax_appr__DOT__exp_scores__v5 
                    = vlSelfRef.softmax_appr__DOT__exp_vals_parallel
                    [5U];
                __VdlyDim0__softmax_appr__DOT__exp_scores__v5 
                    = (0x3fU & ((IData)(5U) + (IData)(vlSelfRef.softmax_appr__DOT__j)));
                __VdlyDim1__softmax_appr__DOT__exp_scores__v5 
                    = vlSelfRef.softmax_appr__DOT__i;
                __VdlySet__softmax_appr__DOT__exp_scores__v5 = 1U;
            }
            if ((0x40U > ((IData)(6U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                __VdlyVal__softmax_appr__DOT__exp_scores__v6 
                    = vlSelfRef.softmax_appr__DOT__exp_vals_parallel
                    [6U];
                __VdlyDim0__softmax_appr__DOT__exp_scores__v6 
                    = (0x3fU & ((IData)(6U) + (IData)(vlSelfRef.softmax_appr__DOT__j)));
                __VdlyDim1__softmax_appr__DOT__exp_scores__v6 
                    = vlSelfRef.softmax_appr__DOT__i;
                __VdlySet__softmax_appr__DOT__exp_scores__v6 = 1U;
            }
            if ((0x40U > ((IData)(7U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                __VdlyVal__softmax_appr__DOT__exp_scores__v7 
                    = vlSelfRef.softmax_appr__DOT__exp_vals_parallel
                    [7U];
                __VdlyDim0__softmax_appr__DOT__exp_scores__v7 
                    = (0x3fU & ((IData)(7U) + (IData)(vlSelfRef.softmax_appr__DOT__j)));
                __VdlyDim1__softmax_appr__DOT__exp_scores__v7 
                    = vlSelfRef.softmax_appr__DOT__i;
                __VdlySet__softmax_appr__DOT__exp_scores__v7 = 1U;
            }
            if ((0x40U <= ((IData)(8U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
                __Vdly__softmax_appr__DOT__j = 0U;
                __Vdly__softmax_appr__DOT__sum_exp = 0U;
                __Vdly__softmax_appr__DOT__state = 3U;
            } else {
                __Vdly__softmax_appr__DOT__j = (0x3fU 
                                                & ((IData)(8U) 
                                                   + (IData)(vlSelfRef.softmax_appr__DOT__j)));
            }
        }
    } else if ((1U & (IData)(vlSelfRef.softmax_appr__DOT__state))) {
        if (VL_GTS_III(32, vlSelfRef.softmax_appr__DOT__scores_parallel
                       [0U], vlSelfRef.softmax_appr__DOT__max_score)) {
            __Vdly__softmax_appr__DOT__max_score = 
                vlSelfRef.softmax_appr__DOT__scores_parallel
                [0U];
        }
        if (((0x40U > ((IData)(1U) + (IData)(vlSelfRef.softmax_appr__DOT__j))) 
             & VL_GTS_III(32, vlSelfRef.softmax_appr__DOT__scores_parallel
                          [1U], vlSelfRef.softmax_appr__DOT__max_score))) {
            __Vdly__softmax_appr__DOT__max_score = 
                vlSelfRef.softmax_appr__DOT__scores_parallel
                [1U];
        }
        if (((0x40U > ((IData)(2U) + (IData)(vlSelfRef.softmax_appr__DOT__j))) 
             & VL_GTS_III(32, vlSelfRef.softmax_appr__DOT__scores_parallel
                          [2U], vlSelfRef.softmax_appr__DOT__max_score))) {
            __Vdly__softmax_appr__DOT__max_score = 
                vlSelfRef.softmax_appr__DOT__scores_parallel
                [2U];
        }
        if (((0x40U > ((IData)(3U) + (IData)(vlSelfRef.softmax_appr__DOT__j))) 
             & VL_GTS_III(32, vlSelfRef.softmax_appr__DOT__scores_parallel
                          [3U], vlSelfRef.softmax_appr__DOT__max_score))) {
            __Vdly__softmax_appr__DOT__max_score = 
                vlSelfRef.softmax_appr__DOT__scores_parallel
                [3U];
        }
        if (((0x40U > ((IData)(4U) + (IData)(vlSelfRef.softmax_appr__DOT__j))) 
             & VL_GTS_III(32, vlSelfRef.softmax_appr__DOT__scores_parallel
                          [4U], vlSelfRef.softmax_appr__DOT__max_score))) {
            __Vdly__softmax_appr__DOT__max_score = 
                vlSelfRef.softmax_appr__DOT__scores_parallel
                [4U];
        }
        if (((0x40U > ((IData)(5U) + (IData)(vlSelfRef.softmax_appr__DOT__j))) 
             & VL_GTS_III(32, vlSelfRef.softmax_appr__DOT__scores_parallel
                          [5U], vlSelfRef.softmax_appr__DOT__max_score))) {
            __Vdly__softmax_appr__DOT__max_score = 
                vlSelfRef.softmax_appr__DOT__scores_parallel
                [5U];
        }
        if (((0x40U > ((IData)(6U) + (IData)(vlSelfRef.softmax_appr__DOT__j))) 
             & VL_GTS_III(32, vlSelfRef.softmax_appr__DOT__scores_parallel
                          [6U], vlSelfRef.softmax_appr__DOT__max_score))) {
            __Vdly__softmax_appr__DOT__max_score = 
                vlSelfRef.softmax_appr__DOT__scores_parallel
                [6U];
        }
        if (((0x40U > ((IData)(7U) + (IData)(vlSelfRef.softmax_appr__DOT__j))) 
             & VL_GTS_III(32, vlSelfRef.softmax_appr__DOT__scores_parallel
                          [7U], vlSelfRef.softmax_appr__DOT__max_score))) {
            __Vdly__softmax_appr__DOT__max_score = 
                vlSelfRef.softmax_appr__DOT__scores_parallel
                [7U];
        }
        if ((0x40U <= ((IData)(8U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))) {
            __Vdly__softmax_appr__DOT__j = 0U;
            __Vdly__softmax_appr__DOT__state = 2U;
        } else {
            __Vdly__softmax_appr__DOT__j = (0x3fU & 
                                            ((IData)(8U) 
                                             + (IData)(vlSelfRef.softmax_appr__DOT__j)));
        }
    } else if (vlSelfRef.start) {
        __Vdly__softmax_appr__DOT__i = 0U;
        __Vdly__softmax_appr__DOT__j = 0U;
        __Vdly__softmax_appr__DOT__max_score = 0x80000000U;
        __Vdly__softmax_appr__DOT__sum_exp = 0U;
        vlSelfRef.done = 0U;
        __Vdly__softmax_appr__DOT__state = 1U;
    }
    vlSelfRef.softmax_appr__DOT__state = __Vdly__softmax_appr__DOT__state;
    vlSelfRef.softmax_appr__DOT__sum_exp = __Vdly__softmax_appr__DOT__sum_exp;
    vlSelfRef.softmax_appr__DOT__max_score = __Vdly__softmax_appr__DOT__max_score;
    vlSelfRef.softmax_appr__DOT__i = __Vdly__softmax_appr__DOT__i;
    vlSelfRef.softmax_appr__DOT__j = __Vdly__softmax_appr__DOT__j;
    if (__VdlySet__softmax_appr__DOT__softmax_out__v0) {
        vlSelfRef.softmax_appr__DOT__softmax_out[__VdlyDim1__softmax_appr__DOT__softmax_out__v0][__VdlyDim0__softmax_appr__DOT__softmax_out__v0] 
            = __VdlyVal__softmax_appr__DOT__softmax_out__v0;
    }
    if (__VdlySet__softmax_appr__DOT__softmax_out__v1) {
        vlSelfRef.softmax_appr__DOT__softmax_out[__VdlyDim1__softmax_appr__DOT__softmax_out__v1][__VdlyDim0__softmax_appr__DOT__softmax_out__v1] 
            = __VdlyVal__softmax_appr__DOT__softmax_out__v1;
    }
    if (__VdlySet__softmax_appr__DOT__softmax_out__v2) {
        vlSelfRef.softmax_appr__DOT__softmax_out[__VdlyDim1__softmax_appr__DOT__softmax_out__v2][__VdlyDim0__softmax_appr__DOT__softmax_out__v2] 
            = __VdlyVal__softmax_appr__DOT__softmax_out__v2;
    }
    if (__VdlySet__softmax_appr__DOT__softmax_out__v3) {
        vlSelfRef.softmax_appr__DOT__softmax_out[__VdlyDim1__softmax_appr__DOT__softmax_out__v3][__VdlyDim0__softmax_appr__DOT__softmax_out__v3] 
            = __VdlyVal__softmax_appr__DOT__softmax_out__v3;
    }
    if (__VdlySet__softmax_appr__DOT__softmax_out__v4) {
        vlSelfRef.softmax_appr__DOT__softmax_out[__VdlyDim1__softmax_appr__DOT__softmax_out__v4][__VdlyDim0__softmax_appr__DOT__softmax_out__v4] 
            = __VdlyVal__softmax_appr__DOT__softmax_out__v4;
    }
    if (__VdlySet__softmax_appr__DOT__softmax_out__v5) {
        vlSelfRef.softmax_appr__DOT__softmax_out[__VdlyDim1__softmax_appr__DOT__softmax_out__v5][__VdlyDim0__softmax_appr__DOT__softmax_out__v5] 
            = __VdlyVal__softmax_appr__DOT__softmax_out__v5;
    }
    if (__VdlySet__softmax_appr__DOT__softmax_out__v6) {
        vlSelfRef.softmax_appr__DOT__softmax_out[__VdlyDim1__softmax_appr__DOT__softmax_out__v6][__VdlyDim0__softmax_appr__DOT__softmax_out__v6] 
            = __VdlyVal__softmax_appr__DOT__softmax_out__v6;
    }
    if (__VdlySet__softmax_appr__DOT__softmax_out__v7) {
        vlSelfRef.softmax_appr__DOT__softmax_out[__VdlyDim1__softmax_appr__DOT__softmax_out__v7][__VdlyDim0__softmax_appr__DOT__softmax_out__v7] 
            = __VdlyVal__softmax_appr__DOT__softmax_out__v7;
    }
    if (__VdlySet__softmax_appr__DOT__exp_scores__v0) {
        vlSelfRef.softmax_appr__DOT__exp_scores[__VdlyDim1__softmax_appr__DOT__exp_scores__v0][__VdlyDim0__softmax_appr__DOT__exp_scores__v0] 
            = __VdlyVal__softmax_appr__DOT__exp_scores__v0;
    }
    if (__VdlySet__softmax_appr__DOT__exp_scores__v1) {
        vlSelfRef.softmax_appr__DOT__exp_scores[__VdlyDim1__softmax_appr__DOT__exp_scores__v1][__VdlyDim0__softmax_appr__DOT__exp_scores__v1] 
            = __VdlyVal__softmax_appr__DOT__exp_scores__v1;
    }
    if (__VdlySet__softmax_appr__DOT__exp_scores__v2) {
        vlSelfRef.softmax_appr__DOT__exp_scores[__VdlyDim1__softmax_appr__DOT__exp_scores__v2][__VdlyDim0__softmax_appr__DOT__exp_scores__v2] 
            = __VdlyVal__softmax_appr__DOT__exp_scores__v2;
    }
    if (__VdlySet__softmax_appr__DOT__exp_scores__v3) {
        vlSelfRef.softmax_appr__DOT__exp_scores[__VdlyDim1__softmax_appr__DOT__exp_scores__v3][__VdlyDim0__softmax_appr__DOT__exp_scores__v3] 
            = __VdlyVal__softmax_appr__DOT__exp_scores__v3;
    }
    if (__VdlySet__softmax_appr__DOT__exp_scores__v4) {
        vlSelfRef.softmax_appr__DOT__exp_scores[__VdlyDim1__softmax_appr__DOT__exp_scores__v4][__VdlyDim0__softmax_appr__DOT__exp_scores__v4] 
            = __VdlyVal__softmax_appr__DOT__exp_scores__v4;
    }
    if (__VdlySet__softmax_appr__DOT__exp_scores__v5) {
        vlSelfRef.softmax_appr__DOT__exp_scores[__VdlyDim1__softmax_appr__DOT__exp_scores__v5][__VdlyDim0__softmax_appr__DOT__exp_scores__v5] 
            = __VdlyVal__softmax_appr__DOT__exp_scores__v5;
    }
    if (__VdlySet__softmax_appr__DOT__exp_scores__v6) {
        vlSelfRef.softmax_appr__DOT__exp_scores[__VdlyDim1__softmax_appr__DOT__exp_scores__v6][__VdlyDim0__softmax_appr__DOT__exp_scores__v6] 
            = __VdlyVal__softmax_appr__DOT__exp_scores__v6;
    }
    if (__VdlySet__softmax_appr__DOT__exp_scores__v7) {
        vlSelfRef.softmax_appr__DOT__exp_scores[__VdlyDim1__softmax_appr__DOT__exp_scores__v7][__VdlyDim0__softmax_appr__DOT__exp_scores__v7] 
            = __VdlyVal__softmax_appr__DOT__exp_scores__v7;
    }
    vlSelfRef.debug_sum_exp_0 = vlSelfRef.softmax_appr__DOT__sum_exp;
    vlSelfRef.softmax_appr__DOT__scores_parallel[0U] 
        = (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                          (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                           + (IData)(vlSelfRef.softmax_appr__DOT__j)), 5U)))
             ? 0U : (vlSelfRef.scores_flat[(((IData)(0x1fU) 
                                             + (0x1ffffU 
                                                & VL_SHIFTL_III(17,32,32, 
                                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                 + (IData)(vlSelfRef.softmax_appr__DOT__j)), 5U))) 
                                            >> 5U)] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           VL_SHIFTL_III(17,32,32, 
                                                         (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                          + (IData)(vlSelfRef.softmax_appr__DOT__j)), 5U))))) 
           | (vlSelfRef.scores_flat[(0xfffU & (VL_SHIFTL_III(17,32,32, 
                                                             (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                              + (IData)(vlSelfRef.softmax_appr__DOT__j)), 5U) 
                                               >> 5U))] 
              >> (0x1fU & VL_SHIFTL_III(17,32,32, (
                                                   VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                   + (IData)(vlSelfRef.softmax_appr__DOT__j)), 5U))));
    vlSelfRef.softmax_appr__DOT__scores_parallel[1U] 
        = ((0x40U > ((IData)(1U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                              ((IData)(1U) 
                                               + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                  + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U)))
                 ? 0U : (vlSelfRef.scores_flat[(((IData)(0x1fU) 
                                                 + 
                                                 (0x1ffffU 
                                                  & VL_SHIFTL_III(17,32,32, 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))) 
                                                >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_SHIFTL_III(17,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                 + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))) 
               | (vlSelfRef.scores_flat[(0xfffU & (
                                                   VL_SHIFTL_III(17,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                   + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U) 
                                                   >> 5U))] 
                  >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                            ((IData)(1U) 
                                             + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))
            : 0x80000000U);
    vlSelfRef.softmax_appr__DOT__scores_parallel[2U] 
        = ((0x40U > ((IData)(2U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                              ((IData)(2U) 
                                               + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                  + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U)))
                 ? 0U : (vlSelfRef.scores_flat[(((IData)(0x1fU) 
                                                 + 
                                                 (0x1ffffU 
                                                  & VL_SHIFTL_III(17,32,32, 
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))) 
                                                >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_SHIFTL_III(17,32,32, 
                                                               ((IData)(2U) 
                                                                + 
                                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                 + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))) 
               | (vlSelfRef.scores_flat[(0xfffU & (
                                                   VL_SHIFTL_III(17,32,32, 
                                                                 ((IData)(2U) 
                                                                  + 
                                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                   + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U) 
                                                   >> 5U))] 
                  >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                            ((IData)(2U) 
                                             + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))
            : 0x80000000U);
    vlSelfRef.softmax_appr__DOT__scores_parallel[3U] 
        = ((0x40U > ((IData)(3U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                              ((IData)(3U) 
                                               + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                  + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U)))
                 ? 0U : (vlSelfRef.scores_flat[(((IData)(0x1fU) 
                                                 + 
                                                 (0x1ffffU 
                                                  & VL_SHIFTL_III(17,32,32, 
                                                                  ((IData)(3U) 
                                                                   + 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))) 
                                                >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_SHIFTL_III(17,32,32, 
                                                               ((IData)(3U) 
                                                                + 
                                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                 + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))) 
               | (vlSelfRef.scores_flat[(0xfffU & (
                                                   VL_SHIFTL_III(17,32,32, 
                                                                 ((IData)(3U) 
                                                                  + 
                                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                   + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U) 
                                                   >> 5U))] 
                  >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                            ((IData)(3U) 
                                             + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))
            : 0x80000000U);
    vlSelfRef.softmax_appr__DOT__scores_parallel[4U] 
        = ((0x40U > ((IData)(4U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                              ((IData)(4U) 
                                               + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                  + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U)))
                 ? 0U : (vlSelfRef.scores_flat[(((IData)(0x1fU) 
                                                 + 
                                                 (0x1ffffU 
                                                  & VL_SHIFTL_III(17,32,32, 
                                                                  ((IData)(4U) 
                                                                   + 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))) 
                                                >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_SHIFTL_III(17,32,32, 
                                                               ((IData)(4U) 
                                                                + 
                                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                 + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))) 
               | (vlSelfRef.scores_flat[(0xfffU & (
                                                   VL_SHIFTL_III(17,32,32, 
                                                                 ((IData)(4U) 
                                                                  + 
                                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                   + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U) 
                                                   >> 5U))] 
                  >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                            ((IData)(4U) 
                                             + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))
            : 0x80000000U);
    vlSelfRef.softmax_appr__DOT__scores_parallel[5U] 
        = ((0x40U > ((IData)(5U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                              ((IData)(5U) 
                                               + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                  + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U)))
                 ? 0U : (vlSelfRef.scores_flat[(((IData)(0x1fU) 
                                                 + 
                                                 (0x1ffffU 
                                                  & VL_SHIFTL_III(17,32,32, 
                                                                  ((IData)(5U) 
                                                                   + 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))) 
                                                >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_SHIFTL_III(17,32,32, 
                                                               ((IData)(5U) 
                                                                + 
                                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                 + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))) 
               | (vlSelfRef.scores_flat[(0xfffU & (
                                                   VL_SHIFTL_III(17,32,32, 
                                                                 ((IData)(5U) 
                                                                  + 
                                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                   + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U) 
                                                   >> 5U))] 
                  >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                            ((IData)(5U) 
                                             + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))
            : 0x80000000U);
    vlSelfRef.softmax_appr__DOT__scores_parallel[6U] 
        = ((0x40U > ((IData)(6U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                              ((IData)(6U) 
                                               + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                  + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U)))
                 ? 0U : (vlSelfRef.scores_flat[(((IData)(0x1fU) 
                                                 + 
                                                 (0x1ffffU 
                                                  & VL_SHIFTL_III(17,32,32, 
                                                                  ((IData)(6U) 
                                                                   + 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))) 
                                                >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_SHIFTL_III(17,32,32, 
                                                               ((IData)(6U) 
                                                                + 
                                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                 + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))) 
               | (vlSelfRef.scores_flat[(0xfffU & (
                                                   VL_SHIFTL_III(17,32,32, 
                                                                 ((IData)(6U) 
                                                                  + 
                                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                   + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U) 
                                                   >> 5U))] 
                  >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                            ((IData)(6U) 
                                             + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))
            : 0x80000000U);
    vlSelfRef.softmax_appr__DOT__scores_parallel[7U] 
        = ((0x40U > ((IData)(7U) + (IData)(vlSelfRef.softmax_appr__DOT__j)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                              ((IData)(7U) 
                                               + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                  + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U)))
                 ? 0U : (vlSelfRef.scores_flat[(((IData)(0x1fU) 
                                                 + 
                                                 (0x1ffffU 
                                                  & VL_SHIFTL_III(17,32,32, 
                                                                  ((IData)(7U) 
                                                                   + 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))) 
                                                >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_SHIFTL_III(17,32,32, 
                                                               ((IData)(7U) 
                                                                + 
                                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                 + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))) 
               | (vlSelfRef.scores_flat[(0xfffU & (
                                                   VL_SHIFTL_III(17,32,32, 
                                                                 ((IData)(7U) 
                                                                  + 
                                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                                   + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U) 
                                                   >> 5U))] 
                  >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                            ((IData)(7U) 
                                             + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.softmax_appr__DOT__i), 6U) 
                                                + (IData)(vlSelfRef.softmax_appr__DOT__j))), 5U))))
            : 0x80000000U);
    softmax_appr__DOT__unnamedblk11__DOT__m = 0U;
    while (VL_GTS_III(32, 0x40U, softmax_appr__DOT__unnamedblk11__DOT__m)) {
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x800U), softmax_appr__DOT__unnamedblk11__DOT__m)), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [1U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(2U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [2U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(3U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [3U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(4U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [4U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(5U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [5U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(6U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [6U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(7U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [7U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(8U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [8U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(9U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [9U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xaU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0xaU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xbU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0xbU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xcU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0xcU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xdU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0xdU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xeU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0xeU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xfU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0xfU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x10U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x10U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x11U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x11U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x12U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x12U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x13U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x13U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x14U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x14U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x15U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x15U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x16U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x16U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x17U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x17U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x18U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x18U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x19U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x19U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x1aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x1bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x1cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x1dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x1eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x1fU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x20U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x20U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x21U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x21U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x22U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x22U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x23U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x23U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x24U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x24U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x25U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x25U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x26U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x26U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x27U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x27U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x28U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x28U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x29U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x29U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x2aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x2bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x2cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x2dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x2eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x2fU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x30U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x30U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x31U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x31U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x32U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x32U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x33U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x33U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x34U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x34U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x35U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x35U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x36U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x36U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x37U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x37U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x38U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x38U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x39U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x39U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x3aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x3bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x3cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x3dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x3eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), softmax_appr__DOT__unnamedblk11__DOT__m)))), vlSelfRef.softmax_scores_flat, 
                        vlSelfRef.softmax_appr__DOT__softmax_out
                        [(0x3fU & softmax_appr__DOT__unnamedblk11__DOT__m)]
                        [0x3fU]);
        softmax_appr__DOT__unnamedblk11__DOT__m = ((IData)(1U) 
                                                   + softmax_appr__DOT__unnamedblk11__DOT__m);
    }
    softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__scaled 
        = (0xfffffffffULL & VL_SHIFTL_QQI(36,36,32, (QData)((IData)(
                                                                    vlSelfRef.softmax_appr__DOT__exp_scores
                                                                    [vlSelfRef.softmax_appr__DOT__i]
                                                                    [vlSelfRef.softmax_appr__DOT__j])), 0xeU));
    softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm 
        = (0xfffffffffULL & VL_DIV_QQQ(36, softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__scaled, (QData)((IData)(vlSelfRef.softmax_appr__DOT__sum_exp))));
    softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__scaled 
        = (0xfffffffffULL & VL_SHIFTL_QQI(36,36,32, (QData)((IData)(
                                                                    vlSelfRef.softmax_appr__DOT__exp_scores
                                                                    [vlSelfRef.softmax_appr__DOT__i]
                                                                    [
                                                                    (0x3fU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(vlSelfRef.softmax_appr__DOT__j)))])), 0xeU));
    vlSelfRef.softmax_appr__DOT__norm_vals_parallel[0U] 
        = ((0x100000000ULL <= softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm)
            ? 0xffffffffU : (IData)(softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm));
    softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm 
        = (0xfffffffffULL & VL_DIV_QQQ(36, softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__scaled, (QData)((IData)(vlSelfRef.softmax_appr__DOT__sum_exp))));
    softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__scaled 
        = (0xfffffffffULL & VL_SHIFTL_QQI(36,36,32, (QData)((IData)(
                                                                    vlSelfRef.softmax_appr__DOT__exp_scores
                                                                    [vlSelfRef.softmax_appr__DOT__i]
                                                                    [
                                                                    (0x3fU 
                                                                     & ((IData)(2U) 
                                                                        + (IData)(vlSelfRef.softmax_appr__DOT__j)))])), 0xeU));
    vlSelfRef.softmax_appr__DOT__norm_vals_parallel[1U] 
        = ((0x100000000ULL <= softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm)
            ? 0xffffffffU : (IData)(softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm));
    softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm 
        = (0xfffffffffULL & VL_DIV_QQQ(36, softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__scaled, (QData)((IData)(vlSelfRef.softmax_appr__DOT__sum_exp))));
    softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__scaled 
        = (0xfffffffffULL & VL_SHIFTL_QQI(36,36,32, (QData)((IData)(
                                                                    vlSelfRef.softmax_appr__DOT__exp_scores
                                                                    [vlSelfRef.softmax_appr__DOT__i]
                                                                    [
                                                                    (0x3fU 
                                                                     & ((IData)(3U) 
                                                                        + (IData)(vlSelfRef.softmax_appr__DOT__j)))])), 0xeU));
    vlSelfRef.softmax_appr__DOT__norm_vals_parallel[2U] 
        = ((0x100000000ULL <= softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm)
            ? 0xffffffffU : (IData)(softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm));
    softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm 
        = (0xfffffffffULL & VL_DIV_QQQ(36, softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__scaled, (QData)((IData)(vlSelfRef.softmax_appr__DOT__sum_exp))));
    softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__scaled 
        = (0xfffffffffULL & VL_SHIFTL_QQI(36,36,32, (QData)((IData)(
                                                                    vlSelfRef.softmax_appr__DOT__exp_scores
                                                                    [vlSelfRef.softmax_appr__DOT__i]
                                                                    [
                                                                    (0x3fU 
                                                                     & ((IData)(4U) 
                                                                        + (IData)(vlSelfRef.softmax_appr__DOT__j)))])), 0xeU));
    vlSelfRef.softmax_appr__DOT__norm_vals_parallel[3U] 
        = ((0x100000000ULL <= softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm)
            ? 0xffffffffU : (IData)(softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm));
    softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm 
        = (0xfffffffffULL & VL_DIV_QQQ(36, softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__scaled, (QData)((IData)(vlSelfRef.softmax_appr__DOT__sum_exp))));
    softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__scaled 
        = (0xfffffffffULL & VL_SHIFTL_QQI(36,36,32, (QData)((IData)(
                                                                    vlSelfRef.softmax_appr__DOT__exp_scores
                                                                    [vlSelfRef.softmax_appr__DOT__i]
                                                                    [
                                                                    (0x3fU 
                                                                     & ((IData)(5U) 
                                                                        + (IData)(vlSelfRef.softmax_appr__DOT__j)))])), 0xeU));
    vlSelfRef.softmax_appr__DOT__norm_vals_parallel[4U] 
        = ((0x100000000ULL <= softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm)
            ? 0xffffffffU : (IData)(softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm));
    softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm 
        = (0xfffffffffULL & VL_DIV_QQQ(36, softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__scaled, (QData)((IData)(vlSelfRef.softmax_appr__DOT__sum_exp))));
    softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__scaled 
        = (0xfffffffffULL & VL_SHIFTL_QQI(36,36,32, (QData)((IData)(
                                                                    vlSelfRef.softmax_appr__DOT__exp_scores
                                                                    [vlSelfRef.softmax_appr__DOT__i]
                                                                    [
                                                                    (0x3fU 
                                                                     & ((IData)(6U) 
                                                                        + (IData)(vlSelfRef.softmax_appr__DOT__j)))])), 0xeU));
    vlSelfRef.softmax_appr__DOT__norm_vals_parallel[5U] 
        = ((0x100000000ULL <= softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm)
            ? 0xffffffffU : (IData)(softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm));
    softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm 
        = (0xfffffffffULL & VL_DIV_QQQ(36, softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__scaled, (QData)((IData)(vlSelfRef.softmax_appr__DOT__sum_exp))));
    softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__scaled 
        = (0xfffffffffULL & VL_SHIFTL_QQI(36,36,32, (QData)((IData)(
                                                                    vlSelfRef.softmax_appr__DOT__exp_scores
                                                                    [vlSelfRef.softmax_appr__DOT__i]
                                                                    [
                                                                    (0x3fU 
                                                                     & ((IData)(7U) 
                                                                        + (IData)(vlSelfRef.softmax_appr__DOT__j)))])), 0xeU));
    vlSelfRef.softmax_appr__DOT__norm_vals_parallel[6U] 
        = ((0x100000000ULL <= softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm)
            ? 0xffffffffU : (IData)(softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm));
    softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm 
        = (0xfffffffffULL & VL_DIV_QQQ(36, softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__scaled, (QData)((IData)(vlSelfRef.softmax_appr__DOT__sum_exp))));
    vlSelfRef.softmax_appr__DOT__norm_vals_parallel[7U] 
        = ((0x100000000ULL <= softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm)
            ? 0xffffffffU : (IData)(softmax_appr__DOT__unnamedblk4__DOT__unnamedblk5__DOT__norm));
    __Vfunc_softmax_appr__DOT__exp_approx__0__x = (
                                                   vlSelfRef.softmax_appr__DOT__scores_parallel
                                                   [0U] 
                                                   - vlSelfRef.softmax_appr__DOT__max_score);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared = VL_RAND_RESET_Q(64);
    __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_III(32, 0x18000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
            ? 0x18000U : (VL_GTS_III(32, 0xfffe8000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
                           ? 0xfffe8000U : __Vfunc_softmax_appr__DOT__exp_approx__0__x));
    if (VL_LTES_III(32, 0U, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared 
            = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped), 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)), 0xeU);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (0x3fffffU & ((IData)(0x4000U) + ((IData)(
                                                        VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) 
                                                + (IData)(
                                                          VL_SHIFTRS_QQI(64,64,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared, 1U)))));
    } else {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (- __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (VL_GTS_III(32, 0x4000U, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                ? (0x3fffffU & (((IData)(0x4000U) - vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                + VL_SHIFTRS_III(32,32,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                : 0x100U);
    }
    __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result;
    vlSelfRef.softmax_appr__DOT__exp_vals_parallel[0U] 
        = __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout;
    __Vfunc_softmax_appr__DOT__exp_approx__0__x = (
                                                   vlSelfRef.softmax_appr__DOT__scores_parallel
                                                   [1U] 
                                                   - vlSelfRef.softmax_appr__DOT__max_score);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared = VL_RAND_RESET_Q(64);
    __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_III(32, 0x18000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
            ? 0x18000U : (VL_GTS_III(32, 0xfffe8000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
                           ? 0xfffe8000U : __Vfunc_softmax_appr__DOT__exp_approx__0__x));
    if (VL_LTES_III(32, 0U, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared 
            = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped), 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)), 0xeU);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (0x3fffffU & ((IData)(0x4000U) + ((IData)(
                                                        VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) 
                                                + (IData)(
                                                          VL_SHIFTRS_QQI(64,64,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared, 1U)))));
    } else {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (- __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (VL_GTS_III(32, 0x4000U, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                ? (0x3fffffU & (((IData)(0x4000U) - vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                + VL_SHIFTRS_III(32,32,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                : 0x100U);
    }
    __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result;
    vlSelfRef.softmax_appr__DOT__exp_vals_parallel[1U] 
        = __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout;
    __Vfunc_softmax_appr__DOT__exp_approx__0__x = (
                                                   vlSelfRef.softmax_appr__DOT__scores_parallel
                                                   [2U] 
                                                   - vlSelfRef.softmax_appr__DOT__max_score);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared = VL_RAND_RESET_Q(64);
    __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_III(32, 0x18000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
            ? 0x18000U : (VL_GTS_III(32, 0xfffe8000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
                           ? 0xfffe8000U : __Vfunc_softmax_appr__DOT__exp_approx__0__x));
    if (VL_LTES_III(32, 0U, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared 
            = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped), 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)), 0xeU);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (0x3fffffU & ((IData)(0x4000U) + ((IData)(
                                                        VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) 
                                                + (IData)(
                                                          VL_SHIFTRS_QQI(64,64,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared, 1U)))));
    } else {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (- __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (VL_GTS_III(32, 0x4000U, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                ? (0x3fffffU & (((IData)(0x4000U) - vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                + VL_SHIFTRS_III(32,32,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                : 0x100U);
    }
    __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result;
    vlSelfRef.softmax_appr__DOT__exp_vals_parallel[2U] 
        = __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout;
    __Vfunc_softmax_appr__DOT__exp_approx__0__x = (
                                                   vlSelfRef.softmax_appr__DOT__scores_parallel
                                                   [3U] 
                                                   - vlSelfRef.softmax_appr__DOT__max_score);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared = VL_RAND_RESET_Q(64);
    __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_III(32, 0x18000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
            ? 0x18000U : (VL_GTS_III(32, 0xfffe8000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
                           ? 0xfffe8000U : __Vfunc_softmax_appr__DOT__exp_approx__0__x));
    if (VL_LTES_III(32, 0U, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared 
            = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped), 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)), 0xeU);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (0x3fffffU & ((IData)(0x4000U) + ((IData)(
                                                        VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) 
                                                + (IData)(
                                                          VL_SHIFTRS_QQI(64,64,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared, 1U)))));
    } else {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (- __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (VL_GTS_III(32, 0x4000U, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                ? (0x3fffffU & (((IData)(0x4000U) - vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                + VL_SHIFTRS_III(32,32,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                : 0x100U);
    }
    __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result;
    vlSelfRef.softmax_appr__DOT__exp_vals_parallel[3U] 
        = __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout;
    __Vfunc_softmax_appr__DOT__exp_approx__0__x = (
                                                   vlSelfRef.softmax_appr__DOT__scores_parallel
                                                   [4U] 
                                                   - vlSelfRef.softmax_appr__DOT__max_score);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared = VL_RAND_RESET_Q(64);
    __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_III(32, 0x18000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
            ? 0x18000U : (VL_GTS_III(32, 0xfffe8000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
                           ? 0xfffe8000U : __Vfunc_softmax_appr__DOT__exp_approx__0__x));
    if (VL_LTES_III(32, 0U, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared 
            = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped), 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)), 0xeU);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (0x3fffffU & ((IData)(0x4000U) + ((IData)(
                                                        VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) 
                                                + (IData)(
                                                          VL_SHIFTRS_QQI(64,64,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared, 1U)))));
    } else {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (- __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (VL_GTS_III(32, 0x4000U, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                ? (0x3fffffU & (((IData)(0x4000U) - vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                + VL_SHIFTRS_III(32,32,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                : 0x100U);
    }
    __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result;
    vlSelfRef.softmax_appr__DOT__exp_vals_parallel[4U] 
        = __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout;
    __Vfunc_softmax_appr__DOT__exp_approx__0__x = (
                                                   vlSelfRef.softmax_appr__DOT__scores_parallel
                                                   [5U] 
                                                   - vlSelfRef.softmax_appr__DOT__max_score);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared = VL_RAND_RESET_Q(64);
    __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_III(32, 0x18000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
            ? 0x18000U : (VL_GTS_III(32, 0xfffe8000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
                           ? 0xfffe8000U : __Vfunc_softmax_appr__DOT__exp_approx__0__x));
    if (VL_LTES_III(32, 0U, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared 
            = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped), 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)), 0xeU);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (0x3fffffU & ((IData)(0x4000U) + ((IData)(
                                                        VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) 
                                                + (IData)(
                                                          VL_SHIFTRS_QQI(64,64,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared, 1U)))));
    } else {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (- __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (VL_GTS_III(32, 0x4000U, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                ? (0x3fffffU & (((IData)(0x4000U) - vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                + VL_SHIFTRS_III(32,32,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                : 0x100U);
    }
    __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result;
    vlSelfRef.softmax_appr__DOT__exp_vals_parallel[5U] 
        = __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout;
    __Vfunc_softmax_appr__DOT__exp_approx__0__x = (
                                                   vlSelfRef.softmax_appr__DOT__scores_parallel
                                                   [6U] 
                                                   - vlSelfRef.softmax_appr__DOT__max_score);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared = VL_RAND_RESET_Q(64);
    __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_III(32, 0x18000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
            ? 0x18000U : (VL_GTS_III(32, 0xfffe8000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
                           ? 0xfffe8000U : __Vfunc_softmax_appr__DOT__exp_approx__0__x));
    if (VL_LTES_III(32, 0U, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared 
            = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped), 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)), 0xeU);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (0x3fffffU & ((IData)(0x4000U) + ((IData)(
                                                        VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) 
                                                + (IData)(
                                                          VL_SHIFTRS_QQI(64,64,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared, 1U)))));
    } else {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (- __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (VL_GTS_III(32, 0x4000U, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                ? (0x3fffffU & (((IData)(0x4000U) - vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                + VL_SHIFTRS_III(32,32,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                : 0x100U);
    }
    __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result;
    vlSelfRef.softmax_appr__DOT__exp_vals_parallel[6U] 
        = __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout;
    __Vfunc_softmax_appr__DOT__exp_approx__0__x = (
                                                   vlSelfRef.softmax_appr__DOT__scores_parallel
                                                   [7U] 
                                                   - vlSelfRef.softmax_appr__DOT__max_score);
    __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_III(32, 0x18000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
            ? 0x18000U : (VL_GTS_III(32, 0xfffe8000U, __Vfunc_softmax_appr__DOT__exp_approx__0__x)
                           ? 0xfffe8000U : __Vfunc_softmax_appr__DOT__exp_approx__0__x));
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared = VL_RAND_RESET_Q(64);
    if (VL_LTES_III(32, 0U, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared 
            = VL_SHIFTRS_QQI(64,64,32, VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped), 
                                                   VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)), 0xeU);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (0x3fffffU & ((IData)(0x4000U) + ((IData)(
                                                        VL_EXTENDS_QI(64,32, __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped)) 
                                                + (IData)(
                                                          VL_SHIFTRS_QQI(64,64,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared, 1U)))));
    } else {
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (- __Vfunc_softmax_appr__DOT__exp_approx__0__x_clamped);
        vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result 
            = (VL_GTS_III(32, 0x4000U, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                ? (0x3fffffU & (((IData)(0x4000U) - vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                + VL_SHIFTRS_III(32,32,32, vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                : 0x100U);
    }
    __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_softmax_appr__DOT__exp_approx__0__result;
    vlSelfRef.softmax_appr__DOT__exp_vals_parallel[7U] 
        = __Vfunc_softmax_appr__DOT__exp_approx__0__Vfuncout;
}

void Vsoftmax_appr___024root___eval_triggers__act(Vsoftmax_appr___024root* vlSelf);

bool Vsoftmax_appr___024root___eval_phase__act(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___eval_phase__act\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsoftmax_appr___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsoftmax_appr___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsoftmax_appr___024root___eval_phase__nba(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___eval_phase__nba\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsoftmax_appr___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoftmax_appr___024root___dump_triggers__ico(Vsoftmax_appr___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoftmax_appr___024root___dump_triggers__nba(Vsoftmax_appr___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoftmax_appr___024root___dump_triggers__act(Vsoftmax_appr___024root* vlSelf);
#endif  // VL_DEBUG

void Vsoftmax_appr___024root___eval(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___eval\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vsoftmax_appr___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("softmax_appr.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vsoftmax_appr___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsoftmax_appr___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("softmax_appr.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsoftmax_appr___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("softmax_appr.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsoftmax_appr___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsoftmax_appr___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsoftmax_appr___024root___eval_debug_assertions(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___eval_debug_assertions\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
