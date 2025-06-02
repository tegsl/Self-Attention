// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkv_cache.h for the primary calling header

#include "Vkv_cache__pch.h"
#include "Vkv_cache___024root.h"

VL_ATTR_COLD void Vkv_cache___024root___eval_static(Vkv_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkv_cache___024root___eval_static\n"); );
    Vkv_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vkv_cache___024root___eval_initial(Vkv_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkv_cache___024root___eval_initial\n"); );
    Vkv_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vkv_cache___024root___eval_final(Vkv_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkv_cache___024root___eval_final\n"); );
    Vkv_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkv_cache___024root___dump_triggers__stl(Vkv_cache___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vkv_cache___024root___eval_phase__stl(Vkv_cache___024root* vlSelf);

VL_ATTR_COLD void Vkv_cache___024root___eval_settle(Vkv_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkv_cache___024root___eval_settle\n"); );
    Vkv_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vkv_cache___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("kv_cache.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vkv_cache___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkv_cache___024root___dump_triggers__stl(Vkv_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkv_cache___024root___dump_triggers__stl\n"); );
    Vkv_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vkv_cache___024root___stl_sequent__TOP__0(Vkv_cache___024root* vlSelf);

VL_ATTR_COLD void Vkv_cache___024root___eval_stl(Vkv_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkv_cache___024root___eval_stl\n"); );
    Vkv_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vkv_cache___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vkv_cache___024root___stl_sequent__TOP__0(Vkv_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkv_cache___024root___stl_sequent__TOP__0\n"); );
    Vkv_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.kv_cache__DOT__K_in[0U] = (0xffffU & 
                                         vlSelfRef.K_flat_in[0U]);
    vlSelfRef.kv_cache__DOT__K_in[1U] = (vlSelfRef.K_flat_in[0U] 
                                         >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[2U] = (0xffffU & 
                                         vlSelfRef.K_flat_in[1U]);
    vlSelfRef.kv_cache__DOT__K_in[3U] = (vlSelfRef.K_flat_in[1U] 
                                         >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[4U] = (0xffffU & 
                                         vlSelfRef.K_flat_in[2U]);
    vlSelfRef.kv_cache__DOT__K_in[5U] = (vlSelfRef.K_flat_in[2U] 
                                         >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[6U] = (0xffffU & 
                                         vlSelfRef.K_flat_in[3U]);
    vlSelfRef.kv_cache__DOT__K_in[7U] = (vlSelfRef.K_flat_in[3U] 
                                         >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[8U] = (0xffffU & 
                                         vlSelfRef.K_flat_in[4U]);
    vlSelfRef.kv_cache__DOT__K_in[9U] = (vlSelfRef.K_flat_in[4U] 
                                         >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0xaU] = (0xffffU 
                                           & vlSelfRef.K_flat_in[5U]);
    vlSelfRef.kv_cache__DOT__K_in[0xbU] = (vlSelfRef.K_flat_in[5U] 
                                           >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0xcU] = (0xffffU 
                                           & vlSelfRef.K_flat_in[6U]);
    vlSelfRef.kv_cache__DOT__K_in[0xdU] = (vlSelfRef.K_flat_in[6U] 
                                           >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0xeU] = (0xffffU 
                                           & vlSelfRef.K_flat_in[7U]);
    vlSelfRef.kv_cache__DOT__K_in[0xfU] = (vlSelfRef.K_flat_in[7U] 
                                           >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x10U] = (0xffffU 
                                            & vlSelfRef.K_flat_in[8U]);
    vlSelfRef.kv_cache__DOT__K_in[0x11U] = (vlSelfRef.K_flat_in[8U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x12U] = (0xffffU 
                                            & vlSelfRef.K_flat_in[9U]);
    vlSelfRef.kv_cache__DOT__K_in[0x13U] = (vlSelfRef.K_flat_in[9U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x14U] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0xaU]);
    vlSelfRef.kv_cache__DOT__K_in[0x15U] = (vlSelfRef.K_flat_in[0xaU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x16U] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0xbU]);
    vlSelfRef.kv_cache__DOT__K_in[0x17U] = (vlSelfRef.K_flat_in[0xbU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x18U] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0xcU]);
    vlSelfRef.kv_cache__DOT__K_in[0x19U] = (vlSelfRef.K_flat_in[0xcU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x1aU] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0xdU]);
    vlSelfRef.kv_cache__DOT__K_in[0x1bU] = (vlSelfRef.K_flat_in[0xdU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x1cU] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0xeU]);
    vlSelfRef.kv_cache__DOT__K_in[0x1dU] = (vlSelfRef.K_flat_in[0xeU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x1eU] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0xfU]);
    vlSelfRef.kv_cache__DOT__K_in[0x1fU] = (vlSelfRef.K_flat_in[0xfU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x20U] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0x10U]);
    vlSelfRef.kv_cache__DOT__K_in[0x21U] = (vlSelfRef.K_flat_in[0x10U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x22U] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0x11U]);
    vlSelfRef.kv_cache__DOT__K_in[0x23U] = (vlSelfRef.K_flat_in[0x11U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x24U] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0x12U]);
    vlSelfRef.kv_cache__DOT__K_in[0x25U] = (vlSelfRef.K_flat_in[0x12U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x26U] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0x13U]);
    vlSelfRef.kv_cache__DOT__K_in[0x27U] = (vlSelfRef.K_flat_in[0x13U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x28U] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0x14U]);
    vlSelfRef.kv_cache__DOT__K_in[0x29U] = (vlSelfRef.K_flat_in[0x14U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x2aU] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0x15U]);
    vlSelfRef.kv_cache__DOT__K_in[0x2bU] = (vlSelfRef.K_flat_in[0x15U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x2cU] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0x16U]);
    vlSelfRef.kv_cache__DOT__K_in[0x2dU] = (vlSelfRef.K_flat_in[0x16U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x2eU] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0x17U]);
    vlSelfRef.kv_cache__DOT__K_in[0x2fU] = (vlSelfRef.K_flat_in[0x17U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x30U] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0x18U]);
    vlSelfRef.kv_cache__DOT__K_in[0x31U] = (vlSelfRef.K_flat_in[0x18U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x32U] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0x19U]);
    vlSelfRef.kv_cache__DOT__K_in[0x33U] = (vlSelfRef.K_flat_in[0x19U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x34U] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0x1aU]);
    vlSelfRef.kv_cache__DOT__K_in[0x35U] = (vlSelfRef.K_flat_in[0x1aU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x36U] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0x1bU]);
    vlSelfRef.kv_cache__DOT__K_in[0x37U] = (vlSelfRef.K_flat_in[0x1bU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x38U] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0x1cU]);
    vlSelfRef.kv_cache__DOT__K_in[0x39U] = (vlSelfRef.K_flat_in[0x1cU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x3aU] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0x1dU]);
    vlSelfRef.kv_cache__DOT__K_in[0x3bU] = (vlSelfRef.K_flat_in[0x1dU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x3cU] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0x1eU]);
    vlSelfRef.kv_cache__DOT__K_in[0x3dU] = (vlSelfRef.K_flat_in[0x1eU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__K_in[0x3eU] = (0xffffU 
                                            & vlSelfRef.K_flat_in[0x1fU]);
    vlSelfRef.kv_cache__DOT__K_in[0x3fU] = (vlSelfRef.K_flat_in[0x1fU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0U] = (0xffffU & 
                                         vlSelfRef.V_flat_in[0U]);
    vlSelfRef.kv_cache__DOT__V_in[1U] = (vlSelfRef.V_flat_in[0U] 
                                         >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[2U] = (0xffffU & 
                                         vlSelfRef.V_flat_in[1U]);
    vlSelfRef.kv_cache__DOT__V_in[3U] = (vlSelfRef.V_flat_in[1U] 
                                         >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[4U] = (0xffffU & 
                                         vlSelfRef.V_flat_in[2U]);
    vlSelfRef.kv_cache__DOT__V_in[5U] = (vlSelfRef.V_flat_in[2U] 
                                         >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[6U] = (0xffffU & 
                                         vlSelfRef.V_flat_in[3U]);
    vlSelfRef.kv_cache__DOT__V_in[7U] = (vlSelfRef.V_flat_in[3U] 
                                         >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[8U] = (0xffffU & 
                                         vlSelfRef.V_flat_in[4U]);
    vlSelfRef.kv_cache__DOT__V_in[9U] = (vlSelfRef.V_flat_in[4U] 
                                         >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0xaU] = (0xffffU 
                                           & vlSelfRef.V_flat_in[5U]);
    vlSelfRef.kv_cache__DOT__V_in[0xbU] = (vlSelfRef.V_flat_in[5U] 
                                           >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0xcU] = (0xffffU 
                                           & vlSelfRef.V_flat_in[6U]);
    vlSelfRef.kv_cache__DOT__V_in[0xdU] = (vlSelfRef.V_flat_in[6U] 
                                           >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0xeU] = (0xffffU 
                                           & vlSelfRef.V_flat_in[7U]);
    vlSelfRef.kv_cache__DOT__V_in[0xfU] = (vlSelfRef.V_flat_in[7U] 
                                           >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x10U] = (0xffffU 
                                            & vlSelfRef.V_flat_in[8U]);
    vlSelfRef.kv_cache__DOT__V_in[0x11U] = (vlSelfRef.V_flat_in[8U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x12U] = (0xffffU 
                                            & vlSelfRef.V_flat_in[9U]);
    vlSelfRef.kv_cache__DOT__V_in[0x13U] = (vlSelfRef.V_flat_in[9U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x14U] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0xaU]);
    vlSelfRef.kv_cache__DOT__V_in[0x15U] = (vlSelfRef.V_flat_in[0xaU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x16U] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0xbU]);
    vlSelfRef.kv_cache__DOT__V_in[0x17U] = (vlSelfRef.V_flat_in[0xbU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x18U] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0xcU]);
    vlSelfRef.kv_cache__DOT__V_in[0x19U] = (vlSelfRef.V_flat_in[0xcU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x1aU] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0xdU]);
    vlSelfRef.kv_cache__DOT__V_in[0x1bU] = (vlSelfRef.V_flat_in[0xdU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x1cU] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0xeU]);
    vlSelfRef.kv_cache__DOT__V_in[0x1dU] = (vlSelfRef.V_flat_in[0xeU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x1eU] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0xfU]);
    vlSelfRef.kv_cache__DOT__V_in[0x1fU] = (vlSelfRef.V_flat_in[0xfU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x20U] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0x10U]);
    vlSelfRef.kv_cache__DOT__V_in[0x21U] = (vlSelfRef.V_flat_in[0x10U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x22U] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0x11U]);
    vlSelfRef.kv_cache__DOT__V_in[0x23U] = (vlSelfRef.V_flat_in[0x11U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x24U] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0x12U]);
    vlSelfRef.kv_cache__DOT__V_in[0x25U] = (vlSelfRef.V_flat_in[0x12U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x26U] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0x13U]);
    vlSelfRef.kv_cache__DOT__V_in[0x27U] = (vlSelfRef.V_flat_in[0x13U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x28U] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0x14U]);
    vlSelfRef.kv_cache__DOT__V_in[0x29U] = (vlSelfRef.V_flat_in[0x14U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x2aU] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0x15U]);
    vlSelfRef.kv_cache__DOT__V_in[0x2bU] = (vlSelfRef.V_flat_in[0x15U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x2cU] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0x16U]);
    vlSelfRef.kv_cache__DOT__V_in[0x2dU] = (vlSelfRef.V_flat_in[0x16U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x2eU] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0x17U]);
    vlSelfRef.kv_cache__DOT__V_in[0x2fU] = (vlSelfRef.V_flat_in[0x17U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x30U] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0x18U]);
    vlSelfRef.kv_cache__DOT__V_in[0x31U] = (vlSelfRef.V_flat_in[0x18U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x32U] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0x19U]);
    vlSelfRef.kv_cache__DOT__V_in[0x33U] = (vlSelfRef.V_flat_in[0x19U] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x34U] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0x1aU]);
    vlSelfRef.kv_cache__DOT__V_in[0x35U] = (vlSelfRef.V_flat_in[0x1aU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x36U] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0x1bU]);
    vlSelfRef.kv_cache__DOT__V_in[0x37U] = (vlSelfRef.V_flat_in[0x1bU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x38U] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0x1cU]);
    vlSelfRef.kv_cache__DOT__V_in[0x39U] = (vlSelfRef.V_flat_in[0x1cU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x3aU] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0x1dU]);
    vlSelfRef.kv_cache__DOT__V_in[0x3bU] = (vlSelfRef.V_flat_in[0x1dU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x3cU] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0x1eU]);
    vlSelfRef.kv_cache__DOT__V_in[0x3dU] = (vlSelfRef.V_flat_in[0x1eU] 
                                            >> 0x10U);
    vlSelfRef.kv_cache__DOT__V_in[0x3eU] = (0xffffU 
                                            & vlSelfRef.V_flat_in[0x1fU]);
    vlSelfRef.kv_cache__DOT__V_in[0x3fU] = (vlSelfRef.V_flat_in[0x1fU] 
                                            >> 0x10U);
    vlSelfRef.K_flat_out[0U] = (IData)((((QData)((IData)(
                                                         ((vlSelfRef.kv_cache__DOT__K_out
                                                           [2U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.kv_cache__DOT__K_out
                                                          [1U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.kv_cache__DOT__K_out
                                                          [0U]))));
    vlSelfRef.K_flat_out[1U] = ((0xffff0000U & vlSelfRef.K_flat_out[1U]) 
                                | (IData)(((((QData)((IData)(
                                                             ((vlSelfRef.kv_cache__DOT__K_out
                                                               [2U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.kv_cache__DOT__K_out
                                                              [1U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.kv_cache__DOT__K_out
                                                              [0U]))) 
                                           >> 0x20U)));
    vlSelfRef.K_flat_out[1U] = ((0xffffU & vlSelfRef.K_flat_out[1U]) 
                                | ((IData)((((QData)((IData)(
                                                             ((vlSelfRef.kv_cache__DOT__K_out
                                                               [5U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.kv_cache__DOT__K_out
                                                              [4U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.kv_cache__DOT__K_out
                                                              [3U])))) 
                                   << 0x10U));
    vlSelfRef.K_flat_out[2U] = (((IData)((((QData)((IData)(
                                                           ((vlSelfRef.kv_cache__DOT__K_out
                                                             [5U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.kv_cache__DOT__K_out
                                                            [4U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.kv_cache__DOT__K_out
                                                            [3U])))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.kv_cache__DOT__K_out
                                                                           [5U] 
                                                                           << 0x10U) 
                                                                          | vlSelfRef.kv_cache__DOT__K_out
                                                                          [4U]))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.kv_cache__DOT__K_out
                                                                          [3U]))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    vlSelfRef.K_flat_out[3U] = (IData)((((QData)((IData)(
                                                         ((vlSelfRef.kv_cache__DOT__K_out
                                                           [8U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.kv_cache__DOT__K_out
                                                          [7U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.kv_cache__DOT__K_out
                                                          [6U]))));
    vlSelfRef.K_flat_out[4U] = ((0xffff0000U & vlSelfRef.K_flat_out[4U]) 
                                | (IData)(((((QData)((IData)(
                                                             ((vlSelfRef.kv_cache__DOT__K_out
                                                               [8U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.kv_cache__DOT__K_out
                                                              [7U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.kv_cache__DOT__K_out
                                                              [6U]))) 
                                           >> 0x20U)));
    vlSelfRef.K_flat_out[4U] = ((0xffffU & vlSelfRef.K_flat_out[4U]) 
                                | ((IData)((((QData)((IData)(
                                                             ((vlSelfRef.kv_cache__DOT__K_out
                                                               [0xbU] 
                                                               << 0x10U) 
                                                              | vlSelfRef.kv_cache__DOT__K_out
                                                              [0xaU]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.kv_cache__DOT__K_out
                                                              [9U])))) 
                                   << 0x10U));
    vlSelfRef.K_flat_out[5U] = (((IData)((((QData)((IData)(
                                                           ((vlSelfRef.kv_cache__DOT__K_out
                                                             [0xbU] 
                                                             << 0x10U) 
                                                            | vlSelfRef.kv_cache__DOT__K_out
                                                            [0xaU]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.kv_cache__DOT__K_out
                                                            [9U])))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.kv_cache__DOT__K_out
                                                                           [0xbU] 
                                                                           << 0x10U) 
                                                                          | vlSelfRef.kv_cache__DOT__K_out
                                                                          [0xaU]))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.kv_cache__DOT__K_out
                                                                          [9U]))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    vlSelfRef.K_flat_out[6U] = (IData)((((QData)((IData)(
                                                         ((vlSelfRef.kv_cache__DOT__K_out
                                                           [0xeU] 
                                                           << 0x10U) 
                                                          | vlSelfRef.kv_cache__DOT__K_out
                                                          [0xdU]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.kv_cache__DOT__K_out
                                                          [0xcU]))));
    vlSelfRef.K_flat_out[7U] = ((0xffff0000U & vlSelfRef.K_flat_out[7U]) 
                                | (IData)(((((QData)((IData)(
                                                             ((vlSelfRef.kv_cache__DOT__K_out
                                                               [0xeU] 
                                                               << 0x10U) 
                                                              | vlSelfRef.kv_cache__DOT__K_out
                                                              [0xdU]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.kv_cache__DOT__K_out
                                                              [0xcU]))) 
                                           >> 0x20U)));
    vlSelfRef.K_flat_out[7U] = ((0xffffU & vlSelfRef.K_flat_out[7U]) 
                                | ((IData)((((QData)((IData)(
                                                             ((vlSelfRef.kv_cache__DOT__K_out
                                                               [0x11U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.kv_cache__DOT__K_out
                                                              [0x10U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.kv_cache__DOT__K_out
                                                              [0xfU])))) 
                                   << 0x10U));
    vlSelfRef.K_flat_out[8U] = (((IData)((((QData)((IData)(
                                                           ((vlSelfRef.kv_cache__DOT__K_out
                                                             [0x11U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.kv_cache__DOT__K_out
                                                            [0x10U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.kv_cache__DOT__K_out
                                                            [0xfU])))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.kv_cache__DOT__K_out
                                                                           [0x11U] 
                                                                           << 0x10U) 
                                                                          | vlSelfRef.kv_cache__DOT__K_out
                                                                          [0x10U]))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.kv_cache__DOT__K_out
                                                                          [0xfU]))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    vlSelfRef.K_flat_out[9U] = (IData)((((QData)((IData)(
                                                         ((vlSelfRef.kv_cache__DOT__K_out
                                                           [0x14U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.kv_cache__DOT__K_out
                                                          [0x13U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.kv_cache__DOT__K_out
                                                          [0x12U]))));
    vlSelfRef.K_flat_out[0xaU] = ((0xffff0000U & vlSelfRef.K_flat_out[0xaU]) 
                                  | (IData)(((((QData)((IData)(
                                                               ((vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x14U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.kv_cache__DOT__K_out
                                                                [0x13U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.kv_cache__DOT__K_out
                                                                [0x12U]))) 
                                             >> 0x20U)));
    vlSelfRef.K_flat_out[0xaU] = ((0xffffU & vlSelfRef.K_flat_out[0xaU]) 
                                  | ((IData)((((QData)((IData)(
                                                               ((vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x17U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.kv_cache__DOT__K_out
                                                                [0x16U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.kv_cache__DOT__K_out
                                                                [0x15U])))) 
                                     << 0x10U));
    vlSelfRef.K_flat_out[0xbU] = (((IData)((((QData)((IData)(
                                                             ((vlSelfRef.kv_cache__DOT__K_out
                                                               [0x17U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.kv_cache__DOT__K_out
                                                              [0x16U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.kv_cache__DOT__K_out
                                                              [0x15U])))) 
                                   >> 0x10U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelfRef.kv_cache__DOT__K_out
                                                                             [0x17U] 
                                                                             << 0x10U) 
                                                                            | vlSelfRef.kv_cache__DOT__K_out
                                                                            [0x16U]))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.kv_cache__DOT__K_out
                                                                            [0x15U]))) 
                                                         >> 0x20U)) 
                                                << 0x10U));
    vlSelfRef.K_flat_out[0xcU] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.kv_cache__DOT__K_out
                                                             [0x1aU] 
                                                             << 0x10U) 
                                                            | vlSelfRef.kv_cache__DOT__K_out
                                                            [0x19U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.kv_cache__DOT__K_out
                                                            [0x18U]))));
    vlSelfRef.K_flat_out[0xdU] = ((0xffff0000U & vlSelfRef.K_flat_out[0xdU]) 
                                  | (IData)(((((QData)((IData)(
                                                               ((vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x1aU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.kv_cache__DOT__K_out
                                                                [0x19U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.kv_cache__DOT__K_out
                                                                [0x18U]))) 
                                             >> 0x20U)));
    vlSelfRef.K_flat_out[0xdU] = ((0xffffU & vlSelfRef.K_flat_out[0xdU]) 
                                  | ((IData)((((QData)((IData)(
                                                               ((vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x1dU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.kv_cache__DOT__K_out
                                                                [0x1cU]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.kv_cache__DOT__K_out
                                                                [0x1bU])))) 
                                     << 0x10U));
    vlSelfRef.K_flat_out[0xeU] = (((IData)((((QData)((IData)(
                                                             ((vlSelfRef.kv_cache__DOT__K_out
                                                               [0x1dU] 
                                                               << 0x10U) 
                                                              | vlSelfRef.kv_cache__DOT__K_out
                                                              [0x1cU]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.kv_cache__DOT__K_out
                                                              [0x1bU])))) 
                                   >> 0x10U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelfRef.kv_cache__DOT__K_out
                                                                             [0x1dU] 
                                                                             << 0x10U) 
                                                                            | vlSelfRef.kv_cache__DOT__K_out
                                                                            [0x1cU]))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.kv_cache__DOT__K_out
                                                                            [0x1bU]))) 
                                                         >> 0x20U)) 
                                                << 0x10U));
    vlSelfRef.K_flat_out[0xfU] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.kv_cache__DOT__K_out
                                                             [0x20U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.kv_cache__DOT__K_out
                                                            [0x1fU]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.kv_cache__DOT__K_out
                                                            [0x1eU]))));
    vlSelfRef.K_flat_out[0x10U] = ((0xffff0000U & vlSelfRef.K_flat_out[0x10U]) 
                                   | (IData)(((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__K_out
                                                                  [0x20U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x1fU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x1eU]))) 
                                              >> 0x20U)));
    vlSelfRef.K_flat_out[0x10U] = ((0xffffU & vlSelfRef.K_flat_out[0x10U]) 
                                   | ((IData)((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__K_out
                                                                  [0x23U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x22U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x21U])))) 
                                      << 0x10U));
    vlSelfRef.K_flat_out[0x11U] = (((IData)((((QData)((IData)(
                                                              ((vlSelfRef.kv_cache__DOT__K_out
                                                                [0x23U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.kv_cache__DOT__K_out
                                                               [0x22U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.kv_cache__DOT__K_out
                                                               [0x21U])))) 
                                    >> 0x10U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSelfRef.kv_cache__DOT__K_out
                                                                              [0x23U] 
                                                                              << 0x10U) 
                                                                             | vlSelfRef.kv_cache__DOT__K_out
                                                                             [0x22U]))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.kv_cache__DOT__K_out
                                                                             [0x21U]))) 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    vlSelfRef.K_flat_out[0x12U] = (IData)((((QData)((IData)(
                                                            ((vlSelfRef.kv_cache__DOT__K_out
                                                              [0x26U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.kv_cache__DOT__K_out
                                                             [0x25U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.kv_cache__DOT__K_out
                                                             [0x24U]))));
    vlSelfRef.K_flat_out[0x13U] = ((0xffff0000U & vlSelfRef.K_flat_out[0x13U]) 
                                   | (IData)(((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__K_out
                                                                  [0x26U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x25U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x24U]))) 
                                              >> 0x20U)));
    vlSelfRef.K_flat_out[0x13U] = ((0xffffU & vlSelfRef.K_flat_out[0x13U]) 
                                   | ((IData)((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__K_out
                                                                  [0x29U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x28U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x27U])))) 
                                      << 0x10U));
    vlSelfRef.K_flat_out[0x14U] = (((IData)((((QData)((IData)(
                                                              ((vlSelfRef.kv_cache__DOT__K_out
                                                                [0x29U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.kv_cache__DOT__K_out
                                                               [0x28U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.kv_cache__DOT__K_out
                                                               [0x27U])))) 
                                    >> 0x10U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSelfRef.kv_cache__DOT__K_out
                                                                              [0x29U] 
                                                                              << 0x10U) 
                                                                             | vlSelfRef.kv_cache__DOT__K_out
                                                                             [0x28U]))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.kv_cache__DOT__K_out
                                                                             [0x27U]))) 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    vlSelfRef.K_flat_out[0x15U] = (IData)((((QData)((IData)(
                                                            ((vlSelfRef.kv_cache__DOT__K_out
                                                              [0x2cU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.kv_cache__DOT__K_out
                                                             [0x2bU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.kv_cache__DOT__K_out
                                                             [0x2aU]))));
    vlSelfRef.K_flat_out[0x16U] = ((0xffff0000U & vlSelfRef.K_flat_out[0x16U]) 
                                   | (IData)(((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__K_out
                                                                  [0x2cU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x2bU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x2aU]))) 
                                              >> 0x20U)));
    vlSelfRef.K_flat_out[0x16U] = ((0xffffU & vlSelfRef.K_flat_out[0x16U]) 
                                   | ((IData)((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__K_out
                                                                  [0x2fU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x2eU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x2dU])))) 
                                      << 0x10U));
    vlSelfRef.K_flat_out[0x17U] = (((IData)((((QData)((IData)(
                                                              ((vlSelfRef.kv_cache__DOT__K_out
                                                                [0x2fU] 
                                                                << 0x10U) 
                                                               | vlSelfRef.kv_cache__DOT__K_out
                                                               [0x2eU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.kv_cache__DOT__K_out
                                                               [0x2dU])))) 
                                    >> 0x10U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSelfRef.kv_cache__DOT__K_out
                                                                              [0x2fU] 
                                                                              << 0x10U) 
                                                                             | vlSelfRef.kv_cache__DOT__K_out
                                                                             [0x2eU]))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.kv_cache__DOT__K_out
                                                                             [0x2dU]))) 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    vlSelfRef.K_flat_out[0x18U] = (IData)((((QData)((IData)(
                                                            ((vlSelfRef.kv_cache__DOT__K_out
                                                              [0x32U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.kv_cache__DOT__K_out
                                                             [0x31U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.kv_cache__DOT__K_out
                                                             [0x30U]))));
    vlSelfRef.K_flat_out[0x19U] = ((0xffff0000U & vlSelfRef.K_flat_out[0x19U]) 
                                   | (IData)(((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__K_out
                                                                  [0x32U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x31U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x30U]))) 
                                              >> 0x20U)));
    vlSelfRef.K_flat_out[0x19U] = ((0xffffU & vlSelfRef.K_flat_out[0x19U]) 
                                   | ((IData)((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__K_out
                                                                  [0x35U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x34U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x33U])))) 
                                      << 0x10U));
    vlSelfRef.K_flat_out[0x1aU] = (((IData)((((QData)((IData)(
                                                              ((vlSelfRef.kv_cache__DOT__K_out
                                                                [0x35U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.kv_cache__DOT__K_out
                                                               [0x34U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.kv_cache__DOT__K_out
                                                               [0x33U])))) 
                                    >> 0x10U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSelfRef.kv_cache__DOT__K_out
                                                                              [0x35U] 
                                                                              << 0x10U) 
                                                                             | vlSelfRef.kv_cache__DOT__K_out
                                                                             [0x34U]))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.kv_cache__DOT__K_out
                                                                             [0x33U]))) 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    vlSelfRef.K_flat_out[0x1bU] = (IData)((((QData)((IData)(
                                                            ((vlSelfRef.kv_cache__DOT__K_out
                                                              [0x38U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.kv_cache__DOT__K_out
                                                             [0x37U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.kv_cache__DOT__K_out
                                                             [0x36U]))));
    vlSelfRef.K_flat_out[0x1cU] = ((0xffff0000U & vlSelfRef.K_flat_out[0x1cU]) 
                                   | (IData)(((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__K_out
                                                                  [0x38U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x37U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x36U]))) 
                                              >> 0x20U)));
    vlSelfRef.K_flat_out[0x1cU] = ((0xffffU & vlSelfRef.K_flat_out[0x1cU]) 
                                   | ((IData)((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__K_out
                                                                  [0x3bU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x3aU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x39U])))) 
                                      << 0x10U));
    vlSelfRef.K_flat_out[0x1dU] = (((IData)((((QData)((IData)(
                                                              ((vlSelfRef.kv_cache__DOT__K_out
                                                                [0x3bU] 
                                                                << 0x10U) 
                                                               | vlSelfRef.kv_cache__DOT__K_out
                                                               [0x3aU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.kv_cache__DOT__K_out
                                                               [0x39U])))) 
                                    >> 0x10U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSelfRef.kv_cache__DOT__K_out
                                                                              [0x3bU] 
                                                                              << 0x10U) 
                                                                             | vlSelfRef.kv_cache__DOT__K_out
                                                                             [0x3aU]))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.kv_cache__DOT__K_out
                                                                             [0x39U]))) 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    vlSelfRef.K_flat_out[0x1eU] = (IData)((((QData)((IData)(
                                                            ((vlSelfRef.kv_cache__DOT__K_out
                                                              [0x3eU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.kv_cache__DOT__K_out
                                                             [0x3dU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.kv_cache__DOT__K_out
                                                             [0x3cU]))));
    vlSelfRef.K_flat_out[0x1fU] = ((0xffff0000U & vlSelfRef.K_flat_out[0x1fU]) 
                                   | (IData)(((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__K_out
                                                                  [0x3eU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x3dU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__K_out
                                                                 [0x3cU]))) 
                                              >> 0x20U)));
    vlSelfRef.K_flat_out[0x1fU] = ((0xffffU & vlSelfRef.K_flat_out[0x1fU]) 
                                   | (vlSelfRef.kv_cache__DOT__K_out
                                      [0x3fU] << 0x10U));
    vlSelfRef.V_flat_out[0U] = (IData)((((QData)((IData)(
                                                         ((vlSelfRef.kv_cache__DOT__V_out
                                                           [2U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.kv_cache__DOT__V_out
                                                          [1U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.kv_cache__DOT__V_out
                                                          [0U]))));
    vlSelfRef.V_flat_out[1U] = ((0xffff0000U & vlSelfRef.V_flat_out[1U]) 
                                | (IData)(((((QData)((IData)(
                                                             ((vlSelfRef.kv_cache__DOT__V_out
                                                               [2U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.kv_cache__DOT__V_out
                                                              [1U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.kv_cache__DOT__V_out
                                                              [0U]))) 
                                           >> 0x20U)));
    vlSelfRef.V_flat_out[1U] = ((0xffffU & vlSelfRef.V_flat_out[1U]) 
                                | ((IData)((((QData)((IData)(
                                                             ((vlSelfRef.kv_cache__DOT__V_out
                                                               [5U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.kv_cache__DOT__V_out
                                                              [4U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.kv_cache__DOT__V_out
                                                              [3U])))) 
                                   << 0x10U));
    vlSelfRef.V_flat_out[2U] = (((IData)((((QData)((IData)(
                                                           ((vlSelfRef.kv_cache__DOT__V_out
                                                             [5U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.kv_cache__DOT__V_out
                                                            [4U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.kv_cache__DOT__V_out
                                                            [3U])))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.kv_cache__DOT__V_out
                                                                           [5U] 
                                                                           << 0x10U) 
                                                                          | vlSelfRef.kv_cache__DOT__V_out
                                                                          [4U]))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.kv_cache__DOT__V_out
                                                                          [3U]))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    vlSelfRef.V_flat_out[3U] = (IData)((((QData)((IData)(
                                                         ((vlSelfRef.kv_cache__DOT__V_out
                                                           [8U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.kv_cache__DOT__V_out
                                                          [7U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.kv_cache__DOT__V_out
                                                          [6U]))));
    vlSelfRef.V_flat_out[4U] = ((0xffff0000U & vlSelfRef.V_flat_out[4U]) 
                                | (IData)(((((QData)((IData)(
                                                             ((vlSelfRef.kv_cache__DOT__V_out
                                                               [8U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.kv_cache__DOT__V_out
                                                              [7U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.kv_cache__DOT__V_out
                                                              [6U]))) 
                                           >> 0x20U)));
    vlSelfRef.V_flat_out[4U] = ((0xffffU & vlSelfRef.V_flat_out[4U]) 
                                | ((IData)((((QData)((IData)(
                                                             ((vlSelfRef.kv_cache__DOT__V_out
                                                               [0xbU] 
                                                               << 0x10U) 
                                                              | vlSelfRef.kv_cache__DOT__V_out
                                                              [0xaU]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.kv_cache__DOT__V_out
                                                              [9U])))) 
                                   << 0x10U));
    vlSelfRef.V_flat_out[5U] = (((IData)((((QData)((IData)(
                                                           ((vlSelfRef.kv_cache__DOT__V_out
                                                             [0xbU] 
                                                             << 0x10U) 
                                                            | vlSelfRef.kv_cache__DOT__V_out
                                                            [0xaU]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.kv_cache__DOT__V_out
                                                            [9U])))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.kv_cache__DOT__V_out
                                                                           [0xbU] 
                                                                           << 0x10U) 
                                                                          | vlSelfRef.kv_cache__DOT__V_out
                                                                          [0xaU]))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.kv_cache__DOT__V_out
                                                                          [9U]))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    vlSelfRef.V_flat_out[6U] = (IData)((((QData)((IData)(
                                                         ((vlSelfRef.kv_cache__DOT__V_out
                                                           [0xeU] 
                                                           << 0x10U) 
                                                          | vlSelfRef.kv_cache__DOT__V_out
                                                          [0xdU]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.kv_cache__DOT__V_out
                                                          [0xcU]))));
    vlSelfRef.V_flat_out[7U] = ((0xffff0000U & vlSelfRef.V_flat_out[7U]) 
                                | (IData)(((((QData)((IData)(
                                                             ((vlSelfRef.kv_cache__DOT__V_out
                                                               [0xeU] 
                                                               << 0x10U) 
                                                              | vlSelfRef.kv_cache__DOT__V_out
                                                              [0xdU]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.kv_cache__DOT__V_out
                                                              [0xcU]))) 
                                           >> 0x20U)));
    vlSelfRef.V_flat_out[7U] = ((0xffffU & vlSelfRef.V_flat_out[7U]) 
                                | ((IData)((((QData)((IData)(
                                                             ((vlSelfRef.kv_cache__DOT__V_out
                                                               [0x11U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.kv_cache__DOT__V_out
                                                              [0x10U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.kv_cache__DOT__V_out
                                                              [0xfU])))) 
                                   << 0x10U));
    vlSelfRef.V_flat_out[8U] = (((IData)((((QData)((IData)(
                                                           ((vlSelfRef.kv_cache__DOT__V_out
                                                             [0x11U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.kv_cache__DOT__V_out
                                                            [0x10U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.kv_cache__DOT__V_out
                                                            [0xfU])))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.kv_cache__DOT__V_out
                                                                           [0x11U] 
                                                                           << 0x10U) 
                                                                          | vlSelfRef.kv_cache__DOT__V_out
                                                                          [0x10U]))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.kv_cache__DOT__V_out
                                                                          [0xfU]))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    vlSelfRef.V_flat_out[9U] = (IData)((((QData)((IData)(
                                                         ((vlSelfRef.kv_cache__DOT__V_out
                                                           [0x14U] 
                                                           << 0x10U) 
                                                          | vlSelfRef.kv_cache__DOT__V_out
                                                          [0x13U]))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.kv_cache__DOT__V_out
                                                          [0x12U]))));
    vlSelfRef.V_flat_out[0xaU] = ((0xffff0000U & vlSelfRef.V_flat_out[0xaU]) 
                                  | (IData)(((((QData)((IData)(
                                                               ((vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x14U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.kv_cache__DOT__V_out
                                                                [0x13U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.kv_cache__DOT__V_out
                                                                [0x12U]))) 
                                             >> 0x20U)));
    vlSelfRef.V_flat_out[0xaU] = ((0xffffU & vlSelfRef.V_flat_out[0xaU]) 
                                  | ((IData)((((QData)((IData)(
                                                               ((vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x17U] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.kv_cache__DOT__V_out
                                                                [0x16U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.kv_cache__DOT__V_out
                                                                [0x15U])))) 
                                     << 0x10U));
    vlSelfRef.V_flat_out[0xbU] = (((IData)((((QData)((IData)(
                                                             ((vlSelfRef.kv_cache__DOT__V_out
                                                               [0x17U] 
                                                               << 0x10U) 
                                                              | vlSelfRef.kv_cache__DOT__V_out
                                                              [0x16U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.kv_cache__DOT__V_out
                                                              [0x15U])))) 
                                   >> 0x10U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelfRef.kv_cache__DOT__V_out
                                                                             [0x17U] 
                                                                             << 0x10U) 
                                                                            | vlSelfRef.kv_cache__DOT__V_out
                                                                            [0x16U]))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.kv_cache__DOT__V_out
                                                                            [0x15U]))) 
                                                         >> 0x20U)) 
                                                << 0x10U));
    vlSelfRef.V_flat_out[0xcU] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.kv_cache__DOT__V_out
                                                             [0x1aU] 
                                                             << 0x10U) 
                                                            | vlSelfRef.kv_cache__DOT__V_out
                                                            [0x19U]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.kv_cache__DOT__V_out
                                                            [0x18U]))));
    vlSelfRef.V_flat_out[0xdU] = ((0xffff0000U & vlSelfRef.V_flat_out[0xdU]) 
                                  | (IData)(((((QData)((IData)(
                                                               ((vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x1aU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.kv_cache__DOT__V_out
                                                                [0x19U]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.kv_cache__DOT__V_out
                                                                [0x18U]))) 
                                             >> 0x20U)));
    vlSelfRef.V_flat_out[0xdU] = ((0xffffU & vlSelfRef.V_flat_out[0xdU]) 
                                  | ((IData)((((QData)((IData)(
                                                               ((vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x1dU] 
                                                                 << 0x10U) 
                                                                | vlSelfRef.kv_cache__DOT__V_out
                                                                [0x1cU]))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.kv_cache__DOT__V_out
                                                                [0x1bU])))) 
                                     << 0x10U));
    vlSelfRef.V_flat_out[0xeU] = (((IData)((((QData)((IData)(
                                                             ((vlSelfRef.kv_cache__DOT__V_out
                                                               [0x1dU] 
                                                               << 0x10U) 
                                                              | vlSelfRef.kv_cache__DOT__V_out
                                                              [0x1cU]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.kv_cache__DOT__V_out
                                                              [0x1bU])))) 
                                   >> 0x10U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelfRef.kv_cache__DOT__V_out
                                                                             [0x1dU] 
                                                                             << 0x10U) 
                                                                            | vlSelfRef.kv_cache__DOT__V_out
                                                                            [0x1cU]))) 
                                                           << 0x10U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.kv_cache__DOT__V_out
                                                                            [0x1bU]))) 
                                                         >> 0x20U)) 
                                                << 0x10U));
    vlSelfRef.V_flat_out[0xfU] = (IData)((((QData)((IData)(
                                                           ((vlSelfRef.kv_cache__DOT__V_out
                                                             [0x20U] 
                                                             << 0x10U) 
                                                            | vlSelfRef.kv_cache__DOT__V_out
                                                            [0x1fU]))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.kv_cache__DOT__V_out
                                                            [0x1eU]))));
    vlSelfRef.V_flat_out[0x10U] = ((0xffff0000U & vlSelfRef.V_flat_out[0x10U]) 
                                   | (IData)(((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__V_out
                                                                  [0x20U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x1fU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x1eU]))) 
                                              >> 0x20U)));
    vlSelfRef.V_flat_out[0x10U] = ((0xffffU & vlSelfRef.V_flat_out[0x10U]) 
                                   | ((IData)((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__V_out
                                                                  [0x23U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x22U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x21U])))) 
                                      << 0x10U));
    vlSelfRef.V_flat_out[0x11U] = (((IData)((((QData)((IData)(
                                                              ((vlSelfRef.kv_cache__DOT__V_out
                                                                [0x23U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.kv_cache__DOT__V_out
                                                               [0x22U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.kv_cache__DOT__V_out
                                                               [0x21U])))) 
                                    >> 0x10U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSelfRef.kv_cache__DOT__V_out
                                                                              [0x23U] 
                                                                              << 0x10U) 
                                                                             | vlSelfRef.kv_cache__DOT__V_out
                                                                             [0x22U]))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.kv_cache__DOT__V_out
                                                                             [0x21U]))) 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    vlSelfRef.V_flat_out[0x12U] = (IData)((((QData)((IData)(
                                                            ((vlSelfRef.kv_cache__DOT__V_out
                                                              [0x26U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.kv_cache__DOT__V_out
                                                             [0x25U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.kv_cache__DOT__V_out
                                                             [0x24U]))));
    vlSelfRef.V_flat_out[0x13U] = ((0xffff0000U & vlSelfRef.V_flat_out[0x13U]) 
                                   | (IData)(((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__V_out
                                                                  [0x26U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x25U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x24U]))) 
                                              >> 0x20U)));
    vlSelfRef.V_flat_out[0x13U] = ((0xffffU & vlSelfRef.V_flat_out[0x13U]) 
                                   | ((IData)((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__V_out
                                                                  [0x29U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x28U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x27U])))) 
                                      << 0x10U));
    vlSelfRef.V_flat_out[0x14U] = (((IData)((((QData)((IData)(
                                                              ((vlSelfRef.kv_cache__DOT__V_out
                                                                [0x29U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.kv_cache__DOT__V_out
                                                               [0x28U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.kv_cache__DOT__V_out
                                                               [0x27U])))) 
                                    >> 0x10U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSelfRef.kv_cache__DOT__V_out
                                                                              [0x29U] 
                                                                              << 0x10U) 
                                                                             | vlSelfRef.kv_cache__DOT__V_out
                                                                             [0x28U]))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.kv_cache__DOT__V_out
                                                                             [0x27U]))) 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    vlSelfRef.V_flat_out[0x15U] = (IData)((((QData)((IData)(
                                                            ((vlSelfRef.kv_cache__DOT__V_out
                                                              [0x2cU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.kv_cache__DOT__V_out
                                                             [0x2bU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.kv_cache__DOT__V_out
                                                             [0x2aU]))));
    vlSelfRef.V_flat_out[0x16U] = ((0xffff0000U & vlSelfRef.V_flat_out[0x16U]) 
                                   | (IData)(((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__V_out
                                                                  [0x2cU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x2bU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x2aU]))) 
                                              >> 0x20U)));
    vlSelfRef.V_flat_out[0x16U] = ((0xffffU & vlSelfRef.V_flat_out[0x16U]) 
                                   | ((IData)((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__V_out
                                                                  [0x2fU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x2eU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x2dU])))) 
                                      << 0x10U));
    vlSelfRef.V_flat_out[0x17U] = (((IData)((((QData)((IData)(
                                                              ((vlSelfRef.kv_cache__DOT__V_out
                                                                [0x2fU] 
                                                                << 0x10U) 
                                                               | vlSelfRef.kv_cache__DOT__V_out
                                                               [0x2eU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.kv_cache__DOT__V_out
                                                               [0x2dU])))) 
                                    >> 0x10U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSelfRef.kv_cache__DOT__V_out
                                                                              [0x2fU] 
                                                                              << 0x10U) 
                                                                             | vlSelfRef.kv_cache__DOT__V_out
                                                                             [0x2eU]))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.kv_cache__DOT__V_out
                                                                             [0x2dU]))) 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    vlSelfRef.V_flat_out[0x18U] = (IData)((((QData)((IData)(
                                                            ((vlSelfRef.kv_cache__DOT__V_out
                                                              [0x32U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.kv_cache__DOT__V_out
                                                             [0x31U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.kv_cache__DOT__V_out
                                                             [0x30U]))));
    vlSelfRef.V_flat_out[0x19U] = ((0xffff0000U & vlSelfRef.V_flat_out[0x19U]) 
                                   | (IData)(((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__V_out
                                                                  [0x32U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x31U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x30U]))) 
                                              >> 0x20U)));
    vlSelfRef.V_flat_out[0x19U] = ((0xffffU & vlSelfRef.V_flat_out[0x19U]) 
                                   | ((IData)((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__V_out
                                                                  [0x35U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x34U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x33U])))) 
                                      << 0x10U));
    vlSelfRef.V_flat_out[0x1aU] = (((IData)((((QData)((IData)(
                                                              ((vlSelfRef.kv_cache__DOT__V_out
                                                                [0x35U] 
                                                                << 0x10U) 
                                                               | vlSelfRef.kv_cache__DOT__V_out
                                                               [0x34U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.kv_cache__DOT__V_out
                                                               [0x33U])))) 
                                    >> 0x10U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSelfRef.kv_cache__DOT__V_out
                                                                              [0x35U] 
                                                                              << 0x10U) 
                                                                             | vlSelfRef.kv_cache__DOT__V_out
                                                                             [0x34U]))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.kv_cache__DOT__V_out
                                                                             [0x33U]))) 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    vlSelfRef.V_flat_out[0x1bU] = (IData)((((QData)((IData)(
                                                            ((vlSelfRef.kv_cache__DOT__V_out
                                                              [0x38U] 
                                                              << 0x10U) 
                                                             | vlSelfRef.kv_cache__DOT__V_out
                                                             [0x37U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.kv_cache__DOT__V_out
                                                             [0x36U]))));
    vlSelfRef.V_flat_out[0x1cU] = ((0xffff0000U & vlSelfRef.V_flat_out[0x1cU]) 
                                   | (IData)(((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__V_out
                                                                  [0x38U] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x37U]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x36U]))) 
                                              >> 0x20U)));
    vlSelfRef.V_flat_out[0x1cU] = ((0xffffU & vlSelfRef.V_flat_out[0x1cU]) 
                                   | ((IData)((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__V_out
                                                                  [0x3bU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x3aU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x39U])))) 
                                      << 0x10U));
    vlSelfRef.V_flat_out[0x1dU] = (((IData)((((QData)((IData)(
                                                              ((vlSelfRef.kv_cache__DOT__V_out
                                                                [0x3bU] 
                                                                << 0x10U) 
                                                               | vlSelfRef.kv_cache__DOT__V_out
                                                               [0x3aU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.kv_cache__DOT__V_out
                                                               [0x39U])))) 
                                    >> 0x10U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSelfRef.kv_cache__DOT__V_out
                                                                              [0x3bU] 
                                                                              << 0x10U) 
                                                                             | vlSelfRef.kv_cache__DOT__V_out
                                                                             [0x3aU]))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.kv_cache__DOT__V_out
                                                                             [0x39U]))) 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    vlSelfRef.V_flat_out[0x1eU] = (IData)((((QData)((IData)(
                                                            ((vlSelfRef.kv_cache__DOT__V_out
                                                              [0x3eU] 
                                                              << 0x10U) 
                                                             | vlSelfRef.kv_cache__DOT__V_out
                                                             [0x3dU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelfRef.kv_cache__DOT__V_out
                                                             [0x3cU]))));
    vlSelfRef.V_flat_out[0x1fU] = ((0xffff0000U & vlSelfRef.V_flat_out[0x1fU]) 
                                   | (IData)(((((QData)((IData)(
                                                                ((vlSelfRef.kv_cache__DOT__V_out
                                                                  [0x3eU] 
                                                                  << 0x10U) 
                                                                 | vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x3dU]))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.kv_cache__DOT__V_out
                                                                 [0x3cU]))) 
                                              >> 0x20U)));
    vlSelfRef.V_flat_out[0x1fU] = ((0xffffU & vlSelfRef.V_flat_out[0x1fU]) 
                                   | (vlSelfRef.kv_cache__DOT__V_out
                                      [0x3fU] << 0x10U));
}

VL_ATTR_COLD void Vkv_cache___024root___eval_triggers__stl(Vkv_cache___024root* vlSelf);

VL_ATTR_COLD bool Vkv_cache___024root___eval_phase__stl(Vkv_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkv_cache___024root___eval_phase__stl\n"); );
    Vkv_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vkv_cache___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vkv_cache___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkv_cache___024root___dump_triggers__ico(Vkv_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkv_cache___024root___dump_triggers__ico\n"); );
    Vkv_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vkv_cache___024root___dump_triggers__act(Vkv_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkv_cache___024root___dump_triggers__act\n"); );
    Vkv_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkv_cache___024root___dump_triggers__nba(Vkv_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkv_cache___024root___dump_triggers__nba\n"); );
    Vkv_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vkv_cache___024root___ctor_var_reset(Vkv_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkv_cache___024root___ctor_var_reset\n"); );
    Vkv_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->write_en = VL_RAND_RESET_I(1);
    vlSelf->write_addr = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(1024, vlSelf->K_flat_in);
    VL_RAND_RESET_W(1024, vlSelf->V_flat_in);
    vlSelf->read_addr = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(1024, vlSelf->K_flat_out);
    VL_RAND_RESET_W(1024, vlSelf->V_flat_out);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->kv_cache__DOT__K_mem[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->kv_cache__DOT__V_mem[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->kv_cache__DOT__K_in[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->kv_cache__DOT__V_in[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->kv_cache__DOT__K_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->kv_cache__DOT__V_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}
