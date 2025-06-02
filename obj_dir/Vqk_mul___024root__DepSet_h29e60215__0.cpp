// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vqk_mul.h for the primary calling header

#include "Vqk_mul__pch.h"
#include "Vqk_mul___024root.h"

void Vqk_mul___024root___eval_act(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval_act\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vqk_mul___024root___nba_sequent__TOP__0(Vqk_mul___024root* vlSelf);

void Vqk_mul___024root___eval_nba(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval_nba\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vqk_mul___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vqk_mul___024root___nba_sequent__TOP__0(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___nba_sequent__TOP__0\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ qk_mul__DOT__unnamedblk1__DOT__m;
    qk_mul__DOT__unnamedblk1__DOT__m = 0;
    CData/*2:0*/ __Vdly__qk_mul__DOT__state;
    __Vdly__qk_mul__DOT__state = 0;
    CData/*5:0*/ __Vdly__qk_mul__DOT__i;
    __Vdly__qk_mul__DOT__i = 0;
    CData/*5:0*/ __Vdly__qk_mul__DOT__j;
    __Vdly__qk_mul__DOT__j = 0;
    CData/*5:0*/ __Vdly__qk_mul__DOT__k;
    __Vdly__qk_mul__DOT__k = 0;
    IData/*31:0*/ __Vdly__qk_mul__DOT__accum;
    __Vdly__qk_mul__DOT__accum = 0;
    IData/*31:0*/ __Vdly__qk_mul__DOT__Q_reg;
    __Vdly__qk_mul__DOT__Q_reg = 0;
    IData/*31:0*/ __Vdly__qk_mul__DOT__K_reg;
    __Vdly__qk_mul__DOT__K_reg = 0;
    IData/*31:0*/ __VdlyVal__qk_mul__DOT__scores__v0;
    __VdlyVal__qk_mul__DOT__scores__v0 = 0;
    CData/*5:0*/ __VdlyDim0__qk_mul__DOT__scores__v0;
    __VdlyDim0__qk_mul__DOT__scores__v0 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v0;
    __VdlyDim1__qk_mul__DOT__scores__v0 = 0;
    CData/*0:0*/ __VdlySet__qk_mul__DOT__scores__v0;
    __VdlySet__qk_mul__DOT__scores__v0 = 0;
    // Body
    __Vdly__qk_mul__DOT__state = vlSelfRef.qk_mul__DOT__state;
    __Vdly__qk_mul__DOT__i = vlSelfRef.qk_mul__DOT__i;
    __Vdly__qk_mul__DOT__j = vlSelfRef.qk_mul__DOT__j;
    __Vdly__qk_mul__DOT__k = vlSelfRef.qk_mul__DOT__k;
    __Vdly__qk_mul__DOT__accum = vlSelfRef.qk_mul__DOT__accum;
    __Vdly__qk_mul__DOT__Q_reg = vlSelfRef.qk_mul__DOT__Q_reg;
    __Vdly__qk_mul__DOT__K_reg = vlSelfRef.qk_mul__DOT__K_reg;
    __VdlySet__qk_mul__DOT__scores__v0 = 0U;
    if (vlSelfRef.rst) {
        __Vdly__qk_mul__DOT__state = 0U;
        __Vdly__qk_mul__DOT__i = 0U;
        __Vdly__qk_mul__DOT__j = 0U;
        __Vdly__qk_mul__DOT__k = 0U;
        __Vdly__qk_mul__DOT__accum = 0U;
        vlSelfRef.done = 0U;
    } else if ((0U == (IData)(vlSelfRef.qk_mul__DOT__state))) {
        vlSelfRef.done = 0U;
        if (vlSelfRef.start) {
            __Vdly__qk_mul__DOT__i = 0U;
            __Vdly__qk_mul__DOT__j = 0U;
            __Vdly__qk_mul__DOT__k = 0U;
            __Vdly__qk_mul__DOT__accum = 0U;
            __Vdly__qk_mul__DOT__state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.qk_mul__DOT__state))) {
        __Vdly__qk_mul__DOT__Q_reg = (((0U == (0x1fU 
                                               & VL_SHIFTL_III(17,32,32, 
                                                               (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.qk_mul__DOT__i), 6U) 
                                                                + (IData)(vlSelfRef.qk_mul__DOT__k)), 5U)))
                                        ? 0U : (vlSelfRef.Q_flat[
                                                (((IData)(0x1fU) 
                                                  + 
                                                  (0x1ffffU 
                                                   & VL_SHIFTL_III(17,32,32, 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.qk_mul__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.qk_mul__DOT__k)), 5U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(17,32,32, 
                                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.qk_mul__DOT__i), 6U) 
                                                                   + (IData)(vlSelfRef.qk_mul__DOT__k)), 5U))))) 
                                      | (vlSelfRef.Q_flat[
                                         (0xfffU & 
                                          (VL_SHIFTL_III(17,32,32, 
                                                         (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.qk_mul__DOT__i), 6U) 
                                                          + (IData)(vlSelfRef.qk_mul__DOT__k)), 5U) 
                                           >> 5U))] 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(17,32,32, 
                                                             (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.qk_mul__DOT__i), 6U) 
                                                              + (IData)(vlSelfRef.qk_mul__DOT__k)), 5U))));
        __Vdly__qk_mul__DOT__state = 2U;
        __Vdly__qk_mul__DOT__K_reg = (((0U == (0x1fU 
                                               & VL_SHIFTL_III(17,32,32, 
                                                               (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.qk_mul__DOT__j), 6U) 
                                                                + (IData)(vlSelfRef.qk_mul__DOT__k)), 5U)))
                                        ? 0U : (vlSelfRef.K_flat[
                                                (((IData)(0x1fU) 
                                                  + 
                                                  (0x1ffffU 
                                                   & VL_SHIFTL_III(17,32,32, 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.qk_mul__DOT__j), 6U) 
                                                                    + (IData)(vlSelfRef.qk_mul__DOT__k)), 5U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(17,32,32, 
                                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.qk_mul__DOT__j), 6U) 
                                                                   + (IData)(vlSelfRef.qk_mul__DOT__k)), 5U))))) 
                                      | (vlSelfRef.K_flat[
                                         (0xfffU & 
                                          (VL_SHIFTL_III(17,32,32, 
                                                         (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.qk_mul__DOT__j), 6U) 
                                                          + (IData)(vlSelfRef.qk_mul__DOT__k)), 5U) 
                                           >> 5U))] 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(17,32,32, 
                                                             (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.qk_mul__DOT__j), 6U) 
                                                              + (IData)(vlSelfRef.qk_mul__DOT__k)), 5U))));
    } else if ((2U == (IData)(vlSelfRef.qk_mul__DOT__state))) {
        __Vdly__qk_mul__DOT__accum = (vlSelfRef.qk_mul__DOT__accum 
                                      + VL_SHIFTRS_III(32,32,32, 
                                                       VL_MULS_III(32, vlSelfRef.qk_mul__DOT__Q_reg, vlSelfRef.qk_mul__DOT__K_reg), 0xeU));
        if ((0x3fU == (IData)(vlSelfRef.qk_mul__DOT__k))) {
            __Vdly__qk_mul__DOT__state = 3U;
        } else {
            __Vdly__qk_mul__DOT__k = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.qk_mul__DOT__k)));
            __Vdly__qk_mul__DOT__state = 1U;
        }
    } else if ((3U == (IData)(vlSelfRef.qk_mul__DOT__state))) {
        __VdlyVal__qk_mul__DOT__scores__v0 = vlSelfRef.qk_mul__DOT__accum;
        __VdlyDim0__qk_mul__DOT__scores__v0 = vlSelfRef.qk_mul__DOT__j;
        __VdlyDim1__qk_mul__DOT__scores__v0 = vlSelfRef.qk_mul__DOT__i;
        __VdlySet__qk_mul__DOT__scores__v0 = 1U;
        __Vdly__qk_mul__DOT__k = 0U;
        if ((0x3fU == (IData)(vlSelfRef.qk_mul__DOT__j))) {
            __Vdly__qk_mul__DOT__j = 0U;
            if ((0x3fU == (IData)(vlSelfRef.qk_mul__DOT__i))) {
                __Vdly__qk_mul__DOT__state = 4U;
            } else {
                __Vdly__qk_mul__DOT__i = (0x3fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.qk_mul__DOT__i)));
                __Vdly__qk_mul__DOT__state = 1U;
            }
        } else {
            __Vdly__qk_mul__DOT__j = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.qk_mul__DOT__j)));
            __Vdly__qk_mul__DOT__state = 1U;
        }
        __Vdly__qk_mul__DOT__accum = 0U;
    } else if ((4U == (IData)(vlSelfRef.qk_mul__DOT__state))) {
        vlSelfRef.done = 1U;
        __Vdly__qk_mul__DOT__state = 0U;
    }
    vlSelfRef.qk_mul__DOT__state = __Vdly__qk_mul__DOT__state;
    vlSelfRef.qk_mul__DOT__i = __Vdly__qk_mul__DOT__i;
    vlSelfRef.qk_mul__DOT__j = __Vdly__qk_mul__DOT__j;
    vlSelfRef.qk_mul__DOT__k = __Vdly__qk_mul__DOT__k;
    vlSelfRef.qk_mul__DOT__accum = __Vdly__qk_mul__DOT__accum;
    vlSelfRef.qk_mul__DOT__Q_reg = __Vdly__qk_mul__DOT__Q_reg;
    vlSelfRef.qk_mul__DOT__K_reg = __Vdly__qk_mul__DOT__K_reg;
    if (__VdlySet__qk_mul__DOT__scores__v0) {
        vlSelfRef.qk_mul__DOT__scores[__VdlyDim1__qk_mul__DOT__scores__v0][__VdlyDim0__qk_mul__DOT__scores__v0] 
            = __VdlyVal__qk_mul__DOT__scores__v0;
    }
    qk_mul__DOT__unnamedblk1__DOT__m = 0U;
    while (VL_GTS_III(32, 0x40U, qk_mul__DOT__unnamedblk1__DOT__m)) {
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x800U), qk_mul__DOT__unnamedblk1__DOT__m)), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [1U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(2U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [2U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(3U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [3U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(4U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [4U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(5U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [5U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(6U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [6U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(7U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [7U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(8U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [8U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(9U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [9U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xaU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0xaU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xbU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0xbU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xcU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0xcU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xdU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0xdU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xeU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0xeU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xfU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0xfU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x10U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x10U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x11U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x11U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x12U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x12U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x13U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x13U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x14U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x14U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x15U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x15U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x16U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x16U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x17U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x17U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x18U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x18U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x19U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x19U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x1aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x1bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x1cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x1dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x1eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x1fU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x20U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x20U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x21U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x21U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x22U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x22U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x23U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x23U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x24U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x24U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x25U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x25U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x26U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x26U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x27U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x27U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x28U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x28U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x29U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x29U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x2aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x2bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x2cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x2dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x2eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x2fU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x30U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x30U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x31U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x31U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x32U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x32U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x33U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x33U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x34U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x34U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x35U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x35U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x36U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x36U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x37U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x37U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x38U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x38U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x39U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x39U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x3aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x3bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x3cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x3dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x3eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)]
                        [0x3fU]);
        qk_mul__DOT__unnamedblk1__DOT__m = ((IData)(1U) 
                                            + qk_mul__DOT__unnamedblk1__DOT__m);
    }
}

void Vqk_mul___024root___eval_triggers__act(Vqk_mul___024root* vlSelf);

bool Vqk_mul___024root___eval_phase__act(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval_phase__act\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vqk_mul___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vqk_mul___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vqk_mul___024root___eval_phase__nba(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval_phase__nba\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vqk_mul___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vqk_mul___024root___dump_triggers__nba(Vqk_mul___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vqk_mul___024root___dump_triggers__act(Vqk_mul___024root* vlSelf);
#endif  // VL_DEBUG

void Vqk_mul___024root___eval(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vqk_mul___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("qk_mul.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vqk_mul___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("qk_mul.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vqk_mul___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vqk_mul___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vqk_mul___024root___eval_debug_assertions(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval_debug_assertions\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
