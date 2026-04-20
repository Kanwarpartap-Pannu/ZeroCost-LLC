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
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__write_finished__1 
        = vlSelfRef.cache_tb__DOT__cache__DOT__write_finished;
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__clk__0 
        = vlSelfRef.cache_tb__DOT__clk;
}

VL_ATTR_COLD void Vcache_tb___024root___eval_static__TOP(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_static__TOP\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i = 0x01000000U;
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_dat = 0x01000000U;
}

VL_ATTR_COLD void Vcache_tb___024root___eval_initial__TOP(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_initial__TOP\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_tb__DOT__clk = 0U;
    vlSelfRef.cache_tb__DOT__reset = 1U;
    vlSelfRef.cache_tb__DOT__addr = 0U;
    vlSelfRef.cache_tb__DOT__i = 0U;
    VL_READMEM_N(false, 22, 16, 0, "test_files/test_address.x"s
                 ,  &(vlSelfRef.cache_tb__DOT__test_addresses)
                 , 0, ~0ULL);
    vlSymsp->_vm_contextp__->dumpfile("cache.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0009ca00U, vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)) {
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT____Vlvbound_h9cad2051__0 = 0U;
        if (VL_LIKELY(((0x0009c9ffU >= (0x000fffffU 
                                        & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i))))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[(0x000fffffU 
                                                                                & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)] 
                = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT____Vlvbound_h9cad2051__0;
        }
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i 
            = ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i);
    }
    VL_READMEM_N(true, 32, 147, 0, "/Users/kanwarpannu/Desktop/ZeroCostLLC/ZeroCost-LLC/test_files/test1.x"s
                 ,  &(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__temp_memory)
                 , 0, ~0ULL);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000093U, vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)) {
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT____Vlvbound_h8832fe4e__0 
            = ((0x92U >= (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i))
                ? (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__temp_memory
                   [(0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)])
                : 0U);
        if (VL_LIKELY(((0x0009c9ffU >= (0x000fffffU 
                                        & VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)))))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[(0x000fffffU 
                                                                                & VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i))] 
                = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT____Vlvbound_h8832fe4e__0;
        }
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT____Vlvbound_h22887a14__0 
            = (0x000000ffU & (((0x92U >= (0x000000ffU 
                                          & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i))
                                ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__temp_memory
                               [(0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)]
                                : 0U) >> 8U));
        if (VL_LIKELY(((0x0009c9ffU >= (0x000fffffU 
                                        & ((IData)(1U) 
                                           + VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i))))))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[(0x000fffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)))] 
                = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT____Vlvbound_h22887a14__0;
        }
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT____Vlvbound_h22386af0__0 
            = (0x000000ffU & (((0x92U >= (0x000000ffU 
                                          & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i))
                                ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__temp_memory
                               [(0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)]
                                : 0U) >> 0x10U));
        if (VL_LIKELY(((0x0009c9ffU >= (0x000fffffU 
                                        & ((IData)(2U) 
                                           + VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i))))))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[(0x000fffffU 
                                                                                & ((IData)(2U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)))] 
                = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT____Vlvbound_h22386af0__0;
        }
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT____Vlvbound_h22377ae3__0 
            = (((0x92U >= (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i))
                 ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__temp_memory
                [(0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)]
                 : 0U) >> 0x18U);
        if (VL_LIKELY(((0x0009c9ffU >= (0x000fffffU 
                                        & ((IData)(3U) 
                                           + VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i))))))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[(0x000fffffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i)))] 
                = vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT____Vlvbound_h22377ae3__0;
        }
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i 
            = ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i);
    }
    VL_WRITEF_NX("IMEMORY: Loaded 147 32-bit words from /Users/kanwarpannu/Desktop/ZeroCostLLC/ZeroCost-LLC/test_files/test1.x\n",0);
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
                                                    ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__write_finished) 
                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__write_finished__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__write_finished__0 
        = vlSelfRef.cache_tb__DOT__cache__DOT__write_finished;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered
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
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
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
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__read_en 
        = ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)) 
           && (1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)));
    __VExpandSel_WordIdx_1 = (0x0000001fU & (VL_SHIFTL_III(10,10,32, 
                                                           ((IData)(1U) 
                                                            - 
                                                            (1U 
                                                             & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                                                >> 3U))), 9U) 
                                             >> 5U));
    __VExpandSel_LoShift_1 = (0x0000001fU & VL_SHIFTL_III(10,10,32, 
                                                          ((IData)(1U) 
                                                           - 
                                                           (1U 
                                                            & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                                               >> 3U))), 9U));
    __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
    if (__VExpandSel_Aligned_1) {
        __VExpandSel_HiShift_1 = 0U;
        __VExpandSel_HiMask_1 = 0U;
    } else {
        __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_1);
        __VExpandSel_HiMask_1 = 0xffffffffU;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[0U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(1U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[__VExpandSel_WordIdx_1] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[1U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(2U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(1U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[2U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(3U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(2U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[3U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(4U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(3U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[4U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(5U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(4U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[5U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(6U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(5U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[6U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(7U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(6U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[7U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(8U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(7U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[8U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(9U) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(8U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[9U] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(0x0000000aU) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(9U) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[0x0000000aU] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(0x0000000bU) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(0x0000000aU) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[0x0000000bU] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(0x0000000cU) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(0x0000000bU) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[0x0000000cU] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(0x0000000dU) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(0x0000000cU) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[0x0000000dU] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(0x0000000eU) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(0x0000000dU) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[0x0000000eU] 
        = (((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
             ((IData)(0x0000000fU) + __VExpandSel_WordIdx_1)] 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(0x0000000eU) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[0x0000000fU] 
        = (((((0x00000010U <= __VExpandSel_WordIdx_1)
               ? 0U : vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(0x00000010U) + __VExpandSel_WordIdx_1)]) 
             << __VExpandSel_HiShift_1) & __VExpandSel_HiMask_1) 
           | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
              ((IData)(0x0000000fU) + __VExpandSel_WordIdx_1)] 
              >> __VExpandSel_LoShift_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way = 0U;
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_array
           [0U] == (0x000003ffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                               [(1U 
                                                 & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                                    >> 3U))]
                                               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_way])) 
         & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__current_idx)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way 
            = vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_way;
    }
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_array
           [1U] == (0x000003ffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                               [(1U 
                                                 & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                                    >> 3U))]
                                               [(7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_way)))])) 
         & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__current_idx)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_way)));
    }
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_array
           [2U] == (0x000003ffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                               [(1U 
                                                 & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                                    >> 3U))]
                                               [(7U 
                                                 & ((IData)(2U) 
                                                    + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_way)))])) 
         & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__current_idx)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way 
            = (7U & ((IData)(2U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_way)));
    }
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
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found = 0U;
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][0U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found = 1U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][1U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found = 1U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][2U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found = 1U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][3U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found = 1U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][4U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found = 1U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][5U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found = 1U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][6U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit = 0U;
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_array
           [0U] == (0x000003ffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                               [(1U 
                                                 & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                                    >> 3U))]
                                               [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_way])) 
         & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__current_idx)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit = 1U;
    }
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_array
           [1U] == (0x000003ffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                               [(1U 
                                                 & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                                    >> 3U))]
                                               [(7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_way)))])) 
         & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__current_idx)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit = 1U;
    }
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_array
           [2U] == (0x000003ffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                               [(1U 
                                                 & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                                    >> 3U))]
                                               [(7U 
                                                 & ((IData)(2U) 
                                                    + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_way)))])) 
         & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__current_idx)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit = 1U;
    }
    if ((((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_array
           [3U] == (0x000003ffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                   >> 4U))) & (0U != 
                                               vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                                               [(1U 
                                                 & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                                    >> 3U))]
                                               [(7U 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_way)))])) 
         & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__current_idx)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way 
            = (7U & ((IData)(3U) + (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_way)));
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way = 0U;
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][0U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way = 0U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][1U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way = 1U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][2U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way = 2U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][3U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way = 3U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][4U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way = 4U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][5U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way = 5U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][6U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way = 6U;
    }
    if ((0U == vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][7U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way = 7U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__data_o = 0U;
    if (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__read_en) {
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__unnamedblk1__DOT__i = 8U;
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__data_o 
            = (((0x01000000U <= vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i) 
                & (0x0109ca00U > ((IData)(3U) + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i)))
                ? (((((0x0009c9ffU >= (0x000fffffU 
                                       & ((IData)(3U) 
                                          + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i)))
                       ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                      [(0x000fffffU & ((IData)(3U) 
                                       + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i))]
                       : 0U) << 0x00000018U) | (((0x0009c9ffU 
                                                  >= 
                                                  (0x000fffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i)))
                                                  ? 
                                                 vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                                 [(0x000fffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i))]
                                                  : 0U) 
                                                << 0x00000010U)) 
                   | ((((0x0009c9ffU >= (0x000fffffU 
                                         & ((IData)(1U) 
                                            + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i)))
                         ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                        [(0x000fffffU & ((IData)(1U) 
                                         + vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i))]
                         : 0U) << 8U) | ((0x0009c9ffU 
                                          >= (0x000fffffU 
                                              & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i))
                                          ? vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory
                                         [(0x000fffffU 
                                           & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i)]
                                          : 0U))) : 0xdeadbeefU);
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp 
        = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
                            (((IData)(0x0000003fU) 
                              + (0x000003ffU & (VL_SHIFTL_III(10,32,32, 
                                                              ((IData)(1U) 
                                                               - 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                                                   >> 3U))), 9U) 
                                                + (0x000001ffU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(7U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way)), 6U))))) 
                             >> 5U)])) << ((0U == (0x0000001fU 
                                                   & (VL_SHIFTL_III(10,32,32, 
                                                                    ((IData)(1U) 
                                                                     - 
                                                                     (1U 
                                                                      & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                                                         >> 3U))), 9U) 
                                                      + 
                                                      (0x000001ffU 
                                                       & VL_SHIFTL_III(9,32,32, 
                                                                       ((IData)(7U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way)), 6U)))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & (VL_SHIFTL_III(10,32,32, 
                                                                   ((IData)(1U) 
                                                                    - 
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                                                        >> 3U))), 9U) 
                                                     + 
                                                     (0x000001ffU 
                                                      & VL_SHIFTL_III(9,32,32, 
                                                                      ((IData)(7U) 
                                                                       - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way)), 6U))))))) 
           | (((0U == (0x0000001fU & (VL_SHIFTL_III(10,32,32, 
                                                    ((IData)(1U) 
                                                     - 
                                                     (1U 
                                                      & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                                         >> 3U))), 9U) 
                                      + (0x000001ffU 
                                         & VL_SHIFTL_III(9,32,32, 
                                                         ((IData)(7U) 
                                                          - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way)), 6U)))))
                ? 0ULL : ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
                                          (((IData)(0x0000001fU) 
                                            + (0x000003ffU 
                                               & (VL_SHIFTL_III(10,32,32, 
                                                                ((IData)(1U) 
                                                                 - 
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                                                     >> 3U))), 9U) 
                                                  + 
                                                  (0x000001ffU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(7U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way)), 6U))))) 
                                           >> 5U)])) 
                          << ((IData)(0x00000020U) 
                              - (0x0000001fU & (VL_SHIFTL_III(10,32,32, 
                                                              ((IData)(1U) 
                                                               - 
                                                               (1U 
                                                                & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                                                   >> 3U))), 9U) 
                                                + (0x000001ffU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(7U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way)), 6U))))))) 
              | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array[
                                 (0x0000001fU & ((VL_SHIFTL_III(10,32,32, 
                                                                ((IData)(1U) 
                                                                 - 
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                                                     >> 3U))), 9U) 
                                                  + 
                                                  (0x000001ffU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   ((IData)(7U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way)), 6U))) 
                                                 >> 5U))])) 
                 >> (0x0000001fU & (VL_SHIFTL_III(10,32,32, 
                                                  ((IData)(1U) 
                                                   - 
                                                   (1U 
                                                    & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                                       >> 3U))), 9U) 
                                    + (0x000001ffU 
                                       & VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(7U) 
                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way)), 6U)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x000001ffU 
                                                & (VL_SHIFTL_III(9,9,32, 
                                                                 ((IData)(7U) 
                                                                  - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way)), 6U) 
                                                   + 
                                                   (0x0000003fU 
                                                    & VL_SHIFTL_III(6,6,32, 
                                                                    (7U 
                                                                     & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))));
    vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 0U;
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [0U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [0U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 0U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [1U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [1U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [2U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [2U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 2U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [3U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [3U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 3U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [4U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [4U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 4U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [5U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [5U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 5U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data = 0ULL;
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [0U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [0U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [0U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [0U][0U])));
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [1U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [1U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [1U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [1U][0U])));
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [2U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [2U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [2U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [2U][0U])));
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [3U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [3U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [3U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [3U][0U])));
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [4U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [4U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [4U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [4U][0U])));
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [5U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [5U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [5U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [5U][0U])));
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [6U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [6U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 6U;
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [6U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [6U][0U])));
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 0U;
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [0U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [0U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [1U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [1U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [2U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [2U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [3U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [3U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [4U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [4U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [5U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [5U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [6U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [6U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)) 
          & ((0x00003fffU & vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
              [7U][2U]) == (0x00003ff8U & (IData)(vlSelfRef.cache_tb__DOT__addr)))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
               [7U][2U] >> 0x0000000eU)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found_entry = 7U;
        vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data 
            = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                [7U][1U])) << 0x00000020U) 
               | (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer
                                 [7U][0U])));
        vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way = 0U;
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][0U] >= vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way = 0U;
    }
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][1U] >= vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way = 1U;
    }
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][2U] >= vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way = 2U;
    }
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][3U] >= vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way = 3U;
    }
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][4U] >= vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way = 4U;
    }
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][5U] >= vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way = 5U;
    }
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][6U] >= vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way = 6U;
    }
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][7U] >= vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                 >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way = 7U;
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = (((0U 
                                                  == 
                                                  (0x0000001fU 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))
                                                  ? 0U
                                                  : 
                                                 (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                                  (((IData)(0x0000001fU) 
                                                    + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))))) 
                                                | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                    >> 5U)] 
                                                   >> 
                                                   (0x0000001fU 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))));
    vlSelfRef.cache_tb__DOT__cache__DOT__temp = vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data;
    if ((4U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))) {
        if ((2U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))) {
            if ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp 
                    = (((~ (0x00000000ffffffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp) 
                       | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U))));
                vlSelfRef.cache_tb__DOT__cache__DOT__temp 
                    = (((~ (0x00000000ffffffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                         (1U 
                                                          & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                       | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                          (1U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))));
            } else {
                vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp 
                    = (((~ (0x00000000000000ffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp) 
                       | ((QData)((IData)((0x000000ffU 
                                           & vlSelfRef.cache_tb__DOT__store_data))) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U))));
                vlSelfRef.cache_tb__DOT__cache__DOT__temp 
                    = (((~ (0x00000000000000ffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                         (1U 
                                                          & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                       | ((QData)((IData)((0x000000ffU 
                                           & vlSelfRef.cache_tb__DOT__store_data))) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                          (1U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))));
            }
        } else if ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp 
                = (((~ (0x000000000000ffffULL << (0x0000003fU 
                                                  & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U)))) 
                    & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp) 
                   | ((QData)((IData)((0x0000ffffU 
                                       & vlSelfRef.cache_tb__DOT__store_data))) 
                      << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U))));
            vlSelfRef.cache_tb__DOT__cache__DOT__temp 
                = (((~ (0x000000000000ffffULL << (0x0000003fU 
                                                  & VL_SHIFTL_III(6,32,32, 
                                                                  (1U 
                                                                   & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                    & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                   | ((QData)((IData)((0x0000ffffU 
                                       & vlSelfRef.cache_tb__DOT__store_data))) 
                      << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                      (1U 
                                                       & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))));
        } else {
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp 
                = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                                  & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U)))) 
                    & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp) 
                   | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                      << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U))));
            vlSelfRef.cache_tb__DOT__cache__DOT__temp 
                = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                                  & VL_SHIFTL_III(6,32,32, 
                                                                  (1U 
                                                                   & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                    & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                   | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                      << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                      (1U 
                                                       & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))));
        }
    } else if ((2U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))) {
        if ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp 
                = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                                  & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U)))) 
                    & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp) 
                   | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                      << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U))));
            vlSelfRef.cache_tb__DOT__cache__DOT__temp 
                = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                                  & VL_SHIFTL_III(6,32,32, 
                                                                  (1U 
                                                                   & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                    & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                   | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                      << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                      (1U 
                                                       & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))));
        } else {
            vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp 
                = (((~ (0x00000000000000ffULL << (0x0000003fU 
                                                  & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U)))) 
                    & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp) 
                   | ((QData)((IData)((0x000000ffU 
                                       & vlSelfRef.cache_tb__DOT__store_data))) 
                      << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U))));
            vlSelfRef.cache_tb__DOT__cache__DOT__temp 
                = (((~ (0x00000000000000ffULL << (0x0000003fU 
                                                  & VL_SHIFTL_III(6,32,32, 
                                                                  (1U 
                                                                   & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
                    & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
                   | ((QData)((IData)((0x000000ffU 
                                       & vlSelfRef.cache_tb__DOT__store_data))) 
                      << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                      (1U 
                                                       & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))));
        }
    } else if ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp 
            = (((~ (0x000000000000ffffULL << (0x0000003fU 
                                              & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U)))) 
                & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp) 
               | ((QData)((IData)((0x0000ffffU & vlSelfRef.cache_tb__DOT__store_data))) 
                  << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U))));
        vlSelfRef.cache_tb__DOT__cache__DOT__temp = 
            (((~ (0x000000000000ffffULL << (0x0000003fU 
                                            & VL_SHIFTL_III(6,32,32, 
                                                            (1U 
                                                             & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
              & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
             | ((QData)((IData)((0x0000ffffU & vlSelfRef.cache_tb__DOT__store_data))) 
                << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                (1U 
                                                 & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))));
    } else {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp 
            = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                              & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U)))) 
                & vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                  << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset), 3U))));
        vlSelfRef.cache_tb__DOT__cache__DOT__temp = 
            (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                            & VL_SHIFTL_III(6,32,32, 
                                                            (1U 
                                                             & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U)))) 
              & vlSelfRef.cache_tb__DOT__cache__DOT__temp) 
             | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                (1U 
                                                 & (IData)(vlSelfRef.cache_tb__DOT__addr)), 3U))));
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way 
        = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found)
            ? (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way)
            : (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__data_out 
        = ((2U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
            ? ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                ? vlSelfRef.__VdfgRegularize_hebeb780c_0_1
                : (0x000000ffU & (((0U == (0x0000001fU 
                                           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))
                                    ? 0U : (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                            (((IData)(7U) 
                                              + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                             >> 5U)] 
                                            << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))))) 
                                  | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                     ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                      >> 5U)] >> (0x0000001fU 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))))))
            : ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                ? (0x0000ffffU & (((0U == (0x0000001fU 
                                           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))
                                    ? 0U : (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                            (((IData)(0x0000000fU) 
                                              + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                             >> 5U)] 
                                            << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))))) 
                                  | (vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o[
                                     ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                      >> 5U)] >> (0x0000001fU 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))))
                : vlSelfRef.__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_address 
        = ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
            [(1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                    >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way] 
            << 4U) | (8U & (IData)(vlSelfRef.cache_tb__DOT__addr)));
}

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
    if ((1ULL & (vlSelfRef.__VstlTriggered[1U] | vlSelfRef.__VstlTriggered
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge cache_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
}

VL_ATTR_COLD void Vcache_tb___024root___ctor_var_reset(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___ctor_var_reset\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->cache_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5727279950073359593ull);
    vlSelf->cache_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16174056173423606432ull);
    vlSelf->cache_tb__DOT__addr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 18166002642159602152ull);
    vlSelf->cache_tb__DOT__store_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8025805358911265721ull);
    vlSelf->cache_tb__DOT__opcode_i = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6827118171210024836ull);
    vlSelf->cache_tb__DOT__funct3_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9942710174423227962ull);
    vlSelf->cache_tb__DOT__data_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15451370717509921107ull);
    vlSelf->cache_tb__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5825183008027484016ull);
    vlSelf->cache_tb__DOT__data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6374269179365881197ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->cache_tb__DOT__test_addresses[__Vi0] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 10553934106821948540ull);
    }
    vlSelf->cache_tb__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 508062196802149082ull);
    vlSelf->cache_tb__DOT__cache__DOT__mem_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7026767363807150671ull);
    vlSelf->cache_tb__DOT__cache__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 15386649170595856335ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9698902884994549512ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory_rq = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7858106167571211116ull);
    vlSelf->cache_tb__DOT__cache__DOT__write_finished = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3728721853266222330ull);
    vlSelf->cache_tb__DOT__cache__DOT__pop_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7155700585384177734ull);
    vlSelf->cache_tb__DOT__cache__DOT__rd_rq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16311786714316319900ull);
    vlSelf->cache_tb__DOT__cache__DOT__drain_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12321723536750063837ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->cache_tb__DOT__cache__DOT__pop_data, __VscopeHash, 1711963204510238383ull);
    vlSelf->cache_tb__DOT__cache__DOT__pop_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6686188338033262611ull);
    vlSelf->cache_tb__DOT__cache__DOT__wb_buffer_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6623876199343469231ull);
    vlSelf->cache_tb__DOT__cache__DOT__found_entry = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14336099505650197595ull);
    vlSelf->cache_tb__DOT__cache__DOT__found_buffer_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17316628798024373275ull);
    vlSelf->cache_tb__DOT__cache__DOT__buffer_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5901602724103587769ull);
    vlSelf->cache_tb__DOT__cache__DOT__buffer_ctrl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4765694839372504062ull);
    VL_SCOPED_RAND_RESET_W(78, vlSelf->cache_tb__DOT__cache__DOT__push_data, __VscopeHash, 14526280547135856028ull);
    vlSelf->cache_tb__DOT__cache__DOT__temp = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1092780027363646232ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__data_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1834702383798751316ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__replace_address = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 2467369720074357525ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17377484328047876996ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15574765928337878711ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17749959526555287730ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5480169017089108815ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 114994379515277827ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__idle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5764175796443661112ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__reset_search = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13084332625715877658ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__search_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4471596536903260310ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__search_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14867714161774065031ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__replace_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15988907686591194449ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__store_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 273650759404706674ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5573643019450603900ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 119498412086886543ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6431669451524708945ull);
        }
    }
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 57195658692877350ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_way = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8745431346501761177ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__current_idx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7851013296600991962ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__lookup_array[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6329431951430635098ull);
    }
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14684054536605222613ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2035000567252816015ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4479338951580204503ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2794360088935157749ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__replace_way = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8634067624594267354ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o, __VscopeHash, 12257283913221687812ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array, __VscopeHash, 18303430909665717942ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10845193195016697325ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__curr_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10890750516727760809ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3502930167306728504ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__read_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3696085774842477351ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6108067343253569949ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__mem_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1667460595700174548ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1865919156836580554ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__write_finished = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4220363361580291329ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__mem_store = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8743584355546751458ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__store_address = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 14976895506031400308ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__request = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13899050168414379139ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory_address = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 1147513732366010544ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16753035070052208856ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11931811328711905079ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__address = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 364247965672941195ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__funct3_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13930055673467242000ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3518156861669125210ull);
    for (int __Vi0 = 0; __Vi0 < 147; ++__Vi0) {
        vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__temp_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14380419157802267883ull);
    }
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__delay = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1884501000137879935ull);
    for (int __Vi0 = 0; __Vi0 < 641536; ++__Vi0) {
        vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__main_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17156951098598366619ull);
    }
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16031586573495020877ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT____Vlvbound_h9cad2051__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16750306942450723482ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT____Vlvbound_h8832fe4e__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4717193643154461058ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT____Vlvbound_h22887a14__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8421285619869564266ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT____Vlvbound_h22386af0__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8301949130944483634ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT____Vlvbound_h22377ae3__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5897239314363123109ull);
    vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT____Vlvbound_ha00dc8f6__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14039482375832992410ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(79, vlSelf->cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[__Vi0], __VscopeHash, 9789200507379446904ull);
    }
    vlSelf->cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1188102427374135964ull);
    vlSelf->cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13131042099229701753ull);
    vlSelf->cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2190697328844426466ull);
    vlSelf->cache_tb__DOT__cache__DOT__wb_buffer1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14076179427513946122ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4928662808602625550ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__write_finished__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5435039803385480258ull);
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__cache_tb__DOT__cache__DOT__write_finished__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5757172896676567009ull);
    vlSelf->__Vtrigprevexpr___TOP__cache_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14499655531552440901ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
