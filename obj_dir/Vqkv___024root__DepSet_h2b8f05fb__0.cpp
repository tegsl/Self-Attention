// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vqkv.h for the primary calling header

#include "Vqkv__pch.h"
#include "Vqkv___024root.h"

void Vqkv___024root___eval_act(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_act\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vqkv___024root___nba_sequent__TOP__0(Vqkv___024root* vlSelf);

void Vqkv___024root___eval_nba(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_nba\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vqkv___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vqkv___024root___nba_sequent__TOP__0(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___nba_sequent__TOP__0\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__qkv__DOT__state;
    __Vdly__qkv__DOT__state = 0;
    CData/*5:0*/ __Vdly__qkv__DOT__i;
    __Vdly__qkv__DOT__i = 0;
    CData/*5:0*/ __Vdly__qkv__DOT__calc_j;
    __Vdly__qkv__DOT__calc_j = 0;
    IData/*31:0*/ __Vdly__qkv__DOT__acc_q;
    __Vdly__qkv__DOT__acc_q = 0;
    IData/*31:0*/ __Vdly__qkv__DOT__acc_k;
    __Vdly__qkv__DOT__acc_k = 0;
    IData/*31:0*/ __Vdly__qkv__DOT__acc_v;
    __Vdly__qkv__DOT__acc_v = 0;
    SData/*15:0*/ __Vdly__qkv__DOT__weight;
    __Vdly__qkv__DOT__weight = 0;
    CData/*0:0*/ __VdlySet__qkv__DOT__input_vec__v0;
    __VdlySet__qkv__DOT__input_vec__v0 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v64;
    __VdlyVal__qkv__DOT__input_vec__v64 = 0;
    CData/*0:0*/ __VdlySet__qkv__DOT__input_vec__v64;
    __VdlySet__qkv__DOT__input_vec__v64 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v65;
    __VdlyVal__qkv__DOT__input_vec__v65 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v66;
    __VdlyVal__qkv__DOT__input_vec__v66 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v67;
    __VdlyVal__qkv__DOT__input_vec__v67 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v68;
    __VdlyVal__qkv__DOT__input_vec__v68 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v69;
    __VdlyVal__qkv__DOT__input_vec__v69 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v70;
    __VdlyVal__qkv__DOT__input_vec__v70 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v71;
    __VdlyVal__qkv__DOT__input_vec__v71 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v72;
    __VdlyVal__qkv__DOT__input_vec__v72 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v73;
    __VdlyVal__qkv__DOT__input_vec__v73 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v74;
    __VdlyVal__qkv__DOT__input_vec__v74 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v75;
    __VdlyVal__qkv__DOT__input_vec__v75 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v76;
    __VdlyVal__qkv__DOT__input_vec__v76 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v77;
    __VdlyVal__qkv__DOT__input_vec__v77 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v78;
    __VdlyVal__qkv__DOT__input_vec__v78 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v79;
    __VdlyVal__qkv__DOT__input_vec__v79 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v80;
    __VdlyVal__qkv__DOT__input_vec__v80 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v81;
    __VdlyVal__qkv__DOT__input_vec__v81 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v82;
    __VdlyVal__qkv__DOT__input_vec__v82 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v83;
    __VdlyVal__qkv__DOT__input_vec__v83 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v84;
    __VdlyVal__qkv__DOT__input_vec__v84 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v85;
    __VdlyVal__qkv__DOT__input_vec__v85 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v86;
    __VdlyVal__qkv__DOT__input_vec__v86 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v87;
    __VdlyVal__qkv__DOT__input_vec__v87 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v88;
    __VdlyVal__qkv__DOT__input_vec__v88 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v89;
    __VdlyVal__qkv__DOT__input_vec__v89 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v90;
    __VdlyVal__qkv__DOT__input_vec__v90 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v91;
    __VdlyVal__qkv__DOT__input_vec__v91 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v92;
    __VdlyVal__qkv__DOT__input_vec__v92 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v93;
    __VdlyVal__qkv__DOT__input_vec__v93 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v94;
    __VdlyVal__qkv__DOT__input_vec__v94 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v95;
    __VdlyVal__qkv__DOT__input_vec__v95 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v96;
    __VdlyVal__qkv__DOT__input_vec__v96 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v97;
    __VdlyVal__qkv__DOT__input_vec__v97 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v98;
    __VdlyVal__qkv__DOT__input_vec__v98 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v99;
    __VdlyVal__qkv__DOT__input_vec__v99 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v100;
    __VdlyVal__qkv__DOT__input_vec__v100 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v101;
    __VdlyVal__qkv__DOT__input_vec__v101 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v102;
    __VdlyVal__qkv__DOT__input_vec__v102 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v103;
    __VdlyVal__qkv__DOT__input_vec__v103 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v104;
    __VdlyVal__qkv__DOT__input_vec__v104 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v105;
    __VdlyVal__qkv__DOT__input_vec__v105 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v106;
    __VdlyVal__qkv__DOT__input_vec__v106 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v107;
    __VdlyVal__qkv__DOT__input_vec__v107 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v108;
    __VdlyVal__qkv__DOT__input_vec__v108 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v109;
    __VdlyVal__qkv__DOT__input_vec__v109 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v110;
    __VdlyVal__qkv__DOT__input_vec__v110 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v111;
    __VdlyVal__qkv__DOT__input_vec__v111 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v112;
    __VdlyVal__qkv__DOT__input_vec__v112 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v113;
    __VdlyVal__qkv__DOT__input_vec__v113 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v114;
    __VdlyVal__qkv__DOT__input_vec__v114 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v115;
    __VdlyVal__qkv__DOT__input_vec__v115 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v116;
    __VdlyVal__qkv__DOT__input_vec__v116 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v117;
    __VdlyVal__qkv__DOT__input_vec__v117 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v118;
    __VdlyVal__qkv__DOT__input_vec__v118 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v119;
    __VdlyVal__qkv__DOT__input_vec__v119 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v120;
    __VdlyVal__qkv__DOT__input_vec__v120 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v121;
    __VdlyVal__qkv__DOT__input_vec__v121 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v122;
    __VdlyVal__qkv__DOT__input_vec__v122 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v123;
    __VdlyVal__qkv__DOT__input_vec__v123 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v124;
    __VdlyVal__qkv__DOT__input_vec__v124 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v125;
    __VdlyVal__qkv__DOT__input_vec__v125 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v126;
    __VdlyVal__qkv__DOT__input_vec__v126 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__input_vec__v127;
    __VdlyVal__qkv__DOT__input_vec__v127 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__Q__v0;
    __VdlyVal__qkv__DOT__Q__v0 = 0;
    CData/*5:0*/ __VdlyDim0__qkv__DOT__Q__v0;
    __VdlyDim0__qkv__DOT__Q__v0 = 0;
    CData/*0:0*/ __VdlySet__qkv__DOT__Q__v0;
    __VdlySet__qkv__DOT__Q__v0 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__K__v0;
    __VdlyVal__qkv__DOT__K__v0 = 0;
    CData/*5:0*/ __VdlyDim0__qkv__DOT__K__v0;
    __VdlyDim0__qkv__DOT__K__v0 = 0;
    SData/*15:0*/ __VdlyVal__qkv__DOT__V__v0;
    __VdlyVal__qkv__DOT__V__v0 = 0;
    CData/*5:0*/ __VdlyDim0__qkv__DOT__V__v0;
    __VdlyDim0__qkv__DOT__V__v0 = 0;
    // Body
    __Vdly__qkv__DOT__state = vlSelfRef.qkv__DOT__state;
    __Vdly__qkv__DOT__i = vlSelfRef.qkv__DOT__i;
    __Vdly__qkv__DOT__calc_j = vlSelfRef.qkv__DOT__calc_j;
    __Vdly__qkv__DOT__acc_q = vlSelfRef.qkv__DOT__acc_q;
    __Vdly__qkv__DOT__acc_k = vlSelfRef.qkv__DOT__acc_k;
    __Vdly__qkv__DOT__acc_v = vlSelfRef.qkv__DOT__acc_v;
    __Vdly__qkv__DOT__weight = vlSelfRef.qkv__DOT__weight;
    __VdlySet__qkv__DOT__Q__v0 = 0U;
    __VdlySet__qkv__DOT__input_vec__v0 = 0U;
    __VdlySet__qkv__DOT__input_vec__v64 = 0U;
    if (vlSelfRef.rst) {
        __VdlySet__qkv__DOT__input_vec__v0 = 1U;
    } else if (((0U == (IData)(vlSelfRef.qkv__DOT__state)) 
                & (IData)(vlSelfRef.start))) {
        __VdlyVal__qkv__DOT__input_vec__v64 = (0xffffU 
                                               & vlSelfRef.input_vec_flat[0U]);
        __VdlySet__qkv__DOT__input_vec__v64 = 1U;
        __VdlyVal__qkv__DOT__input_vec__v65 = (vlSelfRef.input_vec_flat[0U] 
                                               >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v66 = (0xffffU 
                                               & vlSelfRef.input_vec_flat[1U]);
        __VdlyVal__qkv__DOT__input_vec__v67 = (vlSelfRef.input_vec_flat[1U] 
                                               >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v68 = (0xffffU 
                                               & vlSelfRef.input_vec_flat[2U]);
        __VdlyVal__qkv__DOT__input_vec__v69 = (vlSelfRef.input_vec_flat[2U] 
                                               >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v70 = (0xffffU 
                                               & vlSelfRef.input_vec_flat[3U]);
        __VdlyVal__qkv__DOT__input_vec__v71 = (vlSelfRef.input_vec_flat[3U] 
                                               >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v72 = (0xffffU 
                                               & vlSelfRef.input_vec_flat[4U]);
        __VdlyVal__qkv__DOT__input_vec__v73 = (vlSelfRef.input_vec_flat[4U] 
                                               >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v74 = (0xffffU 
                                               & vlSelfRef.input_vec_flat[5U]);
        __VdlyVal__qkv__DOT__input_vec__v75 = (vlSelfRef.input_vec_flat[5U] 
                                               >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v76 = (0xffffU 
                                               & vlSelfRef.input_vec_flat[6U]);
        __VdlyVal__qkv__DOT__input_vec__v77 = (vlSelfRef.input_vec_flat[6U] 
                                               >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v78 = (0xffffU 
                                               & vlSelfRef.input_vec_flat[7U]);
        __VdlyVal__qkv__DOT__input_vec__v79 = (vlSelfRef.input_vec_flat[7U] 
                                               >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v80 = (0xffffU 
                                               & vlSelfRef.input_vec_flat[8U]);
        __VdlyVal__qkv__DOT__input_vec__v81 = (vlSelfRef.input_vec_flat[8U] 
                                               >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v82 = (0xffffU 
                                               & vlSelfRef.input_vec_flat[9U]);
        __VdlyVal__qkv__DOT__input_vec__v83 = (vlSelfRef.input_vec_flat[9U] 
                                               >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v84 = (0xffffU 
                                               & vlSelfRef.input_vec_flat[0xaU]);
        __VdlyVal__qkv__DOT__input_vec__v85 = (vlSelfRef.input_vec_flat[0xaU] 
                                               >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v86 = (0xffffU 
                                               & vlSelfRef.input_vec_flat[0xbU]);
        __VdlyVal__qkv__DOT__input_vec__v87 = (vlSelfRef.input_vec_flat[0xbU] 
                                               >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v88 = (0xffffU 
                                               & vlSelfRef.input_vec_flat[0xcU]);
        __VdlyVal__qkv__DOT__input_vec__v89 = (vlSelfRef.input_vec_flat[0xcU] 
                                               >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v90 = (0xffffU 
                                               & vlSelfRef.input_vec_flat[0xdU]);
        __VdlyVal__qkv__DOT__input_vec__v91 = (vlSelfRef.input_vec_flat[0xdU] 
                                               >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v92 = (0xffffU 
                                               & vlSelfRef.input_vec_flat[0xeU]);
        __VdlyVal__qkv__DOT__input_vec__v93 = (vlSelfRef.input_vec_flat[0xeU] 
                                               >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v94 = (0xffffU 
                                               & vlSelfRef.input_vec_flat[0xfU]);
        __VdlyVal__qkv__DOT__input_vec__v95 = (vlSelfRef.input_vec_flat[0xfU] 
                                               >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v96 = (0xffffU 
                                               & vlSelfRef.input_vec_flat[0x10U]);
        __VdlyVal__qkv__DOT__input_vec__v97 = (vlSelfRef.input_vec_flat[0x10U] 
                                               >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v98 = (0xffffU 
                                               & vlSelfRef.input_vec_flat[0x11U]);
        __VdlyVal__qkv__DOT__input_vec__v99 = (vlSelfRef.input_vec_flat[0x11U] 
                                               >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v100 = (0xffffU 
                                                & vlSelfRef.input_vec_flat[0x12U]);
        __VdlyVal__qkv__DOT__input_vec__v101 = (vlSelfRef.input_vec_flat[0x12U] 
                                                >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v102 = (0xffffU 
                                                & vlSelfRef.input_vec_flat[0x13U]);
        __VdlyVal__qkv__DOT__input_vec__v103 = (vlSelfRef.input_vec_flat[0x13U] 
                                                >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v104 = (0xffffU 
                                                & vlSelfRef.input_vec_flat[0x14U]);
        __VdlyVal__qkv__DOT__input_vec__v105 = (vlSelfRef.input_vec_flat[0x14U] 
                                                >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v106 = (0xffffU 
                                                & vlSelfRef.input_vec_flat[0x15U]);
        __VdlyVal__qkv__DOT__input_vec__v107 = (vlSelfRef.input_vec_flat[0x15U] 
                                                >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v108 = (0xffffU 
                                                & vlSelfRef.input_vec_flat[0x16U]);
        __VdlyVal__qkv__DOT__input_vec__v109 = (vlSelfRef.input_vec_flat[0x16U] 
                                                >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v110 = (0xffffU 
                                                & vlSelfRef.input_vec_flat[0x17U]);
        __VdlyVal__qkv__DOT__input_vec__v111 = (vlSelfRef.input_vec_flat[0x17U] 
                                                >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v112 = (0xffffU 
                                                & vlSelfRef.input_vec_flat[0x18U]);
        __VdlyVal__qkv__DOT__input_vec__v113 = (vlSelfRef.input_vec_flat[0x18U] 
                                                >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v114 = (0xffffU 
                                                & vlSelfRef.input_vec_flat[0x19U]);
        __VdlyVal__qkv__DOT__input_vec__v115 = (vlSelfRef.input_vec_flat[0x19U] 
                                                >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v116 = (0xffffU 
                                                & vlSelfRef.input_vec_flat[0x1aU]);
        __VdlyVal__qkv__DOT__input_vec__v117 = (vlSelfRef.input_vec_flat[0x1aU] 
                                                >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v118 = (0xffffU 
                                                & vlSelfRef.input_vec_flat[0x1bU]);
        __VdlyVal__qkv__DOT__input_vec__v119 = (vlSelfRef.input_vec_flat[0x1bU] 
                                                >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v120 = (0xffffU 
                                                & vlSelfRef.input_vec_flat[0x1cU]);
        __VdlyVal__qkv__DOT__input_vec__v121 = (vlSelfRef.input_vec_flat[0x1cU] 
                                                >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v122 = (0xffffU 
                                                & vlSelfRef.input_vec_flat[0x1dU]);
        __VdlyVal__qkv__DOT__input_vec__v123 = (vlSelfRef.input_vec_flat[0x1dU] 
                                                >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v124 = (0xffffU 
                                                & vlSelfRef.input_vec_flat[0x1eU]);
        __VdlyVal__qkv__DOT__input_vec__v125 = (vlSelfRef.input_vec_flat[0x1eU] 
                                                >> 0x10U);
        __VdlyVal__qkv__DOT__input_vec__v126 = (0xffffU 
                                                & vlSelfRef.input_vec_flat[0x1fU]);
        __VdlyVal__qkv__DOT__input_vec__v127 = (vlSelfRef.input_vec_flat[0x1fU] 
                                                >> 0x10U);
    }
    if (vlSelfRef.rst) {
        __Vdly__qkv__DOT__state = 0U;
        __Vdly__qkv__DOT__i = 0U;
        __Vdly__qkv__DOT__calc_j = 0U;
        __Vdly__qkv__DOT__acc_q = 0U;
        __Vdly__qkv__DOT__acc_k = 0U;
        __Vdly__qkv__DOT__acc_v = 0U;
        vlSelfRef.done = 0U;
    } else if ((2U & (IData)(vlSelfRef.qkv__DOT__state))) {
        if (VL_LIKELY(((1U & (IData)(vlSelfRef.qkv__DOT__state))))) {
            vlSelfRef.done = 1U;
            __Vdly__qkv__DOT__state = 0U;
        } else {
            VL_WRITEF_NX("i=%0#  Q=%0d  input_vec[i]=%0d\n",0,
                         6,vlSelfRef.qkv__DOT__i,32,
                         VL_SHIFTRS_III(32,32,32, vlSelfRef.qkv__DOT__acc_q, 0xeU),
                         16,vlSelfRef.qkv__DOT__input_vec
                         [vlSelfRef.qkv__DOT__i]);
            __VdlyVal__qkv__DOT__Q__v0 = (0xffffU & vlSelfRef.qkv__DOT__acc_q);
            __VdlyDim0__qkv__DOT__Q__v0 = vlSelfRef.qkv__DOT__i;
            __VdlySet__qkv__DOT__Q__v0 = 1U;
            __VdlyVal__qkv__DOT__K__v0 = (0xffffU & vlSelfRef.qkv__DOT__acc_k);
            __VdlyDim0__qkv__DOT__K__v0 = vlSelfRef.qkv__DOT__i;
            __VdlyVal__qkv__DOT__V__v0 = (0xffffU & vlSelfRef.qkv__DOT__acc_v);
            __VdlyDim0__qkv__DOT__V__v0 = vlSelfRef.qkv__DOT__i;
            if ((0x3fU == (IData)(vlSelfRef.qkv__DOT__i))) {
                __Vdly__qkv__DOT__state = 3U;
            } else {
                __Vdly__qkv__DOT__i = (0x3fU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.qkv__DOT__i)));
                __Vdly__qkv__DOT__calc_j = 0U;
                __Vdly__qkv__DOT__acc_q = 0U;
                __Vdly__qkv__DOT__acc_k = 0U;
                __Vdly__qkv__DOT__acc_v = 0U;
                __Vdly__qkv__DOT__state = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.qkv__DOT__state))) {
        __Vdly__qkv__DOT__weight = (((IData)(vlSelfRef.qkv__DOT__calc_j) 
                                     == (IData)(vlSelfRef.qkv__DOT__i))
                                     ? 0x4000U : 0U);
        __Vdly__qkv__DOT__acc_q = VL_SHIFTRS_III(32,32,32, 
                                                 (vlSelfRef.qkv__DOT__acc_q 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              VL_EXTENDS_II(32,16, 
                                                                            vlSelfRef.qkv__DOT__input_vec
                                                                            [vlSelfRef.qkv__DOT__calc_j]), 
                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.qkv__DOT__weight)))), 0xeU);
        __Vdly__qkv__DOT__acc_k = VL_SHIFTRS_III(32,32,32, 
                                                 (vlSelfRef.qkv__DOT__acc_k 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              VL_EXTENDS_II(32,16, 
                                                                            vlSelfRef.qkv__DOT__input_vec
                                                                            [vlSelfRef.qkv__DOT__calc_j]), 
                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.qkv__DOT__weight)))), 0xeU);
        __Vdly__qkv__DOT__acc_v = VL_SHIFTRS_III(32,32,32, 
                                                 (vlSelfRef.qkv__DOT__acc_v 
                                                  + 
                                                  VL_MULS_III(32, 
                                                              VL_EXTENDS_II(32,16, 
                                                                            vlSelfRef.qkv__DOT__input_vec
                                                                            [vlSelfRef.qkv__DOT__calc_j]), 
                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.qkv__DOT__weight)))), 0xeU);
        if ((0x3fU == (IData)(vlSelfRef.qkv__DOT__calc_j))) {
            __Vdly__qkv__DOT__state = 2U;
        } else {
            __Vdly__qkv__DOT__calc_j = (0x3fU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.qkv__DOT__calc_j)));
        }
    } else {
        vlSelfRef.done = 0U;
        __Vdly__qkv__DOT__i = 0U;
        __Vdly__qkv__DOT__calc_j = 0U;
        __Vdly__qkv__DOT__acc_q = 0U;
        __Vdly__qkv__DOT__acc_k = 0U;
        __Vdly__qkv__DOT__acc_v = 0U;
        __Vdly__qkv__DOT__state = ((IData)(vlSelfRef.start)
                                    ? 1U : 0U);
    }
    vlSelfRef.qkv__DOT__i = __Vdly__qkv__DOT__i;
    vlSelfRef.qkv__DOT__calc_j = __Vdly__qkv__DOT__calc_j;
    vlSelfRef.qkv__DOT__acc_q = __Vdly__qkv__DOT__acc_q;
    vlSelfRef.qkv__DOT__acc_k = __Vdly__qkv__DOT__acc_k;
    vlSelfRef.qkv__DOT__acc_v = __Vdly__qkv__DOT__acc_v;
    vlSelfRef.qkv__DOT__state = __Vdly__qkv__DOT__state;
    vlSelfRef.qkv__DOT__weight = __Vdly__qkv__DOT__weight;
    if (__VdlySet__qkv__DOT__Q__v0) {
        vlSelfRef.qkv__DOT__Q[__VdlyDim0__qkv__DOT__Q__v0] 
            = __VdlyVal__qkv__DOT__Q__v0;
        vlSelfRef.qkv__DOT__K[__VdlyDim0__qkv__DOT__K__v0] 
            = __VdlyVal__qkv__DOT__K__v0;
        vlSelfRef.qkv__DOT__V[__VdlyDim0__qkv__DOT__V__v0] 
            = __VdlyVal__qkv__DOT__V__v0;
    }
    if (__VdlySet__qkv__DOT__input_vec__v0) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.qkv__DOT__input_vec[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__qkv__DOT__input_vec__v64) {
        vlSelfRef.qkv__DOT__input_vec[0U] = __VdlyVal__qkv__DOT__input_vec__v64;
        vlSelfRef.qkv__DOT__input_vec[1U] = __VdlyVal__qkv__DOT__input_vec__v65;
        vlSelfRef.qkv__DOT__input_vec[2U] = __VdlyVal__qkv__DOT__input_vec__v66;
        vlSelfRef.qkv__DOT__input_vec[3U] = __VdlyVal__qkv__DOT__input_vec__v67;
        vlSelfRef.qkv__DOT__input_vec[4U] = __VdlyVal__qkv__DOT__input_vec__v68;
        vlSelfRef.qkv__DOT__input_vec[5U] = __VdlyVal__qkv__DOT__input_vec__v69;
        vlSelfRef.qkv__DOT__input_vec[6U] = __VdlyVal__qkv__DOT__input_vec__v70;
        vlSelfRef.qkv__DOT__input_vec[7U] = __VdlyVal__qkv__DOT__input_vec__v71;
        vlSelfRef.qkv__DOT__input_vec[8U] = __VdlyVal__qkv__DOT__input_vec__v72;
        vlSelfRef.qkv__DOT__input_vec[9U] = __VdlyVal__qkv__DOT__input_vec__v73;
        vlSelfRef.qkv__DOT__input_vec[0xaU] = __VdlyVal__qkv__DOT__input_vec__v74;
        vlSelfRef.qkv__DOT__input_vec[0xbU] = __VdlyVal__qkv__DOT__input_vec__v75;
        vlSelfRef.qkv__DOT__input_vec[0xcU] = __VdlyVal__qkv__DOT__input_vec__v76;
        vlSelfRef.qkv__DOT__input_vec[0xdU] = __VdlyVal__qkv__DOT__input_vec__v77;
        vlSelfRef.qkv__DOT__input_vec[0xeU] = __VdlyVal__qkv__DOT__input_vec__v78;
        vlSelfRef.qkv__DOT__input_vec[0xfU] = __VdlyVal__qkv__DOT__input_vec__v79;
        vlSelfRef.qkv__DOT__input_vec[0x10U] = __VdlyVal__qkv__DOT__input_vec__v80;
        vlSelfRef.qkv__DOT__input_vec[0x11U] = __VdlyVal__qkv__DOT__input_vec__v81;
        vlSelfRef.qkv__DOT__input_vec[0x12U] = __VdlyVal__qkv__DOT__input_vec__v82;
        vlSelfRef.qkv__DOT__input_vec[0x13U] = __VdlyVal__qkv__DOT__input_vec__v83;
        vlSelfRef.qkv__DOT__input_vec[0x14U] = __VdlyVal__qkv__DOT__input_vec__v84;
        vlSelfRef.qkv__DOT__input_vec[0x15U] = __VdlyVal__qkv__DOT__input_vec__v85;
        vlSelfRef.qkv__DOT__input_vec[0x16U] = __VdlyVal__qkv__DOT__input_vec__v86;
        vlSelfRef.qkv__DOT__input_vec[0x17U] = __VdlyVal__qkv__DOT__input_vec__v87;
        vlSelfRef.qkv__DOT__input_vec[0x18U] = __VdlyVal__qkv__DOT__input_vec__v88;
        vlSelfRef.qkv__DOT__input_vec[0x19U] = __VdlyVal__qkv__DOT__input_vec__v89;
        vlSelfRef.qkv__DOT__input_vec[0x1aU] = __VdlyVal__qkv__DOT__input_vec__v90;
        vlSelfRef.qkv__DOT__input_vec[0x1bU] = __VdlyVal__qkv__DOT__input_vec__v91;
        vlSelfRef.qkv__DOT__input_vec[0x1cU] = __VdlyVal__qkv__DOT__input_vec__v92;
        vlSelfRef.qkv__DOT__input_vec[0x1dU] = __VdlyVal__qkv__DOT__input_vec__v93;
        vlSelfRef.qkv__DOT__input_vec[0x1eU] = __VdlyVal__qkv__DOT__input_vec__v94;
        vlSelfRef.qkv__DOT__input_vec[0x1fU] = __VdlyVal__qkv__DOT__input_vec__v95;
        vlSelfRef.qkv__DOT__input_vec[0x20U] = __VdlyVal__qkv__DOT__input_vec__v96;
        vlSelfRef.qkv__DOT__input_vec[0x21U] = __VdlyVal__qkv__DOT__input_vec__v97;
        vlSelfRef.qkv__DOT__input_vec[0x22U] = __VdlyVal__qkv__DOT__input_vec__v98;
        vlSelfRef.qkv__DOT__input_vec[0x23U] = __VdlyVal__qkv__DOT__input_vec__v99;
        vlSelfRef.qkv__DOT__input_vec[0x24U] = __VdlyVal__qkv__DOT__input_vec__v100;
        vlSelfRef.qkv__DOT__input_vec[0x25U] = __VdlyVal__qkv__DOT__input_vec__v101;
        vlSelfRef.qkv__DOT__input_vec[0x26U] = __VdlyVal__qkv__DOT__input_vec__v102;
        vlSelfRef.qkv__DOT__input_vec[0x27U] = __VdlyVal__qkv__DOT__input_vec__v103;
        vlSelfRef.qkv__DOT__input_vec[0x28U] = __VdlyVal__qkv__DOT__input_vec__v104;
        vlSelfRef.qkv__DOT__input_vec[0x29U] = __VdlyVal__qkv__DOT__input_vec__v105;
        vlSelfRef.qkv__DOT__input_vec[0x2aU] = __VdlyVal__qkv__DOT__input_vec__v106;
        vlSelfRef.qkv__DOT__input_vec[0x2bU] = __VdlyVal__qkv__DOT__input_vec__v107;
        vlSelfRef.qkv__DOT__input_vec[0x2cU] = __VdlyVal__qkv__DOT__input_vec__v108;
        vlSelfRef.qkv__DOT__input_vec[0x2dU] = __VdlyVal__qkv__DOT__input_vec__v109;
        vlSelfRef.qkv__DOT__input_vec[0x2eU] = __VdlyVal__qkv__DOT__input_vec__v110;
        vlSelfRef.qkv__DOT__input_vec[0x2fU] = __VdlyVal__qkv__DOT__input_vec__v111;
        vlSelfRef.qkv__DOT__input_vec[0x30U] = __VdlyVal__qkv__DOT__input_vec__v112;
        vlSelfRef.qkv__DOT__input_vec[0x31U] = __VdlyVal__qkv__DOT__input_vec__v113;
        vlSelfRef.qkv__DOT__input_vec[0x32U] = __VdlyVal__qkv__DOT__input_vec__v114;
        vlSelfRef.qkv__DOT__input_vec[0x33U] = __VdlyVal__qkv__DOT__input_vec__v115;
        vlSelfRef.qkv__DOT__input_vec[0x34U] = __VdlyVal__qkv__DOT__input_vec__v116;
        vlSelfRef.qkv__DOT__input_vec[0x35U] = __VdlyVal__qkv__DOT__input_vec__v117;
        vlSelfRef.qkv__DOT__input_vec[0x36U] = __VdlyVal__qkv__DOT__input_vec__v118;
        vlSelfRef.qkv__DOT__input_vec[0x37U] = __VdlyVal__qkv__DOT__input_vec__v119;
        vlSelfRef.qkv__DOT__input_vec[0x38U] = __VdlyVal__qkv__DOT__input_vec__v120;
        vlSelfRef.qkv__DOT__input_vec[0x39U] = __VdlyVal__qkv__DOT__input_vec__v121;
        vlSelfRef.qkv__DOT__input_vec[0x3aU] = __VdlyVal__qkv__DOT__input_vec__v122;
        vlSelfRef.qkv__DOT__input_vec[0x3bU] = __VdlyVal__qkv__DOT__input_vec__v123;
        vlSelfRef.qkv__DOT__input_vec[0x3cU] = __VdlyVal__qkv__DOT__input_vec__v124;
        vlSelfRef.qkv__DOT__input_vec[0x3dU] = __VdlyVal__qkv__DOT__input_vec__v125;
        vlSelfRef.qkv__DOT__input_vec[0x3eU] = __VdlyVal__qkv__DOT__input_vec__v126;
        vlSelfRef.qkv__DOT__input_vec[0x3fU] = __VdlyVal__qkv__DOT__input_vec__v127;
    }
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

void Vqkv___024root___eval_triggers__act(Vqkv___024root* vlSelf);

bool Vqkv___024root___eval_phase__act(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_phase__act\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vqkv___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vqkv___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vqkv___024root___eval_phase__nba(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_phase__nba\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vqkv___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vqkv___024root___dump_triggers__nba(Vqkv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vqkv___024root___dump_triggers__act(Vqkv___024root* vlSelf);
#endif  // VL_DEBUG

void Vqkv___024root___eval(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vqkv___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("qkv.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vqkv___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("qkv.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vqkv___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vqkv___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vqkv___024root___eval_debug_assertions(Vqkv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqkv___024root___eval_debug_assertions\n"); );
    Vqkv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
