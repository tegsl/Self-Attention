// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vself_attention.h for the primary calling header

#include "Vself_attention__pch.h"
#include "Vself_attention___024root.h"

VL_INLINE_OPT void Vself_attention___024root___nba_sequent__TOP__1(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___nba_sequent__TOP__1\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ self_attention__DOT__qkv_done_bit;
    self_attention__DOT__qkv_done_bit = 0;
    IData/*31:0*/ self_attention__DOT__attn_inst__DOT__softmax_val;
    self_attention__DOT__attn_inst__DOT__softmax_val = 0;
    IData/*31:0*/ self_attention__DOT__attn_inst__DOT__V_val;
    self_attention__DOT__attn_inst__DOT__V_val = 0;
    SData/*15:0*/ __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout = 0;
    QData/*61:0*/ __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x = 0;
    QData/*61:0*/ __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped = 0;
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<192>/*6143:0*/ __Vtemp_2;
    VlWide<256>/*8191:0*/ __Vtemp_3;
    VlWide<128>/*4095:0*/ __Vtemp_4;
    VlWide<192>/*6143:0*/ __Vtemp_5;
    VlWide<256>/*8191:0*/ __Vtemp_6;
    VlWide<128>/*4095:0*/ __Vtemp_7;
    VlWide<192>/*6143:0*/ __Vtemp_8;
    VlWide<256>/*8191:0*/ __Vtemp_9;
    VlWide<128>/*4095:0*/ __Vtemp_10;
    VlWide<192>/*6143:0*/ __Vtemp_11;
    VlWide<256>/*8191:0*/ __Vtemp_12;
    VlWide<128>/*4095:0*/ __Vtemp_13;
    VlWide<192>/*6143:0*/ __Vtemp_14;
    VlWide<256>/*8191:0*/ __Vtemp_15;
    VlWide<128>/*4095:0*/ __Vtemp_16;
    VlWide<192>/*6143:0*/ __Vtemp_17;
    VlWide<256>/*8191:0*/ __Vtemp_18;
    VlWide<128>/*4095:0*/ __Vtemp_19;
    VlWide<192>/*6143:0*/ __Vtemp_20;
    VlWide<256>/*8191:0*/ __Vtemp_21;
    VlWide<128>/*4095:0*/ __Vtemp_22;
    VlWide<192>/*6143:0*/ __Vtemp_23;
    VlWide<256>/*8191:0*/ __Vtemp_24;
    VlWide<128>/*4095:0*/ __Vtemp_25;
    VlWide<192>/*6143:0*/ __Vtemp_26;
    VlWide<256>/*8191:0*/ __Vtemp_27;
    VlWide<128>/*4095:0*/ __Vtemp_28;
    VlWide<192>/*6143:0*/ __Vtemp_29;
    VlWide<256>/*8191:0*/ __Vtemp_30;
    VlWide<128>/*4095:0*/ __Vtemp_31;
    VlWide<192>/*6143:0*/ __Vtemp_32;
    VlWide<256>/*8191:0*/ __Vtemp_33;
    VlWide<128>/*4095:0*/ __Vtemp_34;
    VlWide<192>/*6143:0*/ __Vtemp_35;
    VlWide<256>/*8191:0*/ __Vtemp_36;
    VlWide<128>/*4095:0*/ __Vtemp_37;
    VlWide<192>/*6143:0*/ __Vtemp_38;
    VlWide<256>/*8191:0*/ __Vtemp_39;
    VlWide<128>/*4095:0*/ __Vtemp_40;
    VlWide<192>/*6143:0*/ __Vtemp_41;
    VlWide<256>/*8191:0*/ __Vtemp_42;
    VlWide<128>/*4095:0*/ __Vtemp_43;
    VlWide<192>/*6143:0*/ __Vtemp_44;
    VlWide<256>/*8191:0*/ __Vtemp_45;
    VlWide<128>/*4095:0*/ __Vtemp_46;
    VlWide<192>/*6143:0*/ __Vtemp_47;
    VlWide<256>/*8191:0*/ __Vtemp_48;
    VlWide<128>/*4095:0*/ __Vtemp_49;
    VlWide<192>/*6143:0*/ __Vtemp_50;
    VlWide<256>/*8191:0*/ __Vtemp_51;
    VlWide<128>/*4095:0*/ __Vtemp_52;
    VlWide<192>/*6143:0*/ __Vtemp_53;
    VlWide<256>/*8191:0*/ __Vtemp_54;
    VlWide<128>/*4095:0*/ __Vtemp_55;
    VlWide<192>/*6143:0*/ __Vtemp_56;
    VlWide<256>/*8191:0*/ __Vtemp_57;
    VlWide<128>/*4095:0*/ __Vtemp_58;
    VlWide<192>/*6143:0*/ __Vtemp_59;
    VlWide<256>/*8191:0*/ __Vtemp_60;
    VlWide<128>/*4095:0*/ __Vtemp_61;
    VlWide<192>/*6143:0*/ __Vtemp_62;
    VlWide<256>/*8191:0*/ __Vtemp_63;
    VlWide<128>/*4095:0*/ __Vtemp_64;
    VlWide<192>/*6143:0*/ __Vtemp_65;
    VlWide<256>/*8191:0*/ __Vtemp_66;
    VlWide<128>/*4095:0*/ __Vtemp_67;
    VlWide<192>/*6143:0*/ __Vtemp_68;
    VlWide<256>/*8191:0*/ __Vtemp_69;
    VlWide<128>/*4095:0*/ __Vtemp_70;
    VlWide<192>/*6143:0*/ __Vtemp_71;
    VlWide<256>/*8191:0*/ __Vtemp_72;
    VlWide<128>/*4095:0*/ __Vtemp_73;
    VlWide<192>/*6143:0*/ __Vtemp_74;
    VlWide<256>/*8191:0*/ __Vtemp_75;
    VlWide<128>/*4095:0*/ __Vtemp_76;
    VlWide<192>/*6143:0*/ __Vtemp_77;
    VlWide<256>/*8191:0*/ __Vtemp_78;
    VlWide<128>/*4095:0*/ __Vtemp_79;
    VlWide<192>/*6143:0*/ __Vtemp_80;
    VlWide<256>/*8191:0*/ __Vtemp_81;
    VlWide<128>/*4095:0*/ __Vtemp_82;
    VlWide<192>/*6143:0*/ __Vtemp_83;
    VlWide<256>/*8191:0*/ __Vtemp_84;
    VlWide<128>/*4095:0*/ __Vtemp_85;
    VlWide<192>/*6143:0*/ __Vtemp_86;
    VlWide<256>/*8191:0*/ __Vtemp_87;
    VlWide<128>/*4095:0*/ __Vtemp_88;
    VlWide<192>/*6143:0*/ __Vtemp_89;
    VlWide<256>/*8191:0*/ __Vtemp_90;
    VlWide<128>/*4095:0*/ __Vtemp_91;
    VlWide<192>/*6143:0*/ __Vtemp_92;
    VlWide<256>/*8191:0*/ __Vtemp_93;
    VlWide<128>/*4095:0*/ __Vtemp_94;
    VlWide<192>/*6143:0*/ __Vtemp_95;
    VlWide<256>/*8191:0*/ __Vtemp_96;
    VlWide<4>/*127:0*/ __Vtemp_100;
    VlWide<4>/*127:0*/ __Vtemp_101;
    VlWide<4>/*127:0*/ __Vtemp_103;
    VlWide<4>/*127:0*/ __Vtemp_104;
    VlWide<4>/*127:0*/ __Vtemp_105;
    VlWide<4>/*127:0*/ __Vtemp_106;
    VlWide<4>/*127:0*/ __Vtemp_107;
    VlWide<4>/*127:0*/ __Vtemp_109;
    VlWide<4>/*127:0*/ __Vtemp_112;
    VlWide<4>/*127:0*/ __Vtemp_117;
    VlWide<4>/*127:0*/ __Vtemp_118;
    VlWide<4>/*127:0*/ __Vtemp_120;
    VlWide<4>/*127:0*/ __Vtemp_121;
    VlWide<4>/*127:0*/ __Vtemp_122;
    VlWide<4>/*127:0*/ __Vtemp_123;
    VlWide<4>/*127:0*/ __Vtemp_124;
    VlWide<4>/*127:0*/ __Vtemp_126;
    VlWide<4>/*127:0*/ __Vtemp_129;
    VlWide<4>/*127:0*/ __Vtemp_134;
    VlWide<4>/*127:0*/ __Vtemp_135;
    VlWide<4>/*127:0*/ __Vtemp_137;
    VlWide<4>/*127:0*/ __Vtemp_138;
    VlWide<4>/*127:0*/ __Vtemp_139;
    VlWide<4>/*127:0*/ __Vtemp_140;
    VlWide<4>/*127:0*/ __Vtemp_141;
    VlWide<4>/*127:0*/ __Vtemp_143;
    VlWide<4>/*127:0*/ __Vtemp_146;
    VlWide<4>/*127:0*/ __Vtemp_151;
    VlWide<4>/*127:0*/ __Vtemp_152;
    VlWide<4>/*127:0*/ __Vtemp_154;
    VlWide<4>/*127:0*/ __Vtemp_155;
    VlWide<4>/*127:0*/ __Vtemp_156;
    VlWide<4>/*127:0*/ __Vtemp_157;
    VlWide<4>/*127:0*/ __Vtemp_158;
    VlWide<4>/*127:0*/ __Vtemp_160;
    VlWide<4>/*127:0*/ __Vtemp_163;
    VlWide<4>/*127:0*/ __Vtemp_168;
    VlWide<4>/*127:0*/ __Vtemp_169;
    VlWide<4>/*127:0*/ __Vtemp_171;
    VlWide<4>/*127:0*/ __Vtemp_172;
    VlWide<4>/*127:0*/ __Vtemp_173;
    VlWide<4>/*127:0*/ __Vtemp_174;
    VlWide<4>/*127:0*/ __Vtemp_175;
    VlWide<4>/*127:0*/ __Vtemp_177;
    VlWide<4>/*127:0*/ __Vtemp_180;
    VlWide<4>/*127:0*/ __Vtemp_185;
    VlWide<4>/*127:0*/ __Vtemp_186;
    VlWide<4>/*127:0*/ __Vtemp_188;
    VlWide<4>/*127:0*/ __Vtemp_189;
    VlWide<4>/*127:0*/ __Vtemp_190;
    VlWide<4>/*127:0*/ __Vtemp_191;
    VlWide<4>/*127:0*/ __Vtemp_192;
    VlWide<4>/*127:0*/ __Vtemp_194;
    VlWide<4>/*127:0*/ __Vtemp_197;
    VlWide<4>/*127:0*/ __Vtemp_202;
    VlWide<4>/*127:0*/ __Vtemp_203;
    VlWide<4>/*127:0*/ __Vtemp_205;
    VlWide<4>/*127:0*/ __Vtemp_206;
    VlWide<4>/*127:0*/ __Vtemp_207;
    VlWide<4>/*127:0*/ __Vtemp_208;
    VlWide<4>/*127:0*/ __Vtemp_209;
    VlWide<4>/*127:0*/ __Vtemp_211;
    VlWide<4>/*127:0*/ __Vtemp_214;
    VlWide<4>/*127:0*/ __Vtemp_219;
    VlWide<4>/*127:0*/ __Vtemp_220;
    VlWide<4>/*127:0*/ __Vtemp_222;
    VlWide<4>/*127:0*/ __Vtemp_223;
    VlWide<4>/*127:0*/ __Vtemp_224;
    VlWide<4>/*127:0*/ __Vtemp_225;
    VlWide<4>/*127:0*/ __Vtemp_226;
    VlWide<4>/*127:0*/ __Vtemp_228;
    VlWide<4>/*127:0*/ __Vtemp_231;
    // Body
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__31__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__30__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__29__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__28__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__27__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__26__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__25__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__24__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__23__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__22__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__21__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__20__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__19__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__18__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__17__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__16__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__15__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__14__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__13__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__12__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__11__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__10__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__9__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__8__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__7__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__6__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__5__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__4__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__3__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__2__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__1__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__state 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__i 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__j;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_q 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_q;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_k 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_k;
    vlSelfRef.self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_v 
        = vlSelfRef.__Vdly__self_attention__DOT__qkv_gen__BRA__0__KET____DOT__qkv_inst__DOT__accum_v;
    vlSelfRef.self_attention__DOT__qkv_start = 0U;
    if ((0U != (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
        if ((1U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
            vlSelfRef.self_attention__DOT__qkv_start 
                = (1U & (~ (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__issued_qkv)));
        }
    }
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel[0U] 
        = ((0x3dfffU >= (0x3ffffU & ((IData)(0x3eU) 
                                     * (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))
            ? (0x3fffffffffffffffULL & (((QData)((IData)(
                                                         vlSelfRef.self_attention__DOT__scores_flat[
                                                         (((IData)(0x3dU) 
                                                           + 
                                                           (0x3ffffU 
                                                            & ((IData)(0x3eU) 
                                                               * 
                                                               (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(0x3eU) 
                                                  * 
                                                  (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                   + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                      + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x3eU) 
                                                 * 
                                                 (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                  + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                vlSelfRef.self_attention__DOT__scores_flat[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x3ffffU 
                                                                   & ((IData)(0x3eU) 
                                                                      * 
                                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                       + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                      + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))) 
                                           | ((QData)((IData)(
                                                              vlSelfRef.self_attention__DOT__scores_flat[
                                                              (0x1fffU 
                                                               & (((IData)(0x3eU) 
                                                                   * 
                                                                   (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                    + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                      + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))))
            : 0ULL);
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel[1U] 
        = ((0x40U > ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))
            ? ((0x3dfffU >= (0x3ffffU & ((IData)(0x3eU) 
                                         * ((IData)(1U) 
                                            + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                               + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                ? (0x3fffffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.self_attention__DOT__scores_flat[
                                                             (((IData)(0x3dU) 
                                                               + 
                                                               (0x3ffffU 
                                                                & ((IData)(0x3eU) 
                                                                   * 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                     + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     ((IData)(1U) 
                                                      + 
                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                       + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelfRef.self_attention__DOT__scores_flat[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x3ffffU 
                                                                    & ((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.self_attention__DOT__scores_flat[
                                                                  (0x1fffU 
                                                                   & (((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))))
                : 0ULL) : 0x2000000000000000ULL);
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel[2U] 
        = ((0x40U > ((IData)(2U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))
            ? ((0x3dfffU >= (0x3ffffU & ((IData)(0x3eU) 
                                         * ((IData)(2U) 
                                            + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                               + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                ? (0x3fffffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.self_attention__DOT__scores_flat[
                                                             (((IData)(0x3dU) 
                                                               + 
                                                               (0x3ffffU 
                                                                & ((IData)(0x3eU) 
                                                                   * 
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                     + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(2U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(2U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     ((IData)(2U) 
                                                      + 
                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                       + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelfRef.self_attention__DOT__scores_flat[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x3ffffU 
                                                                    & ((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(2U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(2U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.self_attention__DOT__scores_flat[
                                                                  (0x1fffU 
                                                                   & (((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(2U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(2U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))))
                : 0ULL) : 0x2000000000000000ULL);
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel[3U] 
        = ((0x40U > ((IData)(3U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))
            ? ((0x3dfffU >= (0x3ffffU & ((IData)(0x3eU) 
                                         * ((IData)(3U) 
                                            + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                               + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                ? (0x3fffffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.self_attention__DOT__scores_flat[
                                                             (((IData)(0x3dU) 
                                                               + 
                                                               (0x3ffffU 
                                                                & ((IData)(0x3eU) 
                                                                   * 
                                                                   ((IData)(3U) 
                                                                    + 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                     + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(3U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(3U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     ((IData)(3U) 
                                                      + 
                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                       + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelfRef.self_attention__DOT__scores_flat[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x3ffffU 
                                                                    & ((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(3U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(3U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.self_attention__DOT__scores_flat[
                                                                  (0x1fffU 
                                                                   & (((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(3U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(3U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))))
                : 0ULL) : 0x2000000000000000ULL);
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel[4U] 
        = ((0x40U > ((IData)(4U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))
            ? ((0x3dfffU >= (0x3ffffU & ((IData)(0x3eU) 
                                         * ((IData)(4U) 
                                            + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                               + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                ? (0x3fffffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.self_attention__DOT__scores_flat[
                                                             (((IData)(0x3dU) 
                                                               + 
                                                               (0x3ffffU 
                                                                & ((IData)(0x3eU) 
                                                                   * 
                                                                   ((IData)(4U) 
                                                                    + 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                     + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(4U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(4U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     ((IData)(4U) 
                                                      + 
                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                       + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelfRef.self_attention__DOT__scores_flat[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x3ffffU 
                                                                    & ((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(4U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(4U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.self_attention__DOT__scores_flat[
                                                                  (0x1fffU 
                                                                   & (((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(4U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(4U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))))
                : 0ULL) : 0x2000000000000000ULL);
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel[5U] 
        = ((0x40U > ((IData)(5U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))
            ? ((0x3dfffU >= (0x3ffffU & ((IData)(0x3eU) 
                                         * ((IData)(5U) 
                                            + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                               + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                ? (0x3fffffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.self_attention__DOT__scores_flat[
                                                             (((IData)(0x3dU) 
                                                               + 
                                                               (0x3ffffU 
                                                                & ((IData)(0x3eU) 
                                                                   * 
                                                                   ((IData)(5U) 
                                                                    + 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                     + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(5U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(5U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     ((IData)(5U) 
                                                      + 
                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                       + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelfRef.self_attention__DOT__scores_flat[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x3ffffU 
                                                                    & ((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(5U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(5U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.self_attention__DOT__scores_flat[
                                                                  (0x1fffU 
                                                                   & (((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(5U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(5U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))))
                : 0ULL) : 0x2000000000000000ULL);
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel[6U] 
        = ((0x40U > ((IData)(6U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))
            ? ((0x3dfffU >= (0x3ffffU & ((IData)(0x3eU) 
                                         * ((IData)(6U) 
                                            + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                               + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                ? (0x3fffffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.self_attention__DOT__scores_flat[
                                                             (((IData)(0x3dU) 
                                                               + 
                                                               (0x3ffffU 
                                                                & ((IData)(0x3eU) 
                                                                   * 
                                                                   ((IData)(6U) 
                                                                    + 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                     + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(6U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(6U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     ((IData)(6U) 
                                                      + 
                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                       + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelfRef.self_attention__DOT__scores_flat[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x3ffffU 
                                                                    & ((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(6U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(6U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.self_attention__DOT__scores_flat[
                                                                  (0x1fffU 
                                                                   & (((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(6U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(6U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))))
                : 0ULL) : 0x2000000000000000ULL);
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel[7U] 
        = ((0x40U > ((IData)(7U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))
            ? ((0x3dfffU >= (0x3ffffU & ((IData)(0x3eU) 
                                         * ((IData)(7U) 
                                            + (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                               + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                ? (0x3fffffffffffffffULL & (((QData)((IData)(
                                                             vlSelfRef.self_attention__DOT__scores_flat[
                                                             (((IData)(0x3dU) 
                                                               + 
                                                               (0x3ffffU 
                                                                & ((IData)(0x3eU) 
                                                                   * 
                                                                   ((IData)(7U) 
                                                                    + 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                     + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(7U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(7U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x3eU) 
                                                     * 
                                                     ((IData)(7U) 
                                                      + 
                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                       + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelfRef.self_attention__DOT__scores_flat[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x3ffffU 
                                                                    & ((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(7U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(7U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.self_attention__DOT__scores_flat[
                                                                  (0x1fffU 
                                                                   & (((IData)(0x3eU) 
                                                                       * 
                                                                       ((IData)(7U) 
                                                                        + 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                                         + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x3eU) 
                                                      * 
                                                      ((IData)(7U) 
                                                       + 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)))))))))
                : 0ULL) : 0x2000000000000000ULL);
    vlSelfRef.debug_k_1_0 = vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__K_flat[0U];
    vlSelfRef.debug_k_0_0 = vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__K_flat[0U];
    vlSelfRef.debug_q_0_0 = vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__Q_flat[0U];
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_1, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__3__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__2__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_2, __Vtemp_1, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_3, __Vtemp_2, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0xffU)) {
        vlSelfRef.Q_flat[__Vilp1] = __Vtemp_3[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_4, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__7__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__6__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_5, __Vtemp_4, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__5__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_6, __Vtemp_5, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__4__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp2 + (IData)(0x100U))] 
            = __Vtemp_6[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_7, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__11__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__10__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_8, __Vtemp_7, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__9__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_9, __Vtemp_8, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__8__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp3 + (IData)(0x200U))] 
            = __Vtemp_9[__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_10, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__15__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__14__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_11, __Vtemp_10, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__13__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_12, __Vtemp_11, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__12__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp4 + (IData)(0x300U))] 
            = __Vtemp_12[__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_13, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__19__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__18__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_14, __Vtemp_13, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__17__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_15, __Vtemp_14, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__16__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp5 + (IData)(0x400U))] 
            = __Vtemp_15[__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_16, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__23__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__22__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_17, __Vtemp_16, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__21__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_18, __Vtemp_17, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__20__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp6 + (IData)(0x500U))] 
            = __Vtemp_18[__Vilp6];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_19, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__27__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__26__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_20, __Vtemp_19, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__25__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_21, __Vtemp_20, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__24__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp7;
    __Vilp7 = 0U;
    while ((__Vilp7 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp7 + (IData)(0x600U))] 
            = __Vtemp_21[__Vilp7];
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_22, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__31__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__30__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_23, __Vtemp_22, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__29__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_24, __Vtemp_23, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__28__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp8;
    __Vilp8 = 0U;
    while ((__Vilp8 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp8 + (IData)(0x700U))] 
            = __Vtemp_24[__Vilp8];
        __Vilp8 = ((IData)(1U) + __Vilp8);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_25, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__35__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__34__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_26, __Vtemp_25, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__33__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_27, __Vtemp_26, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__32__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp9;
    __Vilp9 = 0U;
    while ((__Vilp9 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp9 + (IData)(0x800U))] 
            = __Vtemp_27[__Vilp9];
        __Vilp9 = ((IData)(1U) + __Vilp9);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_28, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__39__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__38__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_29, __Vtemp_28, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__37__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_30, __Vtemp_29, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__36__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp10;
    __Vilp10 = 0U;
    while ((__Vilp10 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp10 + (IData)(0x900U))] 
            = __Vtemp_30[__Vilp10];
        __Vilp10 = ((IData)(1U) + __Vilp10);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_31, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__43__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__42__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_32, __Vtemp_31, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__41__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_33, __Vtemp_32, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__40__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp11;
    __Vilp11 = 0U;
    while ((__Vilp11 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp11 + (IData)(0xa00U))] 
            = __Vtemp_33[__Vilp11];
        __Vilp11 = ((IData)(1U) + __Vilp11);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_34, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__47__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__46__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_35, __Vtemp_34, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__45__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_36, __Vtemp_35, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__44__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp12;
    __Vilp12 = 0U;
    while ((__Vilp12 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp12 + (IData)(0xb00U))] 
            = __Vtemp_36[__Vilp12];
        __Vilp12 = ((IData)(1U) + __Vilp12);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_37, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__51__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__50__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_38, __Vtemp_37, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__49__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_39, __Vtemp_38, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__48__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp13;
    __Vilp13 = 0U;
    while ((__Vilp13 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp13 + (IData)(0xc00U))] 
            = __Vtemp_39[__Vilp13];
        __Vilp13 = ((IData)(1U) + __Vilp13);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_40, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__55__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__54__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_41, __Vtemp_40, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__53__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_42, __Vtemp_41, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__52__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp14;
    __Vilp14 = 0U;
    while ((__Vilp14 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp14 + (IData)(0xd00U))] 
            = __Vtemp_42[__Vilp14];
        __Vilp14 = ((IData)(1U) + __Vilp14);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_43, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__59__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__58__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_44, __Vtemp_43, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__57__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_45, __Vtemp_44, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__56__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp15;
    __Vilp15 = 0U;
    while ((__Vilp15 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp15 + (IData)(0xe00U))] 
            = __Vtemp_45[__Vilp15];
        __Vilp15 = ((IData)(1U) + __Vilp15);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_46, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__63__KET____DOT__qkv_inst__Q_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__62__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_47, __Vtemp_46, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__61__KET____DOT__qkv_inst__Q_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_48, __Vtemp_47, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__60__KET____DOT__qkv_inst__Q_flat);
    IData/*31:0*/ __Vilp16;
    __Vilp16 = 0U;
    while ((__Vilp16 <= 0xffU)) {
        vlSelfRef.Q_flat[(__Vilp16 + (IData)(0xf00U))] 
            = __Vtemp_48[__Vilp16];
        __Vilp16 = ((IData)(1U) + __Vilp16);
    }
    self_attention__DOT__qkv_done_bit = ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__63__KET____DOT__qkv_inst__done) 
                                         & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__62__KET____DOT__qkv_inst__done) 
                                            & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__61__KET____DOT__qkv_inst__done) 
                                               & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__60__KET____DOT__qkv_inst__done) 
                                                  & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__59__KET____DOT__qkv_inst__done) 
                                                     & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__58__KET____DOT__qkv_inst__done) 
                                                        & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__57__KET____DOT__qkv_inst__done) 
                                                           & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__56__KET____DOT__qkv_inst__done) 
                                                              & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__55__KET____DOT__qkv_inst__done) 
                                                                 & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__54__KET____DOT__qkv_inst__done) 
                                                                    & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__53__KET____DOT__qkv_inst__done) 
                                                                       & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__52__KET____DOT__qkv_inst__done) 
                                                                          & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__51__KET____DOT__qkv_inst__done) 
                                                                             & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__50__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__49__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__48__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__47__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__46__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__45__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__44__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__43__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__42__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__41__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__40__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__39__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__38__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__37__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__36__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__35__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__34__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__33__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__32__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__31__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__30__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__29__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__28__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__27__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__26__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__25__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__24__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__23__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__22__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__21__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__20__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__19__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__18__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__17__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__16__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__15__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__14__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__13__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__12__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__11__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__10__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__9__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__8__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__7__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__6__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__5__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__4__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__3__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__2__KET____DOT__qkv_inst__done) 
                                                                                & ((IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__done) 
                                                                                & (IData)(vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__done))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_49, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__3__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__2__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_50, __Vtemp_49, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__1__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_51, __Vtemp_50, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__0__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp17;
    __Vilp17 = 0U;
    while ((__Vilp17 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[__Vilp17] 
            = __Vtemp_51[__Vilp17];
        __Vilp17 = ((IData)(1U) + __Vilp17);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_52, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__7__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__6__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_53, __Vtemp_52, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__5__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_54, __Vtemp_53, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__4__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp18;
    __Vilp18 = 0U;
    while ((__Vilp18 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp18 
                                               + (IData)(0x100U))] 
            = __Vtemp_54[__Vilp18];
        __Vilp18 = ((IData)(1U) + __Vilp18);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_55, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__11__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__10__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_56, __Vtemp_55, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__9__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_57, __Vtemp_56, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__8__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp19;
    __Vilp19 = 0U;
    while ((__Vilp19 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp19 
                                               + (IData)(0x200U))] 
            = __Vtemp_57[__Vilp19];
        __Vilp19 = ((IData)(1U) + __Vilp19);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_58, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__15__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__14__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_59, __Vtemp_58, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__13__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_60, __Vtemp_59, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__12__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp20;
    __Vilp20 = 0U;
    while ((__Vilp20 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp20 
                                               + (IData)(0x300U))] 
            = __Vtemp_60[__Vilp20];
        __Vilp20 = ((IData)(1U) + __Vilp20);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_61, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__19__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__18__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_62, __Vtemp_61, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__17__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_63, __Vtemp_62, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__16__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp21;
    __Vilp21 = 0U;
    while ((__Vilp21 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp21 
                                               + (IData)(0x400U))] 
            = __Vtemp_63[__Vilp21];
        __Vilp21 = ((IData)(1U) + __Vilp21);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_64, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__23__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__22__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_65, __Vtemp_64, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__21__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_66, __Vtemp_65, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__20__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp22;
    __Vilp22 = 0U;
    while ((__Vilp22 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp22 
                                               + (IData)(0x500U))] 
            = __Vtemp_66[__Vilp22];
        __Vilp22 = ((IData)(1U) + __Vilp22);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_67, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__27__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__26__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_68, __Vtemp_67, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__25__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_69, __Vtemp_68, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__24__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp23;
    __Vilp23 = 0U;
    while ((__Vilp23 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp23 
                                               + (IData)(0x600U))] 
            = __Vtemp_69[__Vilp23];
        __Vilp23 = ((IData)(1U) + __Vilp23);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_70, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__31__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__30__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_71, __Vtemp_70, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__29__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_72, __Vtemp_71, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__28__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp24;
    __Vilp24 = 0U;
    while ((__Vilp24 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp24 
                                               + (IData)(0x700U))] 
            = __Vtemp_72[__Vilp24];
        __Vilp24 = ((IData)(1U) + __Vilp24);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_73, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__35__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__34__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_74, __Vtemp_73, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__33__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_75, __Vtemp_74, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__32__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp25;
    __Vilp25 = 0U;
    while ((__Vilp25 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp25 
                                               + (IData)(0x800U))] 
            = __Vtemp_75[__Vilp25];
        __Vilp25 = ((IData)(1U) + __Vilp25);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_76, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__39__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__38__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_77, __Vtemp_76, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__37__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_78, __Vtemp_77, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__36__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp26;
    __Vilp26 = 0U;
    while ((__Vilp26 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp26 
                                               + (IData)(0x900U))] 
            = __Vtemp_78[__Vilp26];
        __Vilp26 = ((IData)(1U) + __Vilp26);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_79, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__43__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__42__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_80, __Vtemp_79, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__41__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_81, __Vtemp_80, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__40__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp27;
    __Vilp27 = 0U;
    while ((__Vilp27 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp27 
                                               + (IData)(0xa00U))] 
            = __Vtemp_81[__Vilp27];
        __Vilp27 = ((IData)(1U) + __Vilp27);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_82, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__47__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__46__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_83, __Vtemp_82, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__45__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_84, __Vtemp_83, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__44__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp28;
    __Vilp28 = 0U;
    while ((__Vilp28 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp28 
                                               + (IData)(0xb00U))] 
            = __Vtemp_84[__Vilp28];
        __Vilp28 = ((IData)(1U) + __Vilp28);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_85, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__51__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__50__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_86, __Vtemp_85, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__49__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_87, __Vtemp_86, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__48__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp29;
    __Vilp29 = 0U;
    while ((__Vilp29 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp29 
                                               + (IData)(0xc00U))] 
            = __Vtemp_87[__Vilp29];
        __Vilp29 = ((IData)(1U) + __Vilp29);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_88, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__55__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__54__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_89, __Vtemp_88, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__53__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_90, __Vtemp_89, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__52__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp30;
    __Vilp30 = 0U;
    while ((__Vilp30 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp30 
                                               + (IData)(0xd00U))] 
            = __Vtemp_90[__Vilp30];
        __Vilp30 = ((IData)(1U) + __Vilp30);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_91, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__59__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__58__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_92, __Vtemp_91, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__57__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_93, __Vtemp_92, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__56__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp31;
    __Vilp31 = 0U;
    while ((__Vilp31 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp31 
                                               + (IData)(0xe00U))] 
            = __Vtemp_93[__Vilp31];
        __Vilp31 = ((IData)(1U) + __Vilp31);
    }
    VL_CONCAT_WWW(4096,2048,2048, __Vtemp_94, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__63__KET____DOT__qkv_inst__V_flat, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__62__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(6144,4096,2048, __Vtemp_95, __Vtemp_94, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__61__KET____DOT__qkv_inst__V_flat);
    VL_CONCAT_WWW(8192,6144,2048, __Vtemp_96, __Vtemp_95, vlSelfRef.self_attention__DOT____Vcellout__qkv_gen__BRA__60__KET____DOT__qkv_inst__V_flat);
    IData/*31:0*/ __Vilp32;
    __Vilp32 = 0U;
    while ((__Vilp32 <= 0xffU)) {
        vlSelfRef.self_attention__DOT__V_flat[(__Vilp32 
                                               + (IData)(0xf00U))] 
            = __Vtemp_96[__Vilp32];
        __Vilp32 = ((IData)(1U) + __Vilp32);
    }
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x 
        = (0x3fffffffffffffffULL & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                                    [0U] - vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score));
    vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_Q(62);
    VL_RAND_RESET_W(124, vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared);
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_IQQ(62, 0x600ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
            ? 0x600ULL : (VL_GTS_IQQ(62, 0x3ffffffffffffa00ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
                           ? 0x3ffffffffffffa00ULL : __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x));
    if (VL_LTES_IQQ(62, 0ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped)) {
        VL_EXTENDS_WQ(124,62, __Vtemp_100, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_101[0U] = __Vtemp_100[0U];
        __Vtemp_101[1U] = __Vtemp_100[1U];
        __Vtemp_101[2U] = __Vtemp_100[2U];
        __Vtemp_101[3U] = (0xfffffffU & __Vtemp_100[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_103, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_104[0U] = __Vtemp_103[0U];
        __Vtemp_104[1U] = __Vtemp_103[1U];
        __Vtemp_104[2U] = __Vtemp_103[2U];
        __Vtemp_104[3U] = (0xfffffffU & __Vtemp_103[3U]);
        VL_MULS_WWW(124, __Vtemp_105, __Vtemp_101, __Vtemp_104);
        __Vtemp_106[0U] = __Vtemp_105[0U];
        __Vtemp_106[1U] = __Vtemp_105[1U];
        __Vtemp_106[2U] = __Vtemp_105[2U];
        __Vtemp_106[3U] = (0xfffffffU & __Vtemp_105[3U]);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_107, __Vtemp_106, 8U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[0U] 
            = __Vtemp_107[0U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[1U] 
            = __Vtemp_107[1U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[2U] 
            = __Vtemp_107[2U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[3U] 
            = (0xfffffffU & __Vtemp_107[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_109, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_112, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared, 1U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & ((IData)(0x100U) + (__Vtemp_109[0U] 
                                             + __Vtemp_112[0U])));
    } else {
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (0x3fffffffffffffffULL & (- __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped));
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & (IData)((VL_GTS_IQQ(62, 0x100ULL, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                                   ? (0x3fffffffffffffffULL 
                                      & ((0x100ULL 
                                          - vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                         + VL_SHIFTRS_QQI(62,62,32, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                                   : 4ULL)));
    }
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel[0U] 
        = __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x 
        = (0x3fffffffffffffffULL & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                                    [1U] - vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score));
    vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_Q(62);
    VL_RAND_RESET_W(124, vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared);
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_IQQ(62, 0x600ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
            ? 0x600ULL : (VL_GTS_IQQ(62, 0x3ffffffffffffa00ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
                           ? 0x3ffffffffffffa00ULL : __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x));
    if (VL_LTES_IQQ(62, 0ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped)) {
        VL_EXTENDS_WQ(124,62, __Vtemp_117, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_118[0U] = __Vtemp_117[0U];
        __Vtemp_118[1U] = __Vtemp_117[1U];
        __Vtemp_118[2U] = __Vtemp_117[2U];
        __Vtemp_118[3U] = (0xfffffffU & __Vtemp_117[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_120, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_121[0U] = __Vtemp_120[0U];
        __Vtemp_121[1U] = __Vtemp_120[1U];
        __Vtemp_121[2U] = __Vtemp_120[2U];
        __Vtemp_121[3U] = (0xfffffffU & __Vtemp_120[3U]);
        VL_MULS_WWW(124, __Vtemp_122, __Vtemp_118, __Vtemp_121);
        __Vtemp_123[0U] = __Vtemp_122[0U];
        __Vtemp_123[1U] = __Vtemp_122[1U];
        __Vtemp_123[2U] = __Vtemp_122[2U];
        __Vtemp_123[3U] = (0xfffffffU & __Vtemp_122[3U]);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_124, __Vtemp_123, 8U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[0U] 
            = __Vtemp_124[0U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[1U] 
            = __Vtemp_124[1U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[2U] 
            = __Vtemp_124[2U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[3U] 
            = (0xfffffffU & __Vtemp_124[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_126, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_129, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared, 1U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & ((IData)(0x100U) + (__Vtemp_126[0U] 
                                             + __Vtemp_129[0U])));
    } else {
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (0x3fffffffffffffffULL & (- __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped));
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & (IData)((VL_GTS_IQQ(62, 0x100ULL, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                                   ? (0x3fffffffffffffffULL 
                                      & ((0x100ULL 
                                          - vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                         + VL_SHIFTRS_QQI(62,62,32, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                                   : 4ULL)));
    }
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel[1U] 
        = __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x 
        = (0x3fffffffffffffffULL & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                                    [2U] - vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score));
    vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_Q(62);
    VL_RAND_RESET_W(124, vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared);
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_IQQ(62, 0x600ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
            ? 0x600ULL : (VL_GTS_IQQ(62, 0x3ffffffffffffa00ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
                           ? 0x3ffffffffffffa00ULL : __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x));
    if (VL_LTES_IQQ(62, 0ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped)) {
        VL_EXTENDS_WQ(124,62, __Vtemp_134, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_135[0U] = __Vtemp_134[0U];
        __Vtemp_135[1U] = __Vtemp_134[1U];
        __Vtemp_135[2U] = __Vtemp_134[2U];
        __Vtemp_135[3U] = (0xfffffffU & __Vtemp_134[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_137, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_138[0U] = __Vtemp_137[0U];
        __Vtemp_138[1U] = __Vtemp_137[1U];
        __Vtemp_138[2U] = __Vtemp_137[2U];
        __Vtemp_138[3U] = (0xfffffffU & __Vtemp_137[3U]);
        VL_MULS_WWW(124, __Vtemp_139, __Vtemp_135, __Vtemp_138);
        __Vtemp_140[0U] = __Vtemp_139[0U];
        __Vtemp_140[1U] = __Vtemp_139[1U];
        __Vtemp_140[2U] = __Vtemp_139[2U];
        __Vtemp_140[3U] = (0xfffffffU & __Vtemp_139[3U]);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_141, __Vtemp_140, 8U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[0U] 
            = __Vtemp_141[0U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[1U] 
            = __Vtemp_141[1U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[2U] 
            = __Vtemp_141[2U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[3U] 
            = (0xfffffffU & __Vtemp_141[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_143, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_146, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared, 1U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & ((IData)(0x100U) + (__Vtemp_143[0U] 
                                             + __Vtemp_146[0U])));
    } else {
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (0x3fffffffffffffffULL & (- __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped));
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & (IData)((VL_GTS_IQQ(62, 0x100ULL, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                                   ? (0x3fffffffffffffffULL 
                                      & ((0x100ULL 
                                          - vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                         + VL_SHIFTRS_QQI(62,62,32, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                                   : 4ULL)));
    }
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel[2U] 
        = __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x 
        = (0x3fffffffffffffffULL & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                                    [3U] - vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score));
    vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_Q(62);
    VL_RAND_RESET_W(124, vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared);
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_IQQ(62, 0x600ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
            ? 0x600ULL : (VL_GTS_IQQ(62, 0x3ffffffffffffa00ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
                           ? 0x3ffffffffffffa00ULL : __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x));
    if (VL_LTES_IQQ(62, 0ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped)) {
        VL_EXTENDS_WQ(124,62, __Vtemp_151, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_152[0U] = __Vtemp_151[0U];
        __Vtemp_152[1U] = __Vtemp_151[1U];
        __Vtemp_152[2U] = __Vtemp_151[2U];
        __Vtemp_152[3U] = (0xfffffffU & __Vtemp_151[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_154, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_155[0U] = __Vtemp_154[0U];
        __Vtemp_155[1U] = __Vtemp_154[1U];
        __Vtemp_155[2U] = __Vtemp_154[2U];
        __Vtemp_155[3U] = (0xfffffffU & __Vtemp_154[3U]);
        VL_MULS_WWW(124, __Vtemp_156, __Vtemp_152, __Vtemp_155);
        __Vtemp_157[0U] = __Vtemp_156[0U];
        __Vtemp_157[1U] = __Vtemp_156[1U];
        __Vtemp_157[2U] = __Vtemp_156[2U];
        __Vtemp_157[3U] = (0xfffffffU & __Vtemp_156[3U]);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_158, __Vtemp_157, 8U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[0U] 
            = __Vtemp_158[0U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[1U] 
            = __Vtemp_158[1U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[2U] 
            = __Vtemp_158[2U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[3U] 
            = (0xfffffffU & __Vtemp_158[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_160, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_163, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared, 1U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & ((IData)(0x100U) + (__Vtemp_160[0U] 
                                             + __Vtemp_163[0U])));
    } else {
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (0x3fffffffffffffffULL & (- __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped));
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & (IData)((VL_GTS_IQQ(62, 0x100ULL, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                                   ? (0x3fffffffffffffffULL 
                                      & ((0x100ULL 
                                          - vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                         + VL_SHIFTRS_QQI(62,62,32, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                                   : 4ULL)));
    }
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel[3U] 
        = __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x 
        = (0x3fffffffffffffffULL & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                                    [4U] - vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score));
    vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_Q(62);
    VL_RAND_RESET_W(124, vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared);
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_IQQ(62, 0x600ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
            ? 0x600ULL : (VL_GTS_IQQ(62, 0x3ffffffffffffa00ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
                           ? 0x3ffffffffffffa00ULL : __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x));
    if (VL_LTES_IQQ(62, 0ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped)) {
        VL_EXTENDS_WQ(124,62, __Vtemp_168, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_169[0U] = __Vtemp_168[0U];
        __Vtemp_169[1U] = __Vtemp_168[1U];
        __Vtemp_169[2U] = __Vtemp_168[2U];
        __Vtemp_169[3U] = (0xfffffffU & __Vtemp_168[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_171, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_172[0U] = __Vtemp_171[0U];
        __Vtemp_172[1U] = __Vtemp_171[1U];
        __Vtemp_172[2U] = __Vtemp_171[2U];
        __Vtemp_172[3U] = (0xfffffffU & __Vtemp_171[3U]);
        VL_MULS_WWW(124, __Vtemp_173, __Vtemp_169, __Vtemp_172);
        __Vtemp_174[0U] = __Vtemp_173[0U];
        __Vtemp_174[1U] = __Vtemp_173[1U];
        __Vtemp_174[2U] = __Vtemp_173[2U];
        __Vtemp_174[3U] = (0xfffffffU & __Vtemp_173[3U]);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_175, __Vtemp_174, 8U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[0U] 
            = __Vtemp_175[0U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[1U] 
            = __Vtemp_175[1U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[2U] 
            = __Vtemp_175[2U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[3U] 
            = (0xfffffffU & __Vtemp_175[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_177, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_180, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared, 1U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & ((IData)(0x100U) + (__Vtemp_177[0U] 
                                             + __Vtemp_180[0U])));
    } else {
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (0x3fffffffffffffffULL & (- __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped));
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & (IData)((VL_GTS_IQQ(62, 0x100ULL, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                                   ? (0x3fffffffffffffffULL 
                                      & ((0x100ULL 
                                          - vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                         + VL_SHIFTRS_QQI(62,62,32, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                                   : 4ULL)));
    }
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel[4U] 
        = __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x 
        = (0x3fffffffffffffffULL & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                                    [5U] - vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score));
    vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_Q(62);
    VL_RAND_RESET_W(124, vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared);
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_IQQ(62, 0x600ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
            ? 0x600ULL : (VL_GTS_IQQ(62, 0x3ffffffffffffa00ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
                           ? 0x3ffffffffffffa00ULL : __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x));
    if (VL_LTES_IQQ(62, 0ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped)) {
        VL_EXTENDS_WQ(124,62, __Vtemp_185, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_186[0U] = __Vtemp_185[0U];
        __Vtemp_186[1U] = __Vtemp_185[1U];
        __Vtemp_186[2U] = __Vtemp_185[2U];
        __Vtemp_186[3U] = (0xfffffffU & __Vtemp_185[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_188, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_189[0U] = __Vtemp_188[0U];
        __Vtemp_189[1U] = __Vtemp_188[1U];
        __Vtemp_189[2U] = __Vtemp_188[2U];
        __Vtemp_189[3U] = (0xfffffffU & __Vtemp_188[3U]);
        VL_MULS_WWW(124, __Vtemp_190, __Vtemp_186, __Vtemp_189);
        __Vtemp_191[0U] = __Vtemp_190[0U];
        __Vtemp_191[1U] = __Vtemp_190[1U];
        __Vtemp_191[2U] = __Vtemp_190[2U];
        __Vtemp_191[3U] = (0xfffffffU & __Vtemp_190[3U]);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_192, __Vtemp_191, 8U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[0U] 
            = __Vtemp_192[0U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[1U] 
            = __Vtemp_192[1U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[2U] 
            = __Vtemp_192[2U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[3U] 
            = (0xfffffffU & __Vtemp_192[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_194, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_197, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared, 1U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & ((IData)(0x100U) + (__Vtemp_194[0U] 
                                             + __Vtemp_197[0U])));
    } else {
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (0x3fffffffffffffffULL & (- __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped));
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & (IData)((VL_GTS_IQQ(62, 0x100ULL, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                                   ? (0x3fffffffffffffffULL 
                                      & ((0x100ULL 
                                          - vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                         + VL_SHIFTRS_QQI(62,62,32, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                                   : 4ULL)));
    }
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel[5U] 
        = __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x 
        = (0x3fffffffffffffffULL & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                                    [6U] - vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score));
    vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_Q(62);
    VL_RAND_RESET_W(124, vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared);
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_IQQ(62, 0x600ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
            ? 0x600ULL : (VL_GTS_IQQ(62, 0x3ffffffffffffa00ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
                           ? 0x3ffffffffffffa00ULL : __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x));
    if (VL_LTES_IQQ(62, 0ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped)) {
        VL_EXTENDS_WQ(124,62, __Vtemp_202, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_203[0U] = __Vtemp_202[0U];
        __Vtemp_203[1U] = __Vtemp_202[1U];
        __Vtemp_203[2U] = __Vtemp_202[2U];
        __Vtemp_203[3U] = (0xfffffffU & __Vtemp_202[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_205, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_206[0U] = __Vtemp_205[0U];
        __Vtemp_206[1U] = __Vtemp_205[1U];
        __Vtemp_206[2U] = __Vtemp_205[2U];
        __Vtemp_206[3U] = (0xfffffffU & __Vtemp_205[3U]);
        VL_MULS_WWW(124, __Vtemp_207, __Vtemp_203, __Vtemp_206);
        __Vtemp_208[0U] = __Vtemp_207[0U];
        __Vtemp_208[1U] = __Vtemp_207[1U];
        __Vtemp_208[2U] = __Vtemp_207[2U];
        __Vtemp_208[3U] = (0xfffffffU & __Vtemp_207[3U]);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_209, __Vtemp_208, 8U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[0U] 
            = __Vtemp_209[0U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[1U] 
            = __Vtemp_209[1U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[2U] 
            = __Vtemp_209[2U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[3U] 
            = (0xfffffffU & __Vtemp_209[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_211, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_214, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared, 1U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & ((IData)(0x100U) + (__Vtemp_211[0U] 
                                             + __Vtemp_214[0U])));
    } else {
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (0x3fffffffffffffffULL & (- __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped));
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & (IData)((VL_GTS_IQQ(62, 0x100ULL, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                                   ? (0x3fffffffffffffffULL 
                                      & ((0x100ULL 
                                          - vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                         + VL_SHIFTRS_QQI(62,62,32, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                                   : 4ULL)));
    }
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel[6U] 
        = __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout;
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x 
        = (0x3fffffffffffffffULL & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores_parallel
                                    [7U] - vlSelfRef.self_attention__DOT__softmax_inst__DOT__max_score));
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped 
        = (VL_LTS_IQQ(62, 0x600ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
            ? 0x600ULL : (VL_GTS_IQQ(62, 0x3ffffffffffffa00ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x)
                           ? 0x3ffffffffffffa00ULL : __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x));
    vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x = VL_RAND_RESET_Q(62);
    VL_RAND_RESET_W(124, vlSelf->__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared);
    if (VL_LTES_IQQ(62, 0ULL, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped)) {
        VL_EXTENDS_WQ(124,62, __Vtemp_219, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_220[0U] = __Vtemp_219[0U];
        __Vtemp_220[1U] = __Vtemp_219[1U];
        __Vtemp_220[2U] = __Vtemp_219[2U];
        __Vtemp_220[3U] = (0xfffffffU & __Vtemp_219[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_222, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        __Vtemp_223[0U] = __Vtemp_222[0U];
        __Vtemp_223[1U] = __Vtemp_222[1U];
        __Vtemp_223[2U] = __Vtemp_222[2U];
        __Vtemp_223[3U] = (0xfffffffU & __Vtemp_222[3U]);
        VL_MULS_WWW(124, __Vtemp_224, __Vtemp_220, __Vtemp_223);
        __Vtemp_225[0U] = __Vtemp_224[0U];
        __Vtemp_225[1U] = __Vtemp_224[1U];
        __Vtemp_225[2U] = __Vtemp_224[2U];
        __Vtemp_225[3U] = (0xfffffffU & __Vtemp_224[3U]);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_226, __Vtemp_225, 8U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[0U] 
            = __Vtemp_226[0U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[1U] 
            = __Vtemp_226[1U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[2U] 
            = __Vtemp_226[2U];
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared[3U] 
            = (0xfffffffU & __Vtemp_226[3U]);
        VL_EXTENDS_WQ(124,62, __Vtemp_228, __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped);
        VL_SHIFTRS_WWI(124,124,32, __Vtemp_231, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_squared, 1U);
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & ((IData)(0x100U) + (__Vtemp_228[0U] 
                                             + __Vtemp_231[0U])));
    } else {
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x 
            = (0x3fffffffffffffffULL & (- __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__x_clamped));
        vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result 
            = (0xffffU & (IData)((VL_GTS_IQQ(62, 0x100ULL, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x)
                                   ? (0x3fffffffffffffffULL 
                                      & ((0x100ULL 
                                          - vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x) 
                                         + VL_SHIFTRS_QQI(62,62,32, vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__unnamedblk1__DOT__abs_x, 1U)))
                                   : 4ULL)));
    }
    __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout 
        = vlSelfRef.__Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__result;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_vals_parallel[7U] 
        = __Vfunc_self_attention__DOT__softmax_inst__DOT__exp_approx__0__Vfuncout;
    vlSelfRef.self_attention__DOT__fsm__DOT__next_state 
        = vlSelfRef.self_attention__DOT__fsm__DOT__curr_state;
    if ((0U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
        if (vlSelfRef.self_attention__DOT__fsm_start) {
            vlSelfRef.self_attention__DOT__fsm__DOT__next_state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
        if (self_attention__DOT__qkv_done_bit) {
            vlSelfRef.self_attention__DOT__fsm__DOT__next_state = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
        if (vlSelfRef.self_attention__DOT__qk_done) {
            vlSelfRef.self_attention__DOT__fsm__DOT__next_state = 3U;
        }
    } else if ((3U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
        if (vlSelfRef.self_attention__DOT__softmax_done) {
            vlSelfRef.self_attention__DOT__fsm__DOT__next_state = 4U;
        }
    } else if ((4U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
        if (vlSelfRef.self_attention__DOT__attn_done) {
            vlSelfRef.self_attention__DOT__fsm__DOT__next_state = 5U;
        }
    } else if ((5U == (IData)(vlSelfRef.self_attention__DOT__fsm__DOT__curr_state))) {
        vlSelfRef.self_attention__DOT__fsm__DOT__next_state = 0U;
    }
    self_attention__DOT__attn_inst__DOT__softmax_val 
        = (((0U == (0x1fU & VL_SHIFTL_III(17,32,32, 
                                          (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i), 6U) 
                                           + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j)), 5U)))
             ? 0U : (vlSelfRef.self_attention__DOT__softmax_scores_flat[
                     (((IData)(0x1fU) + (0x1ffffU & 
                                         VL_SHIFTL_III(17,32,32, 
                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i), 6U) 
                                                        + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j)), 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & VL_SHIFTL_III(17,32,32, 
                                                         (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i), 6U) 
                                                          + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j)), 5U))))) 
           | (vlSelfRef.self_attention__DOT__softmax_scores_flat[
              (0xfffU & (VL_SHIFTL_III(17,32,32, (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i), 6U) 
                                                  + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j)), 5U) 
                         >> 5U))] >> (0x1fU & VL_SHIFTL_III(17,32,32, 
                                                            (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i), 6U) 
                                                             + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j)), 5U))));
    self_attention__DOT__attn_inst__DOT__V_val = ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(17,32,32, 
                                                                     (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j), 6U) 
                                                                      + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k)), 5U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.self_attention__DOT__V_flat[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x1ffffU 
                                                       & VL_SHIFTL_III(17,32,32, 
                                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j), 6U) 
                                                                        + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k)), 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(17,32,32, 
                                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j), 6U) 
                                                                       + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k)), 5U))))) 
                                                  | (vlSelfRef.self_attention__DOT__V_flat[
                                                     (0xfffU 
                                                      & (VL_SHIFTL_III(17,32,32, 
                                                                       (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j), 6U) 
                                                                        + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k)), 5U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(17,32,32, 
                                                                      (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j), 6U) 
                                                                       + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k)), 5U))));
    vlSelfRef.self_attention__DOT__attn_inst__DOT__product 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, self_attention__DOT__attn_inst__DOT__softmax_val), 
                      VL_EXTENDS_QI(64,32, self_attention__DOT__attn_inst__DOT__V_val));
}

void Vself_attention___024root___eval_triggers__act(Vself_attention___024root* vlSelf);
void Vself_attention___024root___eval_act(Vself_attention___024root* vlSelf);

bool Vself_attention___024root___eval_phase__act(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_phase__act\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vself_attention___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vself_attention___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vself_attention___024root___eval_nba(Vself_attention___024root* vlSelf);

bool Vself_attention___024root___eval_phase__nba(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_phase__nba\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vself_attention___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vself_attention___024root___dump_triggers__ico(Vself_attention___024root* vlSelf);
#endif  // VL_DEBUG
bool Vself_attention___024root___eval_phase__ico(Vself_attention___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vself_attention___024root___dump_triggers__nba(Vself_attention___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vself_attention___024root___dump_triggers__act(Vself_attention___024root* vlSelf);
#endif  // VL_DEBUG

void Vself_attention___024root___eval(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vself_attention___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("self_attention.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vself_attention___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vself_attention___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("self_attention.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vself_attention___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("self_attention.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vself_attention___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vself_attention___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vself_attention___024root___eval_debug_assertions(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_debug_assertions\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
