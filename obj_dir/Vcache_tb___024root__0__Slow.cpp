// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache_tb.h for the primary calling header

#include "Vcache_tb__pch.h"

VL_ATTR_COLD void Vcache_tb___024root___eval_static__TOP(Vcache_tb___024root* vlSelf);
VL_ATTR_COLD void Vcache_tb___024root____Vm_traceActivitySetAll(Vcache_tb___024root* vlSelf);

VL_ATTR_COLD void Vcache_tb___024root___eval_static(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_static\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcache_tb___024root___eval_static__TOP(vlSelf);
    Vcache_tb___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__clk__0 
        = vlSelfRef.cache_tb__DOT__clk;
}

VL_ATTR_COLD void Vcache_tb___024root___eval_static__TOP(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_static__TOP\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i = 0x01000000U;
    vlSelfRef.cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_dat = 0x01000000U;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way 
        = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__hit)
            ? (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)
            : (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_array__DOT__replace_way));
}

VL_ATTR_COLD void Vcache_tb___024root___eval_initial__TOP(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_initial__TOP\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_tb__DOT__clk = 0U;
    vlSelfRef.cache_tb__DOT__reset = 1U;
    vlSymsp->_vm_contextp__->dumpfile("cache.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00009ca0U, vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i)) {
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h65e45dcb__0 = 0U;
        if (VL_LIKELY(((0x9c9fU >= (0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i))))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[(0x0000ffffU 
                                                                            & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i)] 
                = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h65e45dcb__0;
        }
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i 
            = ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i);
    }
    VL_READMEM_N(true, 32, 147, 0, "/Users/kanwarpannu/Desktop/ZeroCostLLC/ZeroCost-LLC/test_files/test1.x"s
                 ,  &(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory)
                 , 0, ~0ULL);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000093U, vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i)) {
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h7dc8d4e9__0 
            = ((0x92U >= (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i))
                ? (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                   [(0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i)])
                : 0U);
        if (VL_LIKELY(((0x9c9fU >= (0x0000ffffU & VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i)))))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[(0x0000ffffU 
                                                                            & VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i))] 
                = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h7dc8d4e9__0;
        }
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h553c837c__0 
            = (0x000000ffU & (((0x92U >= (0x000000ffU 
                                          & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i))
                                ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                               [(0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i)]
                                : 0U) >> 8U));
        if (VL_LIKELY(((0x9c9fU >= (0x0000ffffU & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i))))))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[(0x0000ffffU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i)))] 
                = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h553c837c__0;
        }
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h553c93ad__0 
            = (0x000000ffU & (((0x92U >= (0x000000ffU 
                                          & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i))
                                ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                               [(0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i)]
                                : 0U) >> 0x10U));
        if (VL_LIKELY(((0x9c9fU >= (0x0000ffffU & ((IData)(2U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i))))))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[(0x0000ffffU 
                                                                            & ((IData)(2U) 
                                                                               + 
                                                                               VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i)))] 
                = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h553c93ad__0;
        }
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h562a9db1__0 
            = (((0x92U >= (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i))
                 ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                [(0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i)]
                 : 0U) >> 0x18U);
        if (VL_LIKELY(((0x9c9fU >= (0x0000ffffU & ((IData)(3U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i))))))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[(0x0000ffffU 
                                                                            & ((IData)(3U) 
                                                                               + 
                                                                               VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i)))] 
                = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h562a9db1__0;
        }
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i 
            = ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__i);
    }
    VL_WRITEF_NX("IMEMORY: Loaded 147 32-bit words from /Users/kanwarpannu/Desktop/ZeroCostLLC/ZeroCost-LLC/test_files/test1.x\n",0);
}

VL_ATTR_COLD void Vcache_tb___024root___eval_final(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_final\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcache_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcache_tb___024root___eval_phase__stl(Vcache_tb___024root* vlSelf);

VL_ATTR_COLD void Vcache_tb___024root___eval_settle(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_settle\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcache_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("design/cache_tb.sv", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vcache_tb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vcache_tb___024root___eval_triggers__stl(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_triggers__stl\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcache_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vcache_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcache_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcache_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcache_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___trigger_anySet__stl\n"); );
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

void Vcache_tb___024root___act_sequent__TOP__0(Vcache_tb___024root* vlSelf);

VL_ATTR_COLD void Vcache_tb___024root___eval_stl(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_stl\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vcache_tb___024root___act_sequent__TOP__0(vlSelf);
        Vcache_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vcache_tb___024root___eval_phase__stl(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_phase__stl\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcache_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vcache_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vcache_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vcache_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcache_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcache_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge cache_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcache_tb___024root____Vm_traceActivitySetAll(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root____Vm_traceActivitySetAll\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
}

VL_ATTR_COLD void Vcache_tb___024root___ctor_var_reset(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___ctor_var_reset\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->cache_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5727279950073359593ull);
    vlSelf->cache_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16174056173423606432ull);
    vlSelf->cache_tb__DOT__address = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 12553925048007856369ull);
    vlSelf->cache_tb__DOT__store_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8025805358911265721ull);
    vlSelf->cache_tb__DOT__opcode_i = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6827118171210024836ull);
    vlSelf->cache_tb__DOT__funct3_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9942710174423227962ull);
    vlSelf->cache_tb__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5825183008027484016ull);
    vlSelf->cache_tb__DOT__data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6374269179365881197ull);
    vlSelf->cache_tb__DOT__cache__DOT__curr_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12808902477738480553ull);
    vlSelf->cache_tb__DOT__cache__DOT__next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12510633098512007332ull);
    vlSelf->cache_tb__DOT__cache__DOT__mem_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13086334279033736697ull);
    vlSelf->cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15847800441635327526ull);
    vlSelf->cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10545827429527257967ull);
    vlSelf->cache_tb__DOT__cache__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17627155529844788734ull);
    vlSelf->cache_tb__DOT__cache__DOT__idle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12577741298115753650ull);
    vlSelf->cache_tb__DOT__cache__DOT__replace_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11778615685267278413ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8931597335867352030ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__size_encoded = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18387788748397511876ull);
    for (int __Vi0 = 0; __Vi0 < 147; ++__Vi0) {
        vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6227903148422491786ull);
    }
    for (int __Vi0 = 0; __Vi0 < 40096; ++__Vi0) {
        vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3084190694517630279ull);
    }
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__address_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8410779442941081179ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h65e45dcb__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13324735901796196209ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h7dc8d4e9__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7965460345818124665ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h553c837c__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3564277000932384357ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h553c93ad__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6704651407264213647ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT____Vlvbound_h562a9db1__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8406134232222128717ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6164987533886276742ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3748721829184432098ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1099820121200765405ull);
        }
    }
    vlSelf->cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2462541410302171397ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14239878357049159494ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6398743419837975717ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_tag_array__DOT__oldest_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 79863822205206680ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15866450940051716980ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_tag_array__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__cache_data_array__DOT__replace_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1867777561484146334ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->cache_tb__DOT__cache__DOT__cache_data_array__DOT__set_o, __VscopeHash, 9347450165875834416ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->cache_tb__DOT__cache__DOT__cache_data_array__DOT__data_array, __VscopeHash, 9683333839175354325ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14076179427513946122ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4928662808602625550ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__cache_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14499655531552440901ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
