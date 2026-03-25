// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"

VL_ATTR_COLD void Vfifo_tb___024root___eval_initial__TOP(Vfifo_tb___024root* vlSelf);
VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(Vfifo_tb___024root* vlSelf);
VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(Vfifo_tb___024root* vlSelf);

void Vfifo_tb___024root___eval_initial(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfifo_tb___024root___eval_initial__TOP(vlSelf);
    Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__0(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("SIMULATION START\n",0);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "test/fifo_tb.sv", 
                                         34);
    vlSelfRef.fifo_tb__DOT__reset = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "test/fifo_tb.sv", 
                                         36);
    vlSelfRef.fifo_tb__DOT__push_data = 3U;
    vlSelfRef.fifo_tb__DOT__push_pop = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "test/fifo_tb.sv", 
                                         39);
    vlSelfRef.fifo_tb__DOT__push_pop = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "test/fifo_tb.sv", 
                                         41);
    VL_FINISH_MT("test/fifo_tb.sv", 42, "");
}

VlCoroutine Vfifo_tb___024root___eval_initial__TOP__Vtiming__1(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "test/fifo_tb.sv", 
                                             27);
        vlSelfRef.fifo_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.fifo_tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vfifo_tb___024root___eval_triggers__act(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_triggers__act\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.fifo_tb__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0 
        = vlSelfRef.fifo_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfifo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vfifo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*0:0*/, 64> Vfifo_tb__ConstPool__TABLE_h47de3021_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vfifo_tb__ConstPool__TABLE_h95960f88_0;

void Vfifo_tb___024root___nba_sequent__TOP__0(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___nba_sequent__TOP__0\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vdly__fifo_tb__DOT__fifo1__DOT__tail;
    __Vdly__fifo_tb__DOT__fifo1__DOT__tail = 0;
    CData/*2:0*/ __Vdly__fifo_tb__DOT__fifo1__DOT__head;
    __Vdly__fifo_tb__DOT__fifo1__DOT__head = 0;
    CData/*7:0*/ __VdlyVal__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0;
    __VdlyVal__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0 = 0;
    CData/*1:0*/ __VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0;
    __VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0;
    __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0 = 0;
    // Body
    __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0 = 0U;
    __Vdly__fifo_tb__DOT__fifo1__DOT__tail = vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail;
    __Vdly__fifo_tb__DOT__fifo1__DOT__head = vlSelfRef.fifo_tb__DOT__fifo1__DOT__head;
    if (vlSelfRef.fifo_tb__DOT__reset) {
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.fifo_tb__DOT__push_pop)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.fifo_tb__DOT__push_pop)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.fifo_tb__DOT__push_pop)))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.fifo_tb__DOT__push_pop)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.fifo_tb__DOT__push_pop)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.fifo_tb__DOT__push_pop)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: fifo_buffer.sv:72: Assertion failed in %Nfifo_tb.fifo1: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(IData)(vlSelfRef.fifo_tb__DOT__push_pop));
                    VL_STOP_MT("design/fifo_buffer.sv", 72, "");
                }
            }
        }
        if ((0U == (IData)(vlSelfRef.fifo_tb__DOT__push_pop))) {
            __Vdly__fifo_tb__DOT__fifo1__DOT__tail 
                = vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail;
            __Vdly__fifo_tb__DOT__fifo1__DOT__head 
                = vlSelfRef.fifo_tb__DOT__fifo1__DOT__head;
            vlSelfRef.fifo_tb__DOT__pop_data = 0U;
        } else if ((1U == (IData)(vlSelfRef.fifo_tb__DOT__push_pop))) {
            if ((1U & (~ (IData)(vlSelfRef.fifo_tb__DOT__buffer_full)))) {
                __VdlyVal__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0 
                    = vlSelfRef.fifo_tb__DOT__push_data;
                __VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0 
                    = (3U & (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail));
                __VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0 = 1U;
                __Vdly__fifo_tb__DOT__fifo1__DOT__tail 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail)));
            }
            vlSelfRef.fifo_tb__DOT__pop_data = 0U;
        } else if ((2U == (IData)(vlSelfRef.fifo_tb__DOT__push_pop))) {
            if (vlSelfRef.fifo_tb__DOT__fifo1__DOT__empty) {
                vlSelfRef.fifo_tb__DOT__pop_data = 0U;
            } else {
                vlSelfRef.fifo_tb__DOT__pop_data = 
                    vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                    [(3U & (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__head))];
                __Vdly__fifo_tb__DOT__fifo1__DOT__head 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__head)));
            }
        } else {
            __Vdly__fifo_tb__DOT__fifo1__DOT__tail 
                = vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail;
            __Vdly__fifo_tb__DOT__fifo1__DOT__head 
                = vlSelfRef.fifo_tb__DOT__fifo1__DOT__head;
            vlSelfRef.fifo_tb__DOT__pop_data = 0U;
        }
    } else {
        __Vdly__fifo_tb__DOT__fifo1__DOT__tail = 0U;
        __Vdly__fifo_tb__DOT__fifo1__DOT__head = 0U;
    }
    if (__VdlySet__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0) {
        vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer[__VdlyDim0__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0] 
            = __VdlyVal__fifo_tb__DOT__fifo1__DOT__fifo_buffer__v0;
    }
    vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail = __Vdly__fifo_tb__DOT__fifo1__DOT__tail;
    vlSelfRef.fifo_tb__DOT__fifo1__DOT__head = __Vdly__fifo_tb__DOT__fifo1__DOT__head;
    __Vtableidx1 = (((IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail) 
                     << 3U) | (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__head));
    vlSelfRef.fifo_tb__DOT__fifo1__DOT__empty = Vfifo_tb__ConstPool__TABLE_h47de3021_0
        [__Vtableidx1];
    vlSelfRef.fifo_tb__DOT__buffer_full = Vfifo_tb__ConstPool__TABLE_h95960f88_0
        [__Vtableidx1];
}

void Vfifo_tb___024root___eval_nba(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_nba\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfifo_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vfifo_tb___024root___timing_resume(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___timing_resume\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vfifo_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vfifo_tb___024root___eval_phase__act(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_phase__act\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vfifo_tb___024root___eval_triggers__act(vlSelf);
    Vfifo_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vfifo_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vfifo_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vfifo_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vfifo_tb___024root___eval_phase__nba(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_phase__nba\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vfifo_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vfifo_tb___024root___eval_nba(vlSelf);
        Vfifo_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vfifo_tb___024root___eval(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vfifo_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("test/fifo_tb.sv", 4, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vfifo_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("test/fifo_tb.sv", 4, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vfifo_tb___024root___eval_phase__act(vlSelf));
    } while (Vfifo_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vfifo_tb___024root___eval_debug_assertions(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_debug_assertions\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
