// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vattn_mul__pch.h"

//============================================================
// Constructors

Vattn_mul::Vattn_mul(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vattn_mul__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , start{vlSymsp->TOP.start}
    , done{vlSymsp->TOP.done}
    , debug_state{vlSymsp->TOP.debug_state}
    , softmax_scores_flat{vlSymsp->TOP.softmax_scores_flat}
    , V_flat{vlSymsp->TOP.V_flat}
    , output_flat{vlSymsp->TOP.output_flat}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vattn_mul::Vattn_mul(const char* _vcname__)
    : Vattn_mul(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vattn_mul::~Vattn_mul() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vattn_mul___024root___eval_debug_assertions(Vattn_mul___024root* vlSelf);
#endif  // VL_DEBUG
void Vattn_mul___024root___eval_static(Vattn_mul___024root* vlSelf);
void Vattn_mul___024root___eval_initial(Vattn_mul___024root* vlSelf);
void Vattn_mul___024root___eval_settle(Vattn_mul___024root* vlSelf);
void Vattn_mul___024root___eval(Vattn_mul___024root* vlSelf);

void Vattn_mul::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vattn_mul::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vattn_mul___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vattn_mul___024root___eval_static(&(vlSymsp->TOP));
        Vattn_mul___024root___eval_initial(&(vlSymsp->TOP));
        Vattn_mul___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vattn_mul___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vattn_mul::eventsPending() { return false; }

uint64_t Vattn_mul::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vattn_mul::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vattn_mul___024root___eval_final(Vattn_mul___024root* vlSelf);

VL_ATTR_COLD void Vattn_mul::final() {
    Vattn_mul___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vattn_mul::hierName() const { return vlSymsp->name(); }
const char* Vattn_mul::modelName() const { return "Vattn_mul"; }
unsigned Vattn_mul::threads() const { return 1; }
void Vattn_mul::prepareClone() const { contextp()->prepareClone(); }
void Vattn_mul::atClone() const {
    contextp()->threadPoolpOnClone();
}
