// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vctrl_fsm__pch.h"

//============================================================
// Constructors

Vctrl_fsm::Vctrl_fsm(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vctrl_fsm__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , start{vlSymsp->TOP.start}
    , qkv_done{vlSymsp->TOP.qkv_done}
    , qk_done{vlSymsp->TOP.qk_done}
    , softmax_done{vlSymsp->TOP.softmax_done}
    , attn_done{vlSymsp->TOP.attn_done}
    , qkv_start{vlSymsp->TOP.qkv_start}
    , qk_start{vlSymsp->TOP.qk_start}
    , softmax_start{vlSymsp->TOP.softmax_start}
    , attn_start{vlSymsp->TOP.attn_start}
    , done{vlSymsp->TOP.done}
    , debug_state{vlSymsp->TOP.debug_state}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vctrl_fsm::Vctrl_fsm(const char* _vcname__)
    : Vctrl_fsm(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vctrl_fsm::~Vctrl_fsm() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vctrl_fsm___024root___eval_debug_assertions(Vctrl_fsm___024root* vlSelf);
#endif  // VL_DEBUG
void Vctrl_fsm___024root___eval_static(Vctrl_fsm___024root* vlSelf);
void Vctrl_fsm___024root___eval_initial(Vctrl_fsm___024root* vlSelf);
void Vctrl_fsm___024root___eval_settle(Vctrl_fsm___024root* vlSelf);
void Vctrl_fsm___024root___eval(Vctrl_fsm___024root* vlSelf);

void Vctrl_fsm::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vctrl_fsm::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vctrl_fsm___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vctrl_fsm___024root___eval_static(&(vlSymsp->TOP));
        Vctrl_fsm___024root___eval_initial(&(vlSymsp->TOP));
        Vctrl_fsm___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vctrl_fsm___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vctrl_fsm::eventsPending() { return false; }

uint64_t Vctrl_fsm::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vctrl_fsm::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vctrl_fsm___024root___eval_final(Vctrl_fsm___024root* vlSelf);

VL_ATTR_COLD void Vctrl_fsm::final() {
    Vctrl_fsm___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vctrl_fsm::hierName() const { return vlSymsp->name(); }
const char* Vctrl_fsm::modelName() const { return "Vctrl_fsm"; }
unsigned Vctrl_fsm::threads() const { return 1; }
void Vctrl_fsm::prepareClone() const { contextp()->prepareClone(); }
void Vctrl_fsm::atClone() const {
    contextp()->threadPoolpOnClone();
}
