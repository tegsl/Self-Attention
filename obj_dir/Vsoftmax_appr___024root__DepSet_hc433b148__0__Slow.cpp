// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoftmax_appr.h for the primary calling header

#include "Vsoftmax_appr__pch.h"
#include "Vsoftmax_appr___024root.h"

VL_ATTR_COLD void Vsoftmax_appr___024root___eval_static(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___eval_static\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vsoftmax_appr___024root___eval_initial(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___eval_initial\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsoftmax_appr___024root___eval_final(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___eval_final\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoftmax_appr___024root___dump_triggers__stl(Vsoftmax_appr___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsoftmax_appr___024root___eval_phase__stl(Vsoftmax_appr___024root* vlSelf);

VL_ATTR_COLD void Vsoftmax_appr___024root___eval_settle(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___eval_settle\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vsoftmax_appr___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("softmax_appr.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsoftmax_appr___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoftmax_appr___024root___dump_triggers__stl(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___dump_triggers__stl\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vsoftmax_appr___024root___stl_sequent__TOP__0(Vsoftmax_appr___024root* vlSelf);

VL_ATTR_COLD void Vsoftmax_appr___024root___eval_stl(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___eval_stl\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsoftmax_appr___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vsoftmax_appr___024root___stl_sequent__TOP__0(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___stl_sequent__TOP__0\n"); );
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
    // Body
    vlSelfRef.debug_sum_exp_0 = vlSelfRef.softmax_appr__DOT__sum_exp;
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

VL_ATTR_COLD void Vsoftmax_appr___024root___eval_triggers__stl(Vsoftmax_appr___024root* vlSelf);

VL_ATTR_COLD bool Vsoftmax_appr___024root___eval_phase__stl(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___eval_phase__stl\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsoftmax_appr___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsoftmax_appr___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoftmax_appr___024root___dump_triggers__ico(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___dump_triggers__ico\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoftmax_appr___024root___dump_triggers__act(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___dump_triggers__act\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vsoftmax_appr___024root___dump_triggers__nba(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___dump_triggers__nba\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vsoftmax_appr___024root___ctor_var_reset(Vsoftmax_appr___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoftmax_appr___024root___ctor_var_reset\n"); );
    Vsoftmax_appr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(131072, vlSelf->scores_flat);
    vlSelf->done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(131072, vlSelf->softmax_scores_flat);
    vlSelf->debug_sum_exp_0 = VL_RAND_RESET_I(28);
    vlSelf->softmax_appr__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->softmax_appr__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->softmax_appr__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->softmax_appr__DOT__max_score = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->softmax_appr__DOT__scores_parallel[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->softmax_appr__DOT__exp_vals_parallel[__Vi0] = VL_RAND_RESET_I(22);
    }
    vlSelf->softmax_appr__DOT__sum_exp = VL_RAND_RESET_I(28);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->softmax_appr__DOT__norm_vals_parallel[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->softmax_appr__DOT__exp_scores[__Vi0][__Vi1] = VL_RAND_RESET_I(22);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->softmax_appr__DOT__softmax_out[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->softmax_appr__DOT__unnamedblk8__DOT__temp_sum = VL_RAND_RESET_I(28);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__x_squared = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_softmax_appr__DOT__exp_approx__0__result = VL_RAND_RESET_I(22);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
