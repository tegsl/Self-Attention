// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vself_attention.h for the primary calling header

#include "Vself_attention__pch.h"
#include "Vself_attention___024root.h"

void Vself_attention___024root___ico_sequent__TOP__0(Vself_attention___024root* vlSelf);
void Vself_attention___024root___ico_sequent__TOP__1(Vself_attention___024root* vlSelf);

void Vself_attention___024root___eval_ico(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_ico\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vself_attention___024root___ico_sequent__TOP__0(vlSelf);
        Vself_attention___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vself_attention___024root___ico_sequent__TOP__0(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___ico_sequent__TOP__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__input_vec[__Vilp1] 
            = vlSelfRef.input_tokens_flat[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__input_vec[__Vilp2] 
            = vlSelfRef.input_tokens_flat[(__Vilp2 
                                           + (IData)(0x40U))];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__input_vec[__Vilp3] 
            = vlSelfRef.input_tokens_flat[(__Vilp3 
                                           + (IData)(0x80U))];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__input_vec[__Vilp4] 
            = vlSelfRef.input_tokens_flat[(__Vilp4 
                                           + (IData)(0xc0U))];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__input_vec[__Vilp5] 
            = vlSelfRef.input_tokens_flat[(__Vilp5 
                                           + (IData)(0x100U))];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__input_vec[__Vilp6] 
            = vlSelfRef.input_tokens_flat[(__Vilp6 
                                           + (IData)(0x140U))];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    IData/*31:0*/ __Vilp7;
    __Vilp7 = 0U;
    while ((__Vilp7 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__input_vec[__Vilp7] 
            = vlSelfRef.input_tokens_flat[(__Vilp7 
                                           + (IData)(0x180U))];
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    IData/*31:0*/ __Vilp8;
    __Vilp8 = 0U;
    while ((__Vilp8 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__input_vec[__Vilp8] 
            = vlSelfRef.input_tokens_flat[(__Vilp8 
                                           + (IData)(0x1c0U))];
        __Vilp8 = ((IData)(1U) + __Vilp8);
    }
    IData/*31:0*/ __Vilp9;
    __Vilp9 = 0U;
    while ((__Vilp9 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__input_vec[__Vilp9] 
            = vlSelfRef.input_tokens_flat[(__Vilp9 
                                           + (IData)(0x200U))];
        __Vilp9 = ((IData)(1U) + __Vilp9);
    }
    IData/*31:0*/ __Vilp10;
    __Vilp10 = 0U;
    while ((__Vilp10 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__input_vec[__Vilp10] 
            = vlSelfRef.input_tokens_flat[(__Vilp10 
                                           + (IData)(0x240U))];
        __Vilp10 = ((IData)(1U) + __Vilp10);
    }
    IData/*31:0*/ __Vilp11;
    __Vilp11 = 0U;
    while ((__Vilp11 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__input_vec[__Vilp11] 
            = vlSelfRef.input_tokens_flat[(__Vilp11 
                                           + (IData)(0x280U))];
        __Vilp11 = ((IData)(1U) + __Vilp11);
    }
    IData/*31:0*/ __Vilp12;
    __Vilp12 = 0U;
    while ((__Vilp12 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__input_vec[__Vilp12] 
            = vlSelfRef.input_tokens_flat[(__Vilp12 
                                           + (IData)(0x2c0U))];
        __Vilp12 = ((IData)(1U) + __Vilp12);
    }
    IData/*31:0*/ __Vilp13;
    __Vilp13 = 0U;
    while ((__Vilp13 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__input_vec[__Vilp13] 
            = vlSelfRef.input_tokens_flat[(__Vilp13 
                                           + (IData)(0x300U))];
        __Vilp13 = ((IData)(1U) + __Vilp13);
    }
    IData/*31:0*/ __Vilp14;
    __Vilp14 = 0U;
    while ((__Vilp14 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__input_vec[__Vilp14] 
            = vlSelfRef.input_tokens_flat[(__Vilp14 
                                           + (IData)(0x340U))];
        __Vilp14 = ((IData)(1U) + __Vilp14);
    }
    IData/*31:0*/ __Vilp15;
    __Vilp15 = 0U;
    while ((__Vilp15 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__input_vec[__Vilp15] 
            = vlSelfRef.input_tokens_flat[(__Vilp15 
                                           + (IData)(0x380U))];
        __Vilp15 = ((IData)(1U) + __Vilp15);
    }
    IData/*31:0*/ __Vilp16;
    __Vilp16 = 0U;
    while ((__Vilp16 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__input_vec[__Vilp16] 
            = vlSelfRef.input_tokens_flat[(__Vilp16 
                                           + (IData)(0x3c0U))];
        __Vilp16 = ((IData)(1U) + __Vilp16);
    }
    IData/*31:0*/ __Vilp17;
    __Vilp17 = 0U;
    while ((__Vilp17 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__input_vec[__Vilp17] 
            = vlSelfRef.input_tokens_flat[(__Vilp17 
                                           + (IData)(0x400U))];
        __Vilp17 = ((IData)(1U) + __Vilp17);
    }
    IData/*31:0*/ __Vilp18;
    __Vilp18 = 0U;
    while ((__Vilp18 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__input_vec[__Vilp18] 
            = vlSelfRef.input_tokens_flat[(__Vilp18 
                                           + (IData)(0x440U))];
        __Vilp18 = ((IData)(1U) + __Vilp18);
    }
    IData/*31:0*/ __Vilp19;
    __Vilp19 = 0U;
    while ((__Vilp19 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__input_vec[__Vilp19] 
            = vlSelfRef.input_tokens_flat[(__Vilp19 
                                           + (IData)(0x480U))];
        __Vilp19 = ((IData)(1U) + __Vilp19);
    }
    IData/*31:0*/ __Vilp20;
    __Vilp20 = 0U;
    while ((__Vilp20 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__input_vec[__Vilp20] 
            = vlSelfRef.input_tokens_flat[(__Vilp20 
                                           + (IData)(0x4c0U))];
        __Vilp20 = ((IData)(1U) + __Vilp20);
    }
    IData/*31:0*/ __Vilp21;
    __Vilp21 = 0U;
    while ((__Vilp21 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__input_vec[__Vilp21] 
            = vlSelfRef.input_tokens_flat[(__Vilp21 
                                           + (IData)(0x500U))];
        __Vilp21 = ((IData)(1U) + __Vilp21);
    }
    IData/*31:0*/ __Vilp22;
    __Vilp22 = 0U;
    while ((__Vilp22 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__input_vec[__Vilp22] 
            = vlSelfRef.input_tokens_flat[(__Vilp22 
                                           + (IData)(0x540U))];
        __Vilp22 = ((IData)(1U) + __Vilp22);
    }
    IData/*31:0*/ __Vilp23;
    __Vilp23 = 0U;
    while ((__Vilp23 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__input_vec[__Vilp23] 
            = vlSelfRef.input_tokens_flat[(__Vilp23 
                                           + (IData)(0x580U))];
        __Vilp23 = ((IData)(1U) + __Vilp23);
    }
    IData/*31:0*/ __Vilp24;
    __Vilp24 = 0U;
    while ((__Vilp24 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__input_vec[__Vilp24] 
            = vlSelfRef.input_tokens_flat[(__Vilp24 
                                           + (IData)(0x5c0U))];
        __Vilp24 = ((IData)(1U) + __Vilp24);
    }
    IData/*31:0*/ __Vilp25;
    __Vilp25 = 0U;
    while ((__Vilp25 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__input_vec[__Vilp25] 
            = vlSelfRef.input_tokens_flat[(__Vilp25 
                                           + (IData)(0x600U))];
        __Vilp25 = ((IData)(1U) + __Vilp25);
    }
    IData/*31:0*/ __Vilp26;
    __Vilp26 = 0U;
    while ((__Vilp26 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__input_vec[__Vilp26] 
            = vlSelfRef.input_tokens_flat[(__Vilp26 
                                           + (IData)(0x640U))];
        __Vilp26 = ((IData)(1U) + __Vilp26);
    }
    IData/*31:0*/ __Vilp27;
    __Vilp27 = 0U;
    while ((__Vilp27 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__input_vec[__Vilp27] 
            = vlSelfRef.input_tokens_flat[(__Vilp27 
                                           + (IData)(0x680U))];
        __Vilp27 = ((IData)(1U) + __Vilp27);
    }
    IData/*31:0*/ __Vilp28;
    __Vilp28 = 0U;
    while ((__Vilp28 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__input_vec[__Vilp28] 
            = vlSelfRef.input_tokens_flat[(__Vilp28 
                                           + (IData)(0x6c0U))];
        __Vilp28 = ((IData)(1U) + __Vilp28);
    }
    IData/*31:0*/ __Vilp29;
    __Vilp29 = 0U;
    while ((__Vilp29 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__input_vec[__Vilp29] 
            = vlSelfRef.input_tokens_flat[(__Vilp29 
                                           + (IData)(0x700U))];
        __Vilp29 = ((IData)(1U) + __Vilp29);
    }
    IData/*31:0*/ __Vilp30;
    __Vilp30 = 0U;
    while ((__Vilp30 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__input_vec[__Vilp30] 
            = vlSelfRef.input_tokens_flat[(__Vilp30 
                                           + (IData)(0x740U))];
        __Vilp30 = ((IData)(1U) + __Vilp30);
    }
    IData/*31:0*/ __Vilp31;
    __Vilp31 = 0U;
    while ((__Vilp31 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__input_vec[__Vilp31] 
            = vlSelfRef.input_tokens_flat[(__Vilp31 
                                           + (IData)(0x780U))];
        __Vilp31 = ((IData)(1U) + __Vilp31);
    }
    IData/*31:0*/ __Vilp32;
    __Vilp32 = 0U;
    while ((__Vilp32 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__input_vec[__Vilp32] 
            = vlSelfRef.input_tokens_flat[(__Vilp32 
                                           + (IData)(0x7c0U))];
        __Vilp32 = ((IData)(1U) + __Vilp32);
    }
    IData/*31:0*/ __Vilp33;
    __Vilp33 = 0U;
    while ((__Vilp33 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__input_vec[__Vilp33] 
            = vlSelfRef.input_tokens_flat[(__Vilp33 
                                           + (IData)(0x800U))];
        __Vilp33 = ((IData)(1U) + __Vilp33);
    }
    IData/*31:0*/ __Vilp34;
    __Vilp34 = 0U;
    while ((__Vilp34 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__input_vec[__Vilp34] 
            = vlSelfRef.input_tokens_flat[(__Vilp34 
                                           + (IData)(0x840U))];
        __Vilp34 = ((IData)(1U) + __Vilp34);
    }
    IData/*31:0*/ __Vilp35;
    __Vilp35 = 0U;
    while ((__Vilp35 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__input_vec[__Vilp35] 
            = vlSelfRef.input_tokens_flat[(__Vilp35 
                                           + (IData)(0x880U))];
        __Vilp35 = ((IData)(1U) + __Vilp35);
    }
    IData/*31:0*/ __Vilp36;
    __Vilp36 = 0U;
    while ((__Vilp36 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__input_vec[__Vilp36] 
            = vlSelfRef.input_tokens_flat[(__Vilp36 
                                           + (IData)(0x8c0U))];
        __Vilp36 = ((IData)(1U) + __Vilp36);
    }
    IData/*31:0*/ __Vilp37;
    __Vilp37 = 0U;
    while ((__Vilp37 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__input_vec[__Vilp37] 
            = vlSelfRef.input_tokens_flat[(__Vilp37 
                                           + (IData)(0x900U))];
        __Vilp37 = ((IData)(1U) + __Vilp37);
    }
    IData/*31:0*/ __Vilp38;
    __Vilp38 = 0U;
    while ((__Vilp38 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__input_vec[__Vilp38] 
            = vlSelfRef.input_tokens_flat[(__Vilp38 
                                           + (IData)(0x940U))];
        __Vilp38 = ((IData)(1U) + __Vilp38);
    }
    IData/*31:0*/ __Vilp39;
    __Vilp39 = 0U;
    while ((__Vilp39 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__input_vec[__Vilp39] 
            = vlSelfRef.input_tokens_flat[(__Vilp39 
                                           + (IData)(0x980U))];
        __Vilp39 = ((IData)(1U) + __Vilp39);
    }
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__input_vec[0U] 
        = vlSelfRef.input_tokens_flat[0x9c0U];
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__input_vec[1U] 
        = vlSelfRef.input_tokens_flat[0x9c1U];
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__input_vec[2U] 
        = vlSelfRef.input_tokens_flat[0x9c2U];
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__input_vec[3U] 
        = vlSelfRef.input_tokens_flat[0x9c3U];
}

VL_INLINE_OPT void Vself_attention___024root___ico_sequent__TOP__1(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___ico_sequent__TOP__1\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 4U;
    while ((__Vilp1 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__input_vec[__Vilp1] 
            = vlSelfRef.input_tokens_flat[(__Vilp1 
                                           + (IData)(0x9c0U))];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__input_vec[__Vilp2] 
            = vlSelfRef.input_tokens_flat[(__Vilp2 
                                           + (IData)(0xa00U))];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__input_vec[__Vilp3] 
            = vlSelfRef.input_tokens_flat[(__Vilp3 
                                           + (IData)(0xa40U))];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__input_vec[__Vilp4] 
            = vlSelfRef.input_tokens_flat[(__Vilp4 
                                           + (IData)(0xa80U))];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__input_vec[__Vilp5] 
            = vlSelfRef.input_tokens_flat[(__Vilp5 
                                           + (IData)(0xac0U))];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__input_vec[__Vilp6] 
            = vlSelfRef.input_tokens_flat[(__Vilp6 
                                           + (IData)(0xb00U))];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    IData/*31:0*/ __Vilp7;
    __Vilp7 = 0U;
    while ((__Vilp7 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__input_vec[__Vilp7] 
            = vlSelfRef.input_tokens_flat[(__Vilp7 
                                           + (IData)(0xb40U))];
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    IData/*31:0*/ __Vilp8;
    __Vilp8 = 0U;
    while ((__Vilp8 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__input_vec[__Vilp8] 
            = vlSelfRef.input_tokens_flat[(__Vilp8 
                                           + (IData)(0xb80U))];
        __Vilp8 = ((IData)(1U) + __Vilp8);
    }
    IData/*31:0*/ __Vilp9;
    __Vilp9 = 0U;
    while ((__Vilp9 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__input_vec[__Vilp9] 
            = vlSelfRef.input_tokens_flat[(__Vilp9 
                                           + (IData)(0xbc0U))];
        __Vilp9 = ((IData)(1U) + __Vilp9);
    }
    IData/*31:0*/ __Vilp10;
    __Vilp10 = 0U;
    while ((__Vilp10 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__input_vec[__Vilp10] 
            = vlSelfRef.input_tokens_flat[(__Vilp10 
                                           + (IData)(0xc00U))];
        __Vilp10 = ((IData)(1U) + __Vilp10);
    }
    IData/*31:0*/ __Vilp11;
    __Vilp11 = 0U;
    while ((__Vilp11 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__input_vec[__Vilp11] 
            = vlSelfRef.input_tokens_flat[(__Vilp11 
                                           + (IData)(0xc40U))];
        __Vilp11 = ((IData)(1U) + __Vilp11);
    }
    IData/*31:0*/ __Vilp12;
    __Vilp12 = 0U;
    while ((__Vilp12 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__input_vec[__Vilp12] 
            = vlSelfRef.input_tokens_flat[(__Vilp12 
                                           + (IData)(0xc80U))];
        __Vilp12 = ((IData)(1U) + __Vilp12);
    }
    IData/*31:0*/ __Vilp13;
    __Vilp13 = 0U;
    while ((__Vilp13 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__input_vec[__Vilp13] 
            = vlSelfRef.input_tokens_flat[(__Vilp13 
                                           + (IData)(0xcc0U))];
        __Vilp13 = ((IData)(1U) + __Vilp13);
    }
    IData/*31:0*/ __Vilp14;
    __Vilp14 = 0U;
    while ((__Vilp14 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__input_vec[__Vilp14] 
            = vlSelfRef.input_tokens_flat[(__Vilp14 
                                           + (IData)(0xd00U))];
        __Vilp14 = ((IData)(1U) + __Vilp14);
    }
    IData/*31:0*/ __Vilp15;
    __Vilp15 = 0U;
    while ((__Vilp15 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__input_vec[__Vilp15] 
            = vlSelfRef.input_tokens_flat[(__Vilp15 
                                           + (IData)(0xd40U))];
        __Vilp15 = ((IData)(1U) + __Vilp15);
    }
    IData/*31:0*/ __Vilp16;
    __Vilp16 = 0U;
    while ((__Vilp16 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__input_vec[__Vilp16] 
            = vlSelfRef.input_tokens_flat[(__Vilp16 
                                           + (IData)(0xd80U))];
        __Vilp16 = ((IData)(1U) + __Vilp16);
    }
    IData/*31:0*/ __Vilp17;
    __Vilp17 = 0U;
    while ((__Vilp17 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__input_vec[__Vilp17] 
            = vlSelfRef.input_tokens_flat[(__Vilp17 
                                           + (IData)(0xdc0U))];
        __Vilp17 = ((IData)(1U) + __Vilp17);
    }
    IData/*31:0*/ __Vilp18;
    __Vilp18 = 0U;
    while ((__Vilp18 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__input_vec[__Vilp18] 
            = vlSelfRef.input_tokens_flat[(__Vilp18 
                                           + (IData)(0xe00U))];
        __Vilp18 = ((IData)(1U) + __Vilp18);
    }
    IData/*31:0*/ __Vilp19;
    __Vilp19 = 0U;
    while ((__Vilp19 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__input_vec[__Vilp19] 
            = vlSelfRef.input_tokens_flat[(__Vilp19 
                                           + (IData)(0xe40U))];
        __Vilp19 = ((IData)(1U) + __Vilp19);
    }
    IData/*31:0*/ __Vilp20;
    __Vilp20 = 0U;
    while ((__Vilp20 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__input_vec[__Vilp20] 
            = vlSelfRef.input_tokens_flat[(__Vilp20 
                                           + (IData)(0xe80U))];
        __Vilp20 = ((IData)(1U) + __Vilp20);
    }
    IData/*31:0*/ __Vilp21;
    __Vilp21 = 0U;
    while ((__Vilp21 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__input_vec[__Vilp21] 
            = vlSelfRef.input_tokens_flat[(__Vilp21 
                                           + (IData)(0xec0U))];
        __Vilp21 = ((IData)(1U) + __Vilp21);
    }
    IData/*31:0*/ __Vilp22;
    __Vilp22 = 0U;
    while ((__Vilp22 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__input_vec[__Vilp22] 
            = vlSelfRef.input_tokens_flat[(__Vilp22 
                                           + (IData)(0xf00U))];
        __Vilp22 = ((IData)(1U) + __Vilp22);
    }
    IData/*31:0*/ __Vilp23;
    __Vilp23 = 0U;
    while ((__Vilp23 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__input_vec[__Vilp23] 
            = vlSelfRef.input_tokens_flat[(__Vilp23 
                                           + (IData)(0xf40U))];
        __Vilp23 = ((IData)(1U) + __Vilp23);
    }
    IData/*31:0*/ __Vilp24;
    __Vilp24 = 0U;
    while ((__Vilp24 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__input_vec[__Vilp24] 
            = vlSelfRef.input_tokens_flat[(__Vilp24 
                                           + (IData)(0xf80U))];
        __Vilp24 = ((IData)(1U) + __Vilp24);
    }
    IData/*31:0*/ __Vilp25;
    __Vilp25 = 0U;
    while ((__Vilp25 <= 0x3fU)) {
        vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__input_vec[__Vilp25] 
            = vlSelfRef.input_tokens_flat[(__Vilp25 
                                           + (IData)(0xfc0U))];
        __Vilp25 = ((IData)(1U) + __Vilp25);
    }
}

void Vself_attention___024root___eval_triggers__ico(Vself_attention___024root* vlSelf);

bool Vself_attention___024root___eval_phase__ico(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_phase__ico\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vself_attention___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vself_attention___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vself_attention___024root___eval_act(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_act\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vself_attention___024root___nba_sequent__TOP__0(Vself_attention___024root* vlSelf);
void Vself_attention___024root___nba_sequent__TOP__1(Vself_attention___024root* vlSelf);

void Vself_attention___024root___eval_nba(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_nba\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vself_attention___024root___nba_sequent__TOP__0(vlSelf);
        Vself_attention___024root___nba_sequent__TOP__1(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vself_attention__ConstPool__TABLE_h3e43a941_0;
extern const VlUnpacked<CData/*4:0*/, 128> Vself_attention__ConstPool__TABLE_h8a3e8535_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vself_attention__ConstPool__TABLE_hc95da36e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vself_attention__ConstPool__TABLE_h4112f3dd_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vself_attention__ConstPool__TABLE_hdd29bceb_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vself_attention__ConstPool__TABLE_hc3d77660_0;

VL_INLINE_OPT void Vself_attention___024root___nba_sequent__TOP__0(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___nba_sequent__TOP__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m;
    self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m = 0;
    IData/*31:0*/ self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m;
    self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vdly__self_attention__DOT__qk_inst__DOT__state;
    __Vdly__self_attention__DOT__qk_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qk_inst__DOT__i;
    __Vdly__self_attention__DOT__qk_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qk_inst__DOT__j;
    __Vdly__self_attention__DOT__qk_inst__DOT__j = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qk_inst__DOT__k;
    __Vdly__self_attention__DOT__qk_inst__DOT__k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qk_inst__DOT__accum;
    __Vdly__self_attention__DOT__qk_inst__DOT__accum = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qk_inst__DOT__Q_val;
    __Vdly__self_attention__DOT__qk_inst__DOT__Q_val = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qk_inst__DOT__K_val;
    __Vdly__self_attention__DOT__qk_inst__DOT__K_val = 0;
    QData/*63:0*/ __Vdly__self_attention__DOT__qk_inst__DOT__product;
    __Vdly__self_attention__DOT__qk_inst__DOT__product = 0;
    CData/*2:0*/ __Vdly__self_attention__DOT__softmax_inst__DOT__state;
    __Vdly__self_attention__DOT__softmax_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__softmax_inst__DOT__i;
    __Vdly__self_attention__DOT__softmax_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__softmax_inst__DOT__j;
    __Vdly__self_attention__DOT__softmax_inst__DOT__j = 0;
    QData/*61:0*/ __Vdly__self_attention__DOT__softmax_inst__DOT__max_score;
    __Vdly__self_attention__DOT__softmax_inst__DOT__max_score = 0;
    IData/*21:0*/ __Vdly__self_attention__DOT__softmax_inst__DOT__sum_exp;
    __Vdly__self_attention__DOT__softmax_inst__DOT__sum_exp = 0;
    CData/*2:0*/ __Vdly__self_attention__DOT__attn_inst__DOT__state;
    __Vdly__self_attention__DOT__attn_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__attn_inst__DOT__i;
    __Vdly__self_attention__DOT__attn_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__attn_inst__DOT__j;
    __Vdly__self_attention__DOT__attn_inst__DOT__j = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__attn_inst__DOT__k;
    __Vdly__self_attention__DOT__attn_inst__DOT__k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__attn_inst__DOT__acc;
    __Vdly__self_attention__DOT__attn_inst__DOT__acc = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_q = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_v = 0;
    IData/*31:0*/ __VdlyVal__self_attention__DOT__qk_inst__DOT__scores__v0;
    __VdlyVal__self_attention__DOT__qk_inst__DOT__scores__v0 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__qk_inst__DOT__scores__v0;
    __VdlyDim0__self_attention__DOT__qk_inst__DOT__scores__v0 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__qk_inst__DOT__scores__v0;
    __VdlyDim1__self_attention__DOT__qk_inst__DOT__scores__v0 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__qk_inst__DOT__scores__v0;
    __VdlySet__self_attention__DOT__qk_inst__DOT__scores__v0 = 0;
    IData/*31:0*/ __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v0;
    __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v0 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v0;
    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v0 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v0;
    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v0 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v0;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v1;
    __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v1 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v1;
    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v1 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v1;
    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v1 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v1;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v1 = 0;
    IData/*31:0*/ __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v2;
    __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v2 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v2;
    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v2 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v2;
    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v2 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v2;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v2 = 0;
    IData/*31:0*/ __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v3;
    __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v3 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v3;
    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v3 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v3;
    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v3 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v3;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v3 = 0;
    IData/*31:0*/ __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v4;
    __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v4 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v4;
    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v4 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v4;
    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v4 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v4;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v4 = 0;
    IData/*31:0*/ __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v5;
    __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v5 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v5;
    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v5 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v5;
    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v5 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v5;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v5 = 0;
    IData/*31:0*/ __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v6;
    __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v6 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v6;
    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v6 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v6;
    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v6 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v6;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v6 = 0;
    IData/*31:0*/ __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v7;
    __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v7 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v7;
    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v7 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v7;
    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v7 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v7;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v7 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v0;
    __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v0 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v0;
    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v0 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v0;
    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v0 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v0;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v0 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v1;
    __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v1 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v1;
    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v1 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v1;
    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v1 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v1;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v1 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v2;
    __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v2 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v2;
    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v2 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v2;
    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v2 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v2;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v2 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v3;
    __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v3 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v3;
    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v3 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v3;
    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v3 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v3;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v3 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v4;
    __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v4 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v4;
    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v4 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v4;
    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v4 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v4;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v4 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v5;
    __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v5 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v5;
    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v5 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v5;
    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v5 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v5;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v5 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v6;
    __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v6 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v6;
    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v6 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v6;
    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v6 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v6;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v6 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v7;
    __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v7 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v7;
    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v7 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v7;
    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v7 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v7;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v7 = 0;
    VlWide<128>/*4095:0*/ __Vtemp_9;
    VlWide<192>/*6143:0*/ __Vtemp_10;
    VlWide<256>/*8191:0*/ __Vtemp_11;
    VlWide<320>/*10239:0*/ __Vtemp_12;
    VlWide<384>/*12287:0*/ __Vtemp_13;
    VlWide<448>/*14335:0*/ __Vtemp_14;
    VlWide<512>/*16383:0*/ __Vtemp_15;
    VlWide<576>/*18431:0*/ __Vtemp_16;
    VlWide<640>/*20479:0*/ __Vtemp_17;
    VlWide<704>/*22527:0*/ __Vtemp_18;
    VlWide<768>/*24575:0*/ __Vtemp_19;
    VlWide<832>/*26623:0*/ __Vtemp_20;
    VlWide<896>/*28671:0*/ __Vtemp_21;
    VlWide<960>/*30719:0*/ __Vtemp_22;
    VlWide<1024>/*32767:0*/ __Vtemp_23;
    VlWide<1088>/*34815:0*/ __Vtemp_24;
    VlWide<1152>/*36863:0*/ __Vtemp_25;
    VlWide<1216>/*38911:0*/ __Vtemp_26;
    VlWide<1280>/*40959:0*/ __Vtemp_27;
    VlWide<1344>/*43007:0*/ __Vtemp_28;
    VlWide<1408>/*45055:0*/ __Vtemp_29;
    VlWide<1472>/*47103:0*/ __Vtemp_30;
    VlWide<1536>/*49151:0*/ __Vtemp_31;
    VlWide<1600>/*51199:0*/ __Vtemp_32;
    VlWide<1664>/*53247:0*/ __Vtemp_33;
    VlWide<1728>/*55295:0*/ __Vtemp_34;
    VlWide<1792>/*57343:0*/ __Vtemp_35;
    VlWide<1856>/*59391:0*/ __Vtemp_36;
    VlWide<1920>/*61439:0*/ __Vtemp_37;
    VlWide<1984>/*63487:0*/ __Vtemp_38;
    VlWide<2048>/*65535:0*/ __Vtemp_39;
    VlWide<2112>/*67583:0*/ __Vtemp_40;
    VlWide<2176>/*69631:0*/ __Vtemp_41;
    VlWide<2240>/*71679:0*/ __Vtemp_42;
    VlWide<2304>/*73727:0*/ __Vtemp_43;
    VlWide<2368>/*75775:0*/ __Vtemp_44;
    VlWide<2432>/*77823:0*/ __Vtemp_45;
    VlWide<2496>/*79871:0*/ __Vtemp_46;
    VlWide<2560>/*81919:0*/ __Vtemp_47;
    VlWide<2624>/*83967:0*/ __Vtemp_48;
    VlWide<2688>/*86015:0*/ __Vtemp_49;
    VlWide<2752>/*88063:0*/ __Vtemp_50;
    VlWide<2816>/*90111:0*/ __Vtemp_51;
    VlWide<2880>/*92159:0*/ __Vtemp_52;
    VlWide<2944>/*94207:0*/ __Vtemp_53;
    VlWide<3008>/*96255:0*/ __Vtemp_54;
    VlWide<3072>/*98303:0*/ __Vtemp_55;
    VlWide<3136>/*100351:0*/ __Vtemp_56;
    VlWide<3200>/*102399:0*/ __Vtemp_57;
    VlWide<3264>/*104447:0*/ __Vtemp_58;
    VlWide<3328>/*106495:0*/ __Vtemp_59;
    VlWide<3392>/*108543:0*/ __Vtemp_60;
    VlWide<3456>/*110591:0*/ __Vtemp_61;
    VlWide<3520>/*112639:0*/ __Vtemp_62;
    VlWide<3584>/*114687:0*/ __Vtemp_63;
    VlWide<3648>/*116735:0*/ __Vtemp_64;
    VlWide<3712>/*118783:0*/ __Vtemp_65;
    VlWide<3776>/*120831:0*/ __Vtemp_66;
    VlWide<3840>/*122879:0*/ __Vtemp_67;
    VlWide<3904>/*124927:0*/ __Vtemp_68;
    VlWide<3968>/*126975:0*/ __Vtemp_69;
    VlWide<4032>/*129023:0*/ __Vtemp_70;
    VlWide<4096>/*131071:0*/ __Vtemp_71;
    // Body
    __Vdly__self_attention__DOT__attn_inst__DOT__acc 
        = vlSelfRef.self_attention__DOT__attn_inst__DOT__acc;
    __Vdly__self_attention__DOT__attn_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__attn_inst__DOT__state;
    __Vdly__self_attention__DOT__attn_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__attn_inst__DOT__i;
    __Vdly__self_attention__DOT__attn_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__attn_inst__DOT__j;
    __Vdly__self_attention__DOT__attn_inst__DOT__k 
        = vlSelfRef.self_attention__DOT__attn_inst__DOT__k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j;
    __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_q;
    __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_k;
    __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_v;
    __Vdly__self_attention__DOT__softmax_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__state;
    __Vdly__self_attention__DOT__softmax_inst__DOT__sum_exp 
        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__sum_exp;
    __Vdly__self_attention__DOT__softmax_inst__DOT__max_score 
        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score;
    __Vdly__self_attention__DOT__softmax_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
    __Vdly__self_attention__DOT__softmax_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__j;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v0 = 0U;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v1 = 0U;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v2 = 0U;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v3 = 0U;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v4 = 0U;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v5 = 0U;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v6 = 0U;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v7 = 0U;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v0 = 0U;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v1 = 0U;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v2 = 0U;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v3 = 0U;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v4 = 0U;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v5 = 0U;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v6 = 0U;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v7 = 0U;
    __Vdly__self_attention__DOT__qk_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qk_inst__DOT__state;
    __Vdly__self_attention__DOT__qk_inst__DOT__i = vlSelfRef.self_attention__DOT__qk_inst__DOT__i;
    __Vdly__self_attention__DOT__qk_inst__DOT__j = vlSelfRef.self_attention__DOT__qk_inst__DOT__j;
    __Vdly__self_attention__DOT__qk_inst__DOT__k = vlSelfRef.self_attention__DOT__qk_inst__DOT__k;
    __Vdly__self_attention__DOT__qk_inst__DOT__accum 
        = vlSelfRef.self_attention__DOT__qk_inst__DOT__accum;
    __Vdly__self_attention__DOT__qk_inst__DOT__Q_val 
        = vlSelfRef.self_attention__DOT__qk_inst__DOT__Q_val;
    __Vdly__self_attention__DOT__qk_inst__DOT__K_val 
        = vlSelfRef.self_attention__DOT__qk_inst__DOT__K_val;
    __Vdly__self_attention__DOT__qk_inst__DOT__product 
        = vlSelfRef.self_attention__DOT__qk_inst__DOT__product;
    __VdlySet__self_attention__DOT__qk_inst__DOT__scores__v0 = 0U;
    if (vlSelfRef.rst) {
        vlSelfRef.done = 0U;
        __Vdly__self_attention__DOT__attn_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__attn_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__attn_inst__DOT__j = 0U;
        __Vdly__self_attention__DOT__attn_inst__DOT__k = 0U;
        __Vdly__self_attention__DOT__attn_inst__DOT__acc = 0U;
        vlSelfRef.self_attention__DOT__attn_done = 0U;
        __Vdly__self_attention__DOT__softmax_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__softmax_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__softmax_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT__softmax_done = 0U;
        __Vdly__self_attention__DOT__softmax_inst__DOT__max_score = 0x2000000000000000ULL;
        __Vdly__self_attention__DOT__softmax_inst__DOT__sum_exp = 0U;
        __Vdly__self_attention__DOT__qk_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qk_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qk_inst__DOT__j = 0U;
        __Vdly__self_attention__DOT__qk_inst__DOT__k = 0U;
        __Vdly__self_attention__DOT__qk_inst__DOT__accum = 0U;
        vlSelfRef.self_attention__DOT__qk_done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__63__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__62__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__61__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__60__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__59__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__58__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__57__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__56__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__55__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__54__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__53__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__52__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__51__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__50__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__49__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__48__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__47__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__46__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__45__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__44__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__43__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__42__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__41__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__40__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__39__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__38__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__37__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__36__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__35__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__34__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__33__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__32__KET____DOT__qkv_inst__done = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__31__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__30__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__29__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__28__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__27__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__26__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__25__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__24__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__23__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__22__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__21__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__20__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__19__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__18__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__17__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__16__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__15__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__14__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__13__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__12__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__11__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__10__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__9__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__8__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__7__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__6__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__5__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__4__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__3__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__2__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__done = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__state = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j = 0U;
        vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__done = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.start)))) {
            if (vlSelfRef.self_attention__DOT__fsm_done) {
                vlSelfRef.done = 1U;
            }
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__attn_done = 0U;
            if (vlSelfRef.self_attention__DOT__attn_start) {
                __Vdly__self_attention__DOT__attn_inst__DOT__i = 0U;
                __Vdly__self_attention__DOT__attn_inst__DOT__j = 0U;
                __Vdly__self_attention__DOT__attn_inst__DOT__k = 0U;
                __Vdly__self_attention__DOT__attn_inst__DOT__acc = 0U;
                __Vdly__self_attention__DOT__attn_inst__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__state))) {
            __Vdly__self_attention__DOT__attn_inst__DOT__acc = 0U;
            __Vdly__self_attention__DOT__attn_inst__DOT__state = 2U;
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__state))) {
            __Vdly__self_attention__DOT__attn_inst__DOT__acc 
                = ((IData)(VL_EXTENDS_QI(64,32, vlSelfRef.self_attention__DOT__attn_inst__DOT__acc)) 
                   + (IData)(VL_SHIFTRS_QQI(64,64,32, vlSelfRef.self_attention__DOT__attn_inst__DOT__product, 8U)));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j))) {
                __Vdly__self_attention__DOT__attn_inst__DOT__state = 3U;
            } else {
                __Vdly__self_attention__DOT__attn_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j)));
            }
        } else if ((3U == (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__state))) {
            VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_SHIFTL_III(17,32,32, 
                                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i), 6U) 
                                                                 + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k)), 5U)), vlSelfRef.output_tokens_flat, vlSelfRef.self_attention__DOT__attn_inst__DOT__acc);
            __Vdly__self_attention__DOT__attn_inst__DOT__j = 0U;
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k))) {
                __Vdly__self_attention__DOT__attn_inst__DOT__k = 0U;
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__attn_inst__DOT__state = 4U;
                } else {
                    __Vdly__self_attention__DOT__attn_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i)));
                    __Vdly__self_attention__DOT__attn_inst__DOT__state = 1U;
                }
            } else {
                __Vdly__self_attention__DOT__attn_inst__DOT__k 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k)));
                __Vdly__self_attention__DOT__attn_inst__DOT__state = 1U;
            }
        } else if ((4U == (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__attn_done = 1U;
            __Vdly__self_attention__DOT__attn_inst__DOT__state = 0U;
        }
        if ((4U & (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__state))) {
                __Vdly__self_attention__DOT__softmax_inst__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__state))) {
                vlSelfRef.self_attention__DOT__softmax_done = 1U;
                __Vdly__self_attention__DOT__softmax_inst__DOT__state = 0U;
            } else {
                __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v0 
                    = vlSelfRef.self_attention__DOT__softmax_inst__DOT__norm_vals_parallel
                    [0U];
                __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v0 
                    = vlSelfRef.self_attention__DOT__softmax_inst__DOT__j;
                __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v0 
                    = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
                __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v0 = 1U;
                if ((0x40U > ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v1 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__norm_vals_parallel
                        [1U];
                    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v1 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
                    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v1 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
                    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v1 = 1U;
                }
                if ((0x40U > ((IData)(2U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v2 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__norm_vals_parallel
                        [2U];
                    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v2 
                        = (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
                    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v2 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
                    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v2 = 1U;
                }
                if ((0x40U > ((IData)(3U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v3 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__norm_vals_parallel
                        [3U];
                    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v3 
                        = (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
                    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v3 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
                    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v3 = 1U;
                }
                if ((0x40U > ((IData)(4U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v4 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__norm_vals_parallel
                        [4U];
                    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v4 
                        = (0x3fU & ((IData)(4U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
                    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v4 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
                    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v4 = 1U;
                }
                if ((0x40U > ((IData)(5U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v5 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__norm_vals_parallel
                        [5U];
                    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v5 
                        = (0x3fU & ((IData)(5U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
                    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v5 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
                    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v5 = 1U;
                }
                if ((0x40U > ((IData)(6U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v6 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__norm_vals_parallel
                        [6U];
                    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v6 
                        = (0x3fU & ((IData)(6U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
                    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v6 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
                    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v6 = 1U;
                }
                if ((0x40U > ((IData)(7U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v7 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__norm_vals_parallel
                        [7U];
                    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v7 
                        = (0x3fU & ((IData)(7U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
                    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v7 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
                    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v7 = 1U;
                }
                if ((0x40U <= ((IData)(8U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    __Vdly__self_attention__DOT__softmax_inst__DOT__j = 0U;
                    if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i))) {
                        __Vdly__self_attention__DOT__softmax_inst__DOT__state = 5U;
                    } else {
                        __Vdly__self_attention__DOT__softmax_inst__DOT__i 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i)));
                        __Vdly__self_attention__DOT__softmax_inst__DOT__max_score = 0x2000000000000000ULL;
                        __Vdly__self_attention__DOT__softmax_inst__DOT__sum_exp = 0U;
                        __Vdly__self_attention__DOT__softmax_inst__DOT__state = 1U;
                    }
                } else {
                    __Vdly__self_attention__DOT__softmax_inst__DOT__j 
                        = (0x3fU & ((IData)(8U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
                }
            }
        } else if ((2U & (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__state))) {
                vlSelfRef.self_attention__DOT__softmax_inst__DOT__unnamedblk8__DOT__temp_sum 
                    = vlSelfRef.self_attention__DOT__softmax_inst__DOT__sum_exp;
                vlSelfRef.self_attention__DOT__softmax_inst__DOT__unnamedblk8__DOT__temp_sum 
                    = (0x3fffffU & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__unnamedblk8__DOT__temp_sum 
                                    + vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_scores
                                    [vlSelfRef.self_attention__DOT__softmax_inst__DOT__i]
                                    [vlSelfRef.self_attention__DOT__softmax_inst__DOT__j]));
                if ((0x40U > ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    vlSelfRef.self_attention__DOT__softmax_inst__DOT__unnamedblk8__DOT__temp_sum 
                        = (0x3fffffU & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__unnamedblk8__DOT__temp_sum 
                                        + vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_scores
                                        [vlSelfRef.self_attention__DOT__softmax_inst__DOT__i]
                                        [(0x3fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))]));
                }
                if ((0x40U > ((IData)(2U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    vlSelfRef.self_attention__DOT__softmax_inst__DOT__unnamedblk8__DOT__temp_sum 
                        = (0x3fffffU & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__unnamedblk8__DOT__temp_sum 
                                        + vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_scores
                                        [vlSelfRef.self_attention__DOT__softmax_inst__DOT__i]
                                        [(0x3fU & ((IData)(2U) 
                                                   + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))]));
                }
                if ((0x40U > ((IData)(3U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    vlSelfRef.self_attention__DOT__softmax_inst__DOT__unnamedblk8__DOT__temp_sum 
                        = (0x3fffffU & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__unnamedblk8__DOT__temp_sum 
                                        + vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_scores
                                        [vlSelfRef.self_attention__DOT__softmax_inst__DOT__i]
                                        [(0x3fU & ((IData)(3U) 
                                                   + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))]));
                }
                if ((0x40U > ((IData)(4U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    vlSelfRef.self_attention__DOT__softmax_inst__DOT__unnamedblk8__DOT__temp_sum 
                        = (0x3fffffU & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__unnamedblk8__DOT__temp_sum 
                                        + vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_scores
                                        [vlSelfRef.self_attention__DOT__softmax_inst__DOT__i]
                                        [(0x3fU & ((IData)(4U) 
                                                   + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))]));
                }
                if ((0x40U > ((IData)(5U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    vlSelfRef.self_attention__DOT__softmax_inst__DOT__unnamedblk8__DOT__temp_sum 
                        = (0x3fffffU & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__unnamedblk8__DOT__temp_sum 
                                        + vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_scores
                                        [vlSelfRef.self_attention__DOT__softmax_inst__DOT__i]
                                        [(0x3fU & ((IData)(5U) 
                                                   + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))]));
                }
                if ((0x40U > ((IData)(6U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    vlSelfRef.self_attention__DOT__softmax_inst__DOT__unnamedblk8__DOT__temp_sum 
                        = (0x3fffffU & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__unnamedblk8__DOT__temp_sum 
                                        + vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_scores
                                        [vlSelfRef.self_attention__DOT__softmax_inst__DOT__i]
                                        [(0x3fU & ((IData)(6U) 
                                                   + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))]));
                }
                if ((0x40U > ((IData)(7U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    vlSelfRef.self_attention__DOT__softmax_inst__DOT__unnamedblk8__DOT__temp_sum 
                        = (0x3fffffU & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__unnamedblk8__DOT__temp_sum 
                                        + vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_scores
                                        [vlSelfRef.self_attention__DOT__softmax_inst__DOT__i]
                                        [(0x3fU & ((IData)(7U) 
                                                   + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))]));
                }
                __Vdly__self_attention__DOT__softmax_inst__DOT__sum_exp 
                    = vlSelfRef.self_attention__DOT__softmax_inst__DOT__unnamedblk8__DOT__temp_sum;
                if ((0x40U <= ((IData)(8U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    __Vdly__self_attention__DOT__softmax_inst__DOT__j = 0U;
                    __Vdly__self_attention__DOT__softmax_inst__DOT__state = 4U;
                } else {
                    __Vdly__self_attention__DOT__softmax_inst__DOT__j 
                        = (0x3fU & ((IData)(8U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
                }
            } else {
                __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v0 
                    = vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel
                    [0U];
                __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v0 
                    = vlSelfRef.self_attention__DOT__softmax_inst__DOT__j;
                __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v0 
                    = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
                __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v0 = 1U;
                if ((0x40U > ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v1 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel
                        [1U];
                    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v1 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
                    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v1 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
                    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v1 = 1U;
                }
                if ((0x40U > ((IData)(2U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v2 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel
                        [2U];
                    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v2 
                        = (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
                    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v2 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
                    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v2 = 1U;
                }
                if ((0x40U > ((IData)(3U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v3 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel
                        [3U];
                    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v3 
                        = (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
                    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v3 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
                    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v3 = 1U;
                }
                if ((0x40U > ((IData)(4U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v4 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel
                        [4U];
                    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v4 
                        = (0x3fU & ((IData)(4U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
                    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v4 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
                    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v4 = 1U;
                }
                if ((0x40U > ((IData)(5U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v5 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel
                        [5U];
                    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v5 
                        = (0x3fU & ((IData)(5U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
                    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v5 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
                    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v5 = 1U;
                }
                if ((0x40U > ((IData)(6U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v6 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel
                        [6U];
                    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v6 
                        = (0x3fU & ((IData)(6U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
                    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v6 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
                    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v6 = 1U;
                }
                if ((0x40U > ((IData)(7U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v7 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel
                        [7U];
                    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v7 
                        = (0x3fU & ((IData)(7U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
                    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v7 
                        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
                    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v7 = 1U;
                }
                if ((0x40U <= ((IData)(8U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                    __Vdly__self_attention__DOT__softmax_inst__DOT__j = 0U;
                    __Vdly__self_attention__DOT__softmax_inst__DOT__sum_exp = 0U;
                    __Vdly__self_attention__DOT__softmax_inst__DOT__state = 3U;
                } else {
                    __Vdly__self_attention__DOT__softmax_inst__DOT__j 
                        = (0x3fU & ((IData)(8U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__state))) {
            if (VL_GTS_IQQ(62, vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                           [0U], vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score)) {
                __Vdly__self_attention__DOT__softmax_inst__DOT__max_score 
                    = vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                    [0U];
            }
            if (((0x40U > ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))) 
                 & VL_GTS_IQQ(62, vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                              [1U], vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score))) {
                __Vdly__self_attention__DOT__softmax_inst__DOT__max_score 
                    = vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                    [1U];
            }
            if (((0x40U > ((IData)(2U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))) 
                 & VL_GTS_IQQ(62, vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                              [2U], vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score))) {
                __Vdly__self_attention__DOT__softmax_inst__DOT__max_score 
                    = vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                    [2U];
            }
            if (((0x40U > ((IData)(3U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))) 
                 & VL_GTS_IQQ(62, vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                              [3U], vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score))) {
                __Vdly__self_attention__DOT__softmax_inst__DOT__max_score 
                    = vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                    [3U];
            }
            if (((0x40U > ((IData)(4U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))) 
                 & VL_GTS_IQQ(62, vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                              [4U], vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score))) {
                __Vdly__self_attention__DOT__softmax_inst__DOT__max_score 
                    = vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                    [4U];
            }
            if (((0x40U > ((IData)(5U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))) 
                 & VL_GTS_IQQ(62, vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                              [5U], vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score))) {
                __Vdly__self_attention__DOT__softmax_inst__DOT__max_score 
                    = vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                    [5U];
            }
            if (((0x40U > ((IData)(6U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))) 
                 & VL_GTS_IQQ(62, vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                              [6U], vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score))) {
                __Vdly__self_attention__DOT__softmax_inst__DOT__max_score 
                    = vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                    [6U];
            }
            if (((0x40U > ((IData)(7U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))) 
                 & VL_GTS_IQQ(62, vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                              [7U], vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score))) {
                __Vdly__self_attention__DOT__softmax_inst__DOT__max_score 
                    = vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                    [7U];
            }
            if ((0x40U <= ((IData)(8U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) {
                __Vdly__self_attention__DOT__softmax_inst__DOT__j = 0U;
                __Vdly__self_attention__DOT__softmax_inst__DOT__state = 2U;
            } else {
                __Vdly__self_attention__DOT__softmax_inst__DOT__j 
                    = (0x3fU & ((IData)(8U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
            }
        } else if (vlSelfRef.self_attention__DOT__softmax_start) {
            __Vdly__self_attention__DOT__softmax_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__softmax_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__softmax_inst__DOT__max_score = 0x2000000000000000ULL;
            __Vdly__self_attention__DOT__softmax_inst__DOT__sum_exp = 0U;
            vlSelfRef.self_attention__DOT__softmax_done = 0U;
            __Vdly__self_attention__DOT__softmax_inst__DOT__state = 1U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qk_done = 0U;
            if (vlSelfRef.self_attention__DOT__qk_start) {
                __Vdly__self_attention__DOT__qk_inst__DOT__i = 0U;
                __Vdly__self_attention__DOT__qk_inst__DOT__j = 0U;
                __Vdly__self_attention__DOT__qk_inst__DOT__k = 0U;
                __Vdly__self_attention__DOT__qk_inst__DOT__accum = 0U;
                __Vdly__self_attention__DOT__qk_inst__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__state))) {
            __Vdly__self_attention__DOT__qk_inst__DOT__Q_val 
                = (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__i), 6U) 
                                                   + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k)), 5U)))
                     ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                                + (0x1ffffU 
                                                   & VL_SHIFTL_III(17,32,32, 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k)), 5U))) 
                                               >> 5U)] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & VL_SHIFTL_III(17,32,32, 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k)), 5U))))) 
                   | (vlSelfRef.Q_flat[(0xfffU & (VL_SHIFTL_III(17,32,32, 
                                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__i), 6U) 
                                                                 + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k)), 5U) 
                                                  >> 5U))] 
                      >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__i), 6U) 
                                                 + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k)), 5U))));
            __Vdly__self_attention__DOT__qk_inst__DOT__state = 3U;
            VL_CONCAT_WWW(4096,2048,2048, __Vtemp_9, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__63__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__62__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(6144,4096,2048, __Vtemp_10, __Vtemp_9, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__61__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(8192,6144,2048, __Vtemp_11, __Vtemp_10, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__60__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(10240,8192,2048, __Vtemp_12, __Vtemp_11, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__59__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(12288,10240,2048, __Vtemp_13, __Vtemp_12, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__58__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(14336,12288,2048, __Vtemp_14, __Vtemp_13, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__57__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(16384,14336,2048, __Vtemp_15, __Vtemp_14, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__56__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(18432,16384,2048, __Vtemp_16, __Vtemp_15, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__55__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(20480,18432,2048, __Vtemp_17, __Vtemp_16, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__54__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(22528,20480,2048, __Vtemp_18, __Vtemp_17, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__53__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(24576,22528,2048, __Vtemp_19, __Vtemp_18, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__52__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(26624,24576,2048, __Vtemp_20, __Vtemp_19, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__51__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(28672,26624,2048, __Vtemp_21, __Vtemp_20, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__50__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(30720,28672,2048, __Vtemp_22, __Vtemp_21, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__49__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(32768,30720,2048, __Vtemp_23, __Vtemp_22, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__48__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(34816,32768,2048, __Vtemp_24, __Vtemp_23, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__47__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(36864,34816,2048, __Vtemp_25, __Vtemp_24, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__46__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(38912,36864,2048, __Vtemp_26, __Vtemp_25, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__45__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(40960,38912,2048, __Vtemp_27, __Vtemp_26, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__44__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(43008,40960,2048, __Vtemp_28, __Vtemp_27, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__43__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(45056,43008,2048, __Vtemp_29, __Vtemp_28, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__42__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(47104,45056,2048, __Vtemp_30, __Vtemp_29, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__41__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(49152,47104,2048, __Vtemp_31, __Vtemp_30, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__40__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(51200,49152,2048, __Vtemp_32, __Vtemp_31, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__39__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(53248,51200,2048, __Vtemp_33, __Vtemp_32, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__38__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(55296,53248,2048, __Vtemp_34, __Vtemp_33, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__37__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(57344,55296,2048, __Vtemp_35, __Vtemp_34, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__36__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(59392,57344,2048, __Vtemp_36, __Vtemp_35, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__35__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(61440,59392,2048, __Vtemp_37, __Vtemp_36, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__34__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(63488,61440,2048, __Vtemp_38, __Vtemp_37, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__33__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(65536,63488,2048, __Vtemp_39, __Vtemp_38, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__32__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(67584,65536,2048, __Vtemp_40, __Vtemp_39, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__31__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(69632,67584,2048, __Vtemp_41, __Vtemp_40, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__30__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(71680,69632,2048, __Vtemp_42, __Vtemp_41, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__29__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(73728,71680,2048, __Vtemp_43, __Vtemp_42, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__28__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(75776,73728,2048, __Vtemp_44, __Vtemp_43, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__27__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(77824,75776,2048, __Vtemp_45, __Vtemp_44, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__26__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(79872,77824,2048, __Vtemp_46, __Vtemp_45, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__25__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(81920,79872,2048, __Vtemp_47, __Vtemp_46, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__24__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(83968,81920,2048, __Vtemp_48, __Vtemp_47, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__23__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(86016,83968,2048, __Vtemp_49, __Vtemp_48, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__22__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(88064,86016,2048, __Vtemp_50, __Vtemp_49, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__21__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(90112,88064,2048, __Vtemp_51, __Vtemp_50, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__20__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(92160,90112,2048, __Vtemp_52, __Vtemp_51, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__19__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(94208,92160,2048, __Vtemp_53, __Vtemp_52, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__18__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(96256,94208,2048, __Vtemp_54, __Vtemp_53, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__17__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(98304,96256,2048, __Vtemp_55, __Vtemp_54, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__16__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(100352,98304,2048, __Vtemp_56, __Vtemp_55, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__15__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(102400,100352,2048, __Vtemp_57, __Vtemp_56, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__14__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(104448,102400,2048, __Vtemp_58, __Vtemp_57, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__13__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(106496,104448,2048, __Vtemp_59, __Vtemp_58, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__12__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(108544,106496,2048, __Vtemp_60, __Vtemp_59, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__11__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(110592,108544,2048, __Vtemp_61, __Vtemp_60, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__10__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(112640,110592,2048, __Vtemp_62, __Vtemp_61, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__9__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(114688,112640,2048, __Vtemp_63, __Vtemp_62, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__8__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(116736,114688,2048, __Vtemp_64, __Vtemp_63, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__7__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(118784,116736,2048, __Vtemp_65, __Vtemp_64, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__6__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(120832,118784,2048, __Vtemp_66, __Vtemp_65, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__5__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(122880,120832,2048, __Vtemp_67, __Vtemp_66, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__4__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(124928,122880,2048, __Vtemp_68, __Vtemp_67, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__3__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(126976,124928,2048, __Vtemp_69, __Vtemp_68, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__2__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(129024,126976,2048, __Vtemp_70, __Vtemp_69, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__K_flat);
            VL_CONCAT_WWW(131072,129024,2048, __Vtemp_71, __Vtemp_70, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__K_flat);
            __Vdly__self_attention__DOT__qk_inst__DOT__K_val 
                = (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__j), 6U) 
                                                   + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k)), 5U)))
                     ? 0U : (__Vtemp_71[(((IData)(0x1fU) 
                                          + (0x1ffffU 
                                             & VL_SHIFTL_III(17,32,32, 
                                                             (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__j), 6U) 
                                                              + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k)), 5U))) 
                                         >> 5U)] << 
                             ((IData)(0x20U) - (0x1fU 
                                                & VL_SHIFTL_III(17,32,32, 
                                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__j), 6U) 
                                                                 + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k)), 5U))))) 
                   | (__Vtemp_71[(0xfffU & (VL_SHIFTL_III(17,32,32, 
                                                          (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__j), 6U) 
                                                           + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k)), 5U) 
                                            >> 5U))] 
                      >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                                (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__j), 6U) 
                                                 + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k)), 5U))));
        } else if ((3U == (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__state))) {
            __Vdly__self_attention__DOT__qk_inst__DOT__product 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.self_attention__DOT__qk_inst__DOT__Q_val), 
                              VL_EXTENDS_QI(64,32, vlSelfRef.self_attention__DOT__qk_inst__DOT__K_val));
            __Vdly__self_attention__DOT__qk_inst__DOT__state = 4U;
        } else if ((4U == (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__state))) {
            __Vdly__self_attention__DOT__qk_inst__DOT__accum 
                = ((IData)(VL_EXTENDS_QI(64,32, vlSelfRef.self_attention__DOT__qk_inst__DOT__accum)) 
                   + (IData)(VL_SHIFTRS_QQI(64,64,32, vlSelfRef.self_attention__DOT__qk_inst__DOT__product, 8U)));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k))) {
                __Vdly__self_attention__DOT__qk_inst__DOT__state = 5U;
            } else {
                __Vdly__self_attention__DOT__qk_inst__DOT__k 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k)));
                __Vdly__self_attention__DOT__qk_inst__DOT__state = 1U;
            }
        } else if ((5U == (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qk_inst__DOT__scaled_acc 
                = VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qk_inst__DOT__accum, 4U);
            __VdlyVal__self_attention__DOT__qk_inst__DOT__scores__v0 
                = vlSelfRef.self_attention__DOT__qk_inst__DOT__scaled_acc;
            __VdlyDim0__self_attention__DOT__qk_inst__DOT__scores__v0 
                = vlSelfRef.self_attention__DOT__qk_inst__DOT__j;
            __VdlyDim1__self_attention__DOT__qk_inst__DOT__scores__v0 
                = vlSelfRef.self_attention__DOT__qk_inst__DOT__i;
            __VdlySet__self_attention__DOT__qk_inst__DOT__scores__v0 = 1U;
            __Vdly__self_attention__DOT__qk_inst__DOT__k = 0U;
            __Vdly__self_attention__DOT__qk_inst__DOT__accum = 0U;
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qk_inst__DOT__j = 0U;
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qk_inst__DOT__state = 0U;
                    vlSelfRef.self_attention__DOT__qk_done = 1U;
                } else {
                    __Vdly__self_attention__DOT__qk_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__i)));
                    __Vdly__self_attention__DOT__qk_inst__DOT__state = 1U;
                }
            } else {
                __Vdly__self_attention__DOT__qk_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__j)));
                __Vdly__self_attention__DOT__qk_inst__DOT__state = 1U;
            }
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__63__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__63__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__63__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__63__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__63__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__62__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__62__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__62__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__62__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__62__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__61__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__61__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__61__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__61__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__61__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__60__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__60__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__60__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__60__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__60__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__59__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__59__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__59__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__59__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__59__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__58__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__58__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__58__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__58__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__58__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__57__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__57__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__57__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__57__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__57__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__56__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__56__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__56__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__56__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__56__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__55__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__55__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__55__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__55__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__55__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__54__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__54__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__54__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__54__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__54__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__53__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__53__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__53__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__53__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__53__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__52__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__52__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__52__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__52__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__52__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__51__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__51__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__51__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__51__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__51__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__50__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__50__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__50__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__50__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__50__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__49__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__49__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__49__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__49__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__49__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__48__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__48__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__48__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__48__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__48__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__47__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__47__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__47__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__47__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__47__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__46__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__46__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__46__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__46__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__46__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__45__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__45__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__45__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__45__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__45__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__44__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__44__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__44__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__44__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__44__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__43__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__43__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__43__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__43__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__43__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__42__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__42__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__42__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__42__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__42__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__41__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__41__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__41__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__41__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__41__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__40__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__40__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__40__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__40__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__40__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__39__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__39__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__39__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__39__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__39__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__38__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__38__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__38__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__38__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__38__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__37__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__37__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__37__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__37__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__37__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__36__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__36__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__36__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__36__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__36__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__35__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__35__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__35__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__35__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__35__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__34__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__34__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__34__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__34__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__34__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__33__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__33__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__33__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__33__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__33__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__32__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_q;
                __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_k;
                __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__32__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__32__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__32__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__32__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__31__KET____DOT__qkv_inst__done = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j = 0U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j))) {
                __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_v;
            }
            __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__31__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_q);
                __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__31__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__31__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__31__KET____DOT__qkv_inst__done = 1U;
            __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__30__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__30__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__30__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__30__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__30__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__29__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__29__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__29__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__29__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__29__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__28__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__28__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__28__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__28__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__28__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__27__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__27__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__27__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__27__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__27__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__26__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__26__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__26__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__26__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__26__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__25__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__25__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__25__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__25__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__25__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__24__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__24__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__24__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__24__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__24__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__23__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__23__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__23__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__23__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__23__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__22__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__22__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__22__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__22__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__22__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__21__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__21__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__21__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__21__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__21__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__20__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__20__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__20__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__20__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__20__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__19__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__19__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__19__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__19__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__19__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__18__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__18__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__18__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__18__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__18__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__17__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__17__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__17__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__17__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__17__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__16__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__16__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__16__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__16__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__16__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__15__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__15__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__15__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__15__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__15__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__14__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__14__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__14__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__14__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__14__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__13__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__13__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__13__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__13__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__13__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__12__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__12__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__12__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__12__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__12__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__11__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__11__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__11__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__11__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__11__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__10__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__10__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__10__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__10__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__10__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__9__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__9__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__9__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__9__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__9__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__8__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__8__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__8__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__8__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__8__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__7__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__7__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__7__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__7__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__7__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__6__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__6__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__6__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__6__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__6__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__5__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__5__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__5__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__5__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__5__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__4__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__4__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__4__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__4__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__4__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__3__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__3__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__3__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__3__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__3__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__2__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__2__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__2__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__2__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__2__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__done = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__i = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j = 0U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (3U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + VL_MODDIV_III(32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j), (IData)(3U))), 8U);
            vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv 
                = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                           + (1U & (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j))), 8U);
            if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j))) {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_q = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_k = 0U;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_v = 0U;
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_q 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_q;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_k 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_k;
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_v 
                    = vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_v;
            }
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_q 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_q 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wq), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_k 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_k 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wk), 8U));
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_v 
                = (vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_v 
                   + VL_SHIFTRS_III(32,32,32, VL_MULS_III(32, 
                                                          vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__input_vec
                                                          [vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j], vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__unnamedblk2__DOT__wv), 8U));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j))) {
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_q);
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j = 0U;
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__K_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_k);
                VL_ASSIGNSEL_WI(2048,32,(0x7ffU & VL_SHIFTL_III(11,32,32, (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__i), 5U)), vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_v);
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__i))) {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__state = 2U;
                } else {
                    vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__i)));
                }
            } else {
                vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__done = 1U;
            vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__state = 0U;
        }
    }
    vlSelfRef.self_attention__DOT__fsm_start = ((1U 
                                                 & (~ (IData)(vlSelfRef.rst))) 
                                                && (IData)(vlSelfRef.start));
    __Vtableidx1 = (((IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state) 
                     << 4U) | (((IData)(vlSelfRef.self_attention__DOT__fsm__DOT__next_state) 
                                << 1U) | (IData)(vlSelfRef.rst)));
    vlSelfRef.self_attention__DOT__fsm__DOT__curr_state 
        = Vself_attention__ConstPool__TABLE_h3e43a941_0
        [__Vtableidx1];
    if ((2U & Vself_attention__ConstPool__TABLE_h8a3e8535_0
         [__Vtableidx1])) {
        vlSelfRef.self_attention__DOT__fsm__DOT__issued_qkv 
            = Vself_attention__ConstPool__TABLE_hc95da36e_0
            [__Vtableidx1];
    }
    if ((4U & Vself_attention__ConstPool__TABLE_h8a3e8535_0
         [__Vtableidx1])) {
        vlSelfRef.self_attention__DOT__fsm__DOT__issued_qk 
            = Vself_attention__ConstPool__TABLE_h4112f3dd_0
            [__Vtableidx1];
    }
    if ((8U & Vself_attention__ConstPool__TABLE_h8a3e8535_0
         [__Vtableidx1])) {
        vlSelfRef.self_attention__DOT__fsm__DOT__issued_softmax 
            = Vself_attention__ConstPool__TABLE_hdd29bceb_0
            [__Vtableidx1];
    }
    if ((0x10U & Vself_attention__ConstPool__TABLE_h8a3e8535_0
         [__Vtableidx1])) {
        vlSelfRef.self_attention__DOT__fsm__DOT__issued_attn 
            = Vself_attention__ConstPool__TABLE_hc3d77660_0
            [__Vtableidx1];
    }
    vlSelfRef.self_attention__DOT__attn_inst__DOT__acc 
        = __Vdly__self_attention__DOT__attn_inst__DOT__acc;
    vlSelfRef.self_attention__DOT__attn_inst__DOT__state 
        = __Vdly__self_attention__DOT__attn_inst__DOT__state;
    vlSelfRef.self_attention__DOT__attn_inst__DOT__i 
        = __Vdly__self_attention__DOT__attn_inst__DOT__i;
    vlSelfRef.self_attention__DOT__attn_inst__DOT__j 
        = __Vdly__self_attention__DOT__attn_inst__DOT__j;
    vlSelfRef.self_attention__DOT__attn_inst__DOT__k 
        = __Vdly__self_attention__DOT__attn_inst__DOT__k;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__state 
        = __Vdly__self_attention__DOT__softmax_inst__DOT__state;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__sum_exp 
        = __Vdly__self_attention__DOT__softmax_inst__DOT__sum_exp;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score 
        = __Vdly__self_attention__DOT__softmax_inst__DOT__max_score;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__i 
        = __Vdly__self_attention__DOT__softmax_inst__DOT__i;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__j 
        = __Vdly__self_attention__DOT__softmax_inst__DOT__j;
    if (__VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v0) {
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_scores[__VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v0][__VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v0] 
            = __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v0;
    }
    if (__VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v1) {
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_scores[__VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v1][__VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v1] 
            = __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v1;
    }
    if (__VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v2) {
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_scores[__VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v2][__VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v2] 
            = __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v2;
    }
    if (__VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v3) {
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_scores[__VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v3][__VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v3] 
            = __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v3;
    }
    if (__VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v4) {
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_scores[__VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v4][__VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v4] 
            = __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v4;
    }
    if (__VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v5) {
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_scores[__VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v5][__VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v5] 
            = __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v5;
    }
    if (__VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v6) {
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_scores[__VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v6][__VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v6] 
            = __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v6;
    }
    if (__VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v7) {
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_scores[__VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v7][__VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v7] 
            = __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v7;
    }
    if (__VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v0) {
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out[__VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v0][__VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v0] 
            = __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v0;
    }
    if (__VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v1) {
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out[__VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v1][__VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v1] 
            = __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v1;
    }
    if (__VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v2) {
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out[__VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v2][__VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v2] 
            = __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v2;
    }
    if (__VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v3) {
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out[__VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v3][__VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v3] 
            = __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v3;
    }
    if (__VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v4) {
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out[__VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v4][__VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v4] 
            = __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v4;
    }
    if (__VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v5) {
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out[__VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v5][__VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v5] 
            = __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v5;
    }
    if (__VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v6) {
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out[__VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v6][__VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v6] 
            = __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v6;
    }
    if (__VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_out__v7) {
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out[__VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_out__v7][__VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_out__v7] 
            = __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_out__v7;
    }
    vlSelfRef.self_attention__DOT__qk_inst__DOT__state 
        = __Vdly__self_attention__DOT__qk_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qk_inst__DOT__i 
        = __Vdly__self_attention__DOT__qk_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qk_inst__DOT__j 
        = __Vdly__self_attention__DOT__qk_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qk_inst__DOT__k 
        = __Vdly__self_attention__DOT__qk_inst__DOT__k;
    vlSelfRef.self_attention__DOT__qk_inst__DOT__accum 
        = __Vdly__self_attention__DOT__qk_inst__DOT__accum;
    vlSelfRef.self_attention__DOT__qk_inst__DOT__Q_val 
        = __Vdly__self_attention__DOT__qk_inst__DOT__Q_val;
    vlSelfRef.self_attention__DOT__qk_inst__DOT__K_val 
        = __Vdly__self_attention__DOT__qk_inst__DOT__K_val;
    vlSelfRef.self_attention__DOT__qk_inst__DOT__product 
        = __Vdly__self_attention__DOT__qk_inst__DOT__product;
    if (__VdlySet__self_attention__DOT__qk_inst__DOT__scores__v0) {
        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores[__VdlyDim1__self_attention__DOT__qk_inst__DOT__scores__v0][__VdlyDim0__self_attention__DOT__qk_inst__DOT__scores__v0] 
            = __VdlyVal__self_attention__DOT__qk_inst__DOT__scores__v0;
    }
    vlSelfRef.self_attention__DOT__fsm_done = 0U;
    vlSelfRef.fsm_debug_state = vlSelfRef.self_attention__DOT__fsm__DOT__curr_state;
    vlSelfRef.self_attention__DOT__attn_start = 0U;
    vlSelfRef.self_attention__DOT__softmax_start = 0U;
    vlSelfRef.self_attention__DOT__qk_start = 0U;
    if ((0U != (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
        if ((1U != (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
            if ((2U != (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
                if ((3U != (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
                    if ((4U != (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
                        if ((5U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
                            vlSelfRef.self_attention__DOT__fsm_done = 1U;
                        }
                    }
                    if ((4U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
                        vlSelfRef.self_attention__DOT__attn_start 
                            = (1U & (~ (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__issued_attn)));
                    }
                }
                if ((3U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
                    vlSelfRef.self_attention__DOT__softmax_start 
                        = (1U & (~ (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__issued_softmax)));
                }
            }
            if ((2U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
                vlSelfRef.self_attention__DOT__qk_start 
                    = (1U & (~ (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__issued_qk)));
            }
        }
    }
    vlSelfRef.debug_state_attn = vlSelfRef.self_attention__DOT__attn_inst__DOT__state;
    self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m = 0U;
    while (VL_GTS_III(32, 0x40U, self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)) {
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x800U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [1U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(2U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [2U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(3U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [3U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(4U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [4U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(5U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [5U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(6U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [6U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(7U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [7U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(8U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [8U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(9U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [9U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xaU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0xaU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xbU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0xbU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xcU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0xcU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xdU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0xdU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xeU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0xeU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xfU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0xfU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x10U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x10U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x11U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x11U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x12U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x12U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x13U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x13U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x14U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x14U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x15U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x15U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x16U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x16U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x17U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x17U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x18U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x18U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x19U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x19U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x1aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x1bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x1cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x1dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x1eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x1fU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x20U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x20U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x21U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x21U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x22U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x22U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x23U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x23U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x24U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x24U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x25U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x25U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x26U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x26U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x27U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x27U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x28U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x28U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x29U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x29U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x2aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x2bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x2cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x2dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x2eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x2fU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x30U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x30U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x31U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x31U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x32U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x32U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x33U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x33U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x34U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x34U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x35U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x35U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x36U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x36U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x37U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x37U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x38U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x38U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x39U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x39U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x3aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x3bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x3cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x3dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x3eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)))), vlSelfRef.self_attention__DOT__softmax_scores_flat, 
                        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_out
                        [(0x3fU & self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m)]
                        [0x3fU]);
        self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m 
            = ((IData)(1U) + self_attention__DOT__softmax_inst__DOT__unnamedblk11__DOT__m);
    }
    self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m = 0U;
    while (VL_GTS_III(32, 0x40U, self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)) {
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x800U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [1U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(2U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [2U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(3U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [3U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(4U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [4U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(5U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [5U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(6U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [6U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(7U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [7U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(8U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [8U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(9U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [9U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xaU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0xaU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xbU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0xbU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xcU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0xcU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xdU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0xdU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xeU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0xeU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xfU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0xfU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x10U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x10U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x11U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x11U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x12U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x12U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x13U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x13U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x14U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x14U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x15U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x15U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x16U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x16U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x17U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x17U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x18U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x18U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x19U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x19U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x1aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x1bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x1cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x1dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x1eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x1fU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x20U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x20U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x21U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x21U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x22U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x22U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x23U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x23U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x24U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x24U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x25U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x25U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x26U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x26U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x27U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x27U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x28U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x28U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x29U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x29U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x2aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x2bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x2cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x2dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x2eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x2fU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x30U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x30U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x31U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x31U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x32U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x32U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x33U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x33U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x34U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x34U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x35U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x35U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x36U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x36U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x37U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x37U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x38U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x38U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x39U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x39U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x3aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x3bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x3cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x3dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x3eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)))), vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat, 
                        vlSelfRef.self_attention__DOT__qk_inst__DOT__scores
                        [(0x3fU & self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m)]
                        [0x3fU]);
        self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m 
            = ((IData)(1U) + self_attention__DOT__qk_inst__DOT__unnamedblk1__DOT__m);
    }
    vlSelfRef.debug_attn_00 = vlSelfRef.self_attention__DOT__softmax_scores_flat[0U];
    vlSelfRef.debug_attn_01 = vlSelfRef.self_attention__DOT__softmax_scores_flat[1U];
    vlSelfRef.debug_qk_score_00 = vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat[0U];
    vlSelfRef.debug_qk_score_01 = ((vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat[2U] 
                                    << 2U) | (vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat[1U] 
                                              >> 0x1eU));
    VL_EXTEND_WW(253952,131072, vlSelfRef.self_attention__DOT__scores_flat, vlSelfRef.self_attention__DOT____Vcellout__qk_inst__scores_flat);
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__63__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__62__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__61__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__60__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__59__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__58__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__57__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__56__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__55__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__54__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__53__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__52__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__51__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__50__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__49__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__48__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__47__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__46__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__45__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__44__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__43__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__42__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__41__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__40__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__39__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__38__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__37__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__36__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__35__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__34__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__33__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_k 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_v 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__32__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_q 
        = __Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_q;
}
