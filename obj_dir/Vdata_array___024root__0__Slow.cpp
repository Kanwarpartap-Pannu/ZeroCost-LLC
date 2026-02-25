// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_array.h for the primary calling header

#include "Vdata_array__pch.h"

VL_ATTR_COLD void Vdata_array___024root___eval_static__TOP(Vdata_array___024root* vlSelf);

VL_ATTR_COLD void Vdata_array___024root___eval_static(Vdata_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_array___024root___eval_static\n"); );
    Vdata_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdata_array___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__cache_tb__DOT__clk__0 
        = vlSelfRef.cache_tb__DOT__clk;
}

VL_ATTR_COLD void Vdata_array___024root___eval_static__TOP(Vdata_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_array___024root___eval_static__TOP\n"); );
    Vdata_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i;
    cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i = 0;
    // Body
    cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i = 0x01000000U;
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way 
        = ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__hit)
            ? (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way)
            : (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__replace_way));
}

VL_ATTR_COLD void Vdata_array___024root___eval_initial__TOP(Vdata_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_array___024root___eval_initial__TOP\n"); );
    Vdata_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__i;
    cache_tb__DOT__cache__DOT__memory1__DOT__i = 0;
    // Body
    cache_tb__DOT__cache__DOT__memory1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000400U, cache_tb__DOT__cache__DOT__memory1__DOT__i)) {
        vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[(0x000003ffU 
                                                                        & cache_tb__DOT__cache__DOT__memory1__DOT__i)] = 0U;
        cache_tb__DOT__cache__DOT__memory1__DOT__i 
            = ((IData)(1U) + cache_tb__DOT__cache__DOT__memory1__DOT__i);
    }
    VL_READMEM_N(true, 32, 21, 0, "/Users/kanwarpannu/Desktop/ZeroCostLLC/ZeroCost-LLC/test_files/test1.x"s
                 ,  &(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory)
                 , 0, ~0ULL);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0U] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0U]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[1U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0U] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[2U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0U] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[3U] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0U] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[4U] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [1U]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[5U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [1U] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[6U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [1U] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[7U] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [1U] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[8U] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [2U]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[9U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [2U] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x000aU] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [2U] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x000bU] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [2U] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x000cU] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [3U]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x000dU] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [3U] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x000eU] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [3U] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x000fU] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [3U] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0010U] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [4U]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0011U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [4U] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0012U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [4U] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0013U] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [4U] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0014U] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [5U]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0015U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [5U] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0016U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [5U] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0017U] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [5U] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0018U] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [6U]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0019U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [6U] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x001aU] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [6U] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x001bU] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [6U] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x001cU] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [7U]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x001dU] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [7U] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x001eU] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [7U] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x001fU] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [7U] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0020U] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [8U]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0021U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [8U] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0022U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [8U] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0023U] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [8U] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0024U] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [9U]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0025U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [9U] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0026U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [9U] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0027U] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [9U] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0028U] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x0aU]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0029U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x0aU] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x002aU] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x0aU] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x002bU] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x0aU] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x002cU] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x0bU]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x002dU] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x0bU] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x002eU] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x0bU] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x002fU] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x0bU] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0030U] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x0cU]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0031U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x0cU] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0032U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x0cU] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0033U] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x0cU] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0034U] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x0dU]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0035U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x0dU] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0036U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x0dU] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0037U] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x0dU] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0038U] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x0eU]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0039U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x0eU] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x003aU] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x0eU] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x003bU] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x0eU] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x003cU] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x0fU]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x003dU] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x0fU] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x003eU] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x0fU] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x003fU] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x0fU] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0040U] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x10U]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0041U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x10U] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0042U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x10U] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0043U] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x10U] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0044U] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x11U]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0045U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x11U] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0046U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x11U] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0047U] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x11U] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0048U] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x12U]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0049U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x12U] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x004aU] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x12U] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x004bU] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x12U] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x004cU] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x13U]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x004dU] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x13U] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x004eU] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x13U] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x004fU] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x13U] >> 0x18U);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0050U] 
        = (0x000000ffU & vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x14U]);
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0051U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x14U] >> 8U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0052U] 
        = (0x000000ffU & (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
                          [0x14U] >> 0x10U));
    vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[0x0053U] 
        = (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory
           [0x14U] >> 0x18U);
    cache_tb__DOT__cache__DOT__memory1__DOT__i = 0x00000015U;
    VL_WRITEF_NX("IMEMORY: Loaded 21 32-bit words from /Users/kanwarpannu/Desktop/ZeroCostLLC/ZeroCost-LLC/test_files/test1.x\n",0);
}

VL_ATTR_COLD void Vdata_array___024root___eval_final(Vdata_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_array___024root___eval_final\n"); );
    Vdata_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_array___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdata_array___024root___eval_phase__stl(Vdata_array___024root* vlSelf);

VL_ATTR_COLD void Vdata_array___024root___eval_settle(Vdata_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_array___024root___eval_settle\n"); );
    Vdata_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vdata_array___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("design/cache_tb.sv", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vdata_array___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vdata_array___024root___eval_triggers__stl(Vdata_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_array___024root___eval_triggers__stl\n"); );
    Vdata_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdata_array___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vdata_array___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_array___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_array___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vdata_array___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vdata_array___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_array___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*1:0*/, 8> Vdata_array__ConstPool__TABLE_hd6134ef5_0;

VL_ATTR_COLD void Vdata_array___024root___stl_sequent__TOP__0(Vdata_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_array___024root___stl_sequent__TOP__0\n"); );
    Vdata_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i;
    cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i = 0;
    CData/*1:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__size_encoded;
    cache_tb__DOT__cache__DOT__memory1__DOT__size_encoded = 0;
    IData/*31:0*/ cache_tb__DOT__cache__DOT__memory1__DOT__address_dat;
    cache_tb__DOT__cache__DOT__memory1__DOT__address_dat = 0;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way;
    cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way = 0;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found;
    cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found = 0;
    CData/*0:0*/ cache_tb__DOT__cache__DOT__cache_tag_array__DOT__oldest_way;
    cache_tb__DOT__cache__DOT__cache_tag_array__DOT__oldest_way = 0;
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
         [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][0U] == (7U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                        >> 5U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way = 0U;
        vlSelfRef.cache_tb__DOT__cache__DOT__hit = 1U;
    }
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array
         [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][1U] == (7U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                                        >> 5U)))) {
        vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__hit_way = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__hit = 1U;
    }
    cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found = 0U;
    if ((1U & (~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
               [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][0U]))) {
        cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found = 1U;
    }
    __Vtableidx1 = vlSelfRef.cache_tb__DOT__funct3_i;
    cache_tb__DOT__cache__DOT__memory1__DOT__size_encoded 
        = Vdata_array__ConstPool__TABLE_hd6134ef5_0
        [__Vtableidx1];
    cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i 
        = vlSelfRef.cache_tb__DOT__address;
    cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way = 0U;
    if ((1U & (~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
               [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][0U]))) {
        cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way = 0U;
    }
    if ((1U & (~ vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__valid_array
               [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                       >> 3U))][1U]))) {
        cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found = 1U;
        cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 0U;
    if (vlSelfRef.cache_tb__DOT__cache__DOT__curr_state) {
        vlSelfRef.cache_tb__DOT__cache__DOT__idle = 1U;
        vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 1U;
    } else {
        if (((3U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
             || (0x23U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)))) {
            if (vlSelfRef.cache_tb__DOT__cache__DOT__hit) {
                vlSelfRef.cache_tb__DOT__cache__DOT__idle = 0U;
                vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__hit)))) {
                vlSelfRef.cache_tb__DOT__cache__DOT__idle = 0U;
                vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 0U;
            }
        } else {
            vlSelfRef.cache_tb__DOT__cache__DOT__idle = 1U;
            vlSelfRef.cache_tb__DOT__cache__DOT__replace_en = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((0x23U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
                                   << 1U) | (3U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))))))) {
            if ((0U != (((0x23U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i)) 
                         << 1U) | (3U == (IData)(vlSelfRef.cache_tb__DOT__opcode_i))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: lookup.sv:153: Assertion failed in %Ncache_tb.cache: unique case, but multiple matches found for '7'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 7,(IData)(vlSelfRef.cache_tb__DOT__opcode_i));
                    VL_STOP_MT("design/lookup.sv", 153, "");
                }
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))))))) {
        if ((0U == (((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: lookup.sv:151: Assertion failed in %Ncache_tb.cache: unique case, but none matched for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
                VL_STOP_MT("design/lookup.sv", 151, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: lookup.sv:151: Assertion failed in %Ncache_tb.cache: unique case, but multiple matches found for '32'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,(IData)(vlSelfRef.cache_tb__DOT__cache__DOT__curr_state));
            VL_STOP_MT("design/lookup.sv", 151, "");
        }
    }
    cache_tb__DOT__cache__DOT__memory1__DOT__address_dat 
        = ((0x01000000U > cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i)
            ? (0x000003ffU & cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i)
            : (0x000003ffU & (cache_tb__DOT__cache__DOT____Vcellinp__memory1__addr_i 
                              - (IData)(0x01000000U))));
    cache_tb__DOT__cache__DOT__cache_tag_array__DOT__oldest_way = 0U;
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
         [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][0U] >= vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
         [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way])) {
        cache_tb__DOT__cache__DOT__cache_tag_array__DOT__oldest_way = 0U;
    }
    if ((vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
         [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][1U] >= vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__LRU_array
         [(3U & ((IData)(vlSelfRef.cache_tb__DOT__address) 
                 >> 3U))][cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way])) {
        cache_tb__DOT__cache__DOT__cache_tag_array__DOT__oldest_way = 1U;
    }
    vlSelfRef.cache_tb__DOT__cache__DOT__mem_out = 
        ((2U & (IData)(cache_tb__DOT__cache__DOT__memory1__DOT__size_encoded))
          ? (((vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
               [(0x000003ffU & ((IData)(3U) + cache_tb__DOT__cache__DOT__memory1__DOT__address_dat))] 
               << 0x00000018U) | (vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                                  [(0x000003ffU & ((IData)(2U) 
                                                   + cache_tb__DOT__cache__DOT__memory1__DOT__address_dat))] 
                                  << 0x00000010U)) 
             | ((vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                 [(0x000003ffU & ((IData)(1U) + cache_tb__DOT__cache__DOT__memory1__DOT__address_dat))] 
                 << 8U) | vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                [(0x000003ffU & cache_tb__DOT__cache__DOT__memory1__DOT__address_dat)]))
          : ((1U & (IData)(cache_tb__DOT__cache__DOT__memory1__DOT__size_encoded))
              ? ((vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                  [(0x000003ffU & ((IData)(1U) + cache_tb__DOT__cache__DOT__memory1__DOT__address_dat))] 
                  << 8U) | vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
                 [(0x000003ffU & cache_tb__DOT__cache__DOT__memory1__DOT__address_dat)])
              : vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__main_memory
             [(0x000003ffU & cache_tb__DOT__cache__DOT__memory1__DOT__address_dat)]));
    vlSelfRef.cache_tb__DOT__cache__DOT__cache_tag_array__DOT__replace_way 
        = ((IData)(cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_found)
            ? (IData)(cache_tb__DOT__cache__DOT__cache_tag_array__DOT__empty_way)
            : (IData)(cache_tb__DOT__cache__DOT__cache_tag_array__DOT__oldest_way));
}

VL_ATTR_COLD void Vdata_array___024root___eval_stl(Vdata_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_array___024root___eval_stl\n"); );
    Vdata_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vdata_array___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vdata_array___024root___eval_phase__stl(Vdata_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_array___024root___eval_phase__stl\n"); );
    Vdata_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdata_array___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vdata_array___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vdata_array___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vdata_array___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_array___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_array___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vdata_array___024root___trigger_anySet__act(triggers))))) {
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

VL_ATTR_COLD void Vdata_array___024root___ctor_var_reset(Vdata_array___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_array___024root___ctor_var_reset\n"); );
    Vdata_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->cache_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5727279950073359593ull);
    vlSelf->cache_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16174056173423606432ull);
    vlSelf->cache_tb__DOT__address = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12553925048007856369ull);
    vlSelf->cache_tb__DOT__opcode_i = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6827118171210024836ull);
    vlSelf->cache_tb__DOT__funct3_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9942710174423227962ull);
    vlSelf->cache_tb__DOT__cache__DOT__curr_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12808902477738480553ull);
    vlSelf->cache_tb__DOT__cache__DOT__next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12510633098512007332ull);
    vlSelf->cache_tb__DOT__cache__DOT__mem_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13086334279033736697ull);
    vlSelf->cache_tb__DOT__cache__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17627155529844788734ull);
    vlSelf->cache_tb__DOT__cache__DOT__idle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12577741298115753650ull);
    vlSelf->cache_tb__DOT__cache__DOT__replace_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11778615685267278413ull);
    for (int __Vi0 = 0; __Vi0 < 21; ++__Vi0) {
        vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__temp_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6227903148422491786ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->cache_tb__DOT__cache__DOT__memory1__DOT__main_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3084190694517630279ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->cache_tb__DOT__cache__DOT__cache_tag_array__DOT__tag_array[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6164987533886276742ull);
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
    vlSelf->cache_tb__DOT__cache__DOT__cache_tag_array__DOT__replace_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11867730423929184138ull);
    vlSelf->cache_tb__DOT__cache__DOT__cache_tag_array__DOT__reset_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15866450940051716980ull);
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
}
