// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsoftmax_appr__pch.h"

//============================================================
// Constructors

Vsoftmax_appr::Vsoftmax_appr(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsoftmax_appr__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , start{vlSymsp->TOP.start}
    , done{vlSymsp->TOP.done}
    , scores_flat{vlSymsp->TOP.scores_flat}
    , softmax_scores_flat{vlSymsp->TOP.softmax_scores_flat}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsoftmax_appr::Vsoftmax_appr(const char* _vcname__)
    : Vsoftmax_appr(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsoftmax_appr::~Vsoftmax_appr() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsoftmax_appr___024root___eval_debug_assertions(Vsoftmax_appr___024root* vlSelf);
#endif  // VL_DEBUG
void Vsoftmax_appr___024root___eval_static(Vsoftmax_appr___024root* vlSelf);
void Vsoftmax_appr___024root___eval_initial(Vsoftmax_appr___024root* vlSelf);
void Vsoftmax_appr___024root___eval_settle(Vsoftmax_appr___024root* vlSelf);
void Vsoftmax_appr___024root___eval(Vsoftmax_appr___024root* vlSelf);

void Vsoftmax_appr::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsoftmax_appr::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsoftmax_appr___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsoftmax_appr___024root___eval_static(&(vlSymsp->TOP));
        Vsoftmax_appr___024root___eval_initial(&(vlSymsp->TOP));
        Vsoftmax_appr___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsoftmax_appr___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsoftmax_appr::eventsPending() { return false; }

uint64_t Vsoftmax_appr::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsoftmax_appr::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsoftmax_appr___024root___eval_final(Vsoftmax_appr___024root* vlSelf);

VL_ATTR_COLD void Vsoftmax_appr::final() {
    Vsoftmax_appr___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsoftmax_appr::hierName() const { return vlSymsp->name(); }
const char* Vsoftmax_appr::modelName() const { return "Vsoftmax_appr"; }
unsigned Vsoftmax_appr::threads() const { return 1; }
void Vsoftmax_appr::prepareClone() const { contextp()->prepareClone(); }
void Vsoftmax_appr::atClone() const {
    contextp()->threadPoolpOnClone();
}
