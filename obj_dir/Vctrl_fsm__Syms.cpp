// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vctrl_fsm__pch.h"
#include "Vctrl_fsm.h"
#include "Vctrl_fsm___024root.h"

// FUNCTIONS
Vctrl_fsm__Syms::~Vctrl_fsm__Syms()
{
}

Vctrl_fsm__Syms::Vctrl_fsm__Syms(VerilatedContext* contextp, const char* namep, Vctrl_fsm* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(27);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
