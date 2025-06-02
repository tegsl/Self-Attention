// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vctrl_fsm.h for the primary calling header

#include "Vctrl_fsm__pch.h"
#include "Vctrl_fsm__Syms.h"
#include "Vctrl_fsm___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vctrl_fsm___024root___dump_triggers__ico(Vctrl_fsm___024root* vlSelf);
#endif  // VL_DEBUG

void Vctrl_fsm___024root___eval_triggers__ico(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___eval_triggers__ico\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vctrl_fsm___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vctrl_fsm___024root___dump_triggers__act(Vctrl_fsm___024root* vlSelf);
#endif  // VL_DEBUG

void Vctrl_fsm___024root___eval_triggers__act(Vctrl_fsm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctrl_fsm___024root___eval_triggers__act\n"); );
    Vctrl_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vctrl_fsm___024root___dump_triggers__act(vlSelf);
    }
#endif
}
