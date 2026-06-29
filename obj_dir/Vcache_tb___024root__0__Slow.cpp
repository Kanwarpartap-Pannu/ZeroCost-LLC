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
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__write_finished__0 
        = vlSelfRef.cache_tb__DOT__cache__DOT__write_finished;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o__0 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in__0 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir__0 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__memory1__DOT__memory_address__0 
        = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory_address;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__write_finished__1 
        = vlSelfRef.cache_tb__DOT__cache__DOT__write_finished;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o__1 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in__1 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir__1 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__memory1__DOT__memory_address__1 
        = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory_address;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__clk__0 
        = vlSelfRef.cache_tb__DOT__clk;
}

VL_ATTR_COLD void Vcache_tb___024root___eval_static__TOP(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_static__TOP\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_tb__DOT__my_array[0U] = 0U;
    vlSelfRef.cache_tb__DOT__my_array[1U] = 0U;
    vlSelfRef.cache_tb__DOT__my_array[2U] = 1U;
    vlSelfRef.cache_tb__DOT__my_array[3U] = 1U;
    vlSelfRef.cache_tb__DOT__my_array[4U] = 0U;
    vlSelfRef.cache_tb__DOT__my_array[5U] = 0U;
    vlSelfRef.cache_tb__DOT__my_array[6U] = 1U;
    vlSelfRef.cache_tb__DOT__my_array[7U] = 1U;
    vlSelfRef.cache_tb__DOT__my_array[8U] = 0U;
    vlSelfRef.cache_tb__DOT__my_array[9U] = 0U;
    vlSelfRef.cache_tb__DOT__my_array[0x0000000aU] = 1U;
    vlSelfRef.cache_tb__DOT__my_array[0x0000000bU] = 1U;
    vlSelfRef.cache_tb__DOT__my_array[0x0000000cU] = 0U;
    vlSelfRef.cache_tb__DOT__my_array[0x0000000dU] = 0U;
    vlSelfRef.cache_tb__DOT__my_array[0x0000000eU] = 0U;
    vlSelfRef.cache_tb__DOT__my_array[0x0000000fU] = 0U;
    vlSelfRef.cache_tb__DOT__my_array[0x00000010U] = 0U;
    vlSelfRef.cache_tb__DOT__my_array[0x00000011U] = 0U;
    vlSelfRef.cache_tb__DOT__my_array[0x00000012U] = 0U;
    vlSelfRef.cache_tb__DOT__my_array[0x00000013U] = 0U;
    vlSelfRef.cache_tb__DOT__my_array[0x00000014U] = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i = 0x01000000U;
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_dat = 0x01000000U;
}

VL_ATTR_COLD void Vcache_tb___024root___eval_initial__TOP(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_initial__TOP\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_tb__DOT__clk = 0U;
    vlSelfRef.cache_tb__DOT__reset = 0U;
    vlSelfRef.cache_tb__DOT__addr = 0U;
    vlSelfRef.cache_tb__DOT__start = 0U;
    vlSelfRef.cache_tb__DOT__i = 0U;
    VL_READMEM_N(true, 56, 21, 0, "test_files/test_address.x"s
                 ,  &(vlSelfRef.cache_tb__DOT__test_addresses)
                 , 0, ~0ULL);
    vlSymsp->_vm_contextp__->dumpfile("cache.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00400000U, vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)) {
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[(0x003fffffU 
                                                                                & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i 
            = ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i);
    }
    VL_READMEM_N(true, 32, 146, 0, "/Users/kanwarpannu/Desktop/ZeroCostLLC/ZeroCost-LLC/test_files/test1.x"s
                 ,  &(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__temp_memory)
                 , 0, ~0ULL);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000092U, vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)) {
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[(0x003fffffU 
                                                                                & VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i))] 
            = ((0x91U >= (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i))
                ? (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__temp_memory
                   [(0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)])
                : 0U);
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[(0x003fffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)))] 
            = (0x000000ffU & (((0x91U >= (0x000000ffU 
                                          & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i))
                                ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__temp_memory
                               [(0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)]
                                : 0U) >> 8U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[(0x003fffffU 
                                                                                & ((IData)(2U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)))] 
            = (0x000000ffU & (((0x91U >= (0x000000ffU 
                                          & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i))
                                ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__temp_memory
                               [(0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)]
                                : 0U) >> 0x10U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[(0x003fffffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)))] 
            = (((0x91U >= (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i))
                 ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__temp_memory
                [(0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)]
                 : 0U) >> 0x18U);
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i 
            = ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i);
    }
    VL_WRITEF_NX("IMEMORY: Loaded 146 32-bit words from /Users/kanwarpannu/Desktop/ZeroCostLLC/ZeroCost-LLC/test_files/test1.x\n",0);
}

VL_ATTR_COLD void Vcache_tb___024root___eval_final(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_final\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcache_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
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
    vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [1U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
    vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory_address) 
                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__memory1__DOT__memory_address__0)) 
                                                      << 4U) 
                                                     | (((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir__0)) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in__0)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o__0)) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__write_finished) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__write_finished__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__write_finished__0 
        = vlSelfRef.cache_tb__DOT__cache__DOT__write_finished;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o__0 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in__0 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir__0 
        = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__memory1__DOT__memory_address__0 
        = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory_address;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered
                                         [0U]);
        vlSelfRef.__VstlTriggered[0U] = (2ULL | vlSelfRef.__VstlTriggered
                                         [0U]);
        vlSelfRef.__VstlTriggered[0U] = (4ULL | vlSelfRef.__VstlTriggered
                                         [0U]);
        vlSelfRef.__VstlTriggered[0U] = (8ULL | vlSelfRef.__VstlTriggered
                                         [0U]);
        vlSelfRef.__VstlTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VstlTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcache_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vcache_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcache_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcache_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] cache_tb.cache.write_finished)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] cache_tb.cache.cache_1.way_i_state_o)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] cache_tb.cache.cache_1.index_in)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([hybrid] cache_tb.cache.cache_1.index_in_dir)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([hybrid] cache_tb.cache.memory1.memory_address)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcache_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
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
    } while ((2U > n));
    return (0U);
}

extern const VlUnpacked<CData/*0:0*/, 256> Vcache_tb__ConstPool__TABLE_h627a7f2d_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcache_tb__ConstPool__TABLE_hfe0ee99c_0;

VL_ATTR_COLD void Vcache_tb___024root___stl_sequent__TOP__0(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___stl_sequent__TOP__0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I(((((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                << 3U) | ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                          << 2U)) | 
                              (((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                << 1U) | (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))))))) {
        if ((0U != ((((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                      << 3U) | ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                << 2U)) | (((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: memory_controller.sv:87: Assertion failed in %Ncache_tb.cache.memory1: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state));
                VL_STOP_MT("design/memory_controller.sv", 87, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                << 3U) | ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                          << 2U)) | 
                              (((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                << 1U) | (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))))))) {
        if ((0U != ((((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                      << 3U) | ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                << 2U)) | (((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: memory_controller.sv:160: Assertion failed in %Ncache_tb.cache.memory1: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state));
                VL_STOP_MT("design/memory_controller.sv", 160, "");
            }
        }
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__request 
        = ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
           && ((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
               || ((2U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                   && (3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__write_en 
        = ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
           && ((1U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
               && ((2U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
                   && (3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i 
        = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address;
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_op = (
                                                   (3U 
                                                    == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
                                                   | (0x23U 
                                                      == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)));
    __Vtableidx2 = (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail) 
                     << 4U) | (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head));
    vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty 
        = Vcache_tb__ConstPool__TABLE_h627a7f2d_0[__Vtableidx2];
    vlSelfRef.cache_tb__DOT__cache__DOT__buffer_full 
        = Vcache_tb__ConstPool__TABLE_hfe0ee99c_0[__Vtableidx2];
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_rs = 0U;
    if ((1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation__DOT__has_re_pv))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_rs = 0U;
    }
    if ((2U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation__DOT__has_re_pv))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_rs = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__read_en 
        = ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
           && (1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__active_req 
        = ((0x23U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
           | (3U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)));
    vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 0U;
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [0U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [0U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 0U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [1U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [1U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [2U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [2U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 2U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [3U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [3U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 3U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [4U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [4U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 4U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [5U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [5U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 5U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data = 0ULL;
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [0U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [0U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [0U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [0U][0U])));
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [1U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [1U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [1U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [1U][0U])));
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [2U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [2U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [2U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [2U][0U])));
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [3U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [3U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [3U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [3U][0U])));
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [4U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [4U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [4U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [4U][0U])));
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [5U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [5U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [5U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [5U][0U])));
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [6U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [6U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 6U;
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [6U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [6U][0U])));
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 0U;
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [0U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [0U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [1U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [1U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [2U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [2U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [3U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [3U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [4U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [4U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [5U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [5U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [6U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [6U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x0000ffffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [7U][2U]) == (0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [7U][2U] >> 0x00000010U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 7U;
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [7U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [7U][0U])));
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__data_o = 0U;
    if (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__read_en) {
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__unnamedblk1__DOT__i = 8U;
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__data_o 
            = (((0x01000000U <= vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i) 
                & (0x01400000U > ((IData)(3U) + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i)))
                ? (((vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                     [(0x003fffffU & ((IData)(3U) + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i))] 
                     << 0x00000018U) | (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                        [(0x003fffffU 
                                          & ((IData)(2U) 
                                             + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i))] 
                                        << 0x00000010U)) 
                   | ((vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                       [(0x003fffffU & ((IData)(1U) 
                                        + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i))] 
                       << 8U) | vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                      [(0x003fffffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i)]))
                : 0xdeadbeefU);
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____VdfgExtracted_ha4ce45db__0 
        = (0U != ((2U & ((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__active_req)) 
                         << 1U)) | (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__active_req)));
    vlSelfRef.cache_tb__DOT__cache__DOT__temp = vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data;
    vlSelfRef.cache_tb__DOT__cache__DOT__temp = ((4U 
                                                  & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                    ? 
                                                   (((~ 
                                                      (0x00000000ffffffffULL 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                                                     & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                                                    | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))))
                                                    : 
                                                   (((~ 
                                                      (0x00000000000000ffULL 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                                                     & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                                                    | ((QData)((IData)(
                                                                       (0x000000ffU 
                                                                        & vlSelfRef.cache_tb__DOT__store_data))) 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                    ? 
                                                   (((~ 
                                                      (0x000000000000ffffULL 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                                                     & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                                                    | ((QData)((IData)(
                                                                       (0x0000ffffU 
                                                                        & vlSelfRef.cache_tb__DOT__store_data))) 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))))
                                                    : 
                                                   (((~ 
                                                      (0x00000000ffffffffULL 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                                                     & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                                                    | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                    ? 
                                                   (((~ 
                                                      (0x00000000ffffffffULL 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                                                     & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                                                    | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))))
                                                    : 
                                                   (((~ 
                                                      (0x00000000000000ffULL 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                                                     & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                                                    | ((QData)((IData)(
                                                                       (0x000000ffU 
                                                                        & vlSelfRef.cache_tb__DOT__store_data))) 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                                                    ? 
                                                   (((~ 
                                                      (0x000000000000ffffULL 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                                                     & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                                                    | ((QData)((IData)(
                                                                       (0x0000ffffU 
                                                                        & vlSelfRef.cache_tb__DOT__store_data))) 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))))
                                                    : 
                                                   (((~ 
                                                      (0x00000000ffffffffULL 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                                                     & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                                                    | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                                                       << 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,32,32, 
                                                                        (1U 
                                                                         & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))))));
}

VL_ATTR_COLD void Vcache_tb___024root___stl_sequent__TOP__1(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___stl_sequent__TOP__1\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_dat 
        = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory_address;
}

VL_ATTR_COLD void Vcache_tb___024root___stl_comb__TOP__2(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___stl_comb__TOP__2\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat 
        = ((0x01000000U > vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_dat)
            ? (0x003fffffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_dat)
            : (0x003fffffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_dat 
                              - (IData)(0x01000000U))));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out = 0ULL;
    if (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__read_en) {
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0x00ffffffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(8U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000038U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xff00ffffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(7U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000030U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xffff00ffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(6U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000028U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xffffff00ffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(5U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000020U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xffffffff00ffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(4U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000018U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xffffffffff00ffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(3U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000010U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xffffffffffff00ffULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(2U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])) 
                  << 8U));
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out 
            = ((0xffffffffffffff00ULL & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out) 
               | (IData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                 [(0x003fffffU & ((IData)(1U) 
                                                  + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat))])));
    }
}

void Vcache_tb___024root___act_sequent__TOP__1(Vcache_tb___024root* vlSelf);
void Vcache_tb___024root___act_sequent__TOP__2(Vcache_tb___024root* vlSelf);
void Vcache_tb___024root___act_comb__TOP__0(Vcache_tb___024root* vlSelf);

VL_ATTR_COLD void Vcache_tb___024root___eval_stl(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_stl\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
        Vcache_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vcache_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (4ULL 
                                                   & vlSelfRef.__VstlTriggered
                                                   [0U]))) {
        Vcache_tb___024root___act_sequent__TOP__1(vlSelf);
        Vcache_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (8ULL 
                                                   & vlSelfRef.__VstlTriggered
                                                   [0U]))) {
        Vcache_tb___024root___act_sequent__TOP__2(vlSelf);
        Vcache_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VstlTriggered
         [0U])) {
        Vcache_tb___024root___stl_sequent__TOP__1(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (0x0000000000000010ULL 
                                                   & vlSelfRef.__VstlTriggered
                                                   [0U]))) {
        Vcache_tb___024root___stl_comb__TOP__2(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (0x000000000000001fULL 
                                                   & vlSelfRef.__VstlTriggered
                                                   [0U]))) {
        Vcache_tb___024root___act_comb__TOP__0(vlSelf);
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] cache_tb.cache.write_finished)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] cache_tb.cache.cache_1.way_i_state_o)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] cache_tb.cache.cache_1.index_in)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([hybrid] cache_tb.cache.cache_1.index_in_dir)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([hybrid] cache_tb.cache.memory1.memory_address)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge cache_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
}

VL_ATTR_COLD void Vcache_tb___024root___ctor_var_reset(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___ctor_var_reset\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->cache_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5727279950073359593ull);
    vlSelf->cache_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16174056173423606432ull);
    vlSelf->cache_tb__DOT__addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18166002642159602152ull);
    vlSelf->cache_tb__DOT__store_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8025805358911265721ull);
    vlSelf->cache_tb__DOT__opcode_i = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6827118171210024836ull);
    vlSelf->cache_tb__DOT__funct3_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9942710174423227962ull);
    vlSelf->cache_tb__DOT__data_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15451370717509921107ull);
    vlSelf->cache_tb__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5825183008027484016ull);
    vlSelf->cache_tb__DOT__data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6374269179365881197ull);
    vlSelf->cache_tb__DOT__requester = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5127005637735793070ull);
    vlSelf->cache_tb__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5237532231969304991ull);
    for (int __Vi0 = 0; __Vi0 < 21; ++__Vi0) {
        vlSelf->cache_tb__DOT__test_addresses[__Vi0] = VL_SCOPED_RAND_RESET_Q(56, __VscopeHash, 10553934106821948540ull);
    }
    for (int __Vi0 = 0; __Vi0 < 21; ++__Vi0) {
        vlSelf->cache_tb__DOT__my_array[__Vi0] = 0;
    }
    vlSelf->cache_tb__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 508062196802149082ull);
    vlSelf->cache_tb__DOT__cache__DOT__mem_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7026767363807150671ull);
    vlSelf->cache_tb__DOT__cache__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15386649170595856335ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9698902884994549512ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory_rq = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7858106167571211116ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->cache_tb__DOT__cache__DOT__buffer_store, __VscopeHash, 16720780746585270032ull);
    vlSelf->cache_tb__DOT__cache__DOT__write_finished = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3728721853266222330ull);
    vlSelf->cache_tb__DOT__cache__DOT__pop_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7155700585384177734ull);
    vlSelf->cache_tb__DOT__cache__DOT__rd_rq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16311786714316319900ull);
    vlSelf->cache_tb__DOT__cache__DOT__drain_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12321723536750063837ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->cache_tb__DOT__cache__DOT__pop_data, __VscopeHash, 1711963204510238383ull);
    vlSelf->cache_tb__DOT__cache__DOT__pop_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6686188338033262611ull);
    vlSelf->cache_tb__DOT__cache__DOT__wb_buffer_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6623876199343469231ull);
    vlSelf->cache_tb__DOT__cache__DOT__found_entry = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14336099505650197595ull);
    vlSelf->cache_tb__DOT__cache__DOT__found_buffer_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17316628798024373275ull);
    vlSelf->cache_tb__DOT__cache__DOT__buffer_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5901602724103587769ull);
    vlSelf->cache_tb__DOT__cache__DOT__buffer_ctrl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4765694839372504062ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->cache_tb__DOT__cache__DOT__push_data, __VscopeHash, 14526280547135856028ull);
    vlSelf->cache_tb__DOT__cache__DOT__temp = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1092780027363646232ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1834702383798751316ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__replace_address = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2467369720074357525ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17377484328047876996ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15574765928337878711ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__active_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8632766961618023270ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9525353194907158033ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_active_cache = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7237428153940988060ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17749959526555287730ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5480169017089108815ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_flag = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11454319339630361421ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3648217655513996393ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 114994379515277827ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__idle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5764175796443661112ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__replace_way_meta_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17670356247246402299ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__index_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15117813911281527681ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4945362822910868317ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__relocate_set_tag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15878884019353057921ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__relocate_way_tag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8821630256363868456ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9301112471865074086ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3430579273433519477ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__dirty_sig = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12962086481870750809ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__replace_en_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16444724796137272128ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__store_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 273650759404706674ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__data_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1506915327145986141ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9069028215135478328ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__dir_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9105796904487093456ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__reset_search = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13084332625715877658ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__search_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4471596536903260310ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__search_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14867714161774065031ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7513698336937168817ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__share_en_tag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7689370200004692962ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__tag_metadata_o = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12497744729609247662ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en_tag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1055247679554100029ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16153776307940973789ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__tag_way = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16673099313741261211ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__insert_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12539882141405709561ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__share_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5508688750904805682ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__relocate_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15522599095787786294ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT____Vcellout__directory_slice__evicting_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6143939357116155244ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__next_rs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13290011057021275090ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__hit_way_data_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7037549832991673488ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_block = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7106086334483350217ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_dir_index = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4178018093397922171ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_dir_way = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18209485249331613947ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__valid_ornot = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5816924173544334091ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT____VdfgExtracted_h03db6b6c__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1384555237208340695ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT____VdfgExtracted_ha4ce45db__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3641433723630892538ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocate_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 383530771995522763ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1702664620303872499ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocate_set_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10753522096554925043ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocate_way_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5016764986374247639ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5573643019450603900ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 119498412086886543ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1178240262769040773ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4682605328314208678ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6431669451524708945ull);
        }
    }
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 57195658692877350ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16897524268346673969ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14684054536605222613ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2035000567252816015ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4479338951580204503ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__has_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8867227016568190198ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2794360088935157749ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o, __VscopeHash, 12257283913221687812ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array, __VscopeHash, 18303430909665717942ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10845193195016697325ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4429918322660972549ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13950959180397421881ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12970305276906062510ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5227466844125689680ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11956744639101062257ull);
        }
    }
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11012897964356705001ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12782512262693272936ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6597937287161940882ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12819167928324325258ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__current_idx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14536765618426745893ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14689226035321611477ull);
    }
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_way = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14392306378523007581ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6057431981944717100ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__relocation__DOT__has_re_pv = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10949070402742169473ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__relocation__DOT__next_rs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7438527794529717413ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__curr_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10890750516727760809ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3502930167306728504ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__read_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3696085774842477351ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6108067343253569949ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__mem_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1667460595700174548ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1865919156836580554ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__write_finished = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4220363361580291329ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__mem_store = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8743584355546751458ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__store_address = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14976895506031400308ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__request = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13899050168414379139ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory_address = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1147513732366010544ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16753035070052208856ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11931811328711905079ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__address = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 364247965672941195ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__funct3_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13930055673467242000ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3518156861669125210ull);
    for (int __Vi0 = 0; __Vi0 < 146; ++__Vi0) {
        vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__temp_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14380419157802267883ull);
    }
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__delay = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1884501000137879935ull);
    for (int __Vi0 = 0; __Vi0 < 4194304; ++__Vi0) {
        vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17156951098598366619ull);
    }
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16031586573495020877ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[__Vi0], __VscopeHash, 9789200507379446904ull);
    }
    vlSelf->cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1188102427374135964ull);
    vlSelf->cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13131042099229701753ull);
    vlSelf->cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2190697328844426466ull);
    vlSelf->cache_tb__DOT__cache__DOT__wb_buffer1__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__write_finished__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5435039803385480258ull);
    vlSelf->__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9762265835246060777ull);
    vlSelf->__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13984252707185171551ull);
    vlSelf->__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11237330768323936271ull);
    vlSelf->__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__memory1__DOT__memory_address__0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14651013242215710774ull);
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__write_finished__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5757172896676567009ull);
    vlSelf->__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o__1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15420427190592444749ull);
    vlSelf->__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9216633251300610541ull);
    vlSelf->__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1384063601102591775ull);
    vlSelf->__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__memory1__DOT__memory_address__1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9857933902933713469ull);
    vlSelf->__Vtrigprevexpr___TOP__cache_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14499655531552440901ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
