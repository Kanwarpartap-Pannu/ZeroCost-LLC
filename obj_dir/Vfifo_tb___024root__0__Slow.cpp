// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo_tb.h for the primary calling header

#include "Vfifo_tb__pch.h"

VL_ATTR_COLD void Vfifo_tb___024root___eval_static__TOP(Vfifo_tb___024root* vlSelf);
VL_ATTR_COLD void Vfifo_tb___024root____Vm_traceActivitySetAll(Vfifo_tb___024root* vlSelf);

VL_ATTR_COLD void Vfifo_tb___024root___eval_static(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_static\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfifo_tb___024root___eval_static__TOP(vlSelf);
    Vfifo_tb___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__fifo_tb__DOT__clk__0 
        = vlSelfRef.fifo_tb__DOT__clk;
}

VL_ATTR_COLD void Vfifo_tb___024root___eval_static__TOP(Vfifo_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo_tb___024root___eval_static__TOP\n"); );
    Vfifo_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i = 0x01000000U;
    vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_dat = 0x01000000U;
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
    vlSelfRef.fifo_tb__DOT__rd_req = 1U;
    vlSymsp->_vm_contextp__->dumpfile("fifo.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0009ca00U, vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i)) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h9cad2051__0 = 0U;
        if (VL_LIKELY(((0x0009c9ffU >= (0x000fffffU 
                                        & vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i))))) {
            vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory[(0x000fffffU 
                                                                          & vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i)] 
                = vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h9cad2051__0;
        }
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i 
            = ((IData)(1U) + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i);
    }
    VL_READMEM_N(true, 32, 147, 0, "/Users/kanwarpannu/Desktop/ZeroCostLLC/ZeroCost-LLC/test_files/test1.x"s
                 ,  &(vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__temp_memory)
                 , 0, ~0ULL);
    vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000093U, vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i)) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h8832fe4e__0 
            = ((0x92U >= (0x000000ffU & vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i))
                ? (0x000000ffU & vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__temp_memory
                   [(0x000000ffU & vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i)])
                : 0U);
        if (VL_LIKELY(((0x0009c9ffU >= (0x000fffffU 
                                        & VL_MULS_III(32, (IData)(4U), vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i)))))) {
            vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory[(0x000fffffU 
                                                                          & VL_MULS_III(32, (IData)(4U), vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i))] 
                = vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h8832fe4e__0;
        }
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h22887a14__0 
            = (0x000000ffU & (((0x92U >= (0x000000ffU 
                                          & vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i))
                                ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__temp_memory
                               [(0x000000ffU & vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i)]
                                : 0U) >> 8U));
        if (VL_LIKELY(((0x0009c9ffU >= (0x000fffffU 
                                        & ((IData)(1U) 
                                           + VL_MULS_III(32, (IData)(4U), vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i))))))) {
            vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory[(0x000fffffU 
                                                                          & ((IData)(1U) 
                                                                             + 
                                                                             VL_MULS_III(32, (IData)(4U), vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i)))] 
                = vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h22887a14__0;
        }
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h22386af0__0 
            = (0x000000ffU & (((0x92U >= (0x000000ffU 
                                          & vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i))
                                ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__temp_memory
                               [(0x000000ffU & vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i)]
                                : 0U) >> 0x10U));
        if (VL_LIKELY(((0x0009c9ffU >= (0x000fffffU 
                                        & ((IData)(2U) 
                                           + VL_MULS_III(32, (IData)(4U), vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i))))))) {
            vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory[(0x000fffffU 
                                                                          & ((IData)(2U) 
                                                                             + 
                                                                             VL_MULS_III(32, (IData)(4U), vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i)))] 
                = vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h22386af0__0;
        }
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h22377ae3__0 
            = (((0x92U >= (0x000000ffU & vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i))
                 ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__temp_memory
                [(0x000000ffU & vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i)]
                 : 0U) >> 0x18U);
        if (VL_LIKELY(((0x0009c9ffU >= (0x000fffffU 
                                        & ((IData)(3U) 
                                           + VL_MULS_III(32, (IData)(4U), vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i))))))) {
            vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory[(0x000fffffU 
                                                                          & ((IData)(3U) 
                                                                             + 
                                                                             VL_MULS_III(32, (IData)(4U), vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i)))] 
                = vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h22377ae3__0;
        }
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i 
            = ((IData)(1U) + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__i);
    }
    VL_WRITEF_NX("IMEMORY: Loaded 147 32-bit words from /Users/kanwarpannu/Desktop/ZeroCostLLC/ZeroCost-LLC/test_files/test1.x\n",0);
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
    if ((1U & (~ VL_ONEHOT_I(((((3U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                << 3U) | ((2U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                          << 2U)) | 
                              (((1U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                << 1U) | (0U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)))))))) {
        if ((0U != ((((3U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                      << 3U) | ((2U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                << 2U)) | (((1U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: memory_controller.sv:87: Assertion failed in %Nfifo_tb.mem1: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state));
                VL_STOP_MT("design/memory_controller.sv", 87, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((((3U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                << 3U) | ((2U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                          << 2U)) | 
                              (((1U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                << 1U) | (0U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)))))))) {
        if ((0U != ((((3U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                      << 3U) | ((2U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                << 2U)) | (((1U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: memory_controller.sv:155: Assertion failed in %Nfifo_tb.mem1: unique case, but multiple matches found for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state));
                VL_STOP_MT("design/memory_controller.sv", 155, "");
            }
        }
    }
    vlSelfRef.fifo_tb__DOT__mem1__DOT__request = ((0U 
                                                   != (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                                  && ((1U 
                                                       == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                                      || ((2U 
                                                           != (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                                          && (3U 
                                                              == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)))));
    vlSelfRef.fifo_tb__DOT__mem1__DOT__write_en = (
                                                   (0U 
                                                    != (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                                   && ((1U 
                                                        != (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                                       && ((2U 
                                                            != (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                                           && (3U 
                                                               == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)))));
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
    vlSelfRef.fifo_tb__DOT__pop_en = ((0U != (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                      && ((1U != (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                          && ((2U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                              && (1U 
                                                  & (~ (IData)(vlSelfRef.fifo_tb__DOT__pop_valid))))));
    vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i 
        = vlSelfRef.fifo_tb__DOT__mem1__DOT__address;
    vlSelfRef.fifo_tb__DOT__mem1__DOT__read_en = ((0U 
                                                   != (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)) 
                                                  && (1U 
                                                      == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state)));
    __Vtableidx1 = (((IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__tail) 
                     << 3U) | (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__head));
    vlSelfRef.fifo_tb__DOT__fifo1__DOT__empty = Vfifo_tb__ConstPool__TABLE_h47de3021_0
        [__Vtableidx1];
    if ((0U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state))) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory_address 
            = (0x0000000fU & ((IData)(vlSelfRef.fifo_tb__DOT__push_data) 
                              >> 8U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__next_state 
            = ((IData)(vlSelfRef.fifo_tb__DOT__rd_req)
                ? 1U : ((1U & ((~ (IData)(vlSelfRef.fifo_tb__DOT__rd_req)) 
                               & (~ (IData)(vlSelfRef.fifo_tb__DOT__fifo1__DOT__empty))))
                         ? 2U : 0U));
    } else if ((1U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state))) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory_address 
            = (0x0000000fU & ((IData)(vlSelfRef.fifo_tb__DOT__push_data) 
                              >> 8U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__next_state 
            = ((IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__ready)
                ? 0U : 1U);
    } else if ((2U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state))) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory_address 
            = (0x0000000fU & ((IData)(vlSelfRef.fifo_tb__DOT__push_data) 
                              >> 8U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__next_state 
            = ((IData)(vlSelfRef.fifo_tb__DOT__pop_valid)
                ? ((0x00001000U & (IData)(vlSelfRef.fifo_tb__DOT__pop_data))
                    ? 0U : 3U) : 2U);
    } else if ((3U == (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state))) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory_address 
            = (0x0000000fU & (IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__store_address));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__next_state 
            = ((IData)(vlSelfRef.fifo_tb__DOT__mem1__DOT__write_finished)
                ? 0U : 3U);
    } else {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory_address 
            = (0x0000000fU & ((IData)(vlSelfRef.fifo_tb__DOT__push_data) 
                              >> 8U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__next_state 
            = vlSelfRef.fifo_tb__DOT__mem1__DOT__curr_state;
    }
    vlSelfRef.fifo_tb__DOT__buffer_full = Vfifo_tb__ConstPool__TABLE_h95960f88_0
        [__Vtableidx1];
    vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__data_o = 0U;
    vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_dat 
        = vlSelfRef.fifo_tb__DOT__mem1__DOT__memory_address;
    vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat 
        = ((0x01000000U > vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_dat)
            ? VL_MODDIV_III(32, vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_dat, (IData)(0x0009ca00U))
            : VL_MODDIV_III(32, (vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_dat 
                                 - (IData)(0x01000000U)), (IData)(0x0009ca00U)));
    vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out = 0ULL;
    if (vlSelfRef.fifo_tb__DOT__mem1__DOT__read_en) {
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__unnamedblk1__DOT__i = 8U;
        vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__data_o 
            = (((0x01000000U <= vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i) 
                & (0x0109ca00U > ((IData)(3U) + vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i)))
                ? (((((0x0009c9ffU >= (0x000fffffU 
                                       & ((IData)(3U) 
                                          + vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i)))
                       ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                      [(0x000fffffU & ((IData)(3U) 
                                       + vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i))]
                       : 0U) << 0x00000018U) | (((0x0009c9ffU 
                                                  >= 
                                                  (0x000fffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i)))
                                                  ? 
                                                 vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                                 [(0x000fffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i))]
                                                  : 0U) 
                                                << 0x00000010U)) 
                   | ((((0x0009c9ffU >= (0x000fffffU 
                                         & ((IData)(1U) 
                                            + vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i)))
                         ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                        [(0x000fffffU & ((IData)(1U) 
                                         + vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i))]
                         : 0U) << 8U) | ((0x0009c9ffU 
                                          >= (0x000fffffU 
                                              & vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i))
                                          ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                         [(0x000fffffU 
                                           & vlSelfRef.fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i)]
                                          : 0U))) : 0xdeadbeefU);
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0x00ffffffffffffffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(8U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(8U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 0x00000038U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xff00ffffffffffffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(7U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(7U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 0x00000030U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xffff00ffffffffffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(6U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(6U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 0x00000028U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xffffff00ffffffffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(5U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(5U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 0x00000020U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xffffffff00ffffffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 0x00000018U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xffffffffff00ffffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(3U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(3U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 0x00000010U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xffffffffffff00ffULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(((0x0009c9ffU >= 
                                    (0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(2U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                    ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                   [(0x000fffffU & 
                                     VL_MODDIV_III(32, 
                                                   ((IData)(2U) 
                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                    : 0U))) << 8U));
        vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out 
            = ((0xffffffffffffff00ULL & vlSelfRef.fifo_tb__DOT__mem1__DOT__mem_out) 
               | (IData)((IData)(((0x0009c9ffU >= (0x000fffffU 
                                                   & VL_MODDIV_III(32, 
                                                                   ((IData)(1U) 
                                                                    + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U))))
                                   ? vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory
                                  [(0x000fffffU & VL_MODDIV_III(32, 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat), (IData)(0x0009ca00U)))]
                                   : 0U))));
    }
}

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
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
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
    vlSelf->fifo_tb__DOT__pop_data = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 2088823179515181935ull);
    vlSelf->fifo_tb__DOT__found_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4582505006915312270ull);
    vlSelf->fifo_tb__DOT__buffer_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17541744714403905435ull);
    vlSelf->fifo_tb__DOT__pop_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10720265436432801271ull);
    vlSelf->fifo_tb__DOT____Vcellout__fifo1__found_entry = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11876969189170295052ull);
    vlSelf->fifo_tb__DOT__rd_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16646252811301851620ull);
    vlSelf->fifo_tb__DOT__pop_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11976809829657777225ull);
    vlSelf->fifo_tb__DOT__push_test = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7457000054732764441ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fifo_tb__DOT__fifo1__DOT__fifo_buffer[__Vi0] = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11856406222563543953ull);
    }
    vlSelf->fifo_tb__DOT__fifo1__DOT__head = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15527195409789495687ull);
    vlSelf->fifo_tb__DOT__fifo1__DOT__tail = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6438397238465031716ull);
    vlSelf->fifo_tb__DOT__fifo1__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10023727770384515106ull);
    vlSelf->fifo_tb__DOT__fifo1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->fifo_tb__DOT__mem1__DOT__curr_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18121000187038982038ull);
    vlSelf->fifo_tb__DOT__mem1__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13765378185216782043ull);
    vlSelf->fifo_tb__DOT__mem1__DOT__read_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17811530764752655356ull);
    vlSelf->fifo_tb__DOT__mem1__DOT__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6511903747727760013ull);
    vlSelf->fifo_tb__DOT__mem1__DOT__mem_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9220515665330330556ull);
    vlSelf->fifo_tb__DOT__mem1__DOT__ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4075117388102406325ull);
    vlSelf->fifo_tb__DOT__mem1__DOT__write_finished = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1387794368767769446ull);
    vlSelf->fifo_tb__DOT__mem1__DOT__mem_store = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16725166170433495665ull);
    vlSelf->fifo_tb__DOT__mem1__DOT__store_address = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11814658273815059649ull);
    vlSelf->fifo_tb__DOT__mem1__DOT__request = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5918897460289322400ull);
    vlSelf->fifo_tb__DOT__mem1__DOT__memory_address = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 575437352877415745ull);
    vlSelf->fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9359260926349366912ull);
    vlSelf->fifo_tb__DOT__mem1__DOT____Vcellinp__memory1__addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5414239567054785746ull);
    vlSelf->fifo_tb__DOT__mem1__DOT__address = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11480679699468645016ull);
    vlSelf->fifo_tb__DOT__mem1__DOT__funct3_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7938338690653981861ull);
    vlSelf->fifo_tb__DOT__mem1__DOT__memory1__DOT__data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10443916452960873497ull);
    for (int __Vi0 = 0; __Vi0 < 147; ++__Vi0) {
        vlSelf->fifo_tb__DOT__mem1__DOT__memory1__DOT__temp_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 183203453830799631ull);
    }
    vlSelf->fifo_tb__DOT__mem1__DOT__memory1__DOT__delay = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10558416415325423050ull);
    for (int __Vi0 = 0; __Vi0 < 641536; ++__Vi0) {
        vlSelf->fifo_tb__DOT__mem1__DOT__memory1__DOT__main_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 515527678774657432ull);
    }
    vlSelf->fifo_tb__DOT__mem1__DOT__memory1__DOT__address_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17526679350241895210ull);
    vlSelf->fifo_tb__DOT__mem1__DOT__memory1__DOT__i = 0;
    vlSelf->fifo_tb__DOT__mem1__DOT__memory1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->fifo_tb__DOT__mem1__DOT__memory1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h9cad2051__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8775088777397846106ull);
    vlSelf->fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h8832fe4e__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2556405710798237460ull);
    vlSelf->fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h22887a14__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9892724606122531426ull);
    vlSelf->fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h22386af0__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15019811790469945478ull);
    vlSelf->fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_h22377ae3__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10675099725532761334ull);
    vlSelf->fifo_tb__DOT__mem1__DOT__memory1__DOT____Vlvbound_ha00dc8f6__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15649223962591664930ull);
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
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
