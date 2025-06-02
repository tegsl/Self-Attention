// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vqk_mul__pch.h"

//============================================================
// Constructors

Vqk_mul::Vqk_mul(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vqk_mul__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , start{vlSymsp->TOP.start}
    , done{vlSymsp->TOP.done}
    , Q_flat{vlSymsp->TOP.Q_flat}
    , K_flat{vlSymsp->TOP.K_flat}
    , scores_flat{vlSymsp->TOP.scores_flat}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vqk_mul::Vqk_mul(const char* _vcname__)
    : Vqk_mul(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vqk_mul::~Vqk_mul() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vqk_mul___024root___eval_debug_assertions(Vqk_mul___024root* vlSelf);
#endif  // VL_DEBUG
void Vqk_mul___024root___eval_static(Vqk_mul___024root* vlSelf);
void Vqk_mul___024root___eval_initial(Vqk_mul___024root* vlSelf);
void Vqk_mul___024root___eval_settle(Vqk_mul___024root* vlSelf);
void Vqk_mul___024root___eval(Vqk_mul___024root* vlSelf);

void Vqk_mul::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vqk_mul::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vqk_mul___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vqk_mul___024root___eval_static(&(vlSymsp->TOP));
        Vqk_mul___024root___eval_initial(&(vlSymsp->TOP));
        Vqk_mul___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vqk_mul___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vqk_mul::eventsPending() { return false; }

uint64_t Vqk_mul::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vqk_mul::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vqk_mul___024root___eval_final(Vqk_mul___024root* vlSelf);

VL_ATTR_COLD void Vqk_mul::final() {
    Vqk_mul___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vqk_mul::hierName() const { return vlSymsp->name(); }
const char* Vqk_mul::modelName() const { return "Vqk_mul"; }
unsigned Vqk_mul::threads() const { return 1; }
void Vqk_mul::prepareClone() const { contextp()->prepareClone(); }
void Vqk_mul::atClone() const {
    contextp()->threadPoolpOnClone();
}
