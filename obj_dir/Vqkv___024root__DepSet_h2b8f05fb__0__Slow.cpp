// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vqkv.h for the primary calling header

#include "Vqkv__pch.h"
#include "Vqkv___024root.h"

VL_ATTR_COLD void Vqkv___024root___eval_static(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_static\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vqkv___024root___eval_initial(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_initial\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vqkv___024root___eval_final(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_final\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vqkv___024root___dump_triggers__stl(Vqkv___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vqkv___024root___eval_phase__stl(Vqkv___024root* vlSelf);

VL_ATTR_COLD void Vqkv___024root___eval_settle(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_settle\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vqkv___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("qkv.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vqkv___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vqkv___024root___dump_triggers__stl(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___dump_triggers__stl\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vqkv___024root___stl_sequent__TOP__0(Vqkv___024root* vlSelf);

VL_ATTR_COLD void Vqkv___024root___eval_stl(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_stl\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vqkv___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vqkv___024root___stl_sequent__TOP__0(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___stl_sequent__TOP__0\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Q_flat[0U] = (IData)((((QData)((IData)(
                                                     ((vlSelfRef.qkv__DOT__Q
                                                       [2U] 
                                                       << 0x10U) 
                                                      | vlSelfRef.qkv__DOT__Q
                                                      [1U]))) 
                                     << 0x10U) | (QData)((IData)(
                                                                 vlSelfRef.qkv__DOT__Q
                                                                 [0U]))));
    vlSelfRef.Q_flat[1U] = ((0xffff0000U & vlSelfRef.Q_flat[1U]) 
                            | (IData)(((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__Q
                                                           [2U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__Q
                                                          [1U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__Q
                                                          [0U]))) 
                                       >> 0x20U)));
    vlSelfRef.Q_flat[1U] = ((0xffffU & vlSelfRef.Q_flat[1U]) 
                            | ((IData)((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__Q
                                                           [5U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__Q
                                                          [4U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__Q
                                                          [3U])))) 
                               << 0x10U));
    vlSelfRef.Q_flat[2U] = (((IData)((((QData)((IData)(
                                                       ((vlSelfRef.qkv__DOT__Q
                                                         [5U] 
                                                         << 0x10U) 
                                                        | vlSelfRef.qkv__DOT__Q
                                                        [4U]))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   vlSelfRef.qkv__DOT__Q
                                                                   [3U])))) 
                             >> 0x10U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSelfRef.qkv__DOT__Q
                                                                       [5U] 
                                                                       << 0x10U) 
                                                                      | vlSelfRef.qkv__DOT__Q
                                                                      [4U]))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.qkv__DOT__Q
                                                                      [3U]))) 
                                                   >> 0x20U)) 
                                          << 0x10U));
    vlSelfRef.Q_flat[3U] = (IData)((((QData)((IData)(
                                                     ((vlSelfRef.qkv__DOT__Q
                                                       [8U] 
                                                       << 0x10U) 
                                                      | vlSelfRef.qkv__DOT__Q
                                                      [7U]))) 
                                     << 0x10U) | (QData)((IData)(
                                                                 vlSelfRef.qkv__DOT__Q
                                                                 [6U]))));
    vlSelfRef.Q_flat[4U] = ((0xffff0000U & vlSelfRef.Q_flat[4U]) 
                            | (IData)(((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__Q
                                                           [8U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__Q
                                                          [7U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__Q
                                                          [6U]))) 
                                       >> 0x20U)));
    vlSelfRef.Q_flat[4U] = ((0xffffU & vlSelfRef.Q_flat[4U]) 
                            | ((IData)((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__Q
                                                           [0xbU] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__Q
                                                          [0xaU]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__Q
                                                          [9U])))) 
                               << 0x10U));
    vlSelfRef.Q_flat[5U] = (((IData)((((QData)((IData)(
                                                       ((vlSelfRef.qkv__DOT__Q
                                                         [0xbU] 
                                                         << 0x10U) 
                                                        | vlSelfRef.qkv__DOT__Q
                                                        [0xaU]))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   vlSelfRef.qkv__DOT__Q
                                                                   [9U])))) 
                             >> 0x10U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSelfRef.qkv__DOT__Q
                                                                       [0xbU] 
                                                                       << 0x10U) 
                                                                      | vlSelfRef.qkv__DOT__Q
                                                                      [0xaU]))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.qkv__DOT__Q
                                                                      [9U]))) 
                                                   >> 0x20U)) 
                                          << 0x10U));
    vlSelfRef.Q_flat[6U] = (IData)((((QData)((IData)(
                                                     ((vlSelfRef.qkv__DOT__Q
                                                       [0xeU] 
                                                       << 0x10U) 
                                                      | vlSelfRef.qkv__DOT__Q
                                                      [0xdU]))) 
                                     << 0x10U) | (QData)((IData)(
                                                                 vlSelfRef.qkv__DOT__Q
                                                                 [0xcU]))));
    vlSelfRef.Q_flat[7U] = ((0xffff0000U & vlSelfRef.Q_flat[7U]) 
                            | (IData)(((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__Q
                                                           [0xeU] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__Q
                                                          [0xdU]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__Q
                                                          [0xcU]))) 
                                       >> 0x20U)));
    vlSelfRef.Q_flat[7U] = ((0xffffU & vlSelfRef.Q_flat[7U]) 
                            | ((IData)((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__Q
                                                           [0x11U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__Q
                                                          [0x10U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__Q
                                                          [0xfU])))) 
                               << 0x10U));
    vlSelfRef.Q_flat[8U] = (((IData)((((QData)((IData)(
                                                       ((vlSelfRef.qkv__DOT__Q
                                                         [0x11U] 
                                                         << 0x10U) 
                                                        | vlSelfRef.qkv__DOT__Q
                                                        [0x10U]))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   vlSelfRef.qkv__DOT__Q
                                                                   [0xfU])))) 
                             >> 0x10U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSelfRef.qkv__DOT__Q
                                                                       [0x11U] 
                                                                       << 0x10U) 
                                                                      | vlSelfRef.qkv__DOT__Q
                                                                      [0x10U]))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.qkv__DOT__Q
                                                                      [0xfU]))) 
                                                   >> 0x20U)) 
                                          << 0x10U));
    vlSelfRef.Q_flat[9U] = (IData)((((QData)((IData)(
                                                     ((vlSelfRef.qkv__DOT__Q
                                                       [0x14U] 
                                                       << 0x10U) 
                                                      | vlSelfRef.qkv__DOT__Q
                                                      [0x13U]))) 
                                     << 0x10U) | (QData)((IData)(
                                                                 vlSelfRef.qkv__DOT__Q
                                                                 [0x12U]))));
    vlSelfRef.Q_flat[0xaU] = ((0xffff0000U & vlSelfRef.Q_flat[0xaU]) 
                              | (IData)(((((QData)((IData)(
                                                           ((vlSelfRef.qkv__DOT__Q
                                                             [0x14U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.qkv__DOT__Q
                                                            [0x13U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.qkv__DOT__Q
                                                            [0x12U]))) 
                                         >> 0x20U)));
    vlSelfRef.Q_flat[0xaU] = ((0xffffU & vlSelfRef.Q_flat[0xaU]) 
                              | ((IData)((((QData)((IData)(
                                                           ((vlSelfRef.qkv__DOT__Q
                                                             [0x17U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.qkv__DOT__Q
                                                            [0x16U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.qkv__DOT__Q
                                                            [0x15U])))) 
                                 << 0x10U));
    vlSelfRef.Q_flat[0xbU] = (((IData)((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__Q
                                                           [0x17U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__Q
                                                          [0x16U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__Q
                                                          [0x15U])))) 
                               >> 0x10U) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       ((vlSelfRef.qkv__DOT__Q
                                                                         [0x17U] 
                                                                         << 0x10U) 
                                                                        | vlSelfRef.qkv__DOT__Q
                                                                        [0x16U]))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.qkv__DOT__Q
                                                                        [0x15U]))) 
                                                     >> 0x20U)) 
                                            << 0x10U));
    vlSelfRef.Q_flat[0xcU] = (IData)((((QData)((IData)(
                                                       ((vlSelfRef.qkv__DOT__Q
                                                         [0x1aU] 
                                                         << 0x10U) 
                                                        | vlSelfRef.qkv__DOT__Q
                                                        [0x19U]))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   vlSelfRef.qkv__DOT__Q
                                                                   [0x18U]))));
    vlSelfRef.Q_flat[0xdU] = ((0xffff0000U & vlSelfRef.Q_flat[0xdU]) 
                              | (IData)(((((QData)((IData)(
                                                           ((vlSelfRef.qkv__DOT__Q
                                                             [0x1aU] 
                                                             << 0x10U) 
                                                            | vlSelfRef.qkv__DOT__Q
                                                            [0x19U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.qkv__DOT__Q
                                                            [0x18U]))) 
                                         >> 0x20U)));
    vlSelfRef.Q_flat[0xdU] = ((0xffffU & vlSelfRef.Q_flat[0xdU]) 
                              | ((IData)((((QData)((IData)(
                                                           ((vlSelfRef.qkv__DOT__Q
                                                             [0x1dU] 
                                                             << 0x10U) 
                                                            | vlSelfRef.qkv__DOT__Q
                                                            [0x1cU]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.qkv__DOT__Q
                                                            [0x1bU])))) 
                                 << 0x10U));
    vlSelfRef.Q_flat[0xeU] = (((IData)((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__Q
                                                           [0x1dU] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__Q
                                                          [0x1cU]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__Q
                                                          [0x1bU])))) 
                               >> 0x10U) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       ((vlSelfRef.qkv__DOT__Q
                                                                         [0x1dU] 
                                                                         << 0x10U) 
                                                                        | vlSelfRef.qkv__DOT__Q
                                                                        [0x1cU]))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.qkv__DOT__Q
                                                                        [0x1bU]))) 
                                                     >> 0x20U)) 
                                            << 0x10U));
    vlSelfRef.Q_flat[0xfU] = (IData)((((QData)((IData)(
                                                       ((vlSelfRef.qkv__DOT__Q
                                                         [0x20U] 
                                                         << 0x10U) 
                                                        | vlSelfRef.qkv__DOT__Q
                                                        [0x1fU]))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   vlSelfRef.qkv__DOT__Q
                                                                   [0x1eU]))));
    vlSelfRef.Q_flat[0x10U] = ((0xffff0000U & vlSelfRef.Q_flat[0x10U]) 
                               | (IData)(((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__Q
                                                              [0x20U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__Q
                                                             [0x1fU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__Q
                                                             [0x1eU]))) 
                                          >> 0x20U)));
    vlSelfRef.Q_flat[0x10U] = ((0xffffU & vlSelfRef.Q_flat[0x10U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__Q
                                                              [0x23U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__Q
                                                             [0x22U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__Q
                                                             [0x21U])))) 
                                  << 0x10U));
    vlSelfRef.Q_flat[0x11U] = (((IData)((((QData)((IData)(
                                                          ((vlSelfRef.qkv__DOT__Q
                                                            [0x23U] 
                                                            << 0x10U) 
                                                           | vlSelfRef.qkv__DOT__Q
                                                           [0x22U]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.qkv__DOT__Q
                                                           [0x21U])))) 
                                >> 0x10U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelfRef.qkv__DOT__Q
                                                                          [0x23U] 
                                                                          << 0x10U) 
                                                                         | vlSelfRef.qkv__DOT__Q
                                                                         [0x22U]))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.qkv__DOT__Q
                                                                         [0x21U]))) 
                                                      >> 0x20U)) 
                                             << 0x10U));
    vlSelfRef.Q_flat[0x12U] = (IData)((((QData)((IData)(
                                                        ((vlSelfRef.qkv__DOT__Q
                                                          [0x26U] 
                                                          << 0x10U) 
                                                         | vlSelfRef.qkv__DOT__Q
                                                         [0x25U]))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    vlSelfRef.qkv__DOT__Q
                                                                    [0x24U]))));
    vlSelfRef.Q_flat[0x13U] = ((0xffff0000U & vlSelfRef.Q_flat[0x13U]) 
                               | (IData)(((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__Q
                                                              [0x26U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__Q
                                                             [0x25U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__Q
                                                             [0x24U]))) 
                                          >> 0x20U)));
    vlSelfRef.Q_flat[0x13U] = ((0xffffU & vlSelfRef.Q_flat[0x13U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__Q
                                                              [0x29U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__Q
                                                             [0x28U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__Q
                                                             [0x27U])))) 
                                  << 0x10U));
    vlSelfRef.Q_flat[0x14U] = (((IData)((((QData)((IData)(
                                                          ((vlSelfRef.qkv__DOT__Q
                                                            [0x29U] 
                                                            << 0x10U) 
                                                           | vlSelfRef.qkv__DOT__Q
                                                           [0x28U]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.qkv__DOT__Q
                                                           [0x27U])))) 
                                >> 0x10U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelfRef.qkv__DOT__Q
                                                                          [0x29U] 
                                                                          << 0x10U) 
                                                                         | vlSelfRef.qkv__DOT__Q
                                                                         [0x28U]))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.qkv__DOT__Q
                                                                         [0x27U]))) 
                                                      >> 0x20U)) 
                                             << 0x10U));
    vlSelfRef.Q_flat[0x15U] = (IData)((((QData)((IData)(
                                                        ((vlSelfRef.qkv__DOT__Q
                                                          [0x2cU] 
                                                          << 0x10U) 
                                                         | vlSelfRef.qkv__DOT__Q
                                                         [0x2bU]))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    vlSelfRef.qkv__DOT__Q
                                                                    [0x2aU]))));
    vlSelfRef.Q_flat[0x16U] = ((0xffff0000U & vlSelfRef.Q_flat[0x16U]) 
                               | (IData)(((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__Q
                                                              [0x2cU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__Q
                                                             [0x2bU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__Q
                                                             [0x2aU]))) 
                                          >> 0x20U)));
    vlSelfRef.Q_flat[0x16U] = ((0xffffU & vlSelfRef.Q_flat[0x16U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__Q
                                                              [0x2fU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__Q
                                                             [0x2eU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__Q
                                                             [0x2dU])))) 
                                  << 0x10U));
    vlSelfRef.Q_flat[0x17U] = (((IData)((((QData)((IData)(
                                                          ((vlSelfRef.qkv__DOT__Q
                                                            [0x2fU] 
                                                            << 0x10U) 
                                                           | vlSelfRef.qkv__DOT__Q
                                                           [0x2eU]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.qkv__DOT__Q
                                                           [0x2dU])))) 
                                >> 0x10U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelfRef.qkv__DOT__Q
                                                                          [0x2fU] 
                                                                          << 0x10U) 
                                                                         | vlSelfRef.qkv__DOT__Q
                                                                         [0x2eU]))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.qkv__DOT__Q
                                                                         [0x2dU]))) 
                                                      >> 0x20U)) 
                                             << 0x10U));
    vlSelfRef.Q_flat[0x18U] = (IData)((((QData)((IData)(
                                                        ((vlSelfRef.qkv__DOT__Q
                                                          [0x32U] 
                                                          << 0x10U) 
                                                         | vlSelfRef.qkv__DOT__Q
                                                         [0x31U]))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    vlSelfRef.qkv__DOT__Q
                                                                    [0x30U]))));
    vlSelfRef.Q_flat[0x19U] = ((0xffff0000U & vlSelfRef.Q_flat[0x19U]) 
                               | (IData)(((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__Q
                                                              [0x32U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__Q
                                                             [0x31U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__Q
                                                             [0x30U]))) 
                                          >> 0x20U)));
    vlSelfRef.Q_flat[0x19U] = ((0xffffU & vlSelfRef.Q_flat[0x19U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__Q
                                                              [0x35U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__Q
                                                             [0x34U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__Q
                                                             [0x33U])))) 
                                  << 0x10U));
    vlSelfRef.Q_flat[0x1aU] = (((IData)((((QData)((IData)(
                                                          ((vlSelfRef.qkv__DOT__Q
                                                            [0x35U] 
                                                            << 0x10U) 
                                                           | vlSelfRef.qkv__DOT__Q
                                                           [0x34U]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.qkv__DOT__Q
                                                           [0x33U])))) 
                                >> 0x10U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelfRef.qkv__DOT__Q
                                                                          [0x35U] 
                                                                          << 0x10U) 
                                                                         | vlSelfRef.qkv__DOT__Q
                                                                         [0x34U]))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.qkv__DOT__Q
                                                                         [0x33U]))) 
                                                      >> 0x20U)) 
                                             << 0x10U));
    vlSelfRef.Q_flat[0x1bU] = (IData)((((QData)((IData)(
                                                        ((vlSelfRef.qkv__DOT__Q
                                                          [0x38U] 
                                                          << 0x10U) 
                                                         | vlSelfRef.qkv__DOT__Q
                                                         [0x37U]))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    vlSelfRef.qkv__DOT__Q
                                                                    [0x36U]))));
    vlSelfRef.Q_flat[0x1cU] = ((0xffff0000U & vlSelfRef.Q_flat[0x1cU]) 
                               | (IData)(((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__Q
                                                              [0x38U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__Q
                                                             [0x37U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__Q
                                                             [0x36U]))) 
                                          >> 0x20U)));
    vlSelfRef.Q_flat[0x1cU] = ((0xffffU & vlSelfRef.Q_flat[0x1cU]) 
                               | ((IData)((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__Q
                                                              [0x3bU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__Q
                                                             [0x3aU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__Q
                                                             [0x39U])))) 
                                  << 0x10U));
    vlSelfRef.Q_flat[0x1dU] = (((IData)((((QData)((IData)(
                                                          ((vlSelfRef.qkv__DOT__Q
                                                            [0x3bU] 
                                                            << 0x10U) 
                                                           | vlSelfRef.qkv__DOT__Q
                                                           [0x3aU]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.qkv__DOT__Q
                                                           [0x39U])))) 
                                >> 0x10U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelfRef.qkv__DOT__Q
                                                                          [0x3bU] 
                                                                          << 0x10U) 
                                                                         | vlSelfRef.qkv__DOT__Q
                                                                         [0x3aU]))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.qkv__DOT__Q
                                                                         [0x39U]))) 
                                                      >> 0x20U)) 
                                             << 0x10U));
    vlSelfRef.Q_flat[0x1eU] = (IData)((((QData)((IData)(
                                                        ((vlSelfRef.qkv__DOT__Q
                                                          [0x3eU] 
                                                          << 0x10U) 
                                                         | vlSelfRef.qkv__DOT__Q
                                                         [0x3dU]))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    vlSelfRef.qkv__DOT__Q
                                                                    [0x3cU]))));
    vlSelfRef.Q_flat[0x1fU] = ((0xffff0000U & vlSelfRef.Q_flat[0x1fU]) 
                               | (IData)(((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__Q
                                                              [0x3eU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__Q
                                                             [0x3dU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__Q
                                                             [0x3cU]))) 
                                          >> 0x20U)));
    vlSelfRef.Q_flat[0x1fU] = ((0xffffU & vlSelfRef.Q_flat[0x1fU]) 
                               | (vlSelfRef.qkv__DOT__Q
                                  [0x3fU] << 0x10U));
    vlSelfRef.K_flat[0U] = (IData)((((QData)((IData)(
                                                     ((vlSelfRef.qkv__DOT__K
                                                       [2U] 
                                                       << 0x10U) 
                                                      | vlSelfRef.qkv__DOT__K
                                                      [1U]))) 
                                     << 0x10U) | (QData)((IData)(
                                                                 vlSelfRef.qkv__DOT__K
                                                                 [0U]))));
    vlSelfRef.K_flat[1U] = ((0xffff0000U & vlSelfRef.K_flat[1U]) 
                            | (IData)(((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__K
                                                           [2U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__K
                                                          [1U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__K
                                                          [0U]))) 
                                       >> 0x20U)));
    vlSelfRef.K_flat[1U] = ((0xffffU & vlSelfRef.K_flat[1U]) 
                            | ((IData)((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__K
                                                           [5U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__K
                                                          [4U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__K
                                                          [3U])))) 
                               << 0x10U));
    vlSelfRef.K_flat[2U] = (((IData)((((QData)((IData)(
                                                       ((vlSelfRef.qkv__DOT__K
                                                         [5U] 
                                                         << 0x10U) 
                                                        | vlSelfRef.qkv__DOT__K
                                                        [4U]))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   vlSelfRef.qkv__DOT__K
                                                                   [3U])))) 
                             >> 0x10U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSelfRef.qkv__DOT__K
                                                                       [5U] 
                                                                       << 0x10U) 
                                                                      | vlSelfRef.qkv__DOT__K
                                                                      [4U]))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.qkv__DOT__K
                                                                      [3U]))) 
                                                   >> 0x20U)) 
                                          << 0x10U));
    vlSelfRef.K_flat[3U] = (IData)((((QData)((IData)(
                                                     ((vlSelfRef.qkv__DOT__K
                                                       [8U] 
                                                       << 0x10U) 
                                                      | vlSelfRef.qkv__DOT__K
                                                      [7U]))) 
                                     << 0x10U) | (QData)((IData)(
                                                                 vlSelfRef.qkv__DOT__K
                                                                 [6U]))));
    vlSelfRef.K_flat[4U] = ((0xffff0000U & vlSelfRef.K_flat[4U]) 
                            | (IData)(((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__K
                                                           [8U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__K
                                                          [7U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__K
                                                          [6U]))) 
                                       >> 0x20U)));
    vlSelfRef.K_flat[4U] = ((0xffffU & vlSelfRef.K_flat[4U]) 
                            | ((IData)((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__K
                                                           [0xbU] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__K
                                                          [0xaU]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__K
                                                          [9U])))) 
                               << 0x10U));
    vlSelfRef.K_flat[5U] = (((IData)((((QData)((IData)(
                                                       ((vlSelfRef.qkv__DOT__K
                                                         [0xbU] 
                                                         << 0x10U) 
                                                        | vlSelfRef.qkv__DOT__K
                                                        [0xaU]))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   vlSelfRef.qkv__DOT__K
                                                                   [9U])))) 
                             >> 0x10U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSelfRef.qkv__DOT__K
                                                                       [0xbU] 
                                                                       << 0x10U) 
                                                                      | vlSelfRef.qkv__DOT__K
                                                                      [0xaU]))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.qkv__DOT__K
                                                                      [9U]))) 
                                                   >> 0x20U)) 
                                          << 0x10U));
    vlSelfRef.K_flat[6U] = (IData)((((QData)((IData)(
                                                     ((vlSelfRef.qkv__DOT__K
                                                       [0xeU] 
                                                       << 0x10U) 
                                                      | vlSelfRef.qkv__DOT__K
                                                      [0xdU]))) 
                                     << 0x10U) | (QData)((IData)(
                                                                 vlSelfRef.qkv__DOT__K
                                                                 [0xcU]))));
    vlSelfRef.K_flat[7U] = ((0xffff0000U & vlSelfRef.K_flat[7U]) 
                            | (IData)(((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__K
                                                           [0xeU] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__K
                                                          [0xdU]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__K
                                                          [0xcU]))) 
                                       >> 0x20U)));
    vlSelfRef.K_flat[7U] = ((0xffffU & vlSelfRef.K_flat[7U]) 
                            | ((IData)((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__K
                                                           [0x11U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__K
                                                          [0x10U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__K
                                                          [0xfU])))) 
                               << 0x10U));
    vlSelfRef.K_flat[8U] = (((IData)((((QData)((IData)(
                                                       ((vlSelfRef.qkv__DOT__K
                                                         [0x11U] 
                                                         << 0x10U) 
                                                        | vlSelfRef.qkv__DOT__K
                                                        [0x10U]))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   vlSelfRef.qkv__DOT__K
                                                                   [0xfU])))) 
                             >> 0x10U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSelfRef.qkv__DOT__K
                                                                       [0x11U] 
                                                                       << 0x10U) 
                                                                      | vlSelfRef.qkv__DOT__K
                                                                      [0x10U]))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.qkv__DOT__K
                                                                      [0xfU]))) 
                                                   >> 0x20U)) 
                                          << 0x10U));
    vlSelfRef.K_flat[9U] = (IData)((((QData)((IData)(
                                                     ((vlSelfRef.qkv__DOT__K
                                                       [0x14U] 
                                                       << 0x10U) 
                                                      | vlSelfRef.qkv__DOT__K
                                                      [0x13U]))) 
                                     << 0x10U) | (QData)((IData)(
                                                                 vlSelfRef.qkv__DOT__K
                                                                 [0x12U]))));
    vlSelfRef.K_flat[0xaU] = ((0xffff0000U & vlSelfRef.K_flat[0xaU]) 
                              | (IData)(((((QData)((IData)(
                                                           ((vlSelfRef.qkv__DOT__K
                                                             [0x14U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.qkv__DOT__K
                                                            [0x13U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.qkv__DOT__K
                                                            [0x12U]))) 
                                         >> 0x20U)));
    vlSelfRef.K_flat[0xaU] = ((0xffffU & vlSelfRef.K_flat[0xaU]) 
                              | ((IData)((((QData)((IData)(
                                                           ((vlSelfRef.qkv__DOT__K
                                                             [0x17U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.qkv__DOT__K
                                                            [0x16U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.qkv__DOT__K
                                                            [0x15U])))) 
                                 << 0x10U));
    vlSelfRef.K_flat[0xbU] = (((IData)((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__K
                                                           [0x17U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__K
                                                          [0x16U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__K
                                                          [0x15U])))) 
                               >> 0x10U) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       ((vlSelfRef.qkv__DOT__K
                                                                         [0x17U] 
                                                                         << 0x10U) 
                                                                        | vlSelfRef.qkv__DOT__K
                                                                        [0x16U]))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.qkv__DOT__K
                                                                        [0x15U]))) 
                                                     >> 0x20U)) 
                                            << 0x10U));
    vlSelfRef.K_flat[0xcU] = (IData)((((QData)((IData)(
                                                       ((vlSelfRef.qkv__DOT__K
                                                         [0x1aU] 
                                                         << 0x10U) 
                                                        | vlSelfRef.qkv__DOT__K
                                                        [0x19U]))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   vlSelfRef.qkv__DOT__K
                                                                   [0x18U]))));
    vlSelfRef.K_flat[0xdU] = ((0xffff0000U & vlSelfRef.K_flat[0xdU]) 
                              | (IData)(((((QData)((IData)(
                                                           ((vlSelfRef.qkv__DOT__K
                                                             [0x1aU] 
                                                             << 0x10U) 
                                                            | vlSelfRef.qkv__DOT__K
                                                            [0x19U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.qkv__DOT__K
                                                            [0x18U]))) 
                                         >> 0x20U)));
    vlSelfRef.K_flat[0xdU] = ((0xffffU & vlSelfRef.K_flat[0xdU]) 
                              | ((IData)((((QData)((IData)(
                                                           ((vlSelfRef.qkv__DOT__K
                                                             [0x1dU] 
                                                             << 0x10U) 
                                                            | vlSelfRef.qkv__DOT__K
                                                            [0x1cU]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.qkv__DOT__K
                                                            [0x1bU])))) 
                                 << 0x10U));
    vlSelfRef.K_flat[0xeU] = (((IData)((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__K
                                                           [0x1dU] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__K
                                                          [0x1cU]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__K
                                                          [0x1bU])))) 
                               >> 0x10U) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       ((vlSelfRef.qkv__DOT__K
                                                                         [0x1dU] 
                                                                         << 0x10U) 
                                                                        | vlSelfRef.qkv__DOT__K
                                                                        [0x1cU]))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.qkv__DOT__K
                                                                        [0x1bU]))) 
                                                     >> 0x20U)) 
                                            << 0x10U));
    vlSelfRef.K_flat[0xfU] = (IData)((((QData)((IData)(
                                                       ((vlSelfRef.qkv__DOT__K
                                                         [0x20U] 
                                                         << 0x10U) 
                                                        | vlSelfRef.qkv__DOT__K
                                                        [0x1fU]))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   vlSelfRef.qkv__DOT__K
                                                                   [0x1eU]))));
    vlSelfRef.K_flat[0x10U] = ((0xffff0000U & vlSelfRef.K_flat[0x10U]) 
                               | (IData)(((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__K
                                                              [0x20U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__K
                                                             [0x1fU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__K
                                                             [0x1eU]))) 
                                          >> 0x20U)));
    vlSelfRef.K_flat[0x10U] = ((0xffffU & vlSelfRef.K_flat[0x10U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__K
                                                              [0x23U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__K
                                                             [0x22U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__K
                                                             [0x21U])))) 
                                  << 0x10U));
    vlSelfRef.K_flat[0x11U] = (((IData)((((QData)((IData)(
                                                          ((vlSelfRef.qkv__DOT__K
                                                            [0x23U] 
                                                            << 0x10U) 
                                                           | vlSelfRef.qkv__DOT__K
                                                           [0x22U]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.qkv__DOT__K
                                                           [0x21U])))) 
                                >> 0x10U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelfRef.qkv__DOT__K
                                                                          [0x23U] 
                                                                          << 0x10U) 
                                                                         | vlSelfRef.qkv__DOT__K
                                                                         [0x22U]))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.qkv__DOT__K
                                                                         [0x21U]))) 
                                                      >> 0x20U)) 
                                             << 0x10U));
    vlSelfRef.K_flat[0x12U] = (IData)((((QData)((IData)(
                                                        ((vlSelfRef.qkv__DOT__K
                                                          [0x26U] 
                                                          << 0x10U) 
                                                         | vlSelfRef.qkv__DOT__K
                                                         [0x25U]))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    vlSelfRef.qkv__DOT__K
                                                                    [0x24U]))));
    vlSelfRef.K_flat[0x13U] = ((0xffff0000U & vlSelfRef.K_flat[0x13U]) 
                               | (IData)(((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__K
                                                              [0x26U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__K
                                                             [0x25U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__K
                                                             [0x24U]))) 
                                          >> 0x20U)));
    vlSelfRef.K_flat[0x13U] = ((0xffffU & vlSelfRef.K_flat[0x13U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__K
                                                              [0x29U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__K
                                                             [0x28U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__K
                                                             [0x27U])))) 
                                  << 0x10U));
    vlSelfRef.K_flat[0x14U] = (((IData)((((QData)((IData)(
                                                          ((vlSelfRef.qkv__DOT__K
                                                            [0x29U] 
                                                            << 0x10U) 
                                                           | vlSelfRef.qkv__DOT__K
                                                           [0x28U]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.qkv__DOT__K
                                                           [0x27U])))) 
                                >> 0x10U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelfRef.qkv__DOT__K
                                                                          [0x29U] 
                                                                          << 0x10U) 
                                                                         | vlSelfRef.qkv__DOT__K
                                                                         [0x28U]))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.qkv__DOT__K
                                                                         [0x27U]))) 
                                                      >> 0x20U)) 
                                             << 0x10U));
    vlSelfRef.K_flat[0x15U] = (IData)((((QData)((IData)(
                                                        ((vlSelfRef.qkv__DOT__K
                                                          [0x2cU] 
                                                          << 0x10U) 
                                                         | vlSelfRef.qkv__DOT__K
                                                         [0x2bU]))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    vlSelfRef.qkv__DOT__K
                                                                    [0x2aU]))));
    vlSelfRef.K_flat[0x16U] = ((0xffff0000U & vlSelfRef.K_flat[0x16U]) 
                               | (IData)(((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__K
                                                              [0x2cU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__K
                                                             [0x2bU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__K
                                                             [0x2aU]))) 
                                          >> 0x20U)));
    vlSelfRef.K_flat[0x16U] = ((0xffffU & vlSelfRef.K_flat[0x16U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__K
                                                              [0x2fU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__K
                                                             [0x2eU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__K
                                                             [0x2dU])))) 
                                  << 0x10U));
    vlSelfRef.K_flat[0x17U] = (((IData)((((QData)((IData)(
                                                          ((vlSelfRef.qkv__DOT__K
                                                            [0x2fU] 
                                                            << 0x10U) 
                                                           | vlSelfRef.qkv__DOT__K
                                                           [0x2eU]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.qkv__DOT__K
                                                           [0x2dU])))) 
                                >> 0x10U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelfRef.qkv__DOT__K
                                                                          [0x2fU] 
                                                                          << 0x10U) 
                                                                         | vlSelfRef.qkv__DOT__K
                                                                         [0x2eU]))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.qkv__DOT__K
                                                                         [0x2dU]))) 
                                                      >> 0x20U)) 
                                             << 0x10U));
    vlSelfRef.K_flat[0x18U] = (IData)((((QData)((IData)(
                                                        ((vlSelfRef.qkv__DOT__K
                                                          [0x32U] 
                                                          << 0x10U) 
                                                         | vlSelfRef.qkv__DOT__K
                                                         [0x31U]))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    vlSelfRef.qkv__DOT__K
                                                                    [0x30U]))));
    vlSelfRef.K_flat[0x19U] = ((0xffff0000U & vlSelfRef.K_flat[0x19U]) 
                               | (IData)(((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__K
                                                              [0x32U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__K
                                                             [0x31U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__K
                                                             [0x30U]))) 
                                          >> 0x20U)));
    vlSelfRef.K_flat[0x19U] = ((0xffffU & vlSelfRef.K_flat[0x19U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__K
                                                              [0x35U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__K
                                                             [0x34U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__K
                                                             [0x33U])))) 
                                  << 0x10U));
    vlSelfRef.K_flat[0x1aU] = (((IData)((((QData)((IData)(
                                                          ((vlSelfRef.qkv__DOT__K
                                                            [0x35U] 
                                                            << 0x10U) 
                                                           | vlSelfRef.qkv__DOT__K
                                                           [0x34U]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.qkv__DOT__K
                                                           [0x33U])))) 
                                >> 0x10U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelfRef.qkv__DOT__K
                                                                          [0x35U] 
                                                                          << 0x10U) 
                                                                         | vlSelfRef.qkv__DOT__K
                                                                         [0x34U]))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.qkv__DOT__K
                                                                         [0x33U]))) 
                                                      >> 0x20U)) 
                                             << 0x10U));
    vlSelfRef.K_flat[0x1bU] = (IData)((((QData)((IData)(
                                                        ((vlSelfRef.qkv__DOT__K
                                                          [0x38U] 
                                                          << 0x10U) 
                                                         | vlSelfRef.qkv__DOT__K
                                                         [0x37U]))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    vlSelfRef.qkv__DOT__K
                                                                    [0x36U]))));
    vlSelfRef.K_flat[0x1cU] = ((0xffff0000U & vlSelfRef.K_flat[0x1cU]) 
                               | (IData)(((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__K
                                                              [0x38U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__K
                                                             [0x37U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__K
                                                             [0x36U]))) 
                                          >> 0x20U)));
    vlSelfRef.K_flat[0x1cU] = ((0xffffU & vlSelfRef.K_flat[0x1cU]) 
                               | ((IData)((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__K
                                                              [0x3bU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__K
                                                             [0x3aU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__K
                                                             [0x39U])))) 
                                  << 0x10U));
    vlSelfRef.K_flat[0x1dU] = (((IData)((((QData)((IData)(
                                                          ((vlSelfRef.qkv__DOT__K
                                                            [0x3bU] 
                                                            << 0x10U) 
                                                           | vlSelfRef.qkv__DOT__K
                                                           [0x3aU]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.qkv__DOT__K
                                                           [0x39U])))) 
                                >> 0x10U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelfRef.qkv__DOT__K
                                                                          [0x3bU] 
                                                                          << 0x10U) 
                                                                         | vlSelfRef.qkv__DOT__K
                                                                         [0x3aU]))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.qkv__DOT__K
                                                                         [0x39U]))) 
                                                      >> 0x20U)) 
                                             << 0x10U));
    vlSelfRef.K_flat[0x1eU] = (IData)((((QData)((IData)(
                                                        ((vlSelfRef.qkv__DOT__K
                                                          [0x3eU] 
                                                          << 0x10U) 
                                                         | vlSelfRef.qkv__DOT__K
                                                         [0x3dU]))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    vlSelfRef.qkv__DOT__K
                                                                    [0x3cU]))));
    vlSelfRef.K_flat[0x1fU] = ((0xffff0000U & vlSelfRef.K_flat[0x1fU]) 
                               | (IData)(((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__K
                                                              [0x3eU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__K
                                                             [0x3dU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__K
                                                             [0x3cU]))) 
                                          >> 0x20U)));
    vlSelfRef.K_flat[0x1fU] = ((0xffffU & vlSelfRef.K_flat[0x1fU]) 
                               | (vlSelfRef.qkv__DOT__K
                                  [0x3fU] << 0x10U));
    vlSelfRef.V_flat[0U] = (IData)((((QData)((IData)(
                                                     ((vlSelfRef.qkv__DOT__V
                                                       [2U] 
                                                       << 0x10U) 
                                                      | vlSelfRef.qkv__DOT__V
                                                      [1U]))) 
                                     << 0x10U) | (QData)((IData)(
                                                                 vlSelfRef.qkv__DOT__V
                                                                 [0U]))));
    vlSelfRef.V_flat[1U] = ((0xffff0000U & vlSelfRef.V_flat[1U]) 
                            | (IData)(((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__V
                                                           [2U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__V
                                                          [1U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__V
                                                          [0U]))) 
                                       >> 0x20U)));
    vlSelfRef.V_flat[1U] = ((0xffffU & vlSelfRef.V_flat[1U]) 
                            | ((IData)((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__V
                                                           [5U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__V
                                                          [4U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__V
                                                          [3U])))) 
                               << 0x10U));
    vlSelfRef.V_flat[2U] = (((IData)((((QData)((IData)(
                                                       ((vlSelfRef.qkv__DOT__V
                                                         [5U] 
                                                         << 0x10U) 
                                                        | vlSelfRef.qkv__DOT__V
                                                        [4U]))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   vlSelfRef.qkv__DOT__V
                                                                   [3U])))) 
                             >> 0x10U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSelfRef.qkv__DOT__V
                                                                       [5U] 
                                                                       << 0x10U) 
                                                                      | vlSelfRef.qkv__DOT__V
                                                                      [4U]))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.qkv__DOT__V
                                                                      [3U]))) 
                                                   >> 0x20U)) 
                                          << 0x10U));
    vlSelfRef.V_flat[3U] = (IData)((((QData)((IData)(
                                                     ((vlSelfRef.qkv__DOT__V
                                                       [8U] 
                                                       << 0x10U) 
                                                      | vlSelfRef.qkv__DOT__V
                                                      [7U]))) 
                                     << 0x10U) | (QData)((IData)(
                                                                 vlSelfRef.qkv__DOT__V
                                                                 [6U]))));
    vlSelfRef.V_flat[4U] = ((0xffff0000U & vlSelfRef.V_flat[4U]) 
                            | (IData)(((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__V
                                                           [8U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__V
                                                          [7U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__V
                                                          [6U]))) 
                                       >> 0x20U)));
    vlSelfRef.V_flat[4U] = ((0xffffU & vlSelfRef.V_flat[4U]) 
                            | ((IData)((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__V
                                                           [0xbU] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__V
                                                          [0xaU]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__V
                                                          [9U])))) 
                               << 0x10U));
    vlSelfRef.V_flat[5U] = (((IData)((((QData)((IData)(
                                                       ((vlSelfRef.qkv__DOT__V
                                                         [0xbU] 
                                                         << 0x10U) 
                                                        | vlSelfRef.qkv__DOT__V
                                                        [0xaU]))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   vlSelfRef.qkv__DOT__V
                                                                   [9U])))) 
                             >> 0x10U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSelfRef.qkv__DOT__V
                                                                       [0xbU] 
                                                                       << 0x10U) 
                                                                      | vlSelfRef.qkv__DOT__V
                                                                      [0xaU]))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.qkv__DOT__V
                                                                      [9U]))) 
                                                   >> 0x20U)) 
                                          << 0x10U));
    vlSelfRef.V_flat[6U] = (IData)((((QData)((IData)(
                                                     ((vlSelfRef.qkv__DOT__V
                                                       [0xeU] 
                                                       << 0x10U) 
                                                      | vlSelfRef.qkv__DOT__V
                                                      [0xdU]))) 
                                     << 0x10U) | (QData)((IData)(
                                                                 vlSelfRef.qkv__DOT__V
                                                                 [0xcU]))));
    vlSelfRef.V_flat[7U] = ((0xffff0000U & vlSelfRef.V_flat[7U]) 
                            | (IData)(((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__V
                                                           [0xeU] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__V
                                                          [0xdU]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__V
                                                          [0xcU]))) 
                                       >> 0x20U)));
    vlSelfRef.V_flat[7U] = ((0xffffU & vlSelfRef.V_flat[7U]) 
                            | ((IData)((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__V
                                                           [0x11U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__V
                                                          [0x10U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__V
                                                          [0xfU])))) 
                               << 0x10U));
    vlSelfRef.V_flat[8U] = (((IData)((((QData)((IData)(
                                                       ((vlSelfRef.qkv__DOT__V
                                                         [0x11U] 
                                                         << 0x10U) 
                                                        | vlSelfRef.qkv__DOT__V
                                                        [0x10U]))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   vlSelfRef.qkv__DOT__V
                                                                   [0xfU])))) 
                             >> 0x10U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((vlSelfRef.qkv__DOT__V
                                                                       [0x11U] 
                                                                       << 0x10U) 
                                                                      | vlSelfRef.qkv__DOT__V
                                                                      [0x10U]))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.qkv__DOT__V
                                                                      [0xfU]))) 
                                                   >> 0x20U)) 
                                          << 0x10U));
    vlSelfRef.V_flat[9U] = (IData)((((QData)((IData)(
                                                     ((vlSelfRef.qkv__DOT__V
                                                       [0x14U] 
                                                       << 0x10U) 
                                                      | vlSelfRef.qkv__DOT__V
                                                      [0x13U]))) 
                                     << 0x10U) | (QData)((IData)(
                                                                 vlSelfRef.qkv__DOT__V
                                                                 [0x12U]))));
    vlSelfRef.V_flat[0xaU] = ((0xffff0000U & vlSelfRef.V_flat[0xaU]) 
                              | (IData)(((((QData)((IData)(
                                                           ((vlSelfRef.qkv__DOT__V
                                                             [0x14U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.qkv__DOT__V
                                                            [0x13U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.qkv__DOT__V
                                                            [0x12U]))) 
                                         >> 0x20U)));
    vlSelfRef.V_flat[0xaU] = ((0xffffU & vlSelfRef.V_flat[0xaU]) 
                              | ((IData)((((QData)((IData)(
                                                           ((vlSelfRef.qkv__DOT__V
                                                             [0x17U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.qkv__DOT__V
                                                            [0x16U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.qkv__DOT__V
                                                            [0x15U])))) 
                                 << 0x10U));
    vlSelfRef.V_flat[0xbU] = (((IData)((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__V
                                                           [0x17U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__V
                                                          [0x16U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__V
                                                          [0x15U])))) 
                               >> 0x10U) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       ((vlSelfRef.qkv__DOT__V
                                                                         [0x17U] 
                                                                         << 0x10U) 
                                                                        | vlSelfRef.qkv__DOT__V
                                                                        [0x16U]))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.qkv__DOT__V
                                                                        [0x15U]))) 
                                                     >> 0x20U)) 
                                            << 0x10U));
    vlSelfRef.V_flat[0xcU] = (IData)((((QData)((IData)(
                                                       ((vlSelfRef.qkv__DOT__V
                                                         [0x1aU] 
                                                         << 0x10U) 
                                                        | vlSelfRef.qkv__DOT__V
                                                        [0x19U]))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   vlSelfRef.qkv__DOT__V
                                                                   [0x18U]))));
    vlSelfRef.V_flat[0xdU] = ((0xffff0000U & vlSelfRef.V_flat[0xdU]) 
                              | (IData)(((((QData)((IData)(
                                                           ((vlSelfRef.qkv__DOT__V
                                                             [0x1aU] 
                                                             << 0x10U) 
                                                            | vlSelfRef.qkv__DOT__V
                                                            [0x19U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.qkv__DOT__V
                                                            [0x18U]))) 
                                         >> 0x20U)));
    vlSelfRef.V_flat[0xdU] = ((0xffffU & vlSelfRef.V_flat[0xdU]) 
                              | ((IData)((((QData)((IData)(
                                                           ((vlSelfRef.qkv__DOT__V
                                                             [0x1dU] 
                                                             << 0x10U) 
                                                            | vlSelfRef.qkv__DOT__V
                                                            [0x1cU]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.qkv__DOT__V
                                                            [0x1bU])))) 
                                 << 0x10U));
    vlSelfRef.V_flat[0xeU] = (((IData)((((QData)((IData)(
                                                         ((vlSelfRef.qkv__DOT__V
                                                           [0x1dU] 
                                                           << 0x10U) 
                                                          | vlSelfRef.qkv__DOT__V
                                                          [0x1cU]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.qkv__DOT__V
                                                          [0x1bU])))) 
                               >> 0x10U) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       ((vlSelfRef.qkv__DOT__V
                                                                         [0x1dU] 
                                                                         << 0x10U) 
                                                                        | vlSelfRef.qkv__DOT__V
                                                                        [0x1cU]))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        vlSelfRef.qkv__DOT__V
                                                                        [0x1bU]))) 
                                                     >> 0x20U)) 
                                            << 0x10U));
    vlSelfRef.V_flat[0xfU] = (IData)((((QData)((IData)(
                                                       ((vlSelfRef.qkv__DOT__V
                                                         [0x20U] 
                                                         << 0x10U) 
                                                        | vlSelfRef.qkv__DOT__V
                                                        [0x1fU]))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   vlSelfRef.qkv__DOT__V
                                                                   [0x1eU]))));
    vlSelfRef.V_flat[0x10U] = ((0xffff0000U & vlSelfRef.V_flat[0x10U]) 
                               | (IData)(((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__V
                                                              [0x20U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__V
                                                             [0x1fU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__V
                                                             [0x1eU]))) 
                                          >> 0x20U)));
    vlSelfRef.V_flat[0x10U] = ((0xffffU & vlSelfRef.V_flat[0x10U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__V
                                                              [0x23U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__V
                                                             [0x22U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__V
                                                             [0x21U])))) 
                                  << 0x10U));
    vlSelfRef.V_flat[0x11U] = (((IData)((((QData)((IData)(
                                                          ((vlSelfRef.qkv__DOT__V
                                                            [0x23U] 
                                                            << 0x10U) 
                                                           | vlSelfRef.qkv__DOT__V
                                                           [0x22U]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.qkv__DOT__V
                                                           [0x21U])))) 
                                >> 0x10U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelfRef.qkv__DOT__V
                                                                          [0x23U] 
                                                                          << 0x10U) 
                                                                         | vlSelfRef.qkv__DOT__V
                                                                         [0x22U]))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.qkv__DOT__V
                                                                         [0x21U]))) 
                                                      >> 0x20U)) 
                                             << 0x10U));
    vlSelfRef.V_flat[0x12U] = (IData)((((QData)((IData)(
                                                        ((vlSelfRef.qkv__DOT__V
                                                          [0x26U] 
                                                          << 0x10U) 
                                                         | vlSelfRef.qkv__DOT__V
                                                         [0x25U]))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    vlSelfRef.qkv__DOT__V
                                                                    [0x24U]))));
    vlSelfRef.V_flat[0x13U] = ((0xffff0000U & vlSelfRef.V_flat[0x13U]) 
                               | (IData)(((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__V
                                                              [0x26U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__V
                                                             [0x25U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__V
                                                             [0x24U]))) 
                                          >> 0x20U)));
    vlSelfRef.V_flat[0x13U] = ((0xffffU & vlSelfRef.V_flat[0x13U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__V
                                                              [0x29U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__V
                                                             [0x28U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__V
                                                             [0x27U])))) 
                                  << 0x10U));
    vlSelfRef.V_flat[0x14U] = (((IData)((((QData)((IData)(
                                                          ((vlSelfRef.qkv__DOT__V
                                                            [0x29U] 
                                                            << 0x10U) 
                                                           | vlSelfRef.qkv__DOT__V
                                                           [0x28U]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.qkv__DOT__V
                                                           [0x27U])))) 
                                >> 0x10U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelfRef.qkv__DOT__V
                                                                          [0x29U] 
                                                                          << 0x10U) 
                                                                         | vlSelfRef.qkv__DOT__V
                                                                         [0x28U]))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.qkv__DOT__V
                                                                         [0x27U]))) 
                                                      >> 0x20U)) 
                                             << 0x10U));
    vlSelfRef.V_flat[0x15U] = (IData)((((QData)((IData)(
                                                        ((vlSelfRef.qkv__DOT__V
                                                          [0x2cU] 
                                                          << 0x10U) 
                                                         | vlSelfRef.qkv__DOT__V
                                                         [0x2bU]))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    vlSelfRef.qkv__DOT__V
                                                                    [0x2aU]))));
    vlSelfRef.V_flat[0x16U] = ((0xffff0000U & vlSelfRef.V_flat[0x16U]) 
                               | (IData)(((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__V
                                                              [0x2cU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__V
                                                             [0x2bU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__V
                                                             [0x2aU]))) 
                                          >> 0x20U)));
    vlSelfRef.V_flat[0x16U] = ((0xffffU & vlSelfRef.V_flat[0x16U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__V
                                                              [0x2fU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__V
                                                             [0x2eU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__V
                                                             [0x2dU])))) 
                                  << 0x10U));
    vlSelfRef.V_flat[0x17U] = (((IData)((((QData)((IData)(
                                                          ((vlSelfRef.qkv__DOT__V
                                                            [0x2fU] 
                                                            << 0x10U) 
                                                           | vlSelfRef.qkv__DOT__V
                                                           [0x2eU]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.qkv__DOT__V
                                                           [0x2dU])))) 
                                >> 0x10U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelfRef.qkv__DOT__V
                                                                          [0x2fU] 
                                                                          << 0x10U) 
                                                                         | vlSelfRef.qkv__DOT__V
                                                                         [0x2eU]))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.qkv__DOT__V
                                                                         [0x2dU]))) 
                                                      >> 0x20U)) 
                                             << 0x10U));
    vlSelfRef.V_flat[0x18U] = (IData)((((QData)((IData)(
                                                        ((vlSelfRef.qkv__DOT__V
                                                          [0x32U] 
                                                          << 0x10U) 
                                                         | vlSelfRef.qkv__DOT__V
                                                         [0x31U]))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    vlSelfRef.qkv__DOT__V
                                                                    [0x30U]))));
    vlSelfRef.V_flat[0x19U] = ((0xffff0000U & vlSelfRef.V_flat[0x19U]) 
                               | (IData)(((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__V
                                                              [0x32U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__V
                                                             [0x31U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__V
                                                             [0x30U]))) 
                                          >> 0x20U)));
    vlSelfRef.V_flat[0x19U] = ((0xffffU & vlSelfRef.V_flat[0x19U]) 
                               | ((IData)((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__V
                                                              [0x35U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__V
                                                             [0x34U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__V
                                                             [0x33U])))) 
                                  << 0x10U));
    vlSelfRef.V_flat[0x1aU] = (((IData)((((QData)((IData)(
                                                          ((vlSelfRef.qkv__DOT__V
                                                            [0x35U] 
                                                            << 0x10U) 
                                                           | vlSelfRef.qkv__DOT__V
                                                           [0x34U]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.qkv__DOT__V
                                                           [0x33U])))) 
                                >> 0x10U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelfRef.qkv__DOT__V
                                                                          [0x35U] 
                                                                          << 0x10U) 
                                                                         | vlSelfRef.qkv__DOT__V
                                                                         [0x34U]))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.qkv__DOT__V
                                                                         [0x33U]))) 
                                                      >> 0x20U)) 
                                             << 0x10U));
    vlSelfRef.V_flat[0x1bU] = (IData)((((QData)((IData)(
                                                        ((vlSelfRef.qkv__DOT__V
                                                          [0x38U] 
                                                          << 0x10U) 
                                                         | vlSelfRef.qkv__DOT__V
                                                         [0x37U]))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    vlSelfRef.qkv__DOT__V
                                                                    [0x36U]))));
    vlSelfRef.V_flat[0x1cU] = ((0xffff0000U & vlSelfRef.V_flat[0x1cU]) 
                               | (IData)(((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__V
                                                              [0x38U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__V
                                                             [0x37U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__V
                                                             [0x36U]))) 
                                          >> 0x20U)));
    vlSelfRef.V_flat[0x1cU] = ((0xffffU & vlSelfRef.V_flat[0x1cU]) 
                               | ((IData)((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__V
                                                              [0x3bU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__V
                                                             [0x3aU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__V
                                                             [0x39U])))) 
                                  << 0x10U));
    vlSelfRef.V_flat[0x1dU] = (((IData)((((QData)((IData)(
                                                          ((vlSelfRef.qkv__DOT__V
                                                            [0x3bU] 
                                                            << 0x10U) 
                                                           | vlSelfRef.qkv__DOT__V
                                                           [0x3aU]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.qkv__DOT__V
                                                           [0x39U])))) 
                                >> 0x10U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelfRef.qkv__DOT__V
                                                                          [0x3bU] 
                                                                          << 0x10U) 
                                                                         | vlSelfRef.qkv__DOT__V
                                                                         [0x3aU]))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.qkv__DOT__V
                                                                         [0x39U]))) 
                                                      >> 0x20U)) 
                                             << 0x10U));
    vlSelfRef.V_flat[0x1eU] = (IData)((((QData)((IData)(
                                                        ((vlSelfRef.qkv__DOT__V
                                                          [0x3eU] 
                                                          << 0x10U) 
                                                         | vlSelfRef.qkv__DOT__V
                                                         [0x3dU]))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    vlSelfRef.qkv__DOT__V
                                                                    [0x3cU]))));
    vlSelfRef.V_flat[0x1fU] = ((0xffff0000U & vlSelfRef.V_flat[0x1fU]) 
                               | (IData)(((((QData)((IData)(
                                                            ((vlSelfRef.qkv__DOT__V
                                                              [0x3eU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.qkv__DOT__V
                                                             [0x3dU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.qkv__DOT__V
                                                             [0x3cU]))) 
                                          >> 0x20U)));
    vlSelfRef.V_flat[0x1fU] = ((0xffffU & vlSelfRef.V_flat[0x1fU]) 
                               | (vlSelfRef.qkv__DOT__V
                                  [0x3fU] << 0x10U));
}

VL_ATTR_COLD void Vqkv___024root___eval_triggers__stl(Vqkv___024root* vlSelf);

VL_ATTR_COLD bool Vqkv___024root___eval_phase__stl(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_phase__stl\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vqkv___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vqkv___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vqkv___024root___dump_triggers__act(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___dump_triggers__act\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vqkv___024root___dump_triggers__nba(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___dump_triggers__nba\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vqkv___024root___ctor_var_reset(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___ctor_var_reset\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->input_vec_flat);
    vlSelf->done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->Q_flat);
    VL_RAND_RESET_W(1024, vlSelf->K_flat);
    VL_RAND_RESET_W(1024, vlSelf->V_flat);
    vlSelf->qkv__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->qkv__DOT__i = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->qkv__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->qkv__DOT__Q[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->qkv__DOT__K[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->qkv__DOT__V[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->qkv__DOT__acc_q = VL_RAND_RESET_I(32);
    vlSelf->qkv__DOT__acc_k = VL_RAND_RESET_I(32);
    vlSelf->qkv__DOT__acc_v = VL_RAND_RESET_I(32);
    vlSelf->qkv__DOT__calc_j = VL_RAND_RESET_I(6);
    vlSelf->qkv__DOT__weight = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
