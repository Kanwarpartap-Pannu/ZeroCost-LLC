// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdata_array__pch.h"

//============================================================
// Constructors

Vdata_array::Vdata_array(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdata_array__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdata_array::Vdata_array(const char* _vcname__)
    : Vdata_array(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdata_array::~Vdata_array() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdata_array___024root___eval_debug_assertions(Vdata_array___024root* vlSelf);
#endif  // VL_DEBUG
void Vdata_array___024root___eval_static(Vdata_array___024root* vlSelf);
void Vdata_array___024root___eval_initial(Vdata_array___024root* vlSelf);
void Vdata_array___024root___eval_settle(Vdata_array___024root* vlSelf);
void Vdata_array___024root___eval(Vdata_array___024root* vlSelf);

void Vdata_array::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdata_array::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdata_array___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdata_array___024root___eval_static(&(vlSymsp->TOP));
        Vdata_array___024root___eval_initial(&(vlSymsp->TOP));
        Vdata_array___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdata_array___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdata_array::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vdata_array::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vdata_array::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdata_array___024root___eval_final(Vdata_array___024root* vlSelf);

VL_ATTR_COLD void Vdata_array::final() {
    Vdata_array___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdata_array::hierName() const { return vlSymsp->name(); }
const char* Vdata_array::modelName() const { return "Vdata_array"; }
unsigned Vdata_array::threads() const { return 1; }
void Vdata_array::prepareClone() const { contextp()->prepareClone(); }
void Vdata_array::atClone() const {
    contextp()->threadPoolpOnClone();
}
