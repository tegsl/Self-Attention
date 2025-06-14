// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsoftmax_appr__pch.h"
#include "Vsoftmax_appr.h"
#include "Vsoftmax_appr___024root.h"

// FUNCTIONS
Vsoftmax_appr__Syms::~Vsoftmax_appr__Syms()
{
}

Vsoftmax_appr__Syms::Vsoftmax_appr__Syms(VerilatedContext* contextp, const char* namep, Vsoftmax_appr* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(132);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
