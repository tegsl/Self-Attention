// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vqk_mul.h for the primary calling header

#include "Vqk_mul__pch.h"
#include "Vqk_mul___024root.h"

void Vqk_mul___024root___ico_sequent__TOP__0(Vqk_mul___024root* vlSelf);

void Vqk_mul___024root___eval_ico(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval_ico\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vqk_mul___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vqk_mul___024root___ico_sequent__TOP__0(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___ico_sequent__TOP__0\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ qk_mul__DOT__unnamedblk1__DOT__m;
    qk_mul__DOT__unnamedblk1__DOT__m = 0;
    // Body
    qk_mul__DOT__unnamedblk1__DOT__m = 0U;
    while (VL_GTS_III(32, 0x40U, qk_mul__DOT__unnamedblk1__DOT__m)) {
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x800U), qk_mul__DOT__unnamedblk1__DOT__m)))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x800U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x800U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x800U), qk_mul__DOT__unnamedblk1__DOT__m) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x800U), qk_mul__DOT__unnamedblk1__DOT__m))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x800U), qk_mul__DOT__unnamedblk1__DOT__m)))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x800U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x800U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x800U), qk_mul__DOT__unnamedblk1__DOT__m) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x800U), qk_mul__DOT__unnamedblk1__DOT__m))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][1U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(1U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(1U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(1U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(1U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][1U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(1U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(1U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(1U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(1U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][2U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(2U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(2U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(2U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(2U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][2U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(2U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(2U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(2U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(2U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][3U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(3U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(3U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(3U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(3U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][3U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(3U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(3U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(3U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(3U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(3U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][4U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(4U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(4U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(4U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(4U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][4U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(4U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(4U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(4U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(4U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(4U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][5U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(5U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(5U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(5U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(5U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][5U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(5U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(5U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(5U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(5U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][6U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(6U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(6U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][6U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(6U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(6U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][7U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(7U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(7U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(7U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(7U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(7U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][7U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(7U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(7U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(7U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(7U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(7U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][8U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(8U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(8U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][8U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(8U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(8U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][9U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(9U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(9U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(9U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(9U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(9U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][9U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(9U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(9U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(9U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(9U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(9U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0xaU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0xaU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xaU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xaU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xaU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0xaU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0xaU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0xaU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xaU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xaU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xaU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0xaU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0xbU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0xbU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xbU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xbU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xbU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0xbU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0xbU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0xbU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xbU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xbU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xbU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0xbU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0xcU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0xcU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xcU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xcU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xcU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0xcU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0xcU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0xcU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xcU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xcU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xcU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0xcU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0xdU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0xdU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xdU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xdU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xdU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0xdU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0xdU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0xdU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xdU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xdU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xdU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0xdU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0xeU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0xeU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xeU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xeU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xeU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0xeU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0xeU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0xeU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xeU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xeU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xeU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0xeU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0xfU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0xfU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xfU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xfU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xfU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0xfU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0xfU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0xfU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xfU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0xfU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xfU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0xfU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x10U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x10U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x10U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x10U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x10U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x10U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x10U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x10U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x10U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x10U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x10U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x10U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x11U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x11U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x11U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x11U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x11U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x11U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x11U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x11U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x11U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x11U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x11U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x11U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x12U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x12U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x12U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x12U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x12U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x12U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x12U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x12U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x12U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x12U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x12U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x12U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x13U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x13U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x13U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x13U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x13U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x13U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x13U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x13U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x13U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x13U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x13U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x13U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x14U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x14U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x14U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x14U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x14U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x14U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x14U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x14U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x14U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x14U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x14U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x14U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x15U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x15U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x15U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x15U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x15U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x15U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x15U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x15U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x15U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x15U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x15U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x15U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x16U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x16U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x16U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x16U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x16U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x16U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x16U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x16U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x16U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x16U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x16U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x16U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x17U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x17U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x17U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x17U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x17U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x17U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x17U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x17U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x17U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x17U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x17U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x17U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x18U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x18U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x18U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x18U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x18U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x18U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x18U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x18U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x18U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x18U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x18U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x18U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x19U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x19U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x19U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x19U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x19U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x19U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x19U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x19U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x19U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x19U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x19U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x19U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x1aU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x1aU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1aU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1aU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x1aU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x1aU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x1aU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1aU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1aU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x1aU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x1bU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x1bU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1bU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1bU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x1bU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x1bU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x1bU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1bU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1bU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x1bU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x1cU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x1cU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1cU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1cU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x1cU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x1cU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x1cU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1cU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1cU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x1cU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x1dU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x1dU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1dU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1dU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x1dU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x1dU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x1dU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1dU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1dU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x1dU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x1eU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x1eU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1eU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1eU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x1eU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x1eU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x1eU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1eU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1eU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x1eU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x1fU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x1fU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1fU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1fU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x1fU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x1fU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x1fU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1fU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x1fU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x1fU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x20U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x20U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x20U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x20U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x20U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x20U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x20U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x20U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x20U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x20U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x20U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x20U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x21U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x21U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x21U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x21U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x21U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x21U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x21U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x21U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x21U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x21U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x21U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x21U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x22U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x22U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x22U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x22U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x22U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x22U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x22U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x22U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x22U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x22U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x22U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x22U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x23U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x23U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x23U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x23U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x23U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x23U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x23U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x23U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x23U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x23U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x23U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x23U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x24U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x24U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x24U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x24U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x24U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x24U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x24U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x24U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x24U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x24U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x24U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x24U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x25U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x25U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x25U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x25U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x25U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x25U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x25U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x25U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x25U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x25U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x25U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x25U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x26U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x26U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x26U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x26U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x26U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x26U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x26U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x26U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x26U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x26U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x26U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x26U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x27U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x27U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x27U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x27U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x27U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x27U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x27U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x27U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x27U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x27U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x27U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x27U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x28U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x28U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x28U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x28U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x28U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x28U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x28U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x28U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x28U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x28U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x28U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x28U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x29U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x29U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x29U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x29U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x29U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x29U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x29U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x29U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x29U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x29U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x29U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x29U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x2aU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x2aU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2aU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2aU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x2aU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x2aU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x2aU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2aU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2aU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x2aU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x2bU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x2bU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2bU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2bU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x2bU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x2bU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x2bU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2bU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2bU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x2bU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x2cU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x2cU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2cU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2cU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x2cU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x2cU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x2cU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2cU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2cU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x2cU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x2dU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x2dU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2dU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2dU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x2dU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x2dU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x2dU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2dU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2dU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x2dU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x2eU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x2eU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2eU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2eU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x2eU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x2eU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x2eU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2eU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2eU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x2eU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x2fU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x2fU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2fU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2fU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x2fU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x2fU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x2fU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2fU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x2fU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x2fU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x30U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x30U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x30U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x30U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x30U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x30U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x30U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x30U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x30U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x30U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x30U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x30U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x31U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x31U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x31U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x31U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x31U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x31U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x31U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x31U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x31U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x31U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x31U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x31U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x32U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x32U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x32U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x32U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x32U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x32U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x32U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x32U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x32U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x32U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x32U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x32U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x33U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x33U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x33U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x33U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x33U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x33U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x33U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x33U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x33U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x33U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x33U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x33U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x34U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x34U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x34U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x34U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x34U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x34U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x34U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x34U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x34U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x34U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x34U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x34U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x35U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x35U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x35U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x35U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x35U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x35U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x35U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x35U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x35U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x35U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x35U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x35U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x36U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x36U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x36U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x36U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x36U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x36U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x36U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x36U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x36U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x36U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x36U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x36U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x37U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x37U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x37U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x37U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x37U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x37U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x37U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x37U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x37U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x37U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x37U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x37U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x38U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x38U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x38U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x38U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x38U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x38U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x38U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x38U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x38U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x38U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x38U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x38U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x39U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x39U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x39U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x39U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x39U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x39U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x39U] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x39U) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x39U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x39U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x39U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x39U) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x3aU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x3aU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3aU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3aU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x3aU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x3aU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x3aU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3aU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3aU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x3aU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x3bU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x3bU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3bU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3bU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x3bU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x3bU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x3bU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3bU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3bU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x3bU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x3cU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x3cU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3cU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3cU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x3cU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x3cU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x3cU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3cU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3cU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x3cU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x3dU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x3dU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3dU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3dU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x3dU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x3dU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x3dU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3dU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3dU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x3dU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x3eU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x3eU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3eU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3eU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x3eU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x3eU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x3eU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3eU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3eU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x3eU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__Q[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x3fU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x3fU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.Q_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3fU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3fU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.Q_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x3fU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        vlSelfRef.qk_mul__DOT__K[(0x3fU & qk_mul__DOT__unnamedblk1__DOT__m)][0x3fU] 
            = (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                            ((IData)(0x3fU) 
                                             + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m)))))
                 ? 0U : (vlSelfRef.K_flat[(((IData)(0x1fU) 
                                            + (0x1ffffU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3fU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))) 
                                           >> 5U)] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x20U), 
                                                             ((IData)(0x3fU) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))))) 
               | (vlSelfRef.K_flat[(0xfffU & (VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))) 
                                              >> 5U))] 
                  >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), 
                                          ((IData)(0x3fU) 
                                           + VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk1__DOT__m))))));
        qk_mul__DOT__unnamedblk1__DOT__m = ((IData)(1U) 
                                            + qk_mul__DOT__unnamedblk1__DOT__m);
    }
}

void Vqk_mul___024root___eval_triggers__ico(Vqk_mul___024root* vlSelf);

bool Vqk_mul___024root___eval_phase__ico(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval_phase__ico\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vqk_mul___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vqk_mul___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vqk_mul___024root___eval_act(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval_act\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vqk_mul___024root___nba_sequent__TOP__0(Vqk_mul___024root* vlSelf);

void Vqk_mul___024root___eval_nba(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval_nba\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vqk_mul___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vqk_mul___024root___nba_sequent__TOP__0(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___nba_sequent__TOP__0\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ qk_mul__DOT__unnamedblk3__DOT__m;
    qk_mul__DOT__unnamedblk3__DOT__m = 0;
    CData/*5:0*/ __Vdly__qk_mul__DOT__i;
    __Vdly__qk_mul__DOT__i = 0;
    CData/*5:0*/ __Vdly__qk_mul__DOT__j;
    __Vdly__qk_mul__DOT__j = 0;
    CData/*5:0*/ __Vdly__qk_mul__DOT__k;
    __Vdly__qk_mul__DOT__k = 0;
    IData/*31:0*/ __Vdly__qk_mul__DOT__acc;
    __Vdly__qk_mul__DOT__acc = 0;
    CData/*2:0*/ __Vdly__qk_mul__DOT__state;
    __Vdly__qk_mul__DOT__state = 0;
    QData/*63:0*/ __Vdly__qk_mul__DOT__mult;
    __Vdly__qk_mul__DOT__mult = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v0;
    __VdlyDim1__qk_mul__DOT__scores__v0 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v1;
    __VdlyDim1__qk_mul__DOT__scores__v1 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v2;
    __VdlyDim1__qk_mul__DOT__scores__v2 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v3;
    __VdlyDim1__qk_mul__DOT__scores__v3 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v4;
    __VdlyDim1__qk_mul__DOT__scores__v4 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v5;
    __VdlyDim1__qk_mul__DOT__scores__v5 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v6;
    __VdlyDim1__qk_mul__DOT__scores__v6 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v7;
    __VdlyDim1__qk_mul__DOT__scores__v7 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v8;
    __VdlyDim1__qk_mul__DOT__scores__v8 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v9;
    __VdlyDim1__qk_mul__DOT__scores__v9 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v10;
    __VdlyDim1__qk_mul__DOT__scores__v10 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v11;
    __VdlyDim1__qk_mul__DOT__scores__v11 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v12;
    __VdlyDim1__qk_mul__DOT__scores__v12 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v13;
    __VdlyDim1__qk_mul__DOT__scores__v13 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v14;
    __VdlyDim1__qk_mul__DOT__scores__v14 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v15;
    __VdlyDim1__qk_mul__DOT__scores__v15 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v16;
    __VdlyDim1__qk_mul__DOT__scores__v16 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v17;
    __VdlyDim1__qk_mul__DOT__scores__v17 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v18;
    __VdlyDim1__qk_mul__DOT__scores__v18 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v19;
    __VdlyDim1__qk_mul__DOT__scores__v19 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v20;
    __VdlyDim1__qk_mul__DOT__scores__v20 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v21;
    __VdlyDim1__qk_mul__DOT__scores__v21 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v22;
    __VdlyDim1__qk_mul__DOT__scores__v22 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v23;
    __VdlyDim1__qk_mul__DOT__scores__v23 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v24;
    __VdlyDim1__qk_mul__DOT__scores__v24 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v25;
    __VdlyDim1__qk_mul__DOT__scores__v25 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v26;
    __VdlyDim1__qk_mul__DOT__scores__v26 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v27;
    __VdlyDim1__qk_mul__DOT__scores__v27 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v28;
    __VdlyDim1__qk_mul__DOT__scores__v28 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v29;
    __VdlyDim1__qk_mul__DOT__scores__v29 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v30;
    __VdlyDim1__qk_mul__DOT__scores__v30 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v31;
    __VdlyDim1__qk_mul__DOT__scores__v31 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v32;
    __VdlyDim1__qk_mul__DOT__scores__v32 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v33;
    __VdlyDim1__qk_mul__DOT__scores__v33 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v34;
    __VdlyDim1__qk_mul__DOT__scores__v34 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v35;
    __VdlyDim1__qk_mul__DOT__scores__v35 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v36;
    __VdlyDim1__qk_mul__DOT__scores__v36 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v37;
    __VdlyDim1__qk_mul__DOT__scores__v37 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v38;
    __VdlyDim1__qk_mul__DOT__scores__v38 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v39;
    __VdlyDim1__qk_mul__DOT__scores__v39 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v40;
    __VdlyDim1__qk_mul__DOT__scores__v40 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v41;
    __VdlyDim1__qk_mul__DOT__scores__v41 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v42;
    __VdlyDim1__qk_mul__DOT__scores__v42 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v43;
    __VdlyDim1__qk_mul__DOT__scores__v43 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v44;
    __VdlyDim1__qk_mul__DOT__scores__v44 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v45;
    __VdlyDim1__qk_mul__DOT__scores__v45 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v46;
    __VdlyDim1__qk_mul__DOT__scores__v46 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v47;
    __VdlyDim1__qk_mul__DOT__scores__v47 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v48;
    __VdlyDim1__qk_mul__DOT__scores__v48 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v49;
    __VdlyDim1__qk_mul__DOT__scores__v49 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v50;
    __VdlyDim1__qk_mul__DOT__scores__v50 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v51;
    __VdlyDim1__qk_mul__DOT__scores__v51 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v52;
    __VdlyDim1__qk_mul__DOT__scores__v52 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v53;
    __VdlyDim1__qk_mul__DOT__scores__v53 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v54;
    __VdlyDim1__qk_mul__DOT__scores__v54 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v55;
    __VdlyDim1__qk_mul__DOT__scores__v55 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v56;
    __VdlyDim1__qk_mul__DOT__scores__v56 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v57;
    __VdlyDim1__qk_mul__DOT__scores__v57 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v58;
    __VdlyDim1__qk_mul__DOT__scores__v58 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v59;
    __VdlyDim1__qk_mul__DOT__scores__v59 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v60;
    __VdlyDim1__qk_mul__DOT__scores__v60 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v61;
    __VdlyDim1__qk_mul__DOT__scores__v61 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v62;
    __VdlyDim1__qk_mul__DOT__scores__v62 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v63;
    __VdlyDim1__qk_mul__DOT__scores__v63 = 0;
    IData/*31:0*/ __VdlyVal__qk_mul__DOT__scores__v64;
    __VdlyVal__qk_mul__DOT__scores__v64 = 0;
    CData/*5:0*/ __VdlyDim0__qk_mul__DOT__scores__v64;
    __VdlyDim0__qk_mul__DOT__scores__v64 = 0;
    CData/*5:0*/ __VdlyDim1__qk_mul__DOT__scores__v64;
    __VdlyDim1__qk_mul__DOT__scores__v64 = 0;
    // Body
    __Vdly__qk_mul__DOT__i = vlSelfRef.qk_mul__DOT__i;
    __Vdly__qk_mul__DOT__j = vlSelfRef.qk_mul__DOT__j;
    __Vdly__qk_mul__DOT__k = vlSelfRef.qk_mul__DOT__k;
    __Vdly__qk_mul__DOT__acc = vlSelfRef.qk_mul__DOT__acc;
    __Vdly__qk_mul__DOT__state = vlSelfRef.qk_mul__DOT__state;
    __Vdly__qk_mul__DOT__mult = vlSelfRef.qk_mul__DOT__mult;
    if (vlSelfRef.rst) {
        vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m = 0U;
        __Vdly__qk_mul__DOT__i = 0U;
        __Vdly__qk_mul__DOT__j = 0U;
        __Vdly__qk_mul__DOT__k = 0U;
        __Vdly__qk_mul__DOT__acc = 0U;
        vlSelfRef.done = 0U;
        __Vdly__qk_mul__DOT__state = 0U;
        while (VL_GTS_III(32, 0x40U, vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m)) {
            __VdlyDim1__qk_mul__DOT__scores__v0 = (0x3fU 
                                                   & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v0), 0U);
            __VdlyDim1__qk_mul__DOT__scores__v1 = (0x3fU 
                                                   & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v1), 1U);
            __VdlyDim1__qk_mul__DOT__scores__v2 = (0x3fU 
                                                   & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v2), 2U);
            __VdlyDim1__qk_mul__DOT__scores__v3 = (0x3fU 
                                                   & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v3), 3U);
            __VdlyDim1__qk_mul__DOT__scores__v4 = (0x3fU 
                                                   & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v4), 4U);
            __VdlyDim1__qk_mul__DOT__scores__v5 = (0x3fU 
                                                   & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v5), 5U);
            __VdlyDim1__qk_mul__DOT__scores__v6 = (0x3fU 
                                                   & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v6), 6U);
            __VdlyDim1__qk_mul__DOT__scores__v7 = (0x3fU 
                                                   & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v7), 7U);
            __VdlyDim1__qk_mul__DOT__scores__v8 = (0x3fU 
                                                   & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v8), 8U);
            __VdlyDim1__qk_mul__DOT__scores__v9 = (0x3fU 
                                                   & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v9), 9U);
            __VdlyDim1__qk_mul__DOT__scores__v10 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v10), 0xaU);
            __VdlyDim1__qk_mul__DOT__scores__v11 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v11), 0xbU);
            __VdlyDim1__qk_mul__DOT__scores__v12 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v12), 0xcU);
            __VdlyDim1__qk_mul__DOT__scores__v13 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v13), 0xdU);
            __VdlyDim1__qk_mul__DOT__scores__v14 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v14), 0xeU);
            __VdlyDim1__qk_mul__DOT__scores__v15 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v15), 0xfU);
            __VdlyDim1__qk_mul__DOT__scores__v16 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v16), 0x10U);
            __VdlyDim1__qk_mul__DOT__scores__v17 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v17), 0x11U);
            __VdlyDim1__qk_mul__DOT__scores__v18 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v18), 0x12U);
            __VdlyDim1__qk_mul__DOT__scores__v19 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v19), 0x13U);
            __VdlyDim1__qk_mul__DOT__scores__v20 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v20), 0x14U);
            __VdlyDim1__qk_mul__DOT__scores__v21 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v21), 0x15U);
            __VdlyDim1__qk_mul__DOT__scores__v22 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v22), 0x16U);
            __VdlyDim1__qk_mul__DOT__scores__v23 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v23), 0x17U);
            __VdlyDim1__qk_mul__DOT__scores__v24 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v24), 0x18U);
            __VdlyDim1__qk_mul__DOT__scores__v25 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v25), 0x19U);
            __VdlyDim1__qk_mul__DOT__scores__v26 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v26), 0x1aU);
            __VdlyDim1__qk_mul__DOT__scores__v27 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v27), 0x1bU);
            __VdlyDim1__qk_mul__DOT__scores__v28 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v28), 0x1cU);
            __VdlyDim1__qk_mul__DOT__scores__v29 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v29), 0x1dU);
            __VdlyDim1__qk_mul__DOT__scores__v30 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v30), 0x1eU);
            __VdlyDim1__qk_mul__DOT__scores__v31 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v31), 0x1fU);
            __VdlyDim1__qk_mul__DOT__scores__v32 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v32), 0x20U);
            __VdlyDim1__qk_mul__DOT__scores__v33 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v33), 0x21U);
            __VdlyDim1__qk_mul__DOT__scores__v34 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v34), 0x22U);
            __VdlyDim1__qk_mul__DOT__scores__v35 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v35), 0x23U);
            __VdlyDim1__qk_mul__DOT__scores__v36 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v36), 0x24U);
            __VdlyDim1__qk_mul__DOT__scores__v37 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v37), 0x25U);
            __VdlyDim1__qk_mul__DOT__scores__v38 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v38), 0x26U);
            __VdlyDim1__qk_mul__DOT__scores__v39 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v39), 0x27U);
            __VdlyDim1__qk_mul__DOT__scores__v40 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v40), 0x28U);
            __VdlyDim1__qk_mul__DOT__scores__v41 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v41), 0x29U);
            __VdlyDim1__qk_mul__DOT__scores__v42 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v42), 0x2aU);
            __VdlyDim1__qk_mul__DOT__scores__v43 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v43), 0x2bU);
            __VdlyDim1__qk_mul__DOT__scores__v44 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v44), 0x2cU);
            __VdlyDim1__qk_mul__DOT__scores__v45 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v45), 0x2dU);
            __VdlyDim1__qk_mul__DOT__scores__v46 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v46), 0x2eU);
            __VdlyDim1__qk_mul__DOT__scores__v47 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v47), 0x2fU);
            __VdlyDim1__qk_mul__DOT__scores__v48 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v48), 0x30U);
            __VdlyDim1__qk_mul__DOT__scores__v49 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v49), 0x31U);
            __VdlyDim1__qk_mul__DOT__scores__v50 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v50), 0x32U);
            __VdlyDim1__qk_mul__DOT__scores__v51 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v51), 0x33U);
            __VdlyDim1__qk_mul__DOT__scores__v52 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v52), 0x34U);
            __VdlyDim1__qk_mul__DOT__scores__v53 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v53), 0x35U);
            __VdlyDim1__qk_mul__DOT__scores__v54 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v54), 0x36U);
            __VdlyDim1__qk_mul__DOT__scores__v55 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v55), 0x37U);
            __VdlyDim1__qk_mul__DOT__scores__v56 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v56), 0x38U);
            __VdlyDim1__qk_mul__DOT__scores__v57 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v57), 0x39U);
            __VdlyDim1__qk_mul__DOT__scores__v58 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v58), 0x3aU);
            __VdlyDim1__qk_mul__DOT__scores__v59 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v59), 0x3bU);
            __VdlyDim1__qk_mul__DOT__scores__v60 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v60), 0x3cU);
            __VdlyDim1__qk_mul__DOT__scores__v61 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v61), 0x3dU);
            __VdlyDim1__qk_mul__DOT__scores__v62 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v62), 0x3eU);
            __VdlyDim1__qk_mul__DOT__scores__v63 = 
                (0x3fU & vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
            vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(0U, (IData)(__VdlyDim1__qk_mul__DOT__scores__v63), 0x3fU);
            vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m 
                = ((IData)(1U) + vlSelfRef.qk_mul__DOT__unnamedblk5__DOT__m);
        }
    } else if ((0U == (IData)(vlSelfRef.qk_mul__DOT__state))) {
        vlSelfRef.done = 0U;
        if (vlSelfRef.start) {
            __Vdly__qk_mul__DOT__i = 0U;
            __Vdly__qk_mul__DOT__j = 0U;
            __Vdly__qk_mul__DOT__k = 0U;
            __Vdly__qk_mul__DOT__acc = 0U;
            __Vdly__qk_mul__DOT__state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.qk_mul__DOT__state))) {
        __Vdly__qk_mul__DOT__mult = VL_MULS_QQQ(64, 
                                                VL_EXTENDS_QI(64,32, 
                                                              vlSelfRef.qk_mul__DOT__Q
                                                              [vlSelfRef.qk_mul__DOT__i]
                                                              [vlSelfRef.qk_mul__DOT__k]), 
                                                VL_EXTENDS_QI(64,32, 
                                                              vlSelfRef.qk_mul__DOT__K
                                                              [vlSelfRef.qk_mul__DOT__j]
                                                              [vlSelfRef.qk_mul__DOT__k]));
        __Vdly__qk_mul__DOT__state = 2U;
    } else if ((2U == (IData)(vlSelfRef.qk_mul__DOT__state))) {
        __Vdly__qk_mul__DOT__acc = ((IData)(VL_EXTENDS_QI(64,32, vlSelfRef.qk_mul__DOT__acc)) 
                                    + (IData)(VL_SHIFTRS_QQI(64,64,32, vlSelfRef.qk_mul__DOT__mult, 0xeU)));
        if ((0x3fU == (IData)(vlSelfRef.qk_mul__DOT__k))) {
            __Vdly__qk_mul__DOT__state = 4U;
        } else {
            __Vdly__qk_mul__DOT__k = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.qk_mul__DOT__k)));
            __Vdly__qk_mul__DOT__state = 1U;
        }
    } else if ((4U == (IData)(vlSelfRef.qk_mul__DOT__state))) {
        __VdlyVal__qk_mul__DOT__scores__v64 = vlSelfRef.qk_mul__DOT__acc;
        __VdlyDim0__qk_mul__DOT__scores__v64 = vlSelfRef.qk_mul__DOT__j;
        __VdlyDim1__qk_mul__DOT__scores__v64 = vlSelfRef.qk_mul__DOT__i;
        vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.enqueue(__VdlyVal__qk_mul__DOT__scores__v64, (IData)(__VdlyDim1__qk_mul__DOT__scores__v64), __VdlyDim0__qk_mul__DOT__scores__v64);
        __Vdly__qk_mul__DOT__k = 0U;
        if ((0x3fU == (IData)(vlSelfRef.qk_mul__DOT__j))) {
            __Vdly__qk_mul__DOT__j = 0U;
            if ((0x3fU == (IData)(vlSelfRef.qk_mul__DOT__i))) {
                vlSelfRef.done = 1U;
                __Vdly__qk_mul__DOT__state = 0U;
            } else {
                __Vdly__qk_mul__DOT__i = (0x3fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.qk_mul__DOT__i)));
                __Vdly__qk_mul__DOT__state = 1U;
            }
        } else {
            __Vdly__qk_mul__DOT__j = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.qk_mul__DOT__j)));
            __Vdly__qk_mul__DOT__state = 1U;
        }
        __Vdly__qk_mul__DOT__acc = 0U;
    }
    vlSelfRef.qk_mul__DOT__i = __Vdly__qk_mul__DOT__i;
    vlSelfRef.qk_mul__DOT__j = __Vdly__qk_mul__DOT__j;
    vlSelfRef.qk_mul__DOT__k = __Vdly__qk_mul__DOT__k;
    vlSelfRef.qk_mul__DOT__acc = __Vdly__qk_mul__DOT__acc;
    vlSelfRef.qk_mul__DOT__state = __Vdly__qk_mul__DOT__state;
    vlSelfRef.qk_mul__DOT__mult = __Vdly__qk_mul__DOT__mult;
    vlSelfRef.__VdlyCommitQueueqk_mul__DOT__scores.commit(vlSelfRef.qk_mul__DOT__scores);
    qk_mul__DOT__unnamedblk3__DOT__m = 0U;
    while (VL_GTS_III(32, 0x40U, qk_mul__DOT__unnamedblk3__DOT__m)) {
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x800U), qk_mul__DOT__unnamedblk3__DOT__m)), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [1U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(2U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [2U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(3U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [3U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(4U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [4U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(5U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [5U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(6U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [6U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(7U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [7U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(8U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [8U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(9U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [9U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xaU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0xaU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xbU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0xbU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xcU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0xcU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xdU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0xdU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xeU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0xeU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0xfU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0xfU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x10U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x10U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x11U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x11U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x12U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x12U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x13U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x13U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x14U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x14U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x15U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x15U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x16U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x16U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x17U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x17U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x18U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x18U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x19U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x19U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x1aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x1bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x1cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x1dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x1eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x1fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x1fU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x20U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x20U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x21U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x21U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x22U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x22U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x23U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x23U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x24U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x24U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x25U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x25U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x26U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x26U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x27U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x27U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x28U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x28U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x29U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x29U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x2aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x2bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x2cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x2dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x2eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x2fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x2fU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x30U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x30U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x31U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x31U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x32U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x32U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x33U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x33U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x34U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x34U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x35U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x35U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x36U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x36U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x37U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x37U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x38U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x38U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x39U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x39U]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3aU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x3aU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3bU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x3bU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3cU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x3cU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3dU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x3dU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3eU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x3eU]);
        VL_ASSIGNSEL_WI(131072,32,(0x1ffffU & VL_MULS_III(32, (IData)(0x20U), 
                                                          ((IData)(0x3fU) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(0x40U), qk_mul__DOT__unnamedblk3__DOT__m)))), vlSelfRef.scores_flat, 
                        vlSelfRef.qk_mul__DOT__scores
                        [(0x3fU & qk_mul__DOT__unnamedblk3__DOT__m)]
                        [0x3fU]);
        qk_mul__DOT__unnamedblk3__DOT__m = ((IData)(1U) 
                                            + qk_mul__DOT__unnamedblk3__DOT__m);
    }
}

void Vqk_mul___024root___eval_triggers__act(Vqk_mul___024root* vlSelf);

bool Vqk_mul___024root___eval_phase__act(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval_phase__act\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vqk_mul___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vqk_mul___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vqk_mul___024root___eval_phase__nba(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval_phase__nba\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vqk_mul___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vqk_mul___024root___dump_triggers__ico(Vqk_mul___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vqk_mul___024root___dump_triggers__nba(Vqk_mul___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vqk_mul___024root___dump_triggers__act(Vqk_mul___024root* vlSelf);
#endif  // VL_DEBUG

void Vqk_mul___024root___eval(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vqk_mul___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("qk_mul.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vqk_mul___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vqk_mul___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("qk_mul.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vqk_mul___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("qk_mul.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vqk_mul___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vqk_mul___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vqk_mul___024root___eval_debug_assertions(Vqk_mul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqk_mul___024root___eval_debug_assertions\n"); );
    Vqk_mul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
