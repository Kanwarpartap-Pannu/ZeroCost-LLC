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
    vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i = 0x01000000U;
    vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_dat = 0x01000000U;
}

VL_ATTR_COLD void Vcache_tb___024root___eval_initial__TOP(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_initial__TOP\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cache_tb__DOT__clk = 0U;
    vlSelfRef.cache_tb__DOT__reset = 0U;
    vlSelfRef.cache_tb__DOT__address = 0U;
    vlSelfRef.cache_tb__DOT__start = 0U;
    vlSelfRef.cache_tb__DOT__i = 0U;
    VL_READMEM_N(true, 56, 21, 0, "test/test_files/test_address.x"s
                 ,  &(vlSelfRef.cache_tb__DOT__test_addresses)
                 , 0, ~0ULL);
    vlSymsp->_vm_contextp__->dumpfile("sim/sim_out/cache.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00400000U, vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i)) {
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory[(0x003fffffU 
                                                                                & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i)] = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i 
            = ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i);
    }
    VL_READMEM_N(true, 32, 146, 0, "/Users/kanwarpannu/Desktop/PROJECTS/ZeroCostLLC/ZeroCost-LLC/test/test_files/test1.x"s
                 ,  &(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__temp_memory)
                 , 0, ~0ULL);
    vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000092U, vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i)) {
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory[(0x003fffffU 
                                                                                & VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i))] 
            = ((0x91U >= (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i))
                ? (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__temp_memory
                   [(0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i)])
                : 0U);
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory[(0x003fffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i)))] 
            = (0x000000ffU & (((0x91U >= (0x000000ffU 
                                          & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i))
                                ? vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__temp_memory
                               [(0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i)]
                                : 0U) >> 8U));
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory[(0x003fffffU 
                                                                                & ((IData)(2U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i)))] 
            = (0x000000ffU & (((0x91U >= (0x000000ffU 
                                          & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i))
                                ? vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__temp_memory
                               [(0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i)]
                                : 0U) >> 0x10U));
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory[(0x003fffffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i)))] 
            = (((0x91U >= (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i))
                 ? vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__temp_memory
                [(0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i)]
                 : 0U) >> 0x18U);
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i 
            = ((IData)(1U) + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i);
    }
    VL_WRITEF_NX("IMEMORY: Loaded 146 32-bit words from /Users/kanwarpannu/Desktop/PROJECTS/ZeroCostLLC/ZeroCost-LLC/test/test_files/test1.x\n",0);
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
            VL_FATAL_MT("test/cache_tb.sv", 3, "", "Settle region did not converge after 100 tries");
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

extern const VlUnpacked<CData/*0:0*/, 256> Vcache_tb__ConstPool__TABLE_h627a7f2d_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcache_tb__ConstPool__TABLE_hfe0ee99c_0;

VL_ATTR_COLD void Vcache_tb___024root___stl_sequent__TOP__0(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___stl_sequent__TOP__0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I(((((((9U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                  << 4U) | (((0x0aU 
                                              == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                             << 3U) 
                                            | ((8U 
                                                == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                               << 2U))) 
                                | (((7U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                    << 1U) | (6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))) 
                               << 5U) | ((((5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                           << 4U) | 
                                          (((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                            << 3U) 
                                           | ((4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                              << 2U))) 
                                         | (((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                             << 1U) 
                                            | (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))))))))) {
        if ((0U == ((((((9U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                        << 4U) | (((0x0aU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                   << 3U) | ((8U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                             << 2U))) 
                      | (((7U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                          << 1U) | (6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))) 
                     << 5U) | ((((5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                 << 4U) | (((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                            << 3U) 
                                           | ((4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                              << 2U))) 
                               | (((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                   << 1U) | (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:225: Assertion failed in %Ncache_tb.cache: unique case, but none matched for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
                VL_STOP_MT("rtl/cache_controller.sv", 225, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: cache_controller.sv:225: Assertion failed in %Ncache_tb.cache: unique case, but multiple matches found for '32'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
            VL_STOP_MT("rtl/cache_controller.sv", 225, "");
        }
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__pop_en = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__push_en = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_data_in = 0U;
    if ((1U & (~ ((((((((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                        | (3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
                       | (4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
                      | (2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
                     | (5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
                    | (6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
                   | (7U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
                  | (8U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))))) {
        if ((0x0aU != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if ((9U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__mem_data_in 
                    = (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__temp);
            }
        }
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found_tag = 0U;
    if ((8U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][0U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found_tag = 1U;
    }
    if ((8U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][1U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found_tag = 1U;
    }
    if ((8U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][2U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found_tag = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i 
        = vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__address;
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way_tag = 0U;
    if ((8U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][0U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way_tag = 0U;
    }
    if ((8U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][1U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way_tag = 1U;
    }
    if ((8U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][2U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way_tag = 2U;
    }
    if ((8U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
         [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][3U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found_tag = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way_tag = 3U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_dat 
        = vlSelfRef.cache_tb__DOT__cache__DOT__mem_addr;
    vlSelfRef.cache_tb__DOT__cache__DOT__M_op = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim = 0U;
    if ((((1U & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                 [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                         >> 3U))][0U] >> 3U)) >= (1U 
                                                  & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                                                     [
                                                     (1U 
                                                      & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                         >> 3U))]
                                                     [0U] 
                                                     >> 3U))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][0U] >> 5U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim = 0U;
    }
    if ((((1U & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                 [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                         >> 3U))][1U] >> 3U)) >= (1U 
                                                  & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                                                     [
                                                     (1U 
                                                      & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                                         >> 3U))]
                                                     [
                                                     (1U 
                                                      & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim))] 
                                                     >> 3U))) 
         & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
               [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][1U] >> 5U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way = 0U;
    if ((((0x00000fffU & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                          [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))][0U] >> 4U)) 
          == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 4U))) & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                            [(1U & 
                                              ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                               >> 3U))]
                                            [0U] >> 3U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way 
            = (1U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][0U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set 
            = (1U & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                     [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 3U))][0U] >> 1U));
    } else {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set = 0U;
    }
    if ((((0x00000fffU & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                          [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))][1U] >> 4U)) 
          == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 4U))) & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                            [(1U & 
                                              ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                               >> 3U))]
                                            [1U] >> 3U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way 
            = (1U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][1U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set 
            = (1U & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                     [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 3U))][1U] >> 1U));
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag = 0U;
    if ((((0x00000fffU & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                          [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))][0U] >> 4U)) 
          == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 4U))) & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                            [(1U & 
                                              ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                               >> 3U))]
                                            [0U] >> 3U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag = 0U;
    }
    if ((((0x00000fffU & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                          [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))][1U] >> 4U)) 
          == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 4U))) & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                            [(1U & 
                                              ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                               >> 3U))]
                                            [1U] >> 3U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag = 1U;
    }
    if ((((0x00000fffU & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                          [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))][2U] >> 4U)) 
          == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 4U))) & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                            [(1U & 
                                              ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                               >> 3U))]
                                            [2U] >> 3U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way 
            = (1U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][2U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set 
            = (1U & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                     [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 3U))][2U] >> 1U));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag = 2U;
    }
    __Vtableidx1 = (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__tail) 
                     << 4U) | (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__head));
    vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty 
        = Vcache_tb__ConstPool__TABLE_h627a7f2d_0[__Vtableidx1];
    vlSelfRef.cache_tb__DOT__cache__DOT__full = Vcache_tb__ConstPool__TABLE_hfe0ee99c_0
        [__Vtableidx1];
    if ((1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__has_cre))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__next_rs = 0U;
    }
    if ((2U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__has_cre))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__next_rs = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__hit = 0U;
    if ((((0x00000fffU & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                          [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))][0U] >> 4U)) 
          == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 4U))) & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                            [(1U & 
                                              ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                               >> 3U))]
                                            [0U] >> 3U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__hit = 1U;
    }
    if ((((0x00000fffU & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                          [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))][1U] >> 4U)) 
          == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 4U))) & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                            [(1U & 
                                              ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                               >> 3U))]
                                            [1U] >> 3U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__hit = 1U;
    }
    if ((((0x00000fffU & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                          [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))][2U] >> 4U)) 
          == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 4U))) & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                            [(1U & 
                                              ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                               >> 3U))]
                                            [2U] >> 3U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__hit = 1U;
    }
    if ((((0x00000fffU & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                          [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                  >> 3U))][3U] >> 4U)) 
          == (0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 4U))) & (~ (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                                            [(1U & 
                                              ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                               >> 3U))]
                                            [3U] >> 3U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way 
            = (1U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
               [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][3U]);
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set 
            = (1U & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                     [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                             >> 3U))][3U] >> 1U));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag = 3U;
        vlSelfRef.cache_tb__DOT__cache__DOT__hit = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat 
        = ((0x01000000U > vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_dat)
            ? (0x003fffffU & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_dat)
            : (0x003fffffU & (vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_dat 
                              - (IData)(0x01000000U))));
    if (((((((((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
               | (3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
              | (4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
             | (2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
            | (5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
           | (6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
          | (7U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
         | (8U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))) {
        if ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if ((3U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                if ((4U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                    if ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                        vlSelfRef.cache_tb__DOT__cache__DOT__pop_en = 1U;
                        vlSelfRef.cache_tb__DOT__cache__DOT__push_en = 1U;
                    } else if ((5U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                        if ((6U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                            if ((7U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                                vlSelfRef.cache_tb__DOT__cache__DOT__push_en = 1U;
                            }
                        }
                    }
                }
            }
            if ((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__M_op = 2U;
            }
        }
    } else {
        if ((0x0aU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__pop_en = 1U;
        }
        if ((0x0aU != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if ((9U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                if (vlSelfRef.cache_tb__DOT__cache__DOT__buff_write) {
                    vlSelfRef.cache_tb__DOT__cache__DOT__push_en = 1U;
                }
                vlSelfRef.cache_tb__DOT__cache__DOT__M_op = 1U;
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)) 
                               << 2U) | (((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)))))))) {
        if ((0U != (((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)) 
                     << 2U) | (((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)) 
                                << 1U) | (0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: memory_controller.sv:69: Assertion failed in %Ncache_tb.cache.mem1: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op));
                VL_STOP_MT("rtl/memory_controller.sv", 69, "");
            }
        }
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__write_en 
        = ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)) 
           && ((2U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)) 
               && (1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op))));
    vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__request 
        = ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)) 
           && ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)) 
               || (1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op))));
    vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__read_en 
        = ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)) 
           && (2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__M_op)));
    vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry = 0U;
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [0U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [0U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry = 0U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [1U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [1U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [2U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [2U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry = 2U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [3U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [3U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry = 3U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [4U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [4U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry = 4U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [5U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [5U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry = 5U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o = 0U;
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [0U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [0U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o 
            = vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [0U][0U];
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [1U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [1U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o 
            = vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [1U][0U];
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [2U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [2U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o 
            = vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [2U][0U];
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [3U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [3U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o 
            = vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [3U][0U];
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [4U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [4U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o 
            = vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [4U][0U];
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [5U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [5U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o 
            = vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [5U][0U];
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [6U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [6U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry = 6U;
        vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o 
            = vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [6U][0U];
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__found = 0U;
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [0U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [0U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [1U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [1U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [2U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [2U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [3U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [3U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [4U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [4U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [5U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [5U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [6U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [6U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__found = 1U;
    }
    if ((((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)) 
          & (vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
             [7U][1U] == (IData)(vlSelfRef.cache_tb__DOT__address))) 
         & (~ vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [7U][2U]))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry = 7U;
        vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o 
            = vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer
            [7U][0U];
        vlSelfRef.cache_tb__DOT__cache__DOT__found = 1U;
    }
    vlSelfRef.cache_tb__DOT__data_valid = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 3U;
    vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__data_o = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out = 0ULL;
    if (vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__read_en) {
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__unnamedblk1__DOT__i = 8U;
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__data_o 
            = (((0x01000000U <= vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i) 
                & (0x01400000U > ((IData)(3U) + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i)))
                ? (((vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                     [(0x003fffffU & ((IData)(3U) + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i))] 
                     << 0x00000018U) | (vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                                        [(0x003fffffU 
                                          & ((IData)(2U) 
                                             + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i))] 
                                        << 0x00000010U)) 
                   | ((vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                       [(0x003fffffU & ((IData)(1U) 
                                        + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i))] 
                       << 8U) | vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                      [(0x003fffffU & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i)]))
                : 0xdeadbeefU);
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out 
            = ((0x00ffffffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(8U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000038U));
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out 
            = ((0xff00ffffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(7U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000030U));
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out 
            = ((0xffff00ffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(6U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000028U));
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out 
            = ((0xffffff00ffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(5U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000020U));
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out 
            = ((0xffffffff00ffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(4U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000018U));
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out 
            = ((0xffffffffff00ffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(3U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat))])) 
                  << 0x00000010U));
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out 
            = ((0xffffffffffff00ffULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out) 
               | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                                  [(0x003fffffU & ((IData)(2U) 
                                                   + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat))])) 
                  << 8U));
        vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out 
            = ((0xffffffffffffff00ULL & vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__mem_out) 
               | (IData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory
                                 [(0x003fffffU & ((IData)(1U) 
                                                  + vlSelfRef.cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat))])));
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_line_data = 0ULL;
    if (((((((((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
               | (3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
              | (4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
             | (2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
            | (5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
           | (6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
          | (7U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
         | (8U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))) {
        if ((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if ((0U != (IData)(vlSelfRef.cache_tb__DOT__op))) {
                if (vlSelfRef.cache_tb__DOT__cache__DOT__hit) {
                    if ((1U & (~ ((IData)(vlSelfRef.cache_tb__DOT__op) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cache_tb__DOT__op) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cache_tb__DOT__op) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.cache_tb__DOT__op))) {
                                    vlSelfRef.cache_tb__DOT__data_valid = 1U;
                                }
                            }
                        }
                        if ((4U & (IData)(vlSelfRef.cache_tb__DOT__op))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cache_tb__DOT__op) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__op)))) {
                                    vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 0U;
                                    vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 4U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelfRef.cache_tb__DOT__op))) {
                            if ((1U & (IData)(vlSelfRef.cache_tb__DOT__op))) {
                                vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 3U;
                                vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 6U;
                            } else {
                                vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 0U;
                                vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 3U;
                            }
                        } else if ((1U & (IData)(vlSelfRef.cache_tb__DOT__op))) {
                            vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 2U;
                            vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 2U;
                        }
                    }
                } else {
                    vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 3U;
                    vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 0U;
                }
            }
        } else if ((3U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if ((4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 0x0eU;
            } else if ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 0x0eU;
            } else if ((5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 2U;
                vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 8U;
            } else if ((6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__D_op = 1U;
                vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 0x0aU;
            } else {
                vlSelfRef.cache_tb__DOT__cache__DOT__T_op 
                    = ((7U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))
                        ? 0x0cU : 0x0fU);
            }
        }
        if ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if ((3U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                if ((4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_line_data 
                        = vlSelfRef.cache_tb__DOT__cache__DOT__temp;
                } else if ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                    vlSelfRef.cache_tb__DOT__cache__DOT__cache_line_data 
                        = (QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__search_data_o));
                } else if ((5U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                    if ((6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                        vlSelfRef.cache_tb__DOT__cache__DOT__cache_line_data 
                            = vlSelfRef.cache_tb__DOT__cache__DOT__temp;
                    }
                }
            }
        }
    } else if ((0x0aU != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
        if ((9U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if (vlSelfRef.cache_tb__DOT__cache__DOT__buff_write) {
                vlSelfRef.cache_tb__DOT__cache__DOT__T_op = 0x0fU;
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((0x0aU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)) 
                               << 2U) | (((8U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)) 
                                          << 1U) | 
                                         (0x0eU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)))))))) {
        if ((0U != (((0x0aU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)) 
                     << 2U) | (((8U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)) 
                                << 1U) | (0x0eU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tag_array.sv:297: Assertion failed in %Ncache_tb.cache.tag1: unique case, but multiple matches found for '4'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),4,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op));
                VL_STOP_MT("rtl/tag_array.sv", 297, "");
            }
        }
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_update = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__evict_ctrl = 0U;
    if (((6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)) 
         | (4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)))) {
        if (((3U & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_array
                    [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                            >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag] 
                    >> 2U)) == (3U & ((IData)(1U) << (IData)(vlSelfRef.cache_tb__DOT__requester))))) {
            if (((4U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)) 
                 & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                    [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                            >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag] 
                    >> 2U))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_update = 1U;
            }
            if ((1U & (~ ((4U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)) 
                          & (vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata
                             [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                     >> 3U))][vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag] 
                             >> 2U))))) {
                if ((4U == ((IData)(4U) - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__q)))) {
                    vlSelfRef.cache_tb__DOT__cache__DOT__evict_ctrl = 1U;
                }
            }
        }
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__search_set 
        = (1U & (((0x0aU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)) 
                  | (0x0cU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op)))
                  ? (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__next_rs)
                  : ((IData)(vlSelfRef.cache_tb__DOT__address) 
                     >> 3U)));
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_found = 0U;
    if ((0x00000010U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
         [vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__search_set]
         [0U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_found = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_way = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_way = 0U;
    } else {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_way = 0U;
    }
    if ((0x00000010U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
         [vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__search_set]
         [1U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_found = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_way = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way = 0U;
    if ((0x00000020U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
         [vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__search_set]
         [0U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found = 1U;
    } else {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found = 0U;
    }
    if ((0x00000020U & vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
         [vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__search_set]
         [1U])) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__relocate_ctrl = 0U;
    if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__hit)))) {
        if ((1U & ((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found)) 
                   & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_found))))) {
            vlSelfRef.cache_tb__DOT__cache__DOT__relocate_ctrl = 1U;
        }
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way 
        = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found)
            ? (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way)
            : (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__cre_way));
    if ((0x0eU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag_set 
            = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                     >> 3U));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag_way 
            = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way));
    } else if ((8U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag_set 
            = (1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                     >> 3U));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag_way 
            = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__victim));
    } else if ((0x0aU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__T_op))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag_set 
            = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__next_rs));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag_way 
            = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way));
    } else {
        vlSelfRef.cache_tb__DOT__cache__DOT__tag_set 
            = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_set));
        vlSelfRef.cache_tb__DOT__cache__DOT__tag_way 
            = (1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__hit_way));
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__replace_way_tag 
        = (3U & ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_found)
                  ? (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__empty_way_tag)
                  : vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata
                 [(1U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                         >> 3U))][(1U & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag1__DOT__free_way))]));
    vlSelfRef.cache_tb__DOT__stall = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__next_state = 0U;
    vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp 
        = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__data_array[
                            (((IData)(0x0000003fU) 
                              + (0x000000ffU & (VL_SHIFTL_III(8,32,32, 
                                                              ((IData)(1U) 
                                                               - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                + (0x0000007fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))))) 
                             >> 5U)])) << ((0U == (0x0000001fU 
                                                   & (VL_SHIFTL_III(8,32,32, 
                                                                    ((IData)(1U) 
                                                                     - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                      + 
                                                      (0x0000007fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U)))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & (VL_SHIFTL_III(8,32,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                     + 
                                                     (0x0000007fU 
                                                      & VL_SHIFTL_III(7,32,32, 
                                                                      ((IData)(1U) 
                                                                       - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))))))) 
           | (((0U == (0x0000001fU & (VL_SHIFTL_III(8,32,32, 
                                                    ((IData)(1U) 
                                                     - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                      + (0x0000007fU 
                                         & VL_SHIFTL_III(7,32,32, 
                                                         ((IData)(1U) 
                                                          - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U)))))
                ? 0ULL : ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__data_array[
                                          (((IData)(0x0000001fU) 
                                            + (0x000000ffU 
                                               & (VL_SHIFTL_III(8,32,32, 
                                                                ((IData)(1U) 
                                                                 - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                  + 
                                                  (0x0000007fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))))) 
                                           >> 5U)])) 
                          << ((IData)(0x00000020U) 
                              - (0x0000001fU & (VL_SHIFTL_III(8,32,32, 
                                                              ((IData)(1U) 
                                                               - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                + (0x0000007fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))))))) 
              | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__data_array[
                                 (7U & ((VL_SHIFTL_III(8,32,32, 
                                                       ((IData)(1U) 
                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                         + (0x0000007fU 
                                            & VL_SHIFTL_III(7,32,32, 
                                                            ((IData)(1U) 
                                                             - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))) 
                                        >> 5U))])) 
                 >> (0x0000001fU & (VL_SHIFTL_III(8,32,32, 
                                                  ((IData)(1U) 
                                                   - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                    + (0x0000007fU 
                                       & VL_SHIFTL_III(7,32,32, 
                                                       ((IData)(1U) 
                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U)))))));
    vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp 
        = ((4U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
            ? ((2U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                ? ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                    ? (((~ (0x00000000ffffffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                         (7U 
                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp) 
                       | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))
                    : (((~ (0x00000000000000ffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                         (7U 
                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp) 
                       | ((QData)((IData)((0x000000ffU 
                                           & vlSelfRef.cache_tb__DOT__store_data))) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                : ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                    ? (((~ (0x000000000000ffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                         (7U 
                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp) 
                       | ((QData)((IData)((0x0000ffffU 
                                           & vlSelfRef.cache_tb__DOT__store_data))) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))
                    : (((~ (0x00000000ffffffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                         (7U 
                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp) 
                       | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))))
            : ((2U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                ? ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                    ? (((~ (0x00000000ffffffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                         (7U 
                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp) 
                       | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))
                    : (((~ (0x00000000000000ffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                         (7U 
                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp) 
                       | ((QData)((IData)((0x000000ffU 
                                           & vlSelfRef.cache_tb__DOT__store_data))) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))
                : ((1U & (IData)(vlSelfRef.cache_tb__DOT__funct3_i))
                    ? (((~ (0x000000000000ffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                         (7U 
                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp) 
                       | ((QData)((IData)((0x0000ffffU 
                                           & vlSelfRef.cache_tb__DOT__store_data))) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))))
                    : (((~ (0x00000000ffffffffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                         (7U 
                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))) 
                        & vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__temp) 
                       | ((QData)((IData)(vlSelfRef.cache_tb__DOT__store_data)) 
                          << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U)))))));
    vlSelfRef.cache_tb__DOT__cache__DOT__way_data_o 
        = (((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__data_array[
                            (((IData)(0x0000003fU) 
                              + (0x000000ffU & (VL_SHIFTL_III(8,8,32, 
                                                              ((IData)(1U) 
                                                               - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                + (0x0000007fU 
                                                   & VL_SHIFTL_III(7,7,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))))) 
                             >> 5U)])) << ((0U == (0x0000001fU 
                                                   & (VL_SHIFTL_III(8,8,32, 
                                                                    ((IData)(1U) 
                                                                     - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                      + 
                                                      (0x0000007fU 
                                                       & VL_SHIFTL_III(7,7,32, 
                                                                       ((IData)(1U) 
                                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U)))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & (VL_SHIFTL_III(8,8,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                     + 
                                                     (0x0000007fU 
                                                      & VL_SHIFTL_III(7,7,32, 
                                                                      ((IData)(1U) 
                                                                       - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))))))) 
           | (((0U == (0x0000001fU & (VL_SHIFTL_III(8,8,32, 
                                                    ((IData)(1U) 
                                                     - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                      + (0x0000007fU 
                                         & VL_SHIFTL_III(7,7,32, 
                                                         ((IData)(1U) 
                                                          - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U)))))
                ? 0ULL : ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__data_array[
                                          (((IData)(0x0000001fU) 
                                            + (0x000000ffU 
                                               & (VL_SHIFTL_III(8,8,32, 
                                                                ((IData)(1U) 
                                                                 - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                  + 
                                                  (0x0000007fU 
                                                   & VL_SHIFTL_III(7,7,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))))) 
                                           >> 5U)])) 
                          << ((IData)(0x00000020U) 
                              - (0x0000001fU & (VL_SHIFTL_III(8,8,32, 
                                                              ((IData)(1U) 
                                                               - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                                + (0x0000007fU 
                                                   & VL_SHIFTL_III(7,7,32, 
                                                                   ((IData)(1U) 
                                                                    - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))))))) 
              | ((QData)((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__data1__DOT__data_array[
                                 (7U & ((VL_SHIFTL_III(8,8,32, 
                                                       ((IData)(1U) 
                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                         + (0x0000007fU 
                                            & VL_SHIFTL_III(7,7,32, 
                                                            ((IData)(1U) 
                                                             - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U))) 
                                        >> 5U))])) 
                 >> (0x0000001fU & (VL_SHIFTL_III(8,8,32, 
                                                  ((IData)(1U) 
                                                   - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_set)), 7U) 
                                    + (0x0000007fU 
                                       & VL_SHIFTL_III(7,7,32, 
                                                       ((IData)(1U) 
                                                        - (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__tag_way)), 6U)))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (IData)(
                                                       (vlSelfRef.cache_tb__DOT__cache__DOT__way_data_o 
                                                        >> 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,6,32, 
                                                                         (7U 
                                                                          & (IData)(vlSelfRef.cache_tb__DOT__address)), 3U))));
    vlSelfRef.cache_tb__DOT__cache__DOT__buffer_data_i = 0ULL;
    if (((((((((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
               | (3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
              | (4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
             | (2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
            | (5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
           | (6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
          | (7U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) 
         | (8U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))) {
        if ((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if ((0U != (IData)(vlSelfRef.cache_tb__DOT__op))) {
                if (vlSelfRef.cache_tb__DOT__cache__DOT__hit) {
                    vlSelfRef.cache_tb__DOT__stall 
                        = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__evict_ctrl)
                            ? 1U : 0U);
                } else if (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__relocate_ctrl) 
                            & ((1U == (IData)(vlSelfRef.cache_tb__DOT__op)) 
                               | (2U == (IData)(vlSelfRef.cache_tb__DOT__op))))) {
                    vlSelfRef.cache_tb__DOT__stall = 1U;
                } else if (vlSelfRef.cache_tb__DOT__cache__DOT__found) {
                    vlSelfRef.cache_tb__DOT__stall = 1U;
                } else if (((1U == (IData)(vlSelfRef.cache_tb__DOT__op)) 
                            | (2U == (IData)(vlSelfRef.cache_tb__DOT__op)))) {
                    vlSelfRef.cache_tb__DOT__stall = 1U;
                }
            }
            if ((0U == (IData)(vlSelfRef.cache_tb__DOT__op))) {
                if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty)))) {
                    vlSelfRef.cache_tb__DOT__cache__DOT__next_state = 0x0aU;
                }
            } else {
                vlSelfRef.cache_tb__DOT__cache__DOT__next_state 
                    = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__hit)
                        ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__evict_ctrl)
                            ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__full)
                                ? 0x0aU : 8U) : 0U)
                        : (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__relocate_ctrl) 
                            & ((1U == (IData)(vlSelfRef.cache_tb__DOT__op)) 
                               | (2U == (IData)(vlSelfRef.cache_tb__DOT__op))))
                            ? 5U : ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__found)
                                     ? 2U : (((1U == (IData)(vlSelfRef.cache_tb__DOT__op)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.cache_tb__DOT__op)))
                                              ? 3U : 0U))));
            }
        } else {
            vlSelfRef.cache_tb__DOT__stall = ((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                              || ((4U 
                                                   == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                                  || ((2U 
                                                       == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                                      || ((5U 
                                                           == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                                          || ((6U 
                                                               == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)) 
                                                              || (7U 
                                                                  == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))))));
            vlSelfRef.cache_tb__DOT__cache__DOT__next_state 
                = (0x0000000fU & ((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))
                                   ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__ready_out)
                                       ? 4U : 3U) : 
                                  ((4U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))
                                    ? 0U : ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))
                                             ? 0U : 
                                            ((5U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))
                                              ? 6U : 
                                             ((6U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))
                                               ? 7U
                                               : ((7U 
                                                   == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))
                                                   ? 
                                                  ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__found)
                                                    ? 2U
                                                    : 3U)
                                                   : 0U)))))));
        }
        if ((0U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if ((3U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                if ((4U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                    if ((2U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                        if ((5U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                            if ((6U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                                if ((7U != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                                    vlSelfRef.cache_tb__DOT__cache__DOT__buffer_data_i 
                                        = (0x0000ffffffffffffULL 
                                           & vlSelfRef.cache_tb__DOT__cache__DOT__way_data_o);
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x0aU == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            vlSelfRef.cache_tb__DOT__stall = 1U;
            vlSelfRef.cache_tb__DOT__cache__DOT__next_state = 9U;
        } else if ((9U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            vlSelfRef.cache_tb__DOT__stall = 1U;
            vlSelfRef.cache_tb__DOT__cache__DOT__next_state 
                = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wr_finished)
                    ? 0U : 9U);
        }
        if ((0x0aU != (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
            if ((9U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state))) {
                if (vlSelfRef.cache_tb__DOT__cache__DOT__buff_write) {
                    vlSelfRef.cache_tb__DOT__cache__DOT__buffer_data_i 
                        = (0x0000ffffffffffffULL & vlSelfRef.cache_tb__DOT__cache__DOT__way_data_o);
                }
            }
        }
    }
}

VL_ATTR_COLD void Vcache_tb___024root___eval_stl(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___eval_stl\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vcache_tb___024root___stl_sequent__TOP__0(vlSelf);
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
}

VL_ATTR_COLD void Vcache_tb___024root___ctor_var_reset(Vcache_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root___ctor_var_reset\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->cache_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5727279950073359593ull);
    vlSelf->cache_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16174056173423606432ull);
    vlSelf->cache_tb__DOT__address = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12553925048007856369ull);
    vlSelf->cache_tb__DOT__store_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8025805358911265721ull);
    vlSelf->cache_tb__DOT__op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17038491930293622881ull);
    vlSelf->cache_tb__DOT__funct3_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9942710174423227962ull);
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
    vlSelf->cache_tb__DOT__cache__DOT__T_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2351249709755160675ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16951987159928826348ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5951030667935558272ull);
    vlSelf->cache_tb__DOT__cache__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17627155529844788734ull);
    vlSelf->cache_tb__DOT__cache__DOT__relocate_ctrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10622557944721450140ull);
    vlSelf->cache_tb__DOT__cache__DOT__evict_ctrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9407283467233541801ull);
    vlSelf->cache_tb__DOT__cache__DOT__D_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7560162581535574908ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_line_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14603305403498178952ull);
    vlSelf->cache_tb__DOT__cache__DOT__data_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 367503940669621054ull);
    vlSelf->cache_tb__DOT__cache__DOT__way_data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14629049431725498906ull);
    vlSelf->cache_tb__DOT__cache__DOT__buffer_data_i = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 16683159034280719579ull);
    vlSelf->cache_tb__DOT__cache__DOT__push_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14577919469337122024ull);
    vlSelf->cache_tb__DOT__cache__DOT__pop_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7155700585384177734ull);
    vlSelf->cache_tb__DOT__cache__DOT__found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14305330594749259592ull);
    vlSelf->cache_tb__DOT__cache__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12380044799313626515ull);
    vlSelf->cache_tb__DOT__cache__DOT__search_data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14402991288907943838ull);
    vlSelf->cache_tb__DOT__cache__DOT__buffer_data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3990675676715020814ull);
    vlSelf->cache_tb__DOT__cache__DOT____Vcellout__wr_buffer1__data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15463922274942190850ull);
    vlSelf->cache_tb__DOT__cache__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15386649170595856335ull);
    vlSelf->cache_tb__DOT__cache__DOT__mem_data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10448343878168221762ull);
    vlSelf->cache_tb__DOT__cache__DOT__M_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 701593174360514959ull);
    vlSelf->cache_tb__DOT__cache__DOT__ready_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13294312305376022532ull);
    vlSelf->cache_tb__DOT__cache__DOT__wr_finished = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12998745157160520007ull);
    vlSelf->cache_tb__DOT__cache__DOT__curr_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12808902477738480553ull);
    vlSelf->cache_tb__DOT__cache__DOT__next_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12510633098512007332ull);
    vlSelf->cache_tb__DOT__cache__DOT__temp = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1092780027363646232ull);
    vlSelf->cache_tb__DOT__cache__DOT__buff_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7432688780105977430ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__tag_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1018802027262139898ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__tag_metadata[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 475828236395107086ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__data_metadata[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16164013711402391189ull);
        }
    }
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__has_cre = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1652995112448848199ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__next_rs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2591711818615073861ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 686222994793628068ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__hit_way_tag = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11011678338608934957ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__hit_way = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2365161343433304470ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__hit_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3150983336593706522ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__cre_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4485335478162562848ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__empty_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2352477656372865654ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__empty_way = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15052233030856632219ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__cre_way = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9569562953694883691ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__free_way = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13644651357665994175ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__search_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17512942067722747515ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__empty_found_tag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5332148856676650609ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__empty_way_tag = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 504547968151283518ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__replace_way_tag = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15936668850933741240ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__victim = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18410603446190510242ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__cre_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3732816461272654389ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__victim_way = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10859300404330627417ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__victim_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14676589633774378381ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__overwrite_needed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7923461734272793853ull);
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk7__DOT__j = 0;
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__tag1__DOT__unnamedblk7__DOT__unnamedblk9__DOT__i = 0;
    VL_SCOPED_RAND_RESET_W(256, vlSelf->cache_tb__DOT__cache__DOT__data1__DOT__data_array, __VscopeHash, 11732992020980098694ull);
    vlSelf->cache_tb__DOT__cache__DOT__data1__DOT__temp = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3759664866465807021ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(65, vlSelf->cache_tb__DOT__cache__DOT__wr_buffer1__DOT__fifo_buffer[__Vi0], __VscopeHash, 13102270825660613024ull);
    }
    vlSelf->cache_tb__DOT__cache__DOT__wr_buffer1__DOT__head = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6557296243800179535ull);
    vlSelf->cache_tb__DOT__cache__DOT__wr_buffer1__DOT__tail = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15701725340803855786ull);
    vlSelf->cache_tb__DOT__cache__DOT__wr_buffer1__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1234764518196214714ull);
    vlSelf->cache_tb__DOT__cache__DOT__wr_buffer1__DOT__found_entry = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8273599001861304624ull);
    vlSelf->cache_tb__DOT__cache__DOT__wr_buffer1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__mem1__DOT__read_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5189904428330063121ull);
    vlSelf->cache_tb__DOT__cache__DOT__mem1__DOT__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8211650697386578488ull);
    vlSelf->cache_tb__DOT__cache__DOT__mem1__DOT__mem_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16395450075548847012ull);
    vlSelf->cache_tb__DOT__cache__DOT__mem1__DOT__mem_store = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3302185262767109111ull);
    vlSelf->cache_tb__DOT__cache__DOT__mem1__DOT__store_address = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9640881105925965512ull);
    vlSelf->cache_tb__DOT__cache__DOT__mem1__DOT__request = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6976821855677643ull);
    vlSelf->cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1265076280983800439ull);
    vlSelf->cache_tb__DOT__cache__DOT__mem1__DOT____Vcellinp__memory1__addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14974481814800084619ull);
    vlSelf->cache_tb__DOT__cache__DOT__mem1__DOT__address = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14303952947858821192ull);
    vlSelf->cache_tb__DOT__cache__DOT__mem1__DOT__funct3_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4857465732563443328ull);
    vlSelf->cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7337296613592636108ull);
    for (int __Vi0 = 0; __Vi0 < 146; ++__Vi0) {
        vlSelf->cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__temp_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11943351622615071596ull);
    }
    vlSelf->cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__delay = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17422460612283312020ull);
    for (int __Vi0 = 0; __Vi0 < 4194304; ++__Vi0) {
        vlSelf->cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__main_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17625185855509185990ull);
    }
    vlSelf->cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__address_dat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12112981957387779842ull);
    vlSelf->cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cache_tb__DOT__cache__DOT__mem1__DOT__memory1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14076179427513946122ull);
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
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
