// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vqk_mul.h for the primary calling header

#include "Vqk_mul__pch.h"
#include "Vqk_mul___024root.h"

VL_ATTR_COLD void Vqk_mul___024root___eval_static(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval_static\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vqk_mul___024root___eval_initial(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval_initial\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vqk_mul___024root___eval_final(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval_final\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vqk_mul___024root___dump_triggers__stl(Vqk_mul___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vqk_mul___024root___eval_phase__stl(Vqk_mul___024root* vlSelf);

VL_ATTR_COLD void Vqk_mul___024root___eval_settle(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval_settle\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vqk_mul___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("qk_mul.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vqk_mul___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vqk_mul___024root___dump_triggers__stl(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___dump_triggers__stl\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vqk_mul___024root___stl_sequent__TOP__0(Vqk_mul___024root* vlSelf);

VL_ATTR_COLD void Vqk_mul___024root___eval_stl(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval_stl\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vqk_mul___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vqk_mul___024root___stl_sequent__TOP__0(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___stl_sequent__TOP__0\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ qk_mul__DOT__unnamedblk1__DOT__m;
    qk_mul__DOT__unnamedblk1__DOT__m = 0;
    // Body
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

VL_ATTR_COLD void Vqk_mul___024root___eval_triggers__stl(Vqk_mul___024root* vlSelf);

VL_ATTR_COLD bool Vqk_mul___024root___eval_phase__stl(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval_phase__stl\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vqk_mul___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vqk_mul___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vqk_mul___024root___dump_triggers__act(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___dump_triggers__act\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vqk_mul___024root___dump_triggers__nba(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___dump_triggers__nba\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vqk_mul___024root___ctor_var_reset(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___ctor_var_reset\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(131072, vlSelf->Q_flat);
    VL_RAND_RESET_W(131072, vlSelf->K_flat);
    vlSelf->done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(131072, vlSelf->scores_flat);
    vlSelf->qk_mul__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->qk_mul__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->qk_mul__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->qk_mul__DOT__k = VL_RAND_RESET_I(6);
    vlSelf->qk_mul__DOT__Q_reg = VL_RAND_RESET_I(32);
    vlSelf->qk_mul__DOT__K_reg = VL_RAND_RESET_I(32);
    vlSelf->qk_mul__DOT__accum = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->qk_mul__DOT__scores[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
