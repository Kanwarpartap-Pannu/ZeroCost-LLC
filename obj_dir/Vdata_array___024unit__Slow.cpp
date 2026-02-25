// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_array.h for the primary calling header

#include "Vdata_array__pch.h"

void Vdata_array___024unit___ctor_var_reset(Vdata_array___024unit* vlSelf);

Vdata_array___024unit::Vdata_array___024unit(Vdata_array__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdata_array___024unit___ctor_var_reset(this);
}

void Vdata_array___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdata_array___024unit::~Vdata_array___024unit() {
}
