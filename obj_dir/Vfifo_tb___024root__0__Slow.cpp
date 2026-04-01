// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"

VL_ATTR_COLD void Vfifo_tb___024root___eval_static(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_static\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0 
        = vlSelfRef.fifo_tb__DOT__clk;
}

VL_ATTR_COLD void Vfifo_tb___024root___eval_initial__TOP(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_initial__TOP\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fifo_tb__DOT__clk = 0U;
    vlSelfRef.fifo_tb__DOT__reset = 0U;
    vlSelfRef.fifo_tb__DOT__push_data = 0U;
    vlSelfRef.fifo_tb__DOT__push_pop = 0U;
    vlSelfRef.fifo_tb__DOT__search_addr = 0U;
    vlSelfRef.fifo_tb__DOT__merge_entry = 0U;
    vlSymsp->_vm_contextp__->dumpfile("fifo.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vfifo_tb___024root___eval_final(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_final\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfifo_tb___024root___eval_phase__stl(Vfifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vfifo_tb___024root___eval_settle(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_settle\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vfifo_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("test/fifo_tb.sv", 4, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vfifo_tb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vfifo_tb___024root___eval_triggers__stl(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_triggers__stl\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfifo_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vfifo_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vfifo_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vfifo_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vfifo_tb___024root___stl_sequent__TOP__0(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___stl_sequent__TOP__0\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.fifo_tb__DOT__found = 0U;
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [0U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [0U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found = 1U;
    }
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [1U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [1U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found = 1U;
    }
    vlSelfRef.fifo_tb__DOT____Vcellout__fifo1__found_entry = 0U;
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [0U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [0U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT____Vcellout__fifo1__found_entry = 0U;
    }
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [1U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [1U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT____Vcellout__fifo1__found_entry = 1U;
    }
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [2U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [2U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found = 1U;
        vlSelfRef.fifo_tb__DOT____Vcellout__fifo1__found_entry = 2U;
    }
    vlSelfRef.fifo_tb__DOT__found_data = 0U;
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [0U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [0U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found_data = (0x000000ffU 
                                              & vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                                              [0U]);
    }
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [1U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [1U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found_data = (0x000000ffU 
                                              & vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                                              [1U]);
    }
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [2U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [2U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found_data = (0x000000ffU 
                                              & vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                                              [2U]);
    }
    if ((((0x0000000fU & (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                          [3U] >> 8U)) == (IData)(vlSelfRef.fifo_tb__DOT__search_addr)) 
         & (~ (vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
               [3U] >> 0x0cU)))) {
        vlSelfRef.fifo_tb__DOT__found = 1U;
        vlSelfRef.fifo_tb__DOT____Vcellout__fifo1__found_entry = 3U;
        vlSelfRef.fifo_tb__DOT__found_data = (0x000000ffU 
                                              & vlSelfRef.fifo_tb__DOT__fifo1__DOT__fifo_buffer
                                              [3U]);
    }
    __Vtableidx1 = (((IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail) 
                     << 3U) | (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__head));
    vlSelfRef.fifo_tb__DOT__fifo1__DOT__empty = Vfifo_tb__ConstPool__TABLE_h47de3021_0
        [__Vtableidx1];
    vlSelfRef.fifo_tb__DOT__buffer_full = Vfifo_tb__ConstPool__TABLE_h95960f88_0
        [__Vtableidx1];
}

VL_ATTR_COLD void Vfifo_tb___024root____Vm_traceActivitySetAll(Vfifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vfifo_tb___024root___eval_stl(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_stl\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vfifo_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vfifo_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vfifo_tb___024root___eval_phase__stl(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_phase__stl\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfifo_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vfifo_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vfifo_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vfifo_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vfifo_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge fifo_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfifo_tb___024root____Vm_traceActivitySetAll(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root____Vm_traceActivitySetAll\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vfifo_tb___024root___ctor_var_reset(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___ctor_var_reset\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->fifo_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3436647066906983536ull);
    vlSelf->fifo_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8514181886539899047ull);
    vlSelf->fifo_tb__DOT__push_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18155016535685620606ull);
    vlSelf->fifo_tb__DOT__push_pop = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6694179457994192140ull);
    vlSelf->fifo_tb__DOT__search_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7619786108480689050ull);
    vlSelf->fifo_tb__DOT__merge_entry = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13759630054315586420ull);
    vlSelf->fifo_tb__DOT__found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11926651823116572403ull);
    vlSelf->fifo_tb__DOT__found_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4582505006915312270ull);
    vlSelf->fifo_tb__DOT__buffer_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17541744714403905435ull);
    vlSelf->fifo_tb__DOT____Vcellout__fifo1__pop_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3008818904218724205ull);
    vlSelf->fifo_tb__DOT____Vcellout__fifo1__found_entry = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11876969189170295052ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fifo_tb__DOT__fifo1__DOT__fifo_buffer[__Vi0] = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11856406222563543953ull);
    }
    vlSelf->fifo_tb__DOT__fifo1__DOT__head = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15527195409789495687ull);
    vlSelf->fifo_tb__DOT__fifo1__DOT__tail = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6438397238465031716ull);
    vlSelf->fifo_tb__DOT__fifo1__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10023727770384515106ull);
    vlSelf->fifo_tb__DOT__fifo1__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11278525879323149846ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
