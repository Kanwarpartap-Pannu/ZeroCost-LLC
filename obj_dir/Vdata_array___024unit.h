// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_array.h for the primary calling header

#ifndef VERILATED_VDATA_ARRAY___024UNIT_H_
#define VERILATED_VDATA_ARRAY___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdata_array__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdata_array___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vdata_array__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdata_array___024unit(Vdata_array__Syms* symsp, const char* v__name);
    ~Vdata_array___024unit();
    VL_UNCOPYABLE(Vdata_array___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
