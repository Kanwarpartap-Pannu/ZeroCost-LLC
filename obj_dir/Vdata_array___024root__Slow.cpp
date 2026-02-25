// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_array.h for the primary calling header

#include "Vdata_array__pch.h"

void Vdata_array___024root___ctor_var_reset(Vdata_array___024root* vlSelf);

Vdata_array___024root::Vdata_array___024root(Vdata_array__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdata_array___024root___ctor_var_reset(this);
}

void Vdata_array___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdata_array___024root::~Vdata_array___024root() {
}
