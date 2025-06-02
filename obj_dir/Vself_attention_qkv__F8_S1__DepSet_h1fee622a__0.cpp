// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vself_attention.h for the primary calling header

#include "Vself_attention__pch.h"
#include "Vself_attention__Syms.h"
#include "Vself_attention_qkv__F8_S1.h"

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[__Vilp4];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[__Vilp5];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[__Vilp6];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x40U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x40U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x40U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x80U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x80U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x80U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xc0U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xc0U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xc0U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x100U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x100U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x100U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x140U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x140U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x140U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x180U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x180U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x180U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x1c0U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x1c0U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x1c0U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x200U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x200U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x200U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x240U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x240U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x240U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x280U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x280U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x280U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x2c0U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x2c0U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x2c0U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x300U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x300U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x300U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x340U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x340U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x340U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x380U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x380U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x380U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x3c0U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x3c0U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x3c0U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x400U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x400U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x400U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x440U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x440U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x440U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x480U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x480U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x480U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x4c0U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x4c0U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x4c0U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x500U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x500U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x500U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x540U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x540U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x540U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x580U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x580U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x580U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x5c0U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x5c0U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x5c0U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x600U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x600U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x600U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x640U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x640U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x640U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x680U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x680U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x680U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x6c0U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x6c0U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x6c0U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x700U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x700U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x700U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x740U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x740U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x740U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x780U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x780U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x780U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x7c0U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x7c0U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x7c0U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x800U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x800U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x800U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x840U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x840U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x840U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x880U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x880U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x880U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x8c0U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x8c0U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x8c0U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x900U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x900U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x900U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x940U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x940U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x940U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x980U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x980U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x980U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0x9c0U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0x9c0U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0x9c0U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xa00U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xa00U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xa00U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xa40U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xa40U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xa40U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xa80U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xa80U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xa80U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xac0U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xac0U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xac0U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xb00U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xb00U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xb00U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xb40U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xb40U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xb40U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xb80U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xb80U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xb80U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xbc0U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xbc0U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xbc0U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xc00U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xc00U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xc00U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xc40U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xc40U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xc40U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xc80U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xc80U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xc80U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xcc0U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xcc0U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xcc0U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xd00U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xd00U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xd00U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xd40U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xd40U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xd40U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xd80U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xd80U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xd80U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xdc0U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xdc0U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xdc0U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xe00U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xe00U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xe00U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xe40U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xe40U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xe40U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xe80U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xe80U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xe80U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xec0U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xec0U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xec0U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xf00U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xf00U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xf00U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xf40U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xf40U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xf40U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xf80U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xf80U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xf80U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}

VL_INLINE_OPT void Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__0(Vself_attention_qkv__F8_S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vself_attention_qkv__F8_S1___nba_sequent__TOP__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((~ (IData)(vlSymsp->TOP.rst)) 
                      & (IData)(vlSymsp->TOP.self_attention__DOT__qkv_start));
    if (vlSymsp->TOP.rst) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp3] = 0U;
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
    } else if (vlSymsp->TOP.self_attention__DOT__qkv_start) {
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0x3fU)) {
            vlSelfRef.__PVT__Q_reg[__Vilp4] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp4 + (IData)(0xfc0U))];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0x3fU)) {
            vlSelfRef.__PVT__V_reg[__Vilp5] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp5 + (IData)(0xfc0U))];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0x3fU)) {
            vlSelfRef.__PVT__K_reg[__Vilp6] = vlSymsp->TOP.input_tokens_flat[
                (__Vilp6 + (IData)(0xfc0U))];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
    }
}
