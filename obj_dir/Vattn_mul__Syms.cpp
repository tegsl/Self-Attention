// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vattn_mul__pch.h"
#include "Vattn_mul.h"
#include "Vattn_mul___024root.h"

// FUNCTIONS
Vattn_mul__Syms::~Vattn_mul__Syms()
{
}

Vattn_mul__Syms::Vattn_mul__Syms(VerilatedContext* contextp, const char* namep, Vattn_mul* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(89);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
