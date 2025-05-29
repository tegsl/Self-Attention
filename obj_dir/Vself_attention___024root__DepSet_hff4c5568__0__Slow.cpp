// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vself_attention.h for the primary calling header

#include "Vself_attention__pch.h"
#include "Vself_attention___024root.h"

VL_ATTR_COLD void Vself_attention___024root___eval_static(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_static\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vself_attention___024root___eval_initial(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_initial\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vself_attention___024root___eval_final(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_final\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vself_attention___024root___dump_triggers__stl(Vself_attention___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vself_attention___024root___eval_phase__stl(Vself_attention___024root* vlSelf);

VL_ATTR_COLD void Vself_attention___024root___eval_settle(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_settle\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vself_attention___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("self_attention.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vself_attention___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vself_attention___024root___dump_triggers__stl(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___dump_triggers__stl\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vself_attention___024root___stl_sequent__TOP__0(Vself_attention___024root* vlSelf);

VL_ATTR_COLD void Vself_attention___024root___eval_stl(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_stl\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vself_attention___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 256> Vself_attention__ConstPool__TABLE_he925e649_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vself_attention__ConstPool__TABLE_h79cf329d_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vself_attention__ConstPool__TABLE_h67c1a7b9_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vself_attention__ConstPool__TABLE_h49c34cfa_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vself_attention__ConstPool__TABLE_he900d9c0_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vself_attention__ConstPool__TABLE_hb8dc07a9_0;

VL_ATTR_COLD void Vself_attention___024root___stl_sequent__TOP__0(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___stl_sequent__TOP__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<32>/*1023:0*/ self_attention__DOT__input_vec_flat;
    VL_ZERO_W(1024, self_attention__DOT__input_vec_flat);
    IData/*31:0*/ self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m;
    self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m = 0;
    IData/*31:0*/ self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m;
    self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0U] 
        = ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[1U] 
        = ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[2U] 
        = ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[3U] 
        = ((3U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[4U] 
        = ((4U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[5U] 
        = ((5U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[6U] 
        = ((6U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[7U] 
        = ((7U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[8U] 
        = ((8U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[9U] 
        = ((9U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0xaU] 
        = ((0xaU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0xbU] 
        = ((0xbU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0xcU] 
        = ((0xcU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0xdU] 
        = ((0xdU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0xeU] 
        = ((0xeU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0xfU] 
        = ((0xfU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x10U] 
        = ((0x10U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x11U] 
        = ((0x11U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x12U] 
        = ((0x12U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x13U] 
        = ((0x13U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x14U] 
        = ((0x14U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x15U] 
        = ((0x15U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x16U] 
        = ((0x16U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x17U] 
        = ((0x17U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x18U] 
        = ((0x18U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x19U] 
        = ((0x19U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x1aU] 
        = ((0x1aU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x1bU] 
        = ((0x1bU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x1cU] 
        = ((0x1cU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x1dU] 
        = ((0x1dU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x1eU] 
        = ((0x1eU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x1fU] 
        = ((0x1fU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x20U] 
        = ((0x20U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x21U] 
        = ((0x21U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x22U] 
        = ((0x22U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x23U] 
        = ((0x23U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x24U] 
        = ((0x24U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x25U] 
        = ((0x25U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x26U] 
        = ((0x26U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x27U] 
        = ((0x27U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x28U] 
        = ((0x28U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x29U] 
        = ((0x29U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x2aU] 
        = ((0x2aU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x2bU] 
        = ((0x2bU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x2cU] 
        = ((0x2cU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x2dU] 
        = ((0x2dU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x2eU] 
        = ((0x2eU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x2fU] 
        = ((0x2fU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x30U] 
        = ((0x30U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x31U] 
        = ((0x31U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x32U] 
        = ((0x32U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x33U] 
        = ((0x33U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x34U] 
        = ((0x34U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x35U] 
        = ((0x35U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x36U] 
        = ((0x36U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x37U] 
        = ((0x37U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x38U] 
        = ((0x38U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x39U] 
        = ((0x39U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x3aU] 
        = ((0x3aU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x3bU] 
        = ((0x3bU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x3cU] 
        = ((0x3cU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x3dU] 
        = ((0x3dU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x3eU] 
        = ((0x3eU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__W[0x3fU] 
        = ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))
            ? 0x4000U : 0U);
    vlSelfRef.self_attention__DOT__K_flat_out[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                                                [2U] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                                               [1U]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                                               [0U]))));
    vlSelfRef.self_attention__DOT__K_flat_out[1U] = 
        ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_out[1U]) 
         | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                        [2U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [1U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0U]))) >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_out[1U] = 
        ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_out[1U]) 
         | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                        [5U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [4U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [3U])))) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[2U] = 
        (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                      [5U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [4U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [3U])))) >> 0x10U) 
         | ((IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                         [5U] << 0x10U) 
                                        | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                        [4U]))) << 0x10U) 
                      | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                        [3U]))) >> 0x20U)) 
            << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[3U] = (IData)(
                                                            (((QData)((IData)(
                                                                              ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                                                [8U] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                                               [7U]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                                               [6U]))));
    vlSelfRef.self_attention__DOT__K_flat_out[4U] = 
        ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_out[4U]) 
         | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                        [8U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [7U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [6U]))) >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_out[4U] = 
        ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_out[4U]) 
         | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                        [0xbU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0xaU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [9U])))) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[5U] = 
        (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                      [0xbU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [0xaU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [9U])))) >> 0x10U) 
         | ((IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                         [0xbU] << 0x10U) 
                                        | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                        [0xaU]))) << 0x10U) 
                      | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                        [9U]))) >> 0x20U)) 
            << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[6U] = (IData)(
                                                            (((QData)((IData)(
                                                                              ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                                                [0xeU] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                                               [0xdU]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                                               [0xcU]))));
    vlSelfRef.self_attention__DOT__K_flat_out[7U] = 
        ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_out[7U]) 
         | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                        [0xeU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0xdU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0xcU]))) >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_out[7U] = 
        ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_out[7U]) 
         | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                        [0x11U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0x10U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0xfU])))) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[8U] = 
        (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                      [0x11U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [0x10U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [0xfU])))) >> 0x10U) 
         | ((IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                         [0x11U] << 0x10U) 
                                        | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                        [0x10U]))) 
                       << 0x10U) | (QData)((IData)(
                                                   vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                   [0xfU]))) 
                     >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[9U] = (IData)(
                                                            (((QData)((IData)(
                                                                              ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                                                [0x14U] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                                               [0x13U]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                                               [0x12U]))));
    vlSelfRef.self_attention__DOT__K_flat_out[0xaU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_out[0xaU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                          [0x14U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                         [0x13U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                    [0x12U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_out[0xaU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_out[0xaU]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                          [0x17U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                         [0x16U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                    [0x15U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[0xbU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                        [0x17U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0x16U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0x15U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                      [0x17U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                     [0x16U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                                [0x15U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[0xcU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                      [0x1aU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [0x19U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [0x18U]))));
    vlSelfRef.self_attention__DOT__K_flat_out[0xdU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_out[0xdU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                          [0x1aU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                         [0x19U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                    [0x18U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_out[0xdU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_out[0xdU]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                          [0x1dU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                         [0x1cU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                    [0x1bU])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[0xeU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                        [0x1dU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0x1cU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0x1bU])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                      [0x1dU] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                     [0x1cU]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                                [0x1bU]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[0xfU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                      [0x20U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [0x1fU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [0x1eU]))));
    vlSelfRef.self_attention__DOT__K_flat_out[0x10U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_out[0x10U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                          [0x20U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                         [0x1fU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                    [0x1eU]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_out[0x10U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_out[0x10U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                          [0x23U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                         [0x22U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                    [0x21U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[0x11U] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                        [0x23U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0x22U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0x21U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                      [0x23U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                     [0x22U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                                [0x21U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[0x12U] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                      [0x26U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [0x25U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [0x24U]))));
    vlSelfRef.self_attention__DOT__K_flat_out[0x13U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_out[0x13U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                          [0x26U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                         [0x25U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                    [0x24U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_out[0x13U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_out[0x13U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                          [0x29U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                         [0x28U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                    [0x27U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[0x14U] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                        [0x29U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0x28U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0x27U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                      [0x29U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                     [0x28U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                                [0x27U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[0x15U] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                      [0x2cU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [0x2bU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [0x2aU]))));
    vlSelfRef.self_attention__DOT__K_flat_out[0x16U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_out[0x16U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                          [0x2cU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                         [0x2bU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                    [0x2aU]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_out[0x16U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_out[0x16U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                          [0x2fU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                         [0x2eU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                    [0x2dU])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[0x17U] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                        [0x2fU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0x2eU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0x2dU])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                      [0x2fU] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                     [0x2eU]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                                [0x2dU]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[0x18U] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                      [0x32U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [0x31U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [0x30U]))));
    vlSelfRef.self_attention__DOT__K_flat_out[0x19U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_out[0x19U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                          [0x32U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                         [0x31U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                    [0x30U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_out[0x19U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_out[0x19U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                          [0x35U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                         [0x34U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                    [0x33U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[0x1aU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                        [0x35U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0x34U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0x33U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                      [0x35U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                     [0x34U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                                [0x33U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[0x1bU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                      [0x38U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [0x37U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [0x36U]))));
    vlSelfRef.self_attention__DOT__K_flat_out[0x1cU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_out[0x1cU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                          [0x38U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                         [0x37U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                    [0x36U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_out[0x1cU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_out[0x1cU]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                          [0x3bU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                         [0x3aU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                    [0x39U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[0x1dU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                        [0x3bU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0x3aU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                       [0x39U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                      [0x3bU] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                     [0x3aU]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                                [0x39U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_out[0x1eU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                      [0x3eU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [0x3dU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                     [0x3cU]))));
    vlSelfRef.self_attention__DOT__K_flat_out[0x1fU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_out[0x1fU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                          [0x3eU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                         [0x3dU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
                                                    [0x3cU]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_out[0x1fU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_out[0x1fU]) 
           | (vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out
              [0x3fU] << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[0U] = (IData)(
                                                            (((QData)((IData)(
                                                                              ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                                                [2U] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                                               [1U]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                                               [0U]))));
    vlSelfRef.self_attention__DOT__V_flat_out[1U] = 
        ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_out[1U]) 
         | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                        [2U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [1U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0U]))) >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_out[1U] = 
        ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_out[1U]) 
         | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                        [5U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [4U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [3U])))) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[2U] = 
        (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                      [5U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [4U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [3U])))) >> 0x10U) 
         | ((IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                         [5U] << 0x10U) 
                                        | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                        [4U]))) << 0x10U) 
                      | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                        [3U]))) >> 0x20U)) 
            << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[3U] = (IData)(
                                                            (((QData)((IData)(
                                                                              ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                                                [8U] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                                               [7U]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                                               [6U]))));
    vlSelfRef.self_attention__DOT__V_flat_out[4U] = 
        ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_out[4U]) 
         | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                        [8U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [7U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [6U]))) >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_out[4U] = 
        ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_out[4U]) 
         | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                        [0xbU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0xaU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [9U])))) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[5U] = 
        (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                      [0xbU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [0xaU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [9U])))) >> 0x10U) 
         | ((IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                         [0xbU] << 0x10U) 
                                        | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                        [0xaU]))) << 0x10U) 
                      | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                        [9U]))) >> 0x20U)) 
            << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[6U] = (IData)(
                                                            (((QData)((IData)(
                                                                              ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                                                [0xeU] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                                               [0xdU]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                                               [0xcU]))));
    vlSelfRef.self_attention__DOT__V_flat_out[7U] = 
        ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_out[7U]) 
         | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                        [0xeU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0xdU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0xcU]))) >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_out[7U] = 
        ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_out[7U]) 
         | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                        [0x11U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0x10U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0xfU])))) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[8U] = 
        (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                      [0x11U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [0x10U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [0xfU])))) >> 0x10U) 
         | ((IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                         [0x11U] << 0x10U) 
                                        | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                        [0x10U]))) 
                       << 0x10U) | (QData)((IData)(
                                                   vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                   [0xfU]))) 
                     >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[9U] = (IData)(
                                                            (((QData)((IData)(
                                                                              ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                                                [0x14U] 
                                                                                << 0x10U) 
                                                                               | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                                               [0x13U]))) 
                                                              << 0x10U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                                               [0x12U]))));
    vlSelfRef.self_attention__DOT__V_flat_out[0xaU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_out[0xaU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                          [0x14U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                         [0x13U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                    [0x12U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_out[0xaU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_out[0xaU]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                          [0x17U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                         [0x16U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                    [0x15U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[0xbU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                        [0x17U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0x16U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0x15U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                      [0x17U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                     [0x16U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                                [0x15U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[0xcU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                      [0x1aU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [0x19U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [0x18U]))));
    vlSelfRef.self_attention__DOT__V_flat_out[0xdU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_out[0xdU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                          [0x1aU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                         [0x19U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                    [0x18U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_out[0xdU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_out[0xdU]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                          [0x1dU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                         [0x1cU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                    [0x1bU])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[0xeU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                        [0x1dU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0x1cU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0x1bU])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                      [0x1dU] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                     [0x1cU]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                                [0x1bU]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[0xfU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                      [0x20U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [0x1fU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [0x1eU]))));
    vlSelfRef.self_attention__DOT__V_flat_out[0x10U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_out[0x10U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                          [0x20U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                         [0x1fU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                    [0x1eU]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_out[0x10U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_out[0x10U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                          [0x23U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                         [0x22U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                    [0x21U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[0x11U] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                        [0x23U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0x22U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0x21U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                      [0x23U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                     [0x22U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                                [0x21U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[0x12U] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                      [0x26U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [0x25U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [0x24U]))));
    vlSelfRef.self_attention__DOT__V_flat_out[0x13U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_out[0x13U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                          [0x26U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                         [0x25U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                    [0x24U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_out[0x13U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_out[0x13U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                          [0x29U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                         [0x28U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                    [0x27U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[0x14U] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                        [0x29U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0x28U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0x27U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                      [0x29U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                     [0x28U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                                [0x27U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[0x15U] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                      [0x2cU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [0x2bU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [0x2aU]))));
    vlSelfRef.self_attention__DOT__V_flat_out[0x16U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_out[0x16U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                          [0x2cU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                         [0x2bU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                    [0x2aU]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_out[0x16U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_out[0x16U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                          [0x2fU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                         [0x2eU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                    [0x2dU])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[0x17U] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                        [0x2fU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0x2eU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0x2dU])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                      [0x2fU] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                     [0x2eU]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                                [0x2dU]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[0x18U] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                      [0x32U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [0x31U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [0x30U]))));
    vlSelfRef.self_attention__DOT__V_flat_out[0x19U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_out[0x19U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                          [0x32U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                         [0x31U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                    [0x30U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_out[0x19U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_out[0x19U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                          [0x35U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                         [0x34U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                    [0x33U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[0x1aU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                        [0x35U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0x34U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0x33U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                      [0x35U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                     [0x34U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                                [0x33U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[0x1bU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                      [0x38U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [0x37U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [0x36U]))));
    vlSelfRef.self_attention__DOT__V_flat_out[0x1cU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_out[0x1cU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                          [0x38U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                         [0x37U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                    [0x36U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_out[0x1cU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_out[0x1cU]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                          [0x3bU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                         [0x3aU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                    [0x39U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[0x1dU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                        [0x3bU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0x3aU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                       [0x39U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                      [0x3bU] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                     [0x3aU]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                                [0x39U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_out[0x1eU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                      [0x3eU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [0x3dU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                     [0x3cU]))));
    vlSelfRef.self_attention__DOT__V_flat_out[0x1fU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_out[0x1fU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                          [0x3eU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                         [0x3dU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
                                                    [0x3cU]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_out[0x1fU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_out[0x1fU]) 
           | (vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out
              [0x3fU] << 0x10U));
    vlSelfRef.fsm_debug_state = vlSelfRef.self_attention__DOT__fsm__DOT__curr_state;
    vlSelfRef.debug_state_attn = vlSelfRef.self_attention__DOT__attn_inst__DOT__state;
    self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m = 0U;
    while (VL_GTS_III(32, 0x40U, self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)) {
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x400U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x400U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x400U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x400U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x400U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][1U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(1U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][2U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(2U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(2U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(2U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][3U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(3U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(3U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(3U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(3U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][4U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(4U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(4U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][5U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(5U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(5U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(5U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][6U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(6U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(6U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(6U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][7U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(7U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(7U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(7U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(7U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(7U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][8U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(8U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(8U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(8U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][9U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(9U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(9U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(9U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(9U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(9U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0xaU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0xaU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0xaU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0xaU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0xaU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0xaU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0xbU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0xbU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0xbU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0xbU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0xbU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0xbU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0xcU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0xcU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0xcU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0xcU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0xcU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0xcU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0xdU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0xdU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0xdU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0xdU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0xdU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0xdU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0xeU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0xeU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0xeU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0xeU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0xeU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0xeU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0xfU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0xfU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0xfU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0xfU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0xfU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0xfU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x10U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x10U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x10U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x10U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x10U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x10U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x11U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x11U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x11U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x11U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x11U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x11U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x12U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x12U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x12U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x12U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x12U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x12U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x13U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x13U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x13U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x13U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x13U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x13U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x14U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x14U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x14U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x14U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x14U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x14U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x15U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x15U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x15U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x15U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x15U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x15U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x16U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x16U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x16U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x16U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x16U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x16U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x17U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x17U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x17U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x17U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x17U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x17U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x18U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x18U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x18U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x18U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x18U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x18U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x19U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x19U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x19U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x19U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x19U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x19U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x1aU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x1aU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x1aU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x1aU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x1aU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x1aU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x1bU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x1bU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x1bU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x1bU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x1bU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x1bU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x1cU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x1cU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x1cU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x1cU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x1cU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x1cU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x1dU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x1dU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x1dU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x1dU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x1dU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x1dU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x1eU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x1eU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x1eU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x1eU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x1eU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x1eU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x1fU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x1fU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x1fU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x1fU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x1fU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x1fU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x20U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x20U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x20U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x20U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x20U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x20U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x21U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x21U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x21U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x21U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x21U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x21U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x22U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x22U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x22U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x22U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x22U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x22U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x23U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x23U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x23U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x23U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x23U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x23U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x24U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x24U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x24U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x24U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x24U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x24U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x25U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x25U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x25U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x25U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x25U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x25U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x26U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x26U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x26U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x26U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x26U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x26U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x27U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x27U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x27U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x27U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x27U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x27U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x28U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x28U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x28U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x28U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x28U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x28U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x29U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x29U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x29U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x29U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x29U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x29U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x2aU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x2aU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x2aU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x2aU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x2aU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x2aU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x2bU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x2bU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x2bU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x2bU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x2bU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x2bU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x2cU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x2cU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x2cU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x2cU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x2cU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x2cU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x2dU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x2dU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x2dU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x2dU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x2dU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x2dU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x2eU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x2eU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x2eU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x2eU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x2eU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x2eU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x2fU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x2fU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x2fU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x2fU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x2fU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x2fU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x30U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x30U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x30U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x30U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x30U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x30U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x31U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x31U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x31U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x31U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x31U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x31U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x32U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x32U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x32U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x32U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x32U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x32U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x33U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x33U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x33U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x33U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x33U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x33U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x34U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x34U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x34U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x34U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x34U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x34U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x35U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x35U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x35U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x35U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x35U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x35U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x36U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x36U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x36U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x36U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x36U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x36U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x37U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x37U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x37U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x37U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x37U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x37U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x38U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x38U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x38U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x38U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x38U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x38U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x39U] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x39U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x39U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x39U) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x39U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x39U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x3aU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x3aU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x3aU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x3aU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x3aU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x3aU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x3bU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x3bU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x3bU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x3bU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x3bU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x3bU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x3cU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x3cU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x3cU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x3cU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x3cU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x3cU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x3dU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x3dU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x3dU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x3dU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x3dU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x3dU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x3eU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x3eU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x3eU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x3eU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x3eU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x3eU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores[(0x3fU 
                                                                  & self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)][0x3fU] 
            = (0xffffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                       ((IData)(0x3fU) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))
                            ? 0U : (vlSelfRef.self_attention__DOT__scores_flat[
                                    (((IData)(0xfU) 
                                      + (0xffffU & 
                                         VL_MULS_III(32, (IData)(0x10U), 
                                                     ((IData)(0x3fU) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), 
                                                                ((IData)(0x3fU) 
                                                                 + 
                                                                 VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))))))) 
                          | (vlSelfRef.self_attention__DOT__scores_flat[
                             (0x7ffU & (VL_MULS_III(32, (IData)(0x10U), 
                                                    ((IData)(0x3fU) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m))) 
                                        >> 5U))] >> 
                             (0x1fU & VL_MULS_III(32, (IData)(0x10U), 
                                                  ((IData)(0x3fU) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m)))))));
        self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m 
            = ((IData)(1U) + self_attention__DOT__softmax_inst__DOT__unnamedblk1__DOT__m);
    }
    self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m = 0U;
    while (VL_GTS_III(32, 0x40U, self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)) {
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x400U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [1U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(2U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [2U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(3U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [3U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(4U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [4U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(5U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [5U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(6U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [6U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [7U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(8U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [8U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(9U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [9U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0xaU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0xaU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0xbU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0xbU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0xcU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0xcU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0xdU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0xdU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0xeU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0xeU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0xfU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0xfU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x10U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x10U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x11U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x11U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x12U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x12U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x13U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x13U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x14U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x14U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x15U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x15U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x16U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x16U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x17U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x17U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x18U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x18U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x19U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x19U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x1aU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x1aU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x1bU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x1bU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x1cU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x1cU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x1dU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x1dU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x1eU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x1eU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x1fU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x1fU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x20U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x20U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x21U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x21U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x22U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x22U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x23U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x23U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x24U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x24U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x25U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x25U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x26U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x26U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x27U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x27U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x28U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x28U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x29U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x29U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x2aU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x2aU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x2bU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x2bU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x2cU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x2cU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x2dU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x2dU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x2eU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x2eU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x2fU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x2fU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x30U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x30U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x31U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x31U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x32U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x32U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x33U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x33U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x34U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x34U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x35U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x35U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x36U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x36U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x37U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x37U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x38U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x38U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x39U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x39U]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x3aU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x3aU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x3bU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x3bU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x3cU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x3cU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x3dU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x3dU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x3eU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x3eU]);
        VL_ASSIGNSEL_WI(65536,16,(0xffffU & VL_MULS_III(32, (IData)(0x10U), 
                                                        ((IData)(0x3fU) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m)]
                        [0x3fU]);
        self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m 
            = ((IData)(1U) + self_attention__DOT__softmax_inst__DOT__unnamedblk3__DOT__m);
    }
    vlSelfRef.self_attention__DOT__K_flat_in[0U] = (IData)(
                                                           (((QData)((IData)(
                                                                             ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                                               [2U] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                                              [1U]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                                              [0U]))));
    vlSelfRef.self_attention__DOT__K_flat_in[1U] = 
        ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_in[1U]) 
         | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                        [2U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [1U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0U]))) >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_in[1U] = 
        ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[1U]) 
         | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                        [5U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [4U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [3U])))) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[2U] = 
        (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                      [5U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [4U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [3U])))) >> 0x10U) 
         | ((IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                         [5U] << 0x10U) 
                                        | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                        [4U]))) << 0x10U) 
                      | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                        [3U]))) >> 0x20U)) 
            << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[3U] = (IData)(
                                                           (((QData)((IData)(
                                                                             ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                                               [8U] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                                              [7U]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                                              [6U]))));
    vlSelfRef.self_attention__DOT__K_flat_in[4U] = 
        ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_in[4U]) 
         | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                        [8U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [7U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [6U]))) >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_in[4U] = 
        ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[4U]) 
         | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                        [0xbU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0xaU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [9U])))) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[5U] = 
        (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                      [0xbU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [0xaU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [9U])))) >> 0x10U) 
         | ((IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                         [0xbU] << 0x10U) 
                                        | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                        [0xaU]))) << 0x10U) 
                      | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                        [9U]))) >> 0x20U)) 
            << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[6U] = (IData)(
                                                           (((QData)((IData)(
                                                                             ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                                               [0xeU] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                                              [0xdU]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                                              [0xcU]))));
    vlSelfRef.self_attention__DOT__K_flat_in[7U] = 
        ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_in[7U]) 
         | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                        [0xeU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0xdU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0xcU]))) >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_in[7U] = 
        ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[7U]) 
         | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                        [0x11U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0x10U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0xfU])))) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[8U] = 
        (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                      [0x11U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [0x10U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [0xfU])))) >> 0x10U) 
         | ((IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                         [0x11U] << 0x10U) 
                                        | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                        [0x10U]))) 
                       << 0x10U) | (QData)((IData)(
                                                   vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                   [0xfU]))) 
                     >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[9U] = (IData)(
                                                           (((QData)((IData)(
                                                                             ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                                               [0x14U] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                                              [0x13U]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                                              [0x12U]))));
    vlSelfRef.self_attention__DOT__K_flat_in[0xaU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_in[0xaU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                          [0x14U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                         [0x13U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                    [0x12U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_in[0xaU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0xaU]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                          [0x17U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                         [0x16U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                    [0x15U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[0xbU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                        [0x17U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0x16U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0x15U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                      [0x17U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                     [0x16U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                                [0x15U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[0xcU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                      [0x1aU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [0x19U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [0x18U]))));
    vlSelfRef.self_attention__DOT__K_flat_in[0xdU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_in[0xdU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                          [0x1aU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                         [0x19U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                    [0x18U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_in[0xdU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0xdU]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                          [0x1dU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                         [0x1cU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                    [0x1bU])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[0xeU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                        [0x1dU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0x1cU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0x1bU])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                      [0x1dU] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                     [0x1cU]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                                [0x1bU]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[0xfU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                      [0x20U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [0x1fU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [0x1eU]))));
    vlSelfRef.self_attention__DOT__K_flat_in[0x10U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_in[0x10U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                          [0x20U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                         [0x1fU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                    [0x1eU]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_in[0x10U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x10U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                          [0x23U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                         [0x22U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                    [0x21U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[0x11U] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                        [0x23U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0x22U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0x21U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                      [0x23U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                     [0x22U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                                [0x21U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[0x12U] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                      [0x26U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [0x25U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [0x24U]))));
    vlSelfRef.self_attention__DOT__K_flat_in[0x13U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_in[0x13U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                          [0x26U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                         [0x25U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                    [0x24U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_in[0x13U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x13U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                          [0x29U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                         [0x28U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                    [0x27U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[0x14U] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                        [0x29U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0x28U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0x27U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                      [0x29U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                     [0x28U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                                [0x27U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[0x15U] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                      [0x2cU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [0x2bU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [0x2aU]))));
    vlSelfRef.self_attention__DOT__K_flat_in[0x16U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_in[0x16U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                          [0x2cU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                         [0x2bU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                    [0x2aU]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_in[0x16U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x16U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                          [0x2fU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                         [0x2eU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                    [0x2dU])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[0x17U] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                        [0x2fU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0x2eU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0x2dU])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                      [0x2fU] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                     [0x2eU]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                                [0x2dU]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[0x18U] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                      [0x32U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [0x31U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [0x30U]))));
    vlSelfRef.self_attention__DOT__K_flat_in[0x19U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_in[0x19U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                          [0x32U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                         [0x31U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                    [0x30U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_in[0x19U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x19U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                          [0x35U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                         [0x34U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                    [0x33U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[0x1aU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                        [0x35U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0x34U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0x33U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                      [0x35U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                     [0x34U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                                [0x33U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[0x1bU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                      [0x38U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [0x37U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [0x36U]))));
    vlSelfRef.self_attention__DOT__K_flat_in[0x1cU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_in[0x1cU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                          [0x38U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                         [0x37U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                    [0x36U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_in[0x1cU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x1cU]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                          [0x3bU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                         [0x3aU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                    [0x39U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[0x1dU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                        [0x3bU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0x3aU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                       [0x39U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                      [0x3bU] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                     [0x3aU]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                                [0x39U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__K_flat_in[0x1eU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                      [0x3eU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [0x3dU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                     [0x3cU]))));
    vlSelfRef.self_attention__DOT__K_flat_in[0x1fU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__K_flat_in[0x1fU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                          [0x3eU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                         [0x3dU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
                                                    [0x3cU]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__K_flat_in[0x1fU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x1fU]) 
           | (vlSelfRef.self_attention__DOT__qkv_inst__DOT__K
              [0x3fU] << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[0U] = (IData)(
                                                           (((QData)((IData)(
                                                                             ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                                               [2U] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                                              [1U]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                                              [0U]))));
    vlSelfRef.self_attention__DOT__V_flat_in[1U] = 
        ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_in[1U]) 
         | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                        [2U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [1U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0U]))) >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_in[1U] = 
        ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[1U]) 
         | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                        [5U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [4U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [3U])))) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[2U] = 
        (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                      [5U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [4U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [3U])))) >> 0x10U) 
         | ((IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                         [5U] << 0x10U) 
                                        | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                        [4U]))) << 0x10U) 
                      | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                        [3U]))) >> 0x20U)) 
            << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[3U] = (IData)(
                                                           (((QData)((IData)(
                                                                             ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                                               [8U] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                                              [7U]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                                              [6U]))));
    vlSelfRef.self_attention__DOT__V_flat_in[4U] = 
        ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_in[4U]) 
         | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                        [8U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [7U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [6U]))) >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_in[4U] = 
        ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[4U]) 
         | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                        [0xbU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0xaU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [9U])))) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[5U] = 
        (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                      [0xbU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [0xaU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [9U])))) >> 0x10U) 
         | ((IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                         [0xbU] << 0x10U) 
                                        | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                        [0xaU]))) << 0x10U) 
                      | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                        [9U]))) >> 0x20U)) 
            << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[6U] = (IData)(
                                                           (((QData)((IData)(
                                                                             ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                                               [0xeU] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                                              [0xdU]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                                              [0xcU]))));
    vlSelfRef.self_attention__DOT__V_flat_in[7U] = 
        ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_in[7U]) 
         | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                        [0xeU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0xdU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0xcU]))) >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_in[7U] = 
        ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[7U]) 
         | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                        [0x11U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0x10U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0xfU])))) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[8U] = 
        (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                      [0x11U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [0x10U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [0xfU])))) >> 0x10U) 
         | ((IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                         [0x11U] << 0x10U) 
                                        | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                        [0x10U]))) 
                       << 0x10U) | (QData)((IData)(
                                                   vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                   [0xfU]))) 
                     >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[9U] = (IData)(
                                                           (((QData)((IData)(
                                                                             ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                                               [0x14U] 
                                                                               << 0x10U) 
                                                                              | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                                              [0x13U]))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                                              [0x12U]))));
    vlSelfRef.self_attention__DOT__V_flat_in[0xaU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_in[0xaU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                          [0x14U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                         [0x13U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                    [0x12U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_in[0xaU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0xaU]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                          [0x17U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                         [0x16U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                    [0x15U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[0xbU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                        [0x17U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0x16U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0x15U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                      [0x17U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                     [0x16U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                                [0x15U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[0xcU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                      [0x1aU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [0x19U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [0x18U]))));
    vlSelfRef.self_attention__DOT__V_flat_in[0xdU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_in[0xdU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                          [0x1aU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                         [0x19U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                    [0x18U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_in[0xdU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0xdU]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                          [0x1dU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                         [0x1cU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                    [0x1bU])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[0xeU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                        [0x1dU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0x1cU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0x1bU])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                      [0x1dU] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                     [0x1cU]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                                [0x1bU]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[0xfU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                      [0x20U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [0x1fU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [0x1eU]))));
    vlSelfRef.self_attention__DOT__V_flat_in[0x10U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_in[0x10U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                          [0x20U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                         [0x1fU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                    [0x1eU]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_in[0x10U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x10U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                          [0x23U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                         [0x22U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                    [0x21U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[0x11U] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                        [0x23U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0x22U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0x21U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                      [0x23U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                     [0x22U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                                [0x21U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[0x12U] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                      [0x26U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [0x25U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [0x24U]))));
    vlSelfRef.self_attention__DOT__V_flat_in[0x13U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_in[0x13U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                          [0x26U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                         [0x25U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                    [0x24U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_in[0x13U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x13U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                          [0x29U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                         [0x28U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                    [0x27U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[0x14U] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                        [0x29U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0x28U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0x27U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                      [0x29U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                     [0x28U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                                [0x27U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[0x15U] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                      [0x2cU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [0x2bU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [0x2aU]))));
    vlSelfRef.self_attention__DOT__V_flat_in[0x16U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_in[0x16U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                          [0x2cU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                         [0x2bU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                    [0x2aU]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_in[0x16U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x16U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                          [0x2fU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                         [0x2eU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                    [0x2dU])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[0x17U] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                        [0x2fU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0x2eU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0x2dU])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                      [0x2fU] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                     [0x2eU]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                                [0x2dU]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[0x18U] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                      [0x32U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [0x31U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [0x30U]))));
    vlSelfRef.self_attention__DOT__V_flat_in[0x19U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_in[0x19U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                          [0x32U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                         [0x31U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                    [0x30U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_in[0x19U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x19U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                          [0x35U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                         [0x34U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                    [0x33U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[0x1aU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                        [0x35U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0x34U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0x33U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                      [0x35U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                     [0x34U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                                [0x33U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[0x1bU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                      [0x38U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [0x37U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [0x36U]))));
    vlSelfRef.self_attention__DOT__V_flat_in[0x1cU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_in[0x1cU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                          [0x38U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                         [0x37U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                    [0x36U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_in[0x1cU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x1cU]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                          [0x3bU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                         [0x3aU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                    [0x39U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[0x1dU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                        [0x3bU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0x3aU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                       [0x39U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                      [0x3bU] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                     [0x3aU]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                                [0x39U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT__V_flat_in[0x1eU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                      [0x3eU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [0x3dU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                     [0x3cU]))));
    vlSelfRef.self_attention__DOT__V_flat_in[0x1fU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT__V_flat_in[0x1fU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                          [0x3eU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                         [0x3dU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
                                                    [0x3cU]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT__V_flat_in[0x1fU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x1fU]) 
           | (vlSelfRef.self_attention__DOT__qkv_inst__DOT__V
              [0x3fU] << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0U] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                      [2U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [1U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [0U]))));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[1U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[1U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [2U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [1U]))) << 0x10U) 
                       | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [0U]))) >> 0x20U)));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[1U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[1U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [5U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [4U]))) << 0x10U) 
                       | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [3U])))) << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[2U] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                        [5U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [4U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [3U])))) >> 0x10U) 
           | ((IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                           [5U] << 0x10U) 
                                          | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [4U]))) << 0x10U) 
                        | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [3U]))) >> 0x20U)) 
              << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[3U] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                      [8U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [7U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [6U]))));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[4U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[4U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [8U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [7U]))) << 0x10U) 
                       | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [6U]))) >> 0x20U)));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[4U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[4U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0xbU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [0xaU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                    [9U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[5U] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                        [0xbU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [0xaU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [9U])))) >> 0x10U) 
           | ((IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                           [0xbU] << 0x10U) 
                                          | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0xaU]))) 
                         << 0x10U) | (QData)((IData)(
                                                     vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                     [9U]))) 
                       >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[6U] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                      [0xeU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [0xdU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [0xcU]))));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[7U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[7U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0xeU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [0xdU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                    [0xcU]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[7U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[7U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0x11U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [0x10U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                    [0xfU])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[8U] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                        [0x11U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [0x10U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [0xfU])))) >> 0x10U) 
           | ((IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                           [0x11U] 
                                           << 0x10U) 
                                          | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0x10U]))) 
                         << 0x10U) | (QData)((IData)(
                                                     vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                     [0xfU]))) 
                       >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[9U] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                      [0x14U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [0x13U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [0x12U]))));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0xaU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0xaU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0x14U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [0x13U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                    [0x12U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0xaU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0xaU]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0x17U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [0x16U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                    [0x15U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0xbU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                        [0x17U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [0x16U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [0x15U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                      [0x17U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                     [0x16U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                                [0x15U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0xcU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                      [0x1aU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [0x19U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [0x18U]))));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0xdU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0xdU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0x1aU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [0x19U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                    [0x18U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0xdU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0xdU]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0x1dU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [0x1cU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                    [0x1bU])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0xeU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                        [0x1dU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [0x1cU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [0x1bU])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                      [0x1dU] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                     [0x1cU]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                                [0x1bU]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0xfU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                      [0x20U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [0x1fU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [0x1eU]))));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x10U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x10U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0x20U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [0x1fU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                    [0x1eU]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x10U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x10U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0x23U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [0x22U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                    [0x21U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x11U] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                        [0x23U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [0x22U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [0x21U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                      [0x23U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                     [0x22U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                                [0x21U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x12U] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                      [0x26U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [0x25U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [0x24U]))));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x13U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x13U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0x26U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [0x25U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                    [0x24U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x13U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x13U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0x29U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [0x28U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                    [0x27U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x14U] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                        [0x29U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [0x28U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [0x27U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                      [0x29U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                     [0x28U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                                [0x27U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x15U] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                      [0x2cU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [0x2bU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [0x2aU]))));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x16U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x16U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0x2cU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [0x2bU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                    [0x2aU]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x16U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x16U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0x2fU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [0x2eU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                    [0x2dU])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x17U] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                        [0x2fU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [0x2eU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [0x2dU])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                      [0x2fU] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                     [0x2eU]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                                [0x2dU]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x18U] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                      [0x32U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [0x31U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [0x30U]))));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x19U] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x19U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0x32U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [0x31U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                    [0x30U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x19U] 
        = ((0xffffU & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x19U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0x35U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [0x34U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                    [0x33U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x1aU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                        [0x35U] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [0x34U]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [0x33U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                      [0x35U] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                     [0x34U]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                                [0x33U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x1bU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                      [0x38U] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [0x37U]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [0x36U]))));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x1cU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x1cU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0x38U] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [0x37U]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                    [0x36U]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x1cU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x1cU]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0x3bU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [0x3aU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                    [0x39U])))) 
              << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x1dU] 
        = (((IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                        [0x3bU] << 0x10U) 
                                       | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [0x3aU]))) << 0x10U) 
                     | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                       [0x39U])))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                      [0x3bU] 
                                                      << 0x10U) 
                                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                     [0x3aU]))) 
                                    << 0x10U) | (QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                                [0x39U]))) 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x1eU] 
        = (IData)((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                      [0x3eU] << 0x10U) 
                                     | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [0x3dU]))) << 0x10U) 
                   | (QData)((IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                     [0x3cU]))));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x1fU] 
        = ((0xffff0000U & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x1fU]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                          [0x3eU] << 0x10U) 
                                         | vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                         [0x3dU]))) 
                        << 0x10U) | (QData)((IData)(
                                                    vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
                                                    [0x3cU]))) 
                      >> 0x20U)));
    vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x1fU] 
        = ((0xffffU & vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat[0x1fU]) 
           | (vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q
              [0x3fU] << 0x10U));
    self_attention__DOT__input_vec_flat[0U] = (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.input_tokens_flat[
                                                 ((IData)(1U) 
                                                  + 
                                                  (0x7ffU 
                                                   & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                               | (vlSelfRef.input_tokens_flat[
                                                  (0x7ffU 
                                                   & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[1U] = (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.input_tokens_flat[
                                                 ((IData)(2U) 
                                                  + 
                                                  (0x7ffU 
                                                   & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                               | (vlSelfRef.input_tokens_flat[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7ffU 
                                                    & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                       >> 5U)))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[2U] = (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.input_tokens_flat[
                                                 ((IData)(3U) 
                                                  + 
                                                  (0x7ffU 
                                                   & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                               | (vlSelfRef.input_tokens_flat[
                                                  ((IData)(2U) 
                                                   + 
                                                   (0x7ffU 
                                                    & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                       >> 5U)))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[3U] = (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.input_tokens_flat[
                                                 ((IData)(4U) 
                                                  + 
                                                  (0x7ffU 
                                                   & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                               | (vlSelfRef.input_tokens_flat[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0x7ffU 
                                                    & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                       >> 5U)))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[4U] = (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.input_tokens_flat[
                                                 ((IData)(5U) 
                                                  + 
                                                  (0x7ffU 
                                                   & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                               | (vlSelfRef.input_tokens_flat[
                                                  ((IData)(4U) 
                                                   + 
                                                   (0x7ffU 
                                                    & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                       >> 5U)))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[5U] = (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.input_tokens_flat[
                                                 ((IData)(6U) 
                                                  + 
                                                  (0x7ffU 
                                                   & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                               | (vlSelfRef.input_tokens_flat[
                                                  ((IData)(5U) 
                                                   + 
                                                   (0x7ffU 
                                                    & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                       >> 5U)))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[6U] = (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.input_tokens_flat[
                                                 ((IData)(7U) 
                                                  + 
                                                  (0x7ffU 
                                                   & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                               | (vlSelfRef.input_tokens_flat[
                                                  ((IData)(6U) 
                                                   + 
                                                   (0x7ffU 
                                                    & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                       >> 5U)))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[7U] = (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.input_tokens_flat[
                                                 ((IData)(8U) 
                                                  + 
                                                  (0x7ffU 
                                                   & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                               | (vlSelfRef.input_tokens_flat[
                                                  ((IData)(7U) 
                                                   + 
                                                   (0x7ffU 
                                                    & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                       >> 5U)))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[8U] = (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.input_tokens_flat[
                                                 ((IData)(9U) 
                                                  + 
                                                  (0x7ffU 
                                                   & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                               | (vlSelfRef.input_tokens_flat[
                                                  ((IData)(8U) 
                                                   + 
                                                   (0x7ffU 
                                                    & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                       >> 5U)))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[9U] = (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.input_tokens_flat[
                                                 ((IData)(0xaU) 
                                                  + 
                                                  (0x7ffU 
                                                   & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                               | (vlSelfRef.input_tokens_flat[
                                                  ((IData)(9U) 
                                                   + 
                                                   (0x7ffU 
                                                    & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                       >> 5U)))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0xaU] = (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.input_tokens_flat[
                                                   ((IData)(0xbU) 
                                                    + 
                                                    (0x7ffU 
                                                     & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                 | (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0xaU) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0xbU] = (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.input_tokens_flat[
                                                   ((IData)(0xcU) 
                                                    + 
                                                    (0x7ffU 
                                                     & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                 | (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0xbU) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0xcU] = (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.input_tokens_flat[
                                                   ((IData)(0xdU) 
                                                    + 
                                                    (0x7ffU 
                                                     & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                 | (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0xcU) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0xdU] = (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.input_tokens_flat[
                                                   ((IData)(0xeU) 
                                                    + 
                                                    (0x7ffU 
                                                     & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                 | (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0xdU) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0xeU] = (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.input_tokens_flat[
                                                   ((IData)(0xfU) 
                                                    + 
                                                    (0x7ffU 
                                                     & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                 | (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0xeU) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0xfU] = (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.input_tokens_flat[
                                                   ((IData)(0x10U) 
                                                    + 
                                                    (0x7ffU 
                                                     & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                 | (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0xfU) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0x10U] = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0x11U) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                  | (vlSelfRef.input_tokens_flat[
                                                     ((IData)(0x10U) 
                                                      + 
                                                      (0x7ffU 
                                                       & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                          >> 5U)))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0x11U] = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0x12U) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                  | (vlSelfRef.input_tokens_flat[
                                                     ((IData)(0x11U) 
                                                      + 
                                                      (0x7ffU 
                                                       & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                          >> 5U)))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0x12U] = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0x13U) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                  | (vlSelfRef.input_tokens_flat[
                                                     ((IData)(0x12U) 
                                                      + 
                                                      (0x7ffU 
                                                       & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                          >> 5U)))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0x13U] = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0x14U) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                  | (vlSelfRef.input_tokens_flat[
                                                     ((IData)(0x13U) 
                                                      + 
                                                      (0x7ffU 
                                                       & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                          >> 5U)))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0x14U] = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0x15U) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                  | (vlSelfRef.input_tokens_flat[
                                                     ((IData)(0x14U) 
                                                      + 
                                                      (0x7ffU 
                                                       & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                          >> 5U)))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0x15U] = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0x16U) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                  | (vlSelfRef.input_tokens_flat[
                                                     ((IData)(0x15U) 
                                                      + 
                                                      (0x7ffU 
                                                       & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                          >> 5U)))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0x16U] = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0x17U) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                  | (vlSelfRef.input_tokens_flat[
                                                     ((IData)(0x16U) 
                                                      + 
                                                      (0x7ffU 
                                                       & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                          >> 5U)))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0x17U] = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0x18U) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                  | (vlSelfRef.input_tokens_flat[
                                                     ((IData)(0x17U) 
                                                      + 
                                                      (0x7ffU 
                                                       & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                          >> 5U)))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0x18U] = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0x19U) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                  | (vlSelfRef.input_tokens_flat[
                                                     ((IData)(0x18U) 
                                                      + 
                                                      (0x7ffU 
                                                       & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                          >> 5U)))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0x19U] = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0x1aU) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                  | (vlSelfRef.input_tokens_flat[
                                                     ((IData)(0x19U) 
                                                      + 
                                                      (0x7ffU 
                                                       & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                          >> 5U)))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0x1aU] = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0x1bU) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                  | (vlSelfRef.input_tokens_flat[
                                                     ((IData)(0x1aU) 
                                                      + 
                                                      (0x7ffU 
                                                       & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                          >> 5U)))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0x1bU] = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0x1cU) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                  | (vlSelfRef.input_tokens_flat[
                                                     ((IData)(0x1bU) 
                                                      + 
                                                      (0x7ffU 
                                                       & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                          >> 5U)))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0x1cU] = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0x1dU) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                  | (vlSelfRef.input_tokens_flat[
                                                     ((IData)(0x1cU) 
                                                      + 
                                                      (0x7ffU 
                                                       & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                          >> 5U)))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0x1dU] = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0x1eU) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                  | (vlSelfRef.input_tokens_flat[
                                                     ((IData)(0x1dU) 
                                                      + 
                                                      (0x7ffU 
                                                       & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                          >> 5U)))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0x1eU] = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0x1fU) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                  | (vlSelfRef.input_tokens_flat[
                                                     ((IData)(0x1eU) 
                                                      + 
                                                      (0x7ffU 
                                                       & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                          >> 5U)))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    self_attention__DOT__input_vec_flat[0x1fU] = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.input_tokens_flat[
                                                    ((IData)(0x20U) 
                                                     + 
                                                     (0x7ffU 
                                                      & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                         >> 5U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))))) 
                                                  | (vlSelfRef.input_tokens_flat[
                                                     ((IData)(0x1fU) 
                                                      + 
                                                      (0x7ffU 
                                                       & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU) 
                                                          >> 5U)))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU))));
    __Vtableidx1 = (((((IData)(vlSelfRef.self_attention__DOT__fsm_start) 
                       << 7U) | ((IData)(vlSelfRef.self_attention__DOT__qkv_done_bit) 
                                 << 6U)) | (((IData)(vlSelfRef.self_attention__DOT__qk_done) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.self_attention__DOT__softmax_done) 
                                               << 4U))) 
                    | (((IData)(vlSelfRef.self_attention__DOT__attn_done) 
                        << 3U) | (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state)));
    vlSelfRef.self_attention__DOT__qkv_start = Vself_attention__ConstPool__TABLE_he925e649_0
        [__Vtableidx1];
    vlSelfRef.self_attention__DOT__qk_start = Vself_attention__ConstPool__TABLE_h79cf329d_0
        [__Vtableidx1];
    vlSelfRef.self_attention__DOT__softmax_start = 
        Vself_attention__ConstPool__TABLE_h67c1a7b9_0
        [__Vtableidx1];
    vlSelfRef.self_attention__DOT__attn_start = Vself_attention__ConstPool__TABLE_h49c34cfa_0
        [__Vtableidx1];
    vlSelfRef.self_attention__DOT__fsm_done = Vself_attention__ConstPool__TABLE_he900d9c0_0
        [__Vtableidx1];
    vlSelfRef.self_attention__DOT__fsm__DOT__next_state 
        = Vself_attention__ConstPool__TABLE_hb8dc07a9_0
        [__Vtableidx1];
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[1U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[2U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[1U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[3U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[1U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[4U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[2U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[5U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[2U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[6U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[3U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[7U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[3U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[8U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[4U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[9U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[4U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0xaU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[5U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0xbU] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[5U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0xcU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[6U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0xdU] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[6U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0xeU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[7U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0xfU] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[7U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x10U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[8U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x11U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[8U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x12U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[9U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x13U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[9U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x14U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0xaU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x15U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0xaU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x16U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0xbU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x17U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0xbU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x18U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0xcU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x19U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0xcU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x1aU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0xdU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x1bU] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0xdU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x1cU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0xeU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x1dU] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0xeU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x1eU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0xfU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x1fU] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0xfU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x20U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x10U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x21U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0x10U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x22U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x11U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x23U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0x11U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x24U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x12U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x25U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0x12U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x26U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x13U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x27U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0x13U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x28U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x14U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x29U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0x14U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x2aU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x15U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x2bU] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0x15U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x2cU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x16U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x2dU] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0x16U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x2eU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x17U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x2fU] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0x17U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x30U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x18U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x31U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0x18U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x32U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x19U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x33U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0x19U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x34U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x1aU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x35U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0x1aU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x36U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x1bU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x37U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0x1bU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x38U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x1cU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x39U] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0x1cU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x3aU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x1dU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x3bU] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0x1dU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x3cU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x1eU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x3dU] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0x1eU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x3eU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__K_flat_in[0x1fU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in[0x3fU] 
        = (vlSelfRef.self_attention__DOT__K_flat_in[0x1fU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[1U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[2U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[1U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[3U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[1U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[4U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[2U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[5U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[2U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[6U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[3U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[7U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[3U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[8U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[4U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[9U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[4U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0xaU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[5U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0xbU] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[5U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0xcU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[6U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0xdU] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[6U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0xeU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[7U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0xfU] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[7U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x10U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[8U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x11U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[8U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x12U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[9U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x13U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[9U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x14U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0xaU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x15U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0xaU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x16U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0xbU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x17U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0xbU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x18U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0xcU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x19U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0xcU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x1aU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0xdU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x1bU] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0xdU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x1cU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0xeU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x1dU] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0xeU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x1eU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0xfU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x1fU] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0xfU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x20U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x10U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x21U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0x10U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x22U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x11U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x23U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0x11U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x24U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x12U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x25U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0x12U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x26U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x13U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x27U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0x13U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x28U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x14U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x29U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0x14U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x2aU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x15U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x2bU] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0x15U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x2cU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x16U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x2dU] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0x16U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x2eU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x17U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x2fU] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0x17U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x30U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x18U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x31U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0x18U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x32U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x19U]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x33U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0x19U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x34U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x1aU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x35U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0x1aU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x36U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x1bU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x37U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0x1bU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x38U] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x1cU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x39U] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0x1cU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x3aU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x1dU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x3bU] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0x1dU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x3cU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x1eU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x3dU] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0x1eU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x3eU] 
        = (0xffffU & vlSelfRef.self_attention__DOT__V_flat_in[0x1fU]);
    vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in[0x3fU] 
        = (vlSelfRef.self_attention__DOT__V_flat_in[0x1fU] 
           >> 0x10U);
    VL_ASSIGNSEL_WW(65536,1024,(0xffffU & VL_SHIFTL_III(16,32,32, (IData)(vlSelfRef.self_attention__DOT__token_counter), 0xaU)), vlSelfRef.self_attention__DOT__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_inst__Q_flat);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[1U] 
        = (self_attention__DOT__input_vec_flat[0U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[2U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[1U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[3U] 
        = (self_attention__DOT__input_vec_flat[1U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[4U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[2U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[5U] 
        = (self_attention__DOT__input_vec_flat[2U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[6U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[3U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[7U] 
        = (self_attention__DOT__input_vec_flat[3U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[8U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[4U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[9U] 
        = (self_attention__DOT__input_vec_flat[4U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0xaU] 
        = (0xffffU & self_attention__DOT__input_vec_flat[5U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0xbU] 
        = (self_attention__DOT__input_vec_flat[5U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0xcU] 
        = (0xffffU & self_attention__DOT__input_vec_flat[6U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0xdU] 
        = (self_attention__DOT__input_vec_flat[6U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0xeU] 
        = (0xffffU & self_attention__DOT__input_vec_flat[7U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0xfU] 
        = (self_attention__DOT__input_vec_flat[7U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x10U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[8U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x11U] 
        = (self_attention__DOT__input_vec_flat[8U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x12U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[9U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x13U] 
        = (self_attention__DOT__input_vec_flat[9U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x14U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0xaU]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x15U] 
        = (self_attention__DOT__input_vec_flat[0xaU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x16U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0xbU]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x17U] 
        = (self_attention__DOT__input_vec_flat[0xbU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x18U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0xcU]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x19U] 
        = (self_attention__DOT__input_vec_flat[0xcU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x1aU] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0xdU]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x1bU] 
        = (self_attention__DOT__input_vec_flat[0xdU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x1cU] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0xeU]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x1dU] 
        = (self_attention__DOT__input_vec_flat[0xeU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x1eU] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0xfU]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x1fU] 
        = (self_attention__DOT__input_vec_flat[0xfU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x20U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0x10U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x21U] 
        = (self_attention__DOT__input_vec_flat[0x10U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x22U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0x11U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x23U] 
        = (self_attention__DOT__input_vec_flat[0x11U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x24U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0x12U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x25U] 
        = (self_attention__DOT__input_vec_flat[0x12U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x26U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0x13U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x27U] 
        = (self_attention__DOT__input_vec_flat[0x13U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x28U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0x14U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x29U] 
        = (self_attention__DOT__input_vec_flat[0x14U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x2aU] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0x15U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x2bU] 
        = (self_attention__DOT__input_vec_flat[0x15U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x2cU] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0x16U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x2dU] 
        = (self_attention__DOT__input_vec_flat[0x16U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x2eU] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0x17U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x2fU] 
        = (self_attention__DOT__input_vec_flat[0x17U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x30U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0x18U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x31U] 
        = (self_attention__DOT__input_vec_flat[0x18U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x32U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0x19U]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x33U] 
        = (self_attention__DOT__input_vec_flat[0x19U] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x34U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0x1aU]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x35U] 
        = (self_attention__DOT__input_vec_flat[0x1aU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x36U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0x1bU]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x37U] 
        = (self_attention__DOT__input_vec_flat[0x1bU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x38U] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0x1cU]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x39U] 
        = (self_attention__DOT__input_vec_flat[0x1cU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x3aU] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0x1dU]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x3bU] 
        = (self_attention__DOT__input_vec_flat[0x1dU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x3cU] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0x1eU]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x3dU] 
        = (self_attention__DOT__input_vec_flat[0x1eU] 
           >> 0x10U);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x3eU] 
        = (0xffffU & self_attention__DOT__input_vec_flat[0x1fU]);
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec[0x3fU] 
        = (self_attention__DOT__input_vec_flat[0x1fU] 
           >> 0x10U);
}

VL_ATTR_COLD void Vself_attention___024root___eval_triggers__stl(Vself_attention___024root* vlSelf);

VL_ATTR_COLD bool Vself_attention___024root___eval_phase__stl(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_phase__stl\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vself_attention___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vself_attention___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vself_attention___024root___dump_triggers__ico(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___dump_triggers__ico\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vself_attention___024root___dump_triggers__act(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___dump_triggers__act\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vself_attention___024root___dump_triggers__nba(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___dump_triggers__nba\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vself_attention___024root___ctor_var_reset(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___ctor_var_reset\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65536, vlSelf->input_tokens_flat);
    vlSelf->done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65536, vlSelf->output_tokens_flat);
    vlSelf->fsm_debug_state = VL_RAND_RESET_I(3);
    vlSelf->debug_state_attn = VL_RAND_RESET_I(3);
    vlSelf->self_attention__DOT__fsm_start = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__fsm_done = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__qkv_start = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__qk_start = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__softmax_start = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__attn_start = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__qk_done = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__softmax_done = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__attn_done = VL_RAND_RESET_I(1);
    vlSelf->self_attention__DOT__qkv_done_bit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->self_attention__DOT__K_flat_in);
    VL_RAND_RESET_W(1024, vlSelf->self_attention__DOT__V_flat_in);
    VL_RAND_RESET_W(1024, vlSelf->self_attention__DOT__K_flat_out);
    VL_RAND_RESET_W(1024, vlSelf->self_attention__DOT__V_flat_out);
    VL_RAND_RESET_W(65536, vlSelf->self_attention__DOT__Q_flat);
    VL_RAND_RESET_W(65536, vlSelf->self_attention__DOT__scores_flat);
    VL_RAND_RESET_W(65536, vlSelf->self_attention__DOT__softmax_scores_flat);
    vlSelf->self_attention__DOT__token_counter = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(1024, vlSelf->self_attention__DOT____Vcellout__qkv_inst__Q_flat);
    vlSelf->self_attention__DOT__fsm__DOT__curr_state = VL_RAND_RESET_I(3);
    vlSelf->self_attention__DOT__fsm__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->self_attention__DOT__qkv_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qkv_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qkv_inst__DOT__mult_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_inst__DOT__mult_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_inst__DOT__mult_v = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_inst__DOT__acc_q = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_inst__DOT__acc_k = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qkv_inst__DOT__acc_v = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_inst__DOT__input_vec[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_inst__DOT__Q[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_inst__DOT__K[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_inst__DOT__V[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__qkv_inst__DOT__W[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->self_attention__DOT__kv_cache_inst__DOT__K_mem[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->self_attention__DOT__kv_cache_inst__DOT__V_mem[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__kv_cache_inst__DOT__K_in[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__kv_cache_inst__DOT__V_in[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__kv_cache_inst__DOT__K_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->self_attention__DOT__kv_cache_inst__DOT__V_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->self_attention__DOT__qk_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->self_attention__DOT__qk_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qk_inst__DOT__k = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__qk_inst__DOT__acc = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qk_inst__DOT__product = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__qk_inst__DOT__Q_val = VL_RAND_RESET_I(16);
    vlSelf->self_attention__DOT__qk_inst__DOT__K_val = VL_RAND_RESET_I(16);
    vlSelf->self_attention__DOT__softmax_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->self_attention__DOT__softmax_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__softmax_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__softmax_inst__DOT__sum_idx = VL_RAND_RESET_I(12);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->self_attention__DOT__softmax_inst__DOT__scores[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->self_attention__DOT__softmax_inst__DOT__exp_scores[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->self_attention__DOT__softmax_inst__DOT__softmax_scores[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->self_attention__DOT__softmax_inst__DOT__sum_exp = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__softmax_inst__DOT__recip_sum = VL_RAND_RESET_I(16);
    vlSelf->self_attention__DOT__softmax_inst__DOT__product = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__attn_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->self_attention__DOT__attn_inst__DOT__i = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__attn_inst__DOT__j = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__attn_inst__DOT__k = VL_RAND_RESET_I(6);
    vlSelf->self_attention__DOT__attn_inst__DOT__softmax_val_reg = VL_RAND_RESET_I(16);
    vlSelf->self_attention__DOT__attn_inst__DOT__V_val_reg = VL_RAND_RESET_I(16);
    vlSelf->self_attention__DOT__attn_inst__DOT__product_reg = VL_RAND_RESET_I(32);
    vlSelf->self_attention__DOT__attn_inst__DOT__acc = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
