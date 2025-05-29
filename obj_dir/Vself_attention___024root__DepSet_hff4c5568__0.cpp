// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vself_attention.h for the primary calling header

#include "Vself_attention__pch.h"
#include "Vself_attention___024root.h"

void Vself_attention___024root___ico_sequent__TOP__0(Vself_attention___024root* vlSelf);

void Vself_attention___024root___eval_ico(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_ico\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vself_attention___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vself_attention___024root___ico_sequent__TOP__0(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___ico_sequent__TOP__0\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<32>/*1023:0*/ self_attention__DOT__input_vec_flat;
    VL_ZERO_W(1024, self_attention__DOT__input_vec_flat);
    // Body
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

void Vself_attention___024root___eval_nba(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___eval_nba\n"); );
    Vself_attention__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vself_attention___024root___nba_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 256> Vself_attention__ConstPool__TABLE_he925e649_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vself_attention__ConstPool__TABLE_h79cf329d_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vself_attention__ConstPool__TABLE_h67c1a7b9_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vself_attention__ConstPool__TABLE_h49c34cfa_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vself_attention__ConstPool__TABLE_he900d9c0_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vself_attention__ConstPool__TABLE_hb8dc07a9_0;

VL_INLINE_OPT void Vself_attention___024root___nba_sequent__TOP__0(Vself_attention___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vself_attention___024root___nba_sequent__TOP__0\n"); );
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
    CData/*6:0*/ __Vdly__self_attention__DOT__token_counter;
    __Vdly__self_attention__DOT__token_counter = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qkv_inst__DOT__i;
    __Vdly__self_attention__DOT__qkv_inst__DOT__i = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q;
    __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k;
    __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v;
    __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__qk_inst__DOT__state;
    __Vdly__self_attention__DOT__qk_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qk_inst__DOT__i;
    __Vdly__self_attention__DOT__qk_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__qk_inst__DOT__k;
    __Vdly__self_attention__DOT__qk_inst__DOT__k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qk_inst__DOT__acc;
    __Vdly__self_attention__DOT__qk_inst__DOT__acc = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__qk_inst__DOT__product;
    __Vdly__self_attention__DOT__qk_inst__DOT__product = 0;
    CData/*2:0*/ __Vdly__self_attention__DOT__softmax_inst__DOT__state;
    __Vdly__self_attention__DOT__softmax_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__softmax_inst__DOT__i;
    __Vdly__self_attention__DOT__softmax_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__softmax_inst__DOT__j;
    __Vdly__self_attention__DOT__softmax_inst__DOT__j = 0;
    SData/*11:0*/ __Vdly__self_attention__DOT__softmax_inst__DOT__sum_idx;
    __Vdly__self_attention__DOT__softmax_inst__DOT__sum_idx = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__softmax_inst__DOT__sum_exp;
    __Vdly__self_attention__DOT__softmax_inst__DOT__sum_exp = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__softmax_inst__DOT__product;
    __Vdly__self_attention__DOT__softmax_inst__DOT__product = 0;
    CData/*1:0*/ __Vdly__self_attention__DOT__attn_inst__DOT__state;
    __Vdly__self_attention__DOT__attn_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__attn_inst__DOT__i;
    __Vdly__self_attention__DOT__attn_inst__DOT__i = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__attn_inst__DOT__j;
    __Vdly__self_attention__DOT__attn_inst__DOT__j = 0;
    CData/*5:0*/ __Vdly__self_attention__DOT__attn_inst__DOT__k;
    __Vdly__self_attention__DOT__attn_inst__DOT__k = 0;
    IData/*31:0*/ __Vdly__self_attention__DOT__attn_inst__DOT__acc;
    __Vdly__self_attention__DOT__attn_inst__DOT__acc = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__qkv_inst__DOT__Q__v0;
    __VdlyVal__self_attention__DOT__qkv_inst__DOT__Q__v0 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__qkv_inst__DOT__Q__v0;
    __VdlyDim0__self_attention__DOT__qkv_inst__DOT__Q__v0 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__qkv_inst__DOT__Q__v0;
    __VdlySet__self_attention__DOT__qkv_inst__DOT__Q__v0 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__qkv_inst__DOT__K__v0;
    __VdlyVal__self_attention__DOT__qkv_inst__DOT__K__v0 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__qkv_inst__DOT__K__v0;
    __VdlyDim0__self_attention__DOT__qkv_inst__DOT__K__v0 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__qkv_inst__DOT__K__v0;
    __VdlySet__self_attention__DOT__qkv_inst__DOT__K__v0 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__qkv_inst__DOT__V__v0;
    __VdlyVal__self_attention__DOT__qkv_inst__DOT__V__v0 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__qkv_inst__DOT__V__v0;
    __VdlyDim0__self_attention__DOT__qkv_inst__DOT__V__v0 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__qkv_inst__DOT__V__v0;
    __VdlySet__self_attention__DOT__qkv_inst__DOT__V__v0 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_scores__v0;
    __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_scores__v0 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_scores__v0;
    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_scores__v0 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_scores__v0;
    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_scores__v0 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_scores__v0;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_scores__v0 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v0;
    __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v0 = 0;
    CData/*5:0*/ __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v0;
    __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v0 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v0;
    __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v0 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v0;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v0 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v0;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v0 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v0;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_mem__v0;
    __VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v1;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v1 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v1;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v2;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v2 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v2;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v3;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v3 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v3;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v3 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v4;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v4 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v4;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v4 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v5;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v5 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v5;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v5 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v6;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v6 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v6;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v6 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v7;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v7 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v7;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v7 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v8;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v8 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v8;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v8 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v9;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v9 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v9;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v9 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v10;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v10 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v10;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v10 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v11;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v11 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v11;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v11 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v12;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v12 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v12;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v12 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v13;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v13 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v13;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v13 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v14;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v14 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v14;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v14 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v15;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v15 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v15;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v15 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v16;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v16 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v16;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v16 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v17;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v17 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v17;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v17 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v18;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v18 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v18;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v18 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v19;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v19 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v19;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v19 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v20;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v20 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v20;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v20 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v21;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v21 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v21;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v21 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v22;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v22 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v22;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v22 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v23;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v23 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v23;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v23 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v24;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v24 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v24;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v24 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v25;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v25 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v25;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v25 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v26;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v26 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v26;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v26 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v27;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v27 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v27;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v27 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v28;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v28 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v28;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v28 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v29;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v29 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v29;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v29 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v30;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v30 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v30;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v30 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v31;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v31 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v31;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v31 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v32;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v32 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v32;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v32 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v33;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v33 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v33;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v33 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v34;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v34 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v34;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v34 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v35;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v35 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v35;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v35 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v36;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v36 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v36;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v36 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v37;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v37 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v37;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v37 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v38;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v38 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v38;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v38 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v39;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v39 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v39;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v39 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v40;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v40 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v40;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v40 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v41;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v41 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v41;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v41 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v42;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v42 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v42;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v42 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v43;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v43 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v43;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v43 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v44;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v44 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v44;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v44 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v45;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v45 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v45;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v45 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v46;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v46 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v46;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v46 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v47;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v47 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v47;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v47 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v48;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v48 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v48;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v48 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v49;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v49 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v49;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v49 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v50;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v50 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v50;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v50 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v51;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v51 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v51;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v51 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v52;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v52 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v52;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v52 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v53;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v53 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v53;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v53 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v54;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v54 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v54;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v54 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v55;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v55 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v55;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v55 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v56;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v56 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v56;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v56 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v57;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v57 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v57;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v57 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v58;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v58 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v58;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v58 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v59;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v59 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v59;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v59 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v60;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v60 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v60;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v60 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v61;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v61 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v61;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v61 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v62;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v62 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v62;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v62 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v63;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v63 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v63;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v63 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v0;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v0 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v0;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_mem__v0;
    __VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v1;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v1 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v1;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v2;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v2 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v2;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v3;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v3 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v3;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v3 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v4;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v4 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v4;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v4 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v5;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v5 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v5;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v5 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v6;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v6 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v6;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v6 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v7;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v7 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v7;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v7 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v8;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v8 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v8;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v8 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v9;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v9 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v9;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v9 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v10;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v10 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v10;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v10 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v11;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v11 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v11;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v11 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v12;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v12 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v12;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v12 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v13;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v13 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v13;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v13 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v14;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v14 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v14;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v14 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v15;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v15 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v15;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v15 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v16;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v16 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v16;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v16 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v17;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v17 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v17;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v17 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v18;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v18 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v18;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v18 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v19;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v19 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v19;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v19 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v20;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v20 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v20;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v20 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v21;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v21 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v21;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v21 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v22;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v22 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v22;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v22 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v23;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v23 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v23;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v23 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v24;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v24 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v24;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v24 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v25;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v25 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v25;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v25 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v26;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v26 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v26;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v26 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v27;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v27 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v27;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v27 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v28;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v28 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v28;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v28 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v29;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v29 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v29;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v29 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v30;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v30 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v30;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v30 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v31;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v31 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v31;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v31 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v32;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v32 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v32;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v32 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v33;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v33 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v33;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v33 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v34;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v34 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v34;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v34 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v35;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v35 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v35;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v35 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v36;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v36 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v36;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v36 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v37;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v37 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v37;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v37 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v38;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v38 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v38;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v38 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v39;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v39 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v39;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v39 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v40;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v40 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v40;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v40 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v41;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v41 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v41;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v41 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v42;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v42 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v42;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v42 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v43;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v43 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v43;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v43 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v44;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v44 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v44;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v44 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v45;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v45 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v45;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v45 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v46;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v46 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v46;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v46 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v47;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v47 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v47;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v47 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v48;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v48 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v48;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v48 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v49;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v49 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v49;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v49 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v50;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v50 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v50;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v50 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v51;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v51 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v51;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v51 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v52;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v52 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v52;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v52 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v53;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v53 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v53;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v53 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v54;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v54 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v54;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v54 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v55;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v55 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v55;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v55 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v56;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v56 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v56;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v56 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v57;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v57 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v57;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v57 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v58;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v58 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v58;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v58 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v59;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v59 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v59;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v59 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v60;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v60 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v60;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v60 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v61;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v61 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v61;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v61 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v62;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v62 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v62;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v62 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v63;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v63 = 0;
    CData/*5:0*/ __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v63;
    __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v63 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_out__v0;
    __VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_out__v0 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v64;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v64 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_out__v64;
    __VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_out__v64 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v65;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v65 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v66;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v66 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v67;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v67 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v68;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v68 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v69;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v69 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v70;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v70 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v71;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v71 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v72;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v72 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v73;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v73 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v74;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v74 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v75;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v75 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v76;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v76 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v77;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v77 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v78;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v78 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v79;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v79 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v80;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v80 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v81;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v81 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v82;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v82 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v83;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v83 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v84;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v84 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v85;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v85 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v86;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v86 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v87;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v87 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v88;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v88 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v89;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v89 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v90;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v90 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v91;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v91 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v92;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v92 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v93;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v93 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v94;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v94 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v95;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v95 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v96;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v96 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v97;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v97 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v98;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v98 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v99;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v99 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v100;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v100 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v101;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v101 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v102;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v102 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v103;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v103 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v104;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v104 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v105;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v105 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v106;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v106 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v107;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v107 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v108;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v108 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v109;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v109 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v110;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v110 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v111;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v111 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v112;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v112 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v113;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v113 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v114;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v114 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v115;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v115 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v116;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v116 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v117;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v117 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v118;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v118 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v119;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v119 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v120;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v120 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v121;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v121 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v122;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v122 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v123;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v123 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v124;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v124 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v125;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v125 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v126;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v126 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v127;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v127 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v128;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v128 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_out__v128;
    __VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_out__v128 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v129;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v129 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v130;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v130 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v131;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v131 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v132;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v132 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v133;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v133 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v134;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v134 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v135;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v135 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v136;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v136 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v137;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v137 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v138;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v138 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v139;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v139 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v140;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v140 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v141;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v141 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v142;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v142 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v143;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v143 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v144;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v144 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v145;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v145 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v146;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v146 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v147;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v147 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v148;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v148 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v149;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v149 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v150;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v150 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v151;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v151 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v152;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v152 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v153;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v153 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v154;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v154 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v155;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v155 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v156;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v156 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v157;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v157 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v158;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v158 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v159;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v159 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v160;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v160 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v161;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v161 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v162;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v162 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v163;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v163 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v164;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v164 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v165;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v165 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v166;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v166 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v167;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v167 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v168;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v168 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v169;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v169 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v170;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v170 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v171;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v171 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v172;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v172 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v173;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v173 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v174;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v174 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v175;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v175 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v176;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v176 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v177;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v177 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v178;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v178 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v179;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v179 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v180;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v180 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v181;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v181 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v182;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v182 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v183;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v183 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v184;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v184 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v185;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v185 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v186;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v186 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v187;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v187 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v188;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v188 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v189;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v189 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v190;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v190 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v191;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v191 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_out__v0;
    __VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_out__v0 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v64;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v64 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_out__v64;
    __VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_out__v64 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v65;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v65 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v66;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v66 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v67;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v67 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v68;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v68 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v69;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v69 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v70;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v70 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v71;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v71 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v72;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v72 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v73;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v73 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v74;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v74 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v75;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v75 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v76;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v76 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v77;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v77 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v78;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v78 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v79;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v79 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v80;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v80 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v81;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v81 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v82;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v82 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v83;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v83 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v84;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v84 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v85;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v85 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v86;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v86 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v87;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v87 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v88;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v88 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v89;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v89 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v90;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v90 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v91;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v91 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v92;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v92 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v93;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v93 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v94;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v94 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v95;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v95 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v96;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v96 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v97;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v97 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v98;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v98 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v99;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v99 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v100;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v100 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v101;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v101 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v102;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v102 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v103;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v103 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v104;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v104 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v105;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v105 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v106;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v106 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v107;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v107 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v108;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v108 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v109;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v109 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v110;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v110 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v111;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v111 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v112;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v112 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v113;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v113 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v114;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v114 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v115;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v115 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v116;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v116 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v117;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v117 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v118;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v118 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v119;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v119 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v120;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v120 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v121;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v121 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v122;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v122 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v123;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v123 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v124;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v124 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v125;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v125 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v126;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v126 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v127;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v127 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v128;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v128 = 0;
    CData/*0:0*/ __VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_out__v128;
    __VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_out__v128 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v129;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v129 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v130;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v130 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v131;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v131 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v132;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v132 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v133;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v133 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v134;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v134 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v135;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v135 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v136;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v136 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v137;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v137 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v138;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v138 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v139;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v139 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v140;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v140 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v141;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v141 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v142;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v142 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v143;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v143 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v144;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v144 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v145;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v145 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v146;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v146 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v147;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v147 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v148;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v148 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v149;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v149 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v150;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v150 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v151;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v151 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v152;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v152 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v153;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v153 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v154;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v154 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v155;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v155 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v156;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v156 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v157;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v157 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v158;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v158 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v159;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v159 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v160;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v160 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v161;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v161 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v162;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v162 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v163;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v163 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v164;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v164 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v165;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v165 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v166;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v166 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v167;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v167 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v168;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v168 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v169;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v169 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v170;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v170 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v171;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v171 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v172;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v172 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v173;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v173 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v174;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v174 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v175;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v175 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v176;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v176 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v177;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v177 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v178;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v178 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v179;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v179 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v180;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v180 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v181;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v181 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v182;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v182 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v183;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v183 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v184;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v184 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v185;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v185 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v186;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v186 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v187;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v187 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v188;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v188 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v189;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v189 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v190;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v190 = 0;
    SData/*15:0*/ __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v191;
    __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v191 = 0;
    // Body
    __Vdly__self_attention__DOT__token_counter = vlSelfRef.self_attention__DOT__token_counter;
    __Vdly__self_attention__DOT__attn_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__attn_inst__DOT__i;
    __Vdly__self_attention__DOT__attn_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__attn_inst__DOT__j;
    __Vdly__self_attention__DOT__attn_inst__DOT__k 
        = vlSelfRef.self_attention__DOT__attn_inst__DOT__k;
    __Vdly__self_attention__DOT__attn_inst__DOT__acc 
        = vlSelfRef.self_attention__DOT__attn_inst__DOT__acc;
    __Vdly__self_attention__DOT__attn_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__attn_inst__DOT__state;
    __Vdly__self_attention__DOT__qk_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qk_inst__DOT__state;
    __Vdly__self_attention__DOT__qk_inst__DOT__i = vlSelfRef.self_attention__DOT__qk_inst__DOT__i;
    __Vdly__self_attention__DOT__qk_inst__DOT__k = vlSelfRef.self_attention__DOT__qk_inst__DOT__k;
    __Vdly__self_attention__DOT__qk_inst__DOT__acc 
        = vlSelfRef.self_attention__DOT__qk_inst__DOT__acc;
    __Vdly__self_attention__DOT__qk_inst__DOT__product 
        = vlSelfRef.self_attention__DOT__qk_inst__DOT__product;
    __Vdly__self_attention__DOT__softmax_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__state;
    __Vdly__self_attention__DOT__softmax_inst__DOT__i 
        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
    __Vdly__self_attention__DOT__softmax_inst__DOT__j 
        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__j;
    __Vdly__self_attention__DOT__softmax_inst__DOT__sum_idx 
        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__sum_idx;
    __Vdly__self_attention__DOT__softmax_inst__DOT__sum_exp 
        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__sum_exp;
    __Vdly__self_attention__DOT__softmax_inst__DOT__product 
        = vlSelfRef.self_attention__DOT__softmax_inst__DOT__product;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v0 = 0U;
    __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_scores__v0 = 0U;
    __Vdly__self_attention__DOT__qkv_inst__DOT__state 
        = vlSelfRef.self_attention__DOT__qkv_inst__DOT__state;
    __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
        = vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q;
    __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
        = vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k;
    __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
        = vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v;
    __Vdly__self_attention__DOT__qkv_inst__DOT__i = vlSelfRef.self_attention__DOT__qkv_inst__DOT__i;
    __VdlySet__self_attention__DOT__qkv_inst__DOT__K__v0 = 0U;
    __VdlySet__self_attention__DOT__qkv_inst__DOT__V__v0 = 0U;
    __VdlySet__self_attention__DOT__qkv_inst__DOT__Q__v0 = 0U;
    __VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_mem__v0 = 0U;
    __VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_mem__v0 = 0U;
    __VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_out__v0 = 0U;
    __VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_out__v64 = 0U;
    __VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_out__v128 = 0U;
    __VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_out__v0 = 0U;
    __VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_out__v64 = 0U;
    __VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_out__v128 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        if (vlSelfRef.self_attention__DOT__qkv_done_bit) {
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v0 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v0 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_mem__v0 = 1U;
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v1 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [1U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v1 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v2 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [2U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v2 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v3 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [3U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v3 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v4 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [4U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v4 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v5 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [5U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v5 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v6 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [6U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v6 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v7 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [7U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v7 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v8 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [8U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v8 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v9 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [9U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v9 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v10 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0xaU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v10 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v11 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0xbU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v11 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v12 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0xcU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v12 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v13 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0xdU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v13 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v14 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0xeU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v14 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v15 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0xfU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v15 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v16 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x10U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v16 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v17 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x11U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v17 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v18 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x12U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v18 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v19 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x13U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v19 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v20 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x14U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v20 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v21 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x15U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v21 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v22 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x16U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v22 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v23 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x17U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v23 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v24 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x18U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v24 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v25 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x19U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v25 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v26 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x1aU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v26 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v27 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x1bU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v27 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v28 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x1cU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v28 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v29 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x1dU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v29 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v30 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x1eU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v30 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v31 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x1fU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v31 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v32 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x20U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v32 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v33 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x21U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v33 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v34 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x22U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v34 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v35 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x23U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v35 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v36 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x24U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v36 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v37 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x25U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v37 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v38 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x26U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v38 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v39 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x27U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v39 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v40 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x28U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v40 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v41 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x29U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v41 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v42 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x2aU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v42 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v43 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x2bU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v43 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v44 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x2cU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v44 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v45 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x2dU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v45 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v46 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x2eU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v46 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v47 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x2fU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v47 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v48 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x30U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v48 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v49 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x31U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v49 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v50 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x32U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v50 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v51 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x33U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v51 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v52 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x34U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v52 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v53 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x35U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v53 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v54 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x36U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v54 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v55 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x37U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v55 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v56 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x38U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v56 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v57 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x39U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v57 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v58 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x3aU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v58 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v59 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x3bU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v59 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v60 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x3cU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v60 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v61 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x3dU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v61 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v62 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x3eU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v62 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v63 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x3fU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v63 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v0 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v0 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_mem__v0 = 1U;
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v1 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [1U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v1 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v2 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [2U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v2 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v3 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [3U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v3 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v4 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [4U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v4 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v5 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [5U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v5 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v6 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [6U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v6 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v7 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [7U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v7 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v8 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [8U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v8 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v9 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [9U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v9 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v10 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0xaU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v10 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v11 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0xbU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v11 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v12 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0xcU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v12 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v13 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0xdU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v13 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v14 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0xeU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v14 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v15 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0xfU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v15 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v16 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x10U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v16 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v17 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x11U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v17 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v18 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x12U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v18 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v19 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x13U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v19 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v20 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x14U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v20 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v21 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x15U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v21 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v22 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x16U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v22 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v23 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x17U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v23 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v24 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x18U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v24 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v25 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x19U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v25 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v26 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x1aU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v26 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v27 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x1bU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v27 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v28 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x1cU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v28 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v29 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x1dU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v29 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v30 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x1eU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v30 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v31 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x1fU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v31 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v32 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x20U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v32 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v33 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x21U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v33 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v34 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x22U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v34 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v35 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x23U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v35 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v36 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x24U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v36 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v37 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x25U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v37 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v38 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x26U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v38 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v39 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x27U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v39 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v40 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x28U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v40 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v41 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x29U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v41 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v42 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x2aU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v42 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v43 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x2bU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v43 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v44 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x2cU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v44 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v45 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x2dU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v45 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v46 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x2eU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v46 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v47 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x2fU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v47 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v48 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x30U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v48 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v49 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x31U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v49 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v50 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x32U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v50 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v51 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x33U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v51 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v52 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x34U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v52 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v53 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x35U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v53 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v54 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x36U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v54 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v55 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x37U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v55 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v56 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x38U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v56 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v57 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x39U];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v57 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v58 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x3aU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v58 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v59 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x3bU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v59 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v60 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x3cU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v60 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v61 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x3dU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v61 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v62 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x3eU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v62 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v63 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x3fU];
            __VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v63 
                = (0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter));
        }
    }
    if (vlSelfRef.rst) {
        __VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_out__v0 = 1U;
        __VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_out__v0 = 1U;
        vlSelfRef.self_attention__DOT__fsm__DOT__curr_state = 0U;
        __Vdly__self_attention__DOT__token_counter = 0U;
        vlSelfRef.self_attention__DOT__fsm_start = 0U;
        vlSelfRef.done = 0U;
        __Vdly__self_attention__DOT__attn_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__attn_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__attn_inst__DOT__j = 0U;
        __Vdly__self_attention__DOT__attn_inst__DOT__k = 0U;
        __Vdly__self_attention__DOT__attn_inst__DOT__acc = 0U;
        vlSelfRef.self_attention__DOT__attn_done = 0U;
        __Vdly__self_attention__DOT__qk_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qk_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__qk_inst__DOT__k = 0U;
        __Vdly__self_attention__DOT__qk_inst__DOT__acc = 0U;
        vlSelfRef.self_attention__DOT__qk_done = 0U;
        __Vdly__self_attention__DOT__softmax_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__softmax_inst__DOT__i = 0U;
        __Vdly__self_attention__DOT__softmax_inst__DOT__j = 0U;
        __Vdly__self_attention__DOT__softmax_inst__DOT__sum_idx = 0U;
        __Vdly__self_attention__DOT__softmax_inst__DOT__sum_exp = 0U;
        vlSelfRef.self_attention__DOT__softmax_done = 0U;
        __Vdly__self_attention__DOT__qkv_inst__DOT__state = 0U;
        __Vdly__self_attention__DOT__qkv_inst__DOT__i = 0U;
        vlSelfRef.self_attention__DOT__qkv_done_bit = 0U;
    } else {
        if (vlSelfRef.self_attention__DOT__qkv_done_bit) {
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v64 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0U];
            __VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_out__v64 = 1U;
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v65 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [1U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v66 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [2U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v67 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [3U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v68 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [4U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v69 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [5U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v70 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [6U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v71 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [7U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v72 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [8U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v73 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [9U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v74 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0xaU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v75 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0xbU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v76 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0xcU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v77 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0xdU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v78 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0xeU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v79 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0xfU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v80 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x10U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v81 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x11U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v82 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x12U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v83 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x13U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v84 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x14U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v85 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x15U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v86 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x16U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v87 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x17U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v88 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x18U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v89 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x19U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v90 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x1aU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v91 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x1bU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v92 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x1cU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v93 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x1dU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v94 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x1eU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v95 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x1fU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v96 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x20U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v97 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x21U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v98 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x22U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v99 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x23U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v100 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x24U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v101 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x25U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v102 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x26U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v103 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x27U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v104 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x28U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v105 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x29U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v106 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x2aU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v107 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x2bU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v108 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x2cU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v109 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x2dU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v110 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x2eU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v111 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x2fU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v112 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x30U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v113 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x31U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v114 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x32U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v115 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x33U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v116 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x34U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v117 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x35U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v118 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x36U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v119 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x37U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v120 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x38U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v121 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x39U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v122 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x3aU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v123 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x3bU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v124 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x3cU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v125 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x3dU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v126 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x3eU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v127 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_in
                [0x3fU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v64 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0U];
            __VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_out__v64 = 1U;
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v65 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [1U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v66 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [2U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v67 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [3U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v68 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [4U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v69 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [5U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v70 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [6U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v71 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [7U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v72 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [8U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v73 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [9U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v74 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0xaU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v75 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0xbU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v76 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0xcU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v77 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0xdU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v78 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0xeU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v79 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0xfU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v80 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x10U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v81 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x11U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v82 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x12U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v83 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x13U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v84 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x14U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v85 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x15U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v86 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x16U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v87 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x17U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v88 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x18U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v89 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x19U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v90 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x1aU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v91 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x1bU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v92 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x1cU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v93 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x1dU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v94 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x1eU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v95 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x1fU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v96 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x20U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v97 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x21U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v98 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x22U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v99 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x23U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v100 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x24U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v101 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x25U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v102 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x26U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v103 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x27U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v104 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x28U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v105 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x29U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v106 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x2aU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v107 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x2bU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v108 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x2cU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v109 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x2dU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v110 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x2eU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v111 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x2fU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v112 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x30U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v113 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x31U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v114 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x32U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v115 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x33U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v116 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x34U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v117 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x35U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v118 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x36U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v119 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x37U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v120 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x38U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v121 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x39U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v122 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x3aU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v123 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x3bU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v124 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x3cU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v125 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x3dU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v126 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x3eU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v127 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_in
                [0x3fU];
        } else {
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v128 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0U];
            __VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_out__v128 = 1U;
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v129 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [1U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v130 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [2U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v131 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [3U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v132 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [4U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v133 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [5U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v134 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [6U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v135 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [7U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v136 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [8U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v137 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [9U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v138 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0xaU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v139 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0xbU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v140 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0xcU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v141 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0xdU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v142 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0xeU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v143 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0xfU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v144 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x10U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v145 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x11U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v146 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x12U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v147 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x13U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v148 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x14U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v149 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x15U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v150 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x16U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v151 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x17U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v152 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x18U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v153 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x19U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v154 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x1aU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v155 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x1bU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v156 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x1cU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v157 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x1dU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v158 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x1eU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v159 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x1fU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v160 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x20U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v161 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x21U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v162 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x22U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v163 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x23U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v164 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x24U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v165 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x25U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v166 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x26U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v167 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x27U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v168 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x28U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v169 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x29U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v170 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x2aU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v171 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x2bU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v172 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x2cU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v173 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x2dU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v174 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x2eU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v175 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x2fU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v176 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x30U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v177 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x31U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v178 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x32U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v179 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x33U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v180 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x34U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v181 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x35U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v182 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x36U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v183 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x37U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v184 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x38U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v185 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x39U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v186 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x3aU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v187 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x3bU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v188 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x3cU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v189 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x3dU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v190 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x3eU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v191 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x3fU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v128 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0U];
            __VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_out__v128 = 1U;
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v129 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [1U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v130 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [2U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v131 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [3U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v132 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [4U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v133 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [5U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v134 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [6U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v135 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [7U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v136 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [8U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v137 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [9U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v138 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0xaU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v139 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0xbU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v140 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0xcU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v141 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0xdU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v142 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0xeU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v143 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0xfU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v144 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x10U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v145 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x11U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v146 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x12U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v147 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x13U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v148 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x14U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v149 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x15U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v150 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x16U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v151 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x17U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v152 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x18U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v153 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x19U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v154 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x1aU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v155 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x1bU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v156 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x1cU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v157 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x1dU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v158 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x1eU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v159 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x1fU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v160 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x20U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v161 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x21U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v162 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x22U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v163 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x23U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v164 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x24U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v165 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x25U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v166 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x26U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v167 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x27U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v168 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x28U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v169 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x29U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v170 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x2aU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v171 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x2bU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v172 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x2cU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v173 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x2dU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v174 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x2eU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v175 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x2fU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v176 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x30U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v177 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x31U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v178 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x32U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v179 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x33U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v180 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x34U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v181 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x35U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v182 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x36U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v183 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x37U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v184 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x38U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v185 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x39U];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v186 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x3aU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v187 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x3bU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v188 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x3cU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v189 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x3dU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v190 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x3eU];
            __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v191 
                = vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem
                [(0x3fU & (IData)(vlSelfRef.self_attention__DOT__token_counter))]
                [0x3fU];
        }
        vlSelfRef.self_attention__DOT__fsm__DOT__curr_state 
            = vlSelfRef.self_attention__DOT__fsm__DOT__next_state;
        if (((IData)(vlSelfRef.start) & (0U == (IData)(vlSelfRef.self_attention__DOT__token_counter)))) {
            vlSelfRef.self_attention__DOT__fsm_start = 1U;
        } else if (vlSelfRef.self_attention__DOT__fsm_done) {
            __Vdly__self_attention__DOT__token_counter 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__token_counter)));
            vlSelfRef.self_attention__DOT__fsm_start = 1U;
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__token_counter))) {
                vlSelfRef.done = 1U;
            }
        } else {
            vlSelfRef.self_attention__DOT__fsm_start = 0U;
        }
        if ((2U & (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__state))) {
                __Vdly__self_attention__DOT__attn_inst__DOT__acc 
                    = (vlSelfRef.self_attention__DOT__attn_inst__DOT__acc 
                       + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__attn_inst__DOT__product_reg, 0xeU));
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j))) {
                    VL_ASSIGNSEL_WI(65536,16,(0xffffU 
                                              & VL_SHIFTL_III(16,32,32, 
                                                              (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i), 6U) 
                                                               + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k)), 4U)), vlSelfRef.output_tokens_flat, 
                                    (0xffffU & vlSelfRef.self_attention__DOT__attn_inst__DOT__acc));
                    __Vdly__self_attention__DOT__attn_inst__DOT__j = 0U;
                    if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k))) {
                        __Vdly__self_attention__DOT__attn_inst__DOT__k = 0U;
                        if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i))) {
                            vlSelfRef.self_attention__DOT__attn_done = 1U;
                            __Vdly__self_attention__DOT__attn_inst__DOT__state = 0U;
                        } else {
                            __Vdly__self_attention__DOT__attn_inst__DOT__i 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i)));
                            __Vdly__self_attention__DOT__attn_inst__DOT__state = 1U;
                        }
                    } else {
                        __Vdly__self_attention__DOT__attn_inst__DOT__k 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k)));
                        __Vdly__self_attention__DOT__attn_inst__DOT__state = 1U;
                    }
                    __Vdly__self_attention__DOT__attn_inst__DOT__acc = 0U;
                } else {
                    __Vdly__self_attention__DOT__attn_inst__DOT__j 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j)));
                    __Vdly__self_attention__DOT__attn_inst__DOT__state = 1U;
                }
            } else {
                vlSelfRef.self_attention__DOT__attn_inst__DOT__product_reg 
                    = ((IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__softmax_val_reg) 
                       * (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__V_val_reg));
                __Vdly__self_attention__DOT__attn_inst__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__attn_inst__DOT__softmax_val_reg 
                = (0xffffU & (((0U == (0x1fU & VL_SHIFTL_III(16,32,32, 
                                                             (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i), 6U) 
                                                              + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j)), 4U)))
                                ? 0U : (vlSelfRef.self_attention__DOT__softmax_scores_flat[
                                        (((IData)(0xfU) 
                                          + (0xffffU 
                                             & VL_SHIFTL_III(16,32,32, 
                                                             (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i), 6U) 
                                                              + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j)), 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(16,32,32, 
                                                          (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i), 6U) 
                                                           + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j)), 4U))))) 
                              | (vlSelfRef.self_attention__DOT__softmax_scores_flat[
                                 (0x7ffU & (VL_SHIFTL_III(16,32,32, 
                                                          (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i), 6U) 
                                                           + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j)), 4U) 
                                            >> 5U))] 
                                 >> (0x1fU & VL_SHIFTL_III(16,32,32, 
                                                           (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__i), 6U) 
                                                            + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j)), 4U)))));
            __Vdly__self_attention__DOT__attn_inst__DOT__state = 2U;
            vlSelfRef.self_attention__DOT__attn_inst__DOT__V_val_reg 
                = (0xffffU & (((0U == (0x1fU & VL_SHIFTL_III(10,32,32, 
                                                             (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j), 6U) 
                                                              + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k)), 4U)))
                                ? 0U : (vlSelfRef.self_attention__DOT__V_flat_out[
                                        (((IData)(0xfU) 
                                          + (0x3ffU 
                                             & VL_SHIFTL_III(10,32,32, 
                                                             (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j), 6U) 
                                                              + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k)), 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(10,32,32, 
                                                          (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j), 6U) 
                                                           + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k)), 4U))))) 
                              | (vlSelfRef.self_attention__DOT__V_flat_out[
                                 (0x1fU & (VL_SHIFTL_III(10,32,32, 
                                                         (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j), 6U) 
                                                          + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k)), 4U) 
                                           >> 5U))] 
                                 >> (0x1fU & VL_SHIFTL_III(10,32,32, 
                                                           (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__j), 6U) 
                                                            + (IData)(vlSelfRef.self_attention__DOT__attn_inst__DOT__k)), 4U)))));
        } else {
            vlSelfRef.self_attention__DOT__attn_done = 0U;
            if (vlSelfRef.self_attention__DOT__attn_start) {
                __Vdly__self_attention__DOT__attn_inst__DOT__i = 0U;
                __Vdly__self_attention__DOT__attn_inst__DOT__j = 0U;
                __Vdly__self_attention__DOT__attn_inst__DOT__k = 0U;
                __Vdly__self_attention__DOT__attn_inst__DOT__acc = 0U;
                __Vdly__self_attention__DOT__attn_inst__DOT__state = 1U;
            }
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qk_done = 0U;
            if (vlSelfRef.self_attention__DOT__qk_start) {
                __Vdly__self_attention__DOT__qk_inst__DOT__i = 0U;
                __Vdly__self_attention__DOT__qk_inst__DOT__k = 0U;
                __Vdly__self_attention__DOT__qk_inst__DOT__acc = 0U;
                __Vdly__self_attention__DOT__qk_inst__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__state))) {
            __Vdly__self_attention__DOT__qk_inst__DOT__product 
                = ((IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__Q_val) 
                   * (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__K_val));
            vlSelfRef.self_attention__DOT__qk_inst__DOT__Q_val 
                = (0xffffU & (((0U == (0x1fU & VL_SHIFTL_III(16,32,32, 
                                                             (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__i), 6U) 
                                                              + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k)), 4U)))
                                ? 0U : (vlSelfRef.self_attention__DOT__Q_flat[
                                        (((IData)(0xfU) 
                                          + (0xffffU 
                                             & VL_SHIFTL_III(16,32,32, 
                                                             (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__i), 6U) 
                                                              + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k)), 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(16,32,32, 
                                                          (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__i), 6U) 
                                                           + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k)), 4U))))) 
                              | (vlSelfRef.self_attention__DOT__Q_flat[
                                 (0x7ffU & (VL_SHIFTL_III(16,32,32, 
                                                          (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__i), 6U) 
                                                           + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k)), 4U) 
                                            >> 5U))] 
                                 >> (0x1fU & VL_SHIFTL_III(16,32,32, 
                                                           (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__i), 6U) 
                                                            + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k)), 4U)))));
            vlSelfRef.self_attention__DOT__qk_inst__DOT__K_val 
                = (0xffffU & (((0U == (0x1fU & VL_SHIFTL_III(10,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k), 4U)))
                                ? 0U : (vlSelfRef.self_attention__DOT__K_flat_out[
                                        (((IData)(0xfU) 
                                          + (0x3ffU 
                                             & VL_SHIFTL_III(10,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k), 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(10,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k), 4U))))) 
                              | (vlSelfRef.self_attention__DOT__K_flat_out[
                                 (0x1fU & (VL_SHIFTL_III(10,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k), 4U) 
                                           >> 5U))] 
                                 >> (0x1fU & VL_SHIFTL_III(10,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k), 4U)))));
            __Vdly__self_attention__DOT__qk_inst__DOT__acc 
                = (vlSelfRef.self_attention__DOT__qk_inst__DOT__acc 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qk_inst__DOT__product, 0xeU));
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k))) {
                VL_ASSIGNSEL_WI(65536,16,(0xffffU & 
                                          VL_SHIFTL_III(16,32,32, 
                                                        (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__i), 6U) 
                                                         + 
                                                         (0x3fU 
                                                          & (IData)(vlSelfRef.self_attention__DOT__token_counter))), 4U)), vlSelfRef.self_attention__DOT__scores_flat, 
                                (0xffffU & vlSelfRef.self_attention__DOT__qk_inst__DOT__acc));
                __Vdly__self_attention__DOT__qk_inst__DOT__k = 0U;
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__qk_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__qk_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__i)));
                }
                __Vdly__self_attention__DOT__qk_inst__DOT__acc = 0U;
            } else {
                __Vdly__self_attention__DOT__qk_inst__DOT__k 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__k)));
            }
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qk_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qk_done = 1U;
            __Vdly__self_attention__DOT__qk_inst__DOT__state = 0U;
        } else {
            __Vdly__self_attention__DOT__qk_inst__DOT__state = 0U;
        }
        if ((4U & (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__state))) {
                __Vdly__self_attention__DOT__softmax_inst__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__state))) {
                __Vdly__self_attention__DOT__softmax_inst__DOT__state = 0U;
            } else {
                __Vdly__self_attention__DOT__softmax_inst__DOT__product 
                    = (vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_scores
                       [vlSelfRef.self_attention__DOT__softmax_inst__DOT__i]
                       [vlSelfRef.self_attention__DOT__softmax_inst__DOT__j] 
                       * (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__recip_sum));
                __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_scores__v0 
                    = (0xffffU & (vlSelfRef.self_attention__DOT__softmax_inst__DOT__product 
                                  >> 0xeU));
                __VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_scores__v0 
                    = vlSelfRef.self_attention__DOT__softmax_inst__DOT__j;
                __VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_scores__v0 
                    = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
                __VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_scores__v0 = 1U;
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))) {
                    __Vdly__self_attention__DOT__softmax_inst__DOT__j = 0U;
                    if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i))) {
                        vlSelfRef.self_attention__DOT__softmax_done = 1U;
                        __Vdly__self_attention__DOT__softmax_inst__DOT__state = 0U;
                    } else {
                        __Vdly__self_attention__DOT__softmax_inst__DOT__i 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i)));
                    }
                } else {
                    __Vdly__self_attention__DOT__softmax_inst__DOT__j 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
                }
            }
        } else if ((2U & (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__state))) {
                vlSelfRef.self_attention__DOT__softmax_inst__DOT__recip_sum 
                    = ((0U != vlSelfRef.self_attention__DOT__softmax_inst__DOT__sum_exp)
                        ? (0xffffU & VL_DIV_III(32, (IData)(0x4000U), vlSelfRef.self_attention__DOT__softmax_inst__DOT__sum_exp))
                        : 0U);
                __Vdly__self_attention__DOT__softmax_inst__DOT__i = 0U;
                __Vdly__self_attention__DOT__softmax_inst__DOT__j = 0U;
                __Vdly__self_attention__DOT__softmax_inst__DOT__state = 4U;
            } else {
                __Vdly__self_attention__DOT__softmax_inst__DOT__sum_exp 
                    = (vlSelfRef.self_attention__DOT__softmax_inst__DOT__sum_exp 
                       + vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_scores
                       [(0x3fU & ((IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__sum_idx) 
                                  >> 6U))][(0x3fU & (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__sum_idx))]);
                if ((0xfffU == (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__sum_idx))) {
                    __Vdly__self_attention__DOT__softmax_inst__DOT__state = 3U;
                } else {
                    __Vdly__self_attention__DOT__softmax_inst__DOT__sum_idx 
                        = (0xfffU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__sum_idx)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__state))) {
            __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v0 
                = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                           vlSelfRef.self_attention__DOT__softmax_inst__DOT__scores
                                           [vlSelfRef.self_attention__DOT__softmax_inst__DOT__i]
                                           [vlSelfRef.self_attention__DOT__softmax_inst__DOT__j], 2U));
            __VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v0 
                = vlSelfRef.self_attention__DOT__softmax_inst__DOT__j;
            __VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v0 
                = vlSelfRef.self_attention__DOT__softmax_inst__DOT__i;
            __VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v0 = 1U;
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j))) {
                __Vdly__self_attention__DOT__softmax_inst__DOT__j = 0U;
                if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i))) {
                    __Vdly__self_attention__DOT__softmax_inst__DOT__i = 0U;
                    __Vdly__self_attention__DOT__softmax_inst__DOT__sum_idx = 0U;
                    __Vdly__self_attention__DOT__softmax_inst__DOT__sum_exp = 0U;
                    __Vdly__self_attention__DOT__softmax_inst__DOT__state = 2U;
                } else {
                    __Vdly__self_attention__DOT__softmax_inst__DOT__i 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__i)));
                }
            } else {
                __Vdly__self_attention__DOT__softmax_inst__DOT__j 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__softmax_inst__DOT__j)));
            }
        } else {
            vlSelfRef.self_attention__DOT__softmax_done = 0U;
            __Vdly__self_attention__DOT__softmax_inst__DOT__sum_exp = 0U;
            if (vlSelfRef.self_attention__DOT__softmax_start) {
                __Vdly__self_attention__DOT__softmax_inst__DOT__i = 0U;
                __Vdly__self_attention__DOT__softmax_inst__DOT__j = 0U;
                __Vdly__self_attention__DOT__softmax_inst__DOT__state = 1U;
            }
        }
        if ((0U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_done_bit = 0U;
            __Vdly__self_attention__DOT__qkv_inst__DOT__i = 0U;
            __Vdly__self_attention__DOT__qkv_inst__DOT__state 
                = ((IData)(vlSelfRef.self_attention__DOT__qkv_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__state))) {
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q = 0U;
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k = 0U;
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v = 0U;
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k, 0xeU));
            __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
                   + VL_SHIFTRS_III(32,32,32, vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v, 0xeU));
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0U]);
            __VdlyVal__self_attention__DOT__qkv_inst__DOT__Q__v0 
                = (0xffffU & vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q);
            __VdlyDim0__self_attention__DOT__qkv_inst__DOT__Q__v0 
                = vlSelfRef.self_attention__DOT__qkv_inst__DOT__i;
            __VdlySet__self_attention__DOT__qkv_inst__DOT__Q__v0 = 1U;
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [1U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [1U]);
            __VdlyVal__self_attention__DOT__qkv_inst__DOT__K__v0 
                = (0xffffU & vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k);
            __VdlyDim0__self_attention__DOT__qkv_inst__DOT__K__v0 
                = vlSelfRef.self_attention__DOT__qkv_inst__DOT__i;
            __VdlySet__self_attention__DOT__qkv_inst__DOT__K__v0 = 1U;
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [1U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [1U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [2U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [2U]);
            __VdlyVal__self_attention__DOT__qkv_inst__DOT__V__v0 
                = (0xffffU & vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v);
            __VdlyDim0__self_attention__DOT__qkv_inst__DOT__V__v0 
                = vlSelfRef.self_attention__DOT__qkv_inst__DOT__i;
            __VdlySet__self_attention__DOT__qkv_inst__DOT__V__v0 = 1U;
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [1U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [1U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [2U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [2U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [3U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [3U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [2U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [2U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [3U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [3U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [4U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [4U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [3U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [3U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [4U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [4U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [5U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [5U]);
            if ((0x3fU == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i))) {
                __Vdly__self_attention__DOT__qkv_inst__DOT__state = 2U;
            } else {
                __Vdly__self_attention__DOT__qkv_inst__DOT__i 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__i)));
            }
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [4U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [4U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [5U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [5U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [6U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [6U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [5U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [5U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [6U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [6U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [7U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [7U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [6U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [6U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [7U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [7U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [8U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [8U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [7U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [7U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [8U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [8U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [9U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [9U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [8U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [8U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [9U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [9U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0xaU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0xaU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [9U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [9U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0xaU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0xaU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0xbU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0xbU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0xaU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0xaU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0xbU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0xbU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0xcU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0xcU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0xbU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0xbU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0xcU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0xcU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0xdU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0xdU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0xcU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0xcU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0xdU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0xdU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0xeU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0xeU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0xdU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0xdU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0xeU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0xeU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0xfU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0xfU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0xeU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0xeU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0xfU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0xfU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x10U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x10U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0xfU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0xfU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x10U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x10U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x11U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x11U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x10U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x10U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x11U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x11U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x12U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x12U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x11U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x11U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x12U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x12U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x13U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x13U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x12U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x12U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x13U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x13U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x14U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x14U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x13U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x13U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x14U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x14U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x15U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x15U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x14U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x14U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x15U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x15U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x16U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x16U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x15U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x15U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x16U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x16U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x17U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x17U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x16U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x16U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x17U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x17U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x18U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x18U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x17U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x17U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x18U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x18U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x19U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x19U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x18U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x18U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x19U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x19U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x1aU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x1aU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x19U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x19U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x1aU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x1aU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x1bU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x1bU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x1aU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x1aU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x1bU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x1bU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x1cU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x1cU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x1bU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x1bU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x1cU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x1cU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x1dU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x1dU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x1cU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x1cU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x1dU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x1dU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x1eU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x1eU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x1dU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x1dU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x1eU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x1eU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x1fU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x1fU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x1eU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x1eU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x1fU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x1fU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x20U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x20U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x1fU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x1fU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x20U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x20U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x21U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x21U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x20U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x20U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x21U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x21U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x22U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x22U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x21U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x21U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x22U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x22U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x23U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x23U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x22U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x22U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x23U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x23U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x24U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x24U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x23U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x23U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x24U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x24U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x25U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x25U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x24U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x24U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x25U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x25U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x26U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x26U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x25U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x25U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x26U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x26U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x27U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x27U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x26U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x26U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x27U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x27U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x28U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x28U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x27U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x27U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x28U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x28U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x29U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x29U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x28U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x28U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x29U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x29U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x2aU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x2aU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x29U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x29U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x2aU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x2aU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x2bU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x2bU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x2aU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x2aU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x2bU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x2bU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x2cU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x2cU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x2bU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x2bU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x2cU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x2cU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x2dU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x2dU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x2cU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x2cU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x2dU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x2dU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x2eU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x2eU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x2dU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x2dU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x2eU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x2eU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x2fU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x2fU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x2eU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x2eU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x2fU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x2fU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x30U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x30U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x2fU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x2fU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x30U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x30U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x31U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x31U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x30U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x30U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x31U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x31U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x32U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x32U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x31U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x31U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x32U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x32U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x33U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x33U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x32U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x32U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x33U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x33U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x34U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x34U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x33U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x33U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x34U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x34U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x35U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x35U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x34U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x34U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x35U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x35U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x36U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x36U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x35U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x35U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x36U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x36U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x37U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x37U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x36U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x36U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x37U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x37U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x38U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x38U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x37U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x37U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x38U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x38U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x39U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x39U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x38U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x38U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x39U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x39U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x3aU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x3aU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x39U] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x39U]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x3aU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x3aU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x3bU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x3bU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x3aU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x3aU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x3bU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x3bU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x3cU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x3cU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x3bU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x3bU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x3cU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x3cU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x3dU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x3dU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x3cU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x3cU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x3dU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x3dU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x3eU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x3eU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x3dU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x3dU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x3eU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x3eU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_q 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x3fU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x3fU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x3eU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x3eU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_k 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x3fU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x3fU]);
            vlSelfRef.self_attention__DOT__qkv_inst__DOT__mult_v 
                = (vlSelfRef.self_attention__DOT__qkv_inst__DOT__input_vec
                   [0x3fU] * vlSelfRef.self_attention__DOT__qkv_inst__DOT__W
                   [0x3fU]);
        } else if ((2U == (IData)(vlSelfRef.self_attention__DOT__qkv_inst__DOT__state))) {
            vlSelfRef.self_attention__DOT__qkv_done_bit = 1U;
            __Vdly__self_attention__DOT__qkv_inst__DOT__state = 0U;
        } else {
            __Vdly__self_attention__DOT__qkv_inst__DOT__state = 0U;
        }
    }
    if (__VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_mem__v0) {
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v0][0U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v0;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v1][1U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v1;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v2][2U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v2;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v3][3U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v3;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v4][4U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v4;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v5][5U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v5;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v6][6U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v6;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v7][7U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v7;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v8][8U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v8;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v9][9U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v9;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v10][0xaU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v10;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v11][0xbU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v11;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v12][0xcU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v12;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v13][0xdU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v13;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v14][0xeU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v14;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v15][0xfU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v15;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v16][0x10U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v16;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v17][0x11U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v17;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v18][0x12U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v18;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v19][0x13U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v19;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v20][0x14U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v20;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v21][0x15U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v21;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v22][0x16U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v22;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v23][0x17U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v23;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v24][0x18U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v24;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v25][0x19U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v25;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v26][0x1aU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v26;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v27][0x1bU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v27;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v28][0x1cU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v28;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v29][0x1dU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v29;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v30][0x1eU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v30;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v31][0x1fU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v31;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v32][0x20U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v32;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v33][0x21U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v33;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v34][0x22U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v34;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v35][0x23U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v35;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v36][0x24U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v36;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v37][0x25U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v37;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v38][0x26U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v38;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v39][0x27U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v39;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v40][0x28U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v40;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v41][0x29U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v41;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v42][0x2aU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v42;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v43][0x2bU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v43;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v44][0x2cU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v44;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v45][0x2dU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v45;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v46][0x2eU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v46;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v47][0x2fU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v47;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v48][0x30U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v48;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v49][0x31U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v49;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v50][0x32U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v50;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v51][0x33U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v51;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v52][0x34U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v52;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v53][0x35U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v53;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v54][0x36U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v54;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v55][0x37U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v55;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v56][0x38U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v56;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v57][0x39U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v57;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v58][0x3aU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v58;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v59][0x3bU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v59;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v60][0x3cU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v60;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v61][0x3dU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v61;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v62][0x3eU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v62;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__V_mem__v63][0x3fU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_mem__v63;
    }
    if (__VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_out__v0) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_out__v64) {
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v64;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[1U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v65;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[2U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v66;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[3U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v67;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[4U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v68;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[5U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v69;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[6U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v70;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[7U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v71;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[8U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v72;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[9U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v73;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0xaU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v74;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0xbU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v75;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0xcU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v76;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0xdU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v77;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0xeU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v78;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0xfU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v79;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x10U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v80;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x11U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v81;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x12U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v82;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x13U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v83;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x14U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v84;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x15U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v85;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x16U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v86;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x17U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v87;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x18U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v88;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x19U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v89;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x1aU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v90;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x1bU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v91;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x1cU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v92;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x1dU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v93;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x1eU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v94;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x1fU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v95;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x20U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v96;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x21U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v97;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x22U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v98;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x23U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v99;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x24U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v100;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x25U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v101;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x26U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v102;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x27U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v103;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x28U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v104;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x29U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v105;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x2aU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v106;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x2bU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v107;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x2cU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v108;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x2dU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v109;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x2eU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v110;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x2fU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v111;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x30U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v112;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x31U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v113;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x32U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v114;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x33U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v115;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x34U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v116;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x35U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v117;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x36U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v118;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x37U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v119;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x38U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v120;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x39U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v121;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x3aU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v122;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x3bU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v123;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x3cU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v124;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x3dU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v125;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x3eU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v126;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x3fU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v127;
    }
    if (__VdlySet__self_attention__DOT__kv_cache_inst__DOT__V_out__v128) {
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v128;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[1U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v129;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[2U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v130;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[3U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v131;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[4U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v132;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[5U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v133;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[6U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v134;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[7U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v135;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[8U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v136;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[9U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v137;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0xaU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v138;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0xbU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v139;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0xcU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v140;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0xdU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v141;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0xeU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v142;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0xfU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v143;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x10U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v144;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x11U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v145;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x12U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v146;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x13U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v147;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x14U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v148;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x15U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v149;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x16U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v150;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x17U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v151;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x18U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v152;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x19U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v153;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x1aU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v154;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x1bU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v155;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x1cU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v156;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x1dU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v157;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x1eU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v158;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x1fU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v159;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x20U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v160;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x21U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v161;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x22U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v162;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x23U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v163;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x24U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v164;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x25U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v165;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x26U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v166;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x27U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v167;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x28U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v168;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x29U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v169;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x2aU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v170;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x2bU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v171;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x2cU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v172;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x2dU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v173;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x2eU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v174;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x2fU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v175;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x30U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v176;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x31U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v177;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x32U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v178;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x33U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v179;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x34U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v180;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x35U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v181;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x36U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v182;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x37U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v183;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x38U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v184;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x39U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v185;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x3aU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v186;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x3bU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v187;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x3cU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v188;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x3dU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v189;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x3eU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v190;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__V_out[0x3fU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__V_out__v191;
    }
    if (__VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_mem__v0) {
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v0][0U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v0;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v1][1U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v1;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v2][2U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v2;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v3][3U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v3;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v4][4U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v4;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v5][5U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v5;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v6][6U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v6;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v7][7U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v7;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v8][8U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v8;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v9][9U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v9;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v10][0xaU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v10;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v11][0xbU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v11;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v12][0xcU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v12;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v13][0xdU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v13;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v14][0xeU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v14;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v15][0xfU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v15;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v16][0x10U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v16;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v17][0x11U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v17;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v18][0x12U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v18;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v19][0x13U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v19;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v20][0x14U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v20;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v21][0x15U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v21;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v22][0x16U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v22;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v23][0x17U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v23;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v24][0x18U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v24;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v25][0x19U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v25;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v26][0x1aU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v26;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v27][0x1bU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v27;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v28][0x1cU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v28;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v29][0x1dU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v29;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v30][0x1eU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v30;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v31][0x1fU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v31;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v32][0x20U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v32;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v33][0x21U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v33;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v34][0x22U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v34;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v35][0x23U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v35;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v36][0x24U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v36;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v37][0x25U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v37;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v38][0x26U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v38;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v39][0x27U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v39;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v40][0x28U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v40;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v41][0x29U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v41;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v42][0x2aU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v42;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v43][0x2bU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v43;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v44][0x2cU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v44;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v45][0x2dU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v45;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v46][0x2eU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v46;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v47][0x2fU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v47;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v48][0x30U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v48;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v49][0x31U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v49;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v50][0x32U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v50;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v51][0x33U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v51;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v52][0x34U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v52;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v53][0x35U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v53;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v54][0x36U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v54;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v55][0x37U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v55;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v56][0x38U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v56;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v57][0x39U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v57;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v58][0x3aU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v58;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v59][0x3bU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v59;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v60][0x3cU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v60;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v61][0x3dU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v61;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v62][0x3eU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v62;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_mem[__VdlyDim1__self_attention__DOT__kv_cache_inst__DOT__K_mem__v63][0x3fU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_mem__v63;
    }
    if (__VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_out__v0) {
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x3fU)) {
            vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[__Vilp2] = 0U;
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
    }
    if (__VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_out__v64) {
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v64;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[1U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v65;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[2U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v66;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[3U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v67;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[4U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v68;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[5U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v69;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[6U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v70;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[7U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v71;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[8U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v72;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[9U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v73;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0xaU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v74;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0xbU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v75;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0xcU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v76;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0xdU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v77;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0xeU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v78;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0xfU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v79;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x10U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v80;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x11U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v81;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x12U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v82;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x13U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v83;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x14U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v84;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x15U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v85;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x16U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v86;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x17U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v87;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x18U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v88;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x19U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v89;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x1aU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v90;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x1bU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v91;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x1cU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v92;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x1dU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v93;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x1eU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v94;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x1fU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v95;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x20U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v96;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x21U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v97;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x22U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v98;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x23U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v99;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x24U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v100;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x25U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v101;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x26U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v102;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x27U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v103;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x28U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v104;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x29U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v105;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x2aU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v106;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x2bU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v107;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x2cU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v108;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x2dU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v109;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x2eU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v110;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x2fU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v111;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x30U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v112;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x31U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v113;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x32U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v114;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x33U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v115;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x34U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v116;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x35U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v117;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x36U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v118;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x37U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v119;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x38U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v120;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x39U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v121;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x3aU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v122;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x3bU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v123;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x3cU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v124;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x3dU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v125;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x3eU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v126;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x3fU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v127;
    }
    if (__VdlySet__self_attention__DOT__kv_cache_inst__DOT__K_out__v128) {
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v128;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[1U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v129;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[2U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v130;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[3U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v131;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[4U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v132;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[5U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v133;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[6U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v134;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[7U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v135;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[8U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v136;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[9U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v137;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0xaU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v138;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0xbU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v139;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0xcU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v140;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0xdU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v141;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0xeU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v142;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0xfU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v143;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x10U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v144;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x11U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v145;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x12U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v146;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x13U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v147;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x14U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v148;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x15U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v149;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x16U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v150;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x17U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v151;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x18U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v152;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x19U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v153;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x1aU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v154;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x1bU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v155;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x1cU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v156;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x1dU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v157;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x1eU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v158;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x1fU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v159;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x20U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v160;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x21U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v161;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x22U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v162;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x23U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v163;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x24U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v164;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x25U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v165;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x26U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v166;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x27U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v167;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x28U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v168;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x29U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v169;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x2aU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v170;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x2bU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v171;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x2cU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v172;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x2dU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v173;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x2eU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v174;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x2fU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v175;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x30U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v176;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x31U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v177;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x32U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v178;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x33U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v179;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x34U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v180;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x35U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v181;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x36U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v182;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x37U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v183;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x38U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v184;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x39U] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v185;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x3aU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v186;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x3bU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v187;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x3cU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v188;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x3dU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v189;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x3eU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v190;
        vlSelfRef.self_attention__DOT__kv_cache_inst__DOT__K_out[0x3fU] 
            = __VdlyVal__self_attention__DOT__kv_cache_inst__DOT__K_out__v191;
    }
    vlSelfRef.self_attention__DOT__attn_inst__DOT__i 
        = __Vdly__self_attention__DOT__attn_inst__DOT__i;
    vlSelfRef.self_attention__DOT__attn_inst__DOT__j 
        = __Vdly__self_attention__DOT__attn_inst__DOT__j;
    vlSelfRef.self_attention__DOT__attn_inst__DOT__k 
        = __Vdly__self_attention__DOT__attn_inst__DOT__k;
    vlSelfRef.self_attention__DOT__attn_inst__DOT__acc 
        = __Vdly__self_attention__DOT__attn_inst__DOT__acc;
    vlSelfRef.self_attention__DOT__attn_inst__DOT__state 
        = __Vdly__self_attention__DOT__attn_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qk_inst__DOT__state 
        = __Vdly__self_attention__DOT__qk_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qk_inst__DOT__i 
        = __Vdly__self_attention__DOT__qk_inst__DOT__i;
    vlSelfRef.self_attention__DOT__qk_inst__DOT__k 
        = __Vdly__self_attention__DOT__qk_inst__DOT__k;
    vlSelfRef.self_attention__DOT__qk_inst__DOT__acc 
        = __Vdly__self_attention__DOT__qk_inst__DOT__acc;
    vlSelfRef.self_attention__DOT__qk_inst__DOT__product 
        = __Vdly__self_attention__DOT__qk_inst__DOT__product;
    vlSelfRef.self_attention__DOT__token_counter = __Vdly__self_attention__DOT__token_counter;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__state 
        = __Vdly__self_attention__DOT__softmax_inst__DOT__state;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__i 
        = __Vdly__self_attention__DOT__softmax_inst__DOT__i;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__j 
        = __Vdly__self_attention__DOT__softmax_inst__DOT__j;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__sum_idx 
        = __Vdly__self_attention__DOT__softmax_inst__DOT__sum_idx;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__sum_exp 
        = __Vdly__self_attention__DOT__softmax_inst__DOT__sum_exp;
    vlSelfRef.self_attention__DOT__softmax_inst__DOT__product 
        = __Vdly__self_attention__DOT__softmax_inst__DOT__product;
    if (__VdlySet__self_attention__DOT__softmax_inst__DOT__exp_scores__v0) {
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__exp_scores[__VdlyDim1__self_attention__DOT__softmax_inst__DOT__exp_scores__v0][__VdlyDim0__self_attention__DOT__softmax_inst__DOT__exp_scores__v0] 
            = __VdlyVal__self_attention__DOT__softmax_inst__DOT__exp_scores__v0;
    }
    if (__VdlySet__self_attention__DOT__softmax_inst__DOT__softmax_scores__v0) {
        vlSelfRef.self_attention__DOT__softmax_inst__DOT__softmax_scores[__VdlyDim1__self_attention__DOT__softmax_inst__DOT__softmax_scores__v0][__VdlyDim0__self_attention__DOT__softmax_inst__DOT__softmax_scores__v0] 
            = __VdlyVal__self_attention__DOT__softmax_inst__DOT__softmax_scores__v0;
    }
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
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__state 
        = __Vdly__self_attention__DOT__qkv_inst__DOT__state;
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_q 
        = __Vdly__self_attention__DOT__qkv_inst__DOT__acc_q;
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_k 
        = __Vdly__self_attention__DOT__qkv_inst__DOT__acc_k;
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__acc_v 
        = __Vdly__self_attention__DOT__qkv_inst__DOT__acc_v;
    vlSelfRef.self_attention__DOT__qkv_inst__DOT__i 
        = __Vdly__self_attention__DOT__qkv_inst__DOT__i;
    if (__VdlySet__self_attention__DOT__qkv_inst__DOT__K__v0) {
        vlSelfRef.self_attention__DOT__qkv_inst__DOT__K[__VdlyDim0__self_attention__DOT__qkv_inst__DOT__K__v0] 
            = __VdlyVal__self_attention__DOT__qkv_inst__DOT__K__v0;
    }
    if (__VdlySet__self_attention__DOT__qkv_inst__DOT__V__v0) {
        vlSelfRef.self_attention__DOT__qkv_inst__DOT__V[__VdlyDim0__self_attention__DOT__qkv_inst__DOT__V__v0] 
            = __VdlyVal__self_attention__DOT__qkv_inst__DOT__V__v0;
    }
    if (__VdlySet__self_attention__DOT__qkv_inst__DOT__Q__v0) {
        vlSelfRef.self_attention__DOT__qkv_inst__DOT__Q[__VdlyDim0__self_attention__DOT__qkv_inst__DOT__Q__v0] 
            = __VdlyVal__self_attention__DOT__qkv_inst__DOT__Q__v0;
    }
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
}
