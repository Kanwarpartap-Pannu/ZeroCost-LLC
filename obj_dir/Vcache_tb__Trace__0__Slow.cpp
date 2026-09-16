// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcache_tb__Syms.h"


VL_ATTR_COLD void Vcache_tb___024root__trace_init_sub__TOP____024unit__0(Vcache_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcache_tb___024root__trace_init_sub__TOP__0(Vcache_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_init_sub__TOP__0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vcache_tb___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("cache_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+292,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+310,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+311,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+312,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+313,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+294,0,"store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"opcode_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+296,0,"funct3_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+93,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+94,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"requester",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+297,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("test_addresses", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 21; ++i) {
        tracep->declQuad(c+24+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 55,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("my_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 21; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+68,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("cache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+310,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+311,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+316,0,"BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+292,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+294,0,"store_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+296,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+146,0,"requester",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+93,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,0,"data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+313,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+317,0,"HIT_FOUND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"WRITE_BACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"READING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+298,0,"mem_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+97,0,"cache_hit_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+98,0,"cache_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"memory_rq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+100,0,"buffer_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBit(c+103,0,"write_finished",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"hit_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+300,0,"mem_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+104,0,"pop_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"mem_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+148,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"rd_rq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"drain_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+149,0,"pop_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 80,0);
    tracep->declBit(c+152,0,"pop_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"wb_buffer_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"found_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+155,0,"found_buffer_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+157,0,"drain_rq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"buffer_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"buffer_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declArray(c+108,0,"push_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+70,0,"search_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declQuad(c+302,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("cache_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+310,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+311,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+319,0,"LOOKUP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+292,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+294,0,"store_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+296,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+153,0,"wb_buffer_found",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"requester",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+300,0,"mem_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+103,0,"write_finished",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"memory_rq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+96,0,"memory_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+100,0,"mem_store",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+97,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+94,0,"stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"hit_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"offset_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+312,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+313,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"DIRECTORY_WAY_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+72,0,"offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+73,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+74,0,"tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+70,0,"read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"replace_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+317,0,"CACHE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"MAIN_MEMORY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+160,0,"curr_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+317,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"ACTIVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+304,0,"active_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+317,0,"SEARCHING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"CACHE_HIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"DIRECTORY_HIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"EVICTING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"curr_state_active_cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"next_state_active_cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+317,0,"SHARED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"UNSHARED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+317,0,"READING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"WRITE_BACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"curr_state_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"next_state_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"relocation_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+163,0,"relocation_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+314,0,"HIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+317,0,"MISS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"replace_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+76,0,"hit_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+117,0,"replace_way_meta_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+77,0,"cre_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+118,0,"index_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+119,0,"way_i_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+120,0,"has_re_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+320,0,"relocate_set_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+321,0,"relocate_way_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+121,0,"way_i_state_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+122,0,"enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"dirty_sig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"replace_en_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"store_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+78,0,"set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+126,0,"data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+128,0,"input_way_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+87,0,"dir_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"reset_search",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"search_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"search_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"evict_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"evicting_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+89,0,"index_dir_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+90,0,"way_dir_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+132,0,"share_en_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"tag_metadata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+134,0,"evict_en_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"insert_en_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"index_in_dir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+137,0,"tag_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+135,0,"insert_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"share_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"relocate_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+165,0,"next_rs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+305,0,"q_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"hit_way_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+166,0,"relocation_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+168,0,"relocation_dir_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+169,0,"relocation_dir_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+170,0,"valid_ornot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cache_data_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+322,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+323,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+324,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+312,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+316,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+312,0,"WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+311,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+292,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"index_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+325,0,"offset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+128,0,"replace_way",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+126,0,"cache_line_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+294,0,"store_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+124,0,"replace_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"store_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"relocate_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+78,0,"set_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+171,0,"data_array",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declQuad(c+141,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("cache_tag_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+310,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+322,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+323,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+312,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+324,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+319,0,"LOOKUP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+292,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"idle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+118,0,"index_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+135,0,"replace_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"share_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"store_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"evict_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"valid_or_not",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"way_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+139,0,"relocate_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"tag_metadata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+326,0,"relocate_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+77,0,"cre_way_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+115,0,"hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"hit_way_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+75,0,"replace_way_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+117,0,"replace_way_meta_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+121,0,"way_i_state_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+306,0,"replace_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+120,0,"has_re_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+327,0,"relocate_set_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+328,0,"relocate_way_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+312,0,"WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("tag_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+179,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+180,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+181,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+182,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+183,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+184,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+185,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+186,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("relocated_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+187,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+189,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("shared_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+191,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+193,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("LRU_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+195,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+196,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+197,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+198,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+76,0,"hit_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+82,0,"cre_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+83,0,"empty_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+84,0,"empty_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"oldest_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+119,0,"reset_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+119,0,"replace_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+120,0,"has_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+329,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+329,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+329,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+199,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+200,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+201,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+329,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("directory_slice", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+310,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+322,0,"TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+323,0,"INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+312,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+324,0,"OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+319,0,"LOOKUP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+292,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+136,0,"index_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+146,0,"requester",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+137,0,"tag_way",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+165,0,"relocate_set",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+85,0,"relocate_way",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+135,0,"insert_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"share_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"evict_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"relocate_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"reset_search",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"search_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"insert_en_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"evict_en_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"tag_metadata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+87,0,"hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"search_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"hit_way_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+89,0,"hit_set_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+86,0,"replace_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+91,0,"evicting_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+312,0,"WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("tag_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+202,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+203,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+204,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+205,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+206,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+207,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+208,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+209,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("relocation_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+210,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+211,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+212,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+213,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+214,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+215,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+216,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+217,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("valid_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+218,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+219,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+220,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+221,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+222,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+223,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+224,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+225,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sharers_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+226,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+227,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+228,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+229,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+230,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+231,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+232,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+233,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("num_sharers_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+234,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+235,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+236,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+237,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+238,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+239,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+240,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+241,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+242,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+90,0,"hit_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+89,0,"hit_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+92,0,"hit_way_dir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+243,0,"lookup_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+244,0,"current_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("lookup_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+245+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+143,0,"empty_way",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+144,0,"empty_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+249,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+330,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+330,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("relocation", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+318,0,"NUM_SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+292,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"has_re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"index_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"next_rs_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"has_re_pv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+331,0,"next_rs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+329,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("memory1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+310,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+332,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+105,0,"rd_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"drain_req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+149,0,"buffer_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 80,0);
    tracep->declBit(c+152,0,"pop_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"pop_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"curr_state_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+148,0,"ready_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+300,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+147,0,"curr_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+307,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+253,0,"read_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+300,0,"mem_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+148,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"write_finished",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+256,0,"mem_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+258,0,"store_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+259,0,"request",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"memory_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+333,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"funct3_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+317,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"READING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"POPPING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"WRITE_BACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("memory1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+311,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+311,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+335,0,"BASE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+336,0,"MEM_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+292,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"addr_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+256,0,"data_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+253,0,"read_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"read_en_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"write_en_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+337,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+259,0,"request",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"write_finished",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+300,0,"data_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+338,0,"MEM_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+261,0,"delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"address_dat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+262,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+263,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wb_buffer1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+316,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+332,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+310,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+108,0,"push_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+107,0,"push_pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+70,0,"search_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+154,0,"merge_entry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+157,0,"drain_rq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"found_entry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+155,0,"found_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+153,0,"found",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+149,0,"pop_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 80,0);
    tracep->declBit(c+152,0,"pop_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"buffer_full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+317,0,"NO_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"PUSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"POP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"MERGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("fifo_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+264+i*3,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 80,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+324,0,"POINTER_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+288,0,"head",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+289,0,"tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+290,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+339,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+291,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcache_tb___024root__trace_init_sub__TOP____024unit__0(Vcache_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+340,0,"ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+341,0,"OP_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+342,0,"OP_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+343,0,"OP_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+344,0,"OP_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+345,0,"OP_WRITEBACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+346,0,"OP_EVICT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+347,0,"OP_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+348,0,"OP_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+349,0,"OP_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+350,0,"OP_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+351,0,"ALU_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+352,0,"ALU_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+353,0,"ALU_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+354,0,"ALU_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+355,0,"ALU_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+356,0,"ALU_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+357,0,"ALU_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+358,0,"ALU_SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+359,0,"ALU_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+360,0,"ALU_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+361,0,"ALU_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+362,0,"ALU_NOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vcache_tb___024root__trace_init_top(Vcache_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_init_top\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcache_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcache_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcache_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcache_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcache_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcache_tb___024root__trace_register(Vcache_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_register\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcache_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vcache_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vcache_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vcache_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcache_tb___024root__trace_const_0_sub_0(Vcache_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcache_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_const_0\n"); );
    // Body
    Vcache_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache_tb___024root*>(voidSelf);
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcache_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcache_tb___024root__trace_const_0_sub_0(Vcache_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_const_0_sub_0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+310,(0x00000010U),32);
    bufp->fullIData(oldp+311,(0x00000020U),32);
    bufp->fullIData(oldp+312,(2U),32);
    bufp->fullIData(oldp+313,(3U),32);
    bufp->fullIData(oldp+314,(1U),32);
    bufp->fullIData(oldp+315,(0x0000000cU),32);
    bufp->fullIData(oldp+316,(8U),32);
    bufp->fullIData(oldp+317,(0U),32);
    bufp->fullIData(oldp+318,(2U),32);
    bufp->fullIData(oldp+319,(4U),32);
    bufp->fullBit(oldp+320,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocate_set_tag));
    bufp->fullBit(oldp+321,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocate_way_tag));
    bufp->fullIData(oldp+322,(0x0000000cU),32);
    bufp->fullIData(oldp+323,(1U),32);
    bufp->fullIData(oldp+324,(3U),32);
    bufp->fullCData(oldp+325,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__offset),3);
    bufp->fullCData(oldp+326,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocate_state),2);
    bufp->fullBit(oldp+327,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocate_set_o));
    bufp->fullCData(oldp+328,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocate_way_o),2);
    bufp->fullIData(oldp+329,(2U),32);
    bufp->fullIData(oldp+330,(4U),32);
    bufp->fullBit(oldp+331,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation__DOT__next_rs));
    bufp->fullIData(oldp+332,(0x00000040U),32);
    bufp->fullBit(oldp+333,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__address));
    bufp->fullBit(oldp+334,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__funct3_i));
    bufp->fullIData(oldp+335,(0x01000000U),32);
    bufp->fullIData(oldp+336,(0x0000000aU),32);
    bufp->fullCData(oldp+337,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__funct3_i),3);
    bufp->fullIData(oldp+338,(0x00400000U),32);
    bufp->fullIData(oldp+339,(8U),32);
    bufp->fullIData(oldp+340,(0U),32);
    bufp->fullCData(oldp+341,(0x33U),7);
    bufp->fullCData(oldp+342,(0x13U),7);
    bufp->fullCData(oldp+343,(3U),7);
    bufp->fullCData(oldp+344,(0x23U),7);
    bufp->fullCData(oldp+345,(0x7fU),7);
    bufp->fullCData(oldp+346,(0x63U),7);
    bufp->fullCData(oldp+347,(0x67U),7);
    bufp->fullCData(oldp+348,(0x6fU),7);
    bufp->fullCData(oldp+349,(0x37U),7);
    bufp->fullCData(oldp+350,(0x17U),7);
    bufp->fullCData(oldp+351,(0U),4);
    bufp->fullCData(oldp+352,(1U),4);
    bufp->fullCData(oldp+353,(2U),4);
    bufp->fullCData(oldp+354,(3U),4);
    bufp->fullCData(oldp+355,(4U),4);
    bufp->fullCData(oldp+356,(5U),4);
    bufp->fullCData(oldp+357,(6U),4);
    bufp->fullCData(oldp+358,(7U),4);
    bufp->fullCData(oldp+359,(8U),4);
    bufp->fullCData(oldp+360,(9U),4);
    bufp->fullCData(oldp+361,(0x0aU),4);
    bufp->fullCData(oldp+362,(0x0fU),4);
}

VL_ATTR_COLD void Vcache_tb___024root__trace_full_0_sub_0(Vcache_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcache_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_full_0\n"); );
    // Body
    Vcache_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache_tb___024root*>(voidSelf);
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcache_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcache_tb___024root__trace_full_0_sub_0(Vcache_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_tb___024root__trace_full_0_sub_0\n"); );
    Vcache_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1,(vlSelfRef.cache_tb__DOT__my_array[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.cache_tb__DOT__my_array[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.cache_tb__DOT__my_array[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.cache_tb__DOT__my_array[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.cache_tb__DOT__my_array[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.cache_tb__DOT__my_array[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.cache_tb__DOT__my_array[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.cache_tb__DOT__my_array[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.cache_tb__DOT__my_array[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.cache_tb__DOT__my_array[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.cache_tb__DOT__my_array[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.cache_tb__DOT__my_array[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.cache_tb__DOT__my_array[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.cache_tb__DOT__my_array[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.cache_tb__DOT__my_array[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.cache_tb__DOT__my_array[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.cache_tb__DOT__my_array[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.cache_tb__DOT__my_array[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.cache_tb__DOT__my_array[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.cache_tb__DOT__my_array[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.cache_tb__DOT__my_array[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i),32);
    bufp->fullIData(oldp+23,((vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_i 
                              - (IData)(0x01000000U))),32);
    bufp->fullQData(oldp+24,(vlSelfRef.cache_tb__DOT__test_addresses[0]),56);
    bufp->fullQData(oldp+26,(vlSelfRef.cache_tb__DOT__test_addresses[1]),56);
    bufp->fullQData(oldp+28,(vlSelfRef.cache_tb__DOT__test_addresses[2]),56);
    bufp->fullQData(oldp+30,(vlSelfRef.cache_tb__DOT__test_addresses[3]),56);
    bufp->fullQData(oldp+32,(vlSelfRef.cache_tb__DOT__test_addresses[4]),56);
    bufp->fullQData(oldp+34,(vlSelfRef.cache_tb__DOT__test_addresses[5]),56);
    bufp->fullQData(oldp+36,(vlSelfRef.cache_tb__DOT__test_addresses[6]),56);
    bufp->fullQData(oldp+38,(vlSelfRef.cache_tb__DOT__test_addresses[7]),56);
    bufp->fullQData(oldp+40,(vlSelfRef.cache_tb__DOT__test_addresses[8]),56);
    bufp->fullQData(oldp+42,(vlSelfRef.cache_tb__DOT__test_addresses[9]),56);
    bufp->fullQData(oldp+44,(vlSelfRef.cache_tb__DOT__test_addresses[10]),56);
    bufp->fullQData(oldp+46,(vlSelfRef.cache_tb__DOT__test_addresses[11]),56);
    bufp->fullQData(oldp+48,(vlSelfRef.cache_tb__DOT__test_addresses[12]),56);
    bufp->fullQData(oldp+50,(vlSelfRef.cache_tb__DOT__test_addresses[13]),56);
    bufp->fullQData(oldp+52,(vlSelfRef.cache_tb__DOT__test_addresses[14]),56);
    bufp->fullQData(oldp+54,(vlSelfRef.cache_tb__DOT__test_addresses[15]),56);
    bufp->fullQData(oldp+56,(vlSelfRef.cache_tb__DOT__test_addresses[16]),56);
    bufp->fullQData(oldp+58,(vlSelfRef.cache_tb__DOT__test_addresses[17]),56);
    bufp->fullQData(oldp+60,(vlSelfRef.cache_tb__DOT__test_addresses[18]),56);
    bufp->fullQData(oldp+62,(vlSelfRef.cache_tb__DOT__test_addresses[19]),56);
    bufp->fullQData(oldp+64,(vlSelfRef.cache_tb__DOT__test_addresses[20]),56);
    bufp->fullIData(oldp+66,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__i),32);
    bufp->fullSData(oldp+67,(vlSelfRef.cache_tb__DOT__addr),16);
    bufp->fullIData(oldp+68,(vlSelfRef.cache_tb__DOT__i),32);
    bufp->fullCData(oldp+69,((1U & (IData)(vlSelfRef.cache_tb__DOT__addr))),3);
    bufp->fullSData(oldp+70,((0x0000fff8U & (IData)(vlSelfRef.cache_tb__DOT__addr))),16);
    bufp->fullBit(oldp+71,((1U & (IData)(vlSelfRef.cache_tb__DOT__addr))));
    bufp->fullCData(oldp+72,((7U & (IData)(vlSelfRef.cache_tb__DOT__addr))),3);
    bufp->fullBit(oldp+73,((1U & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                  >> 3U))));
    bufp->fullSData(oldp+74,((0x00000fffU & ((IData)(vlSelfRef.cache_tb__DOT__addr) 
                                             >> 4U))),12);
    bufp->fullBit(oldp+75,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__oldest_way));
    bufp->fullBit(oldp+76,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__hit_way));
    bufp->fullBit(oldp+77,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way_o));
    bufp->fullWData(oldp+78,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__set_o),128);
    bufp->fullBit(oldp+82,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way));
    bufp->fullBit(oldp+83,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_way));
    bufp->fullBit(oldp+84,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__empty_found));
    bufp->fullCData(oldp+85,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__cre_way_o),2);
    bufp->fullSData(oldp+86,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_address),16);
    bufp->fullBit(oldp+87,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__dir_hit));
    bufp->fullCData(oldp+88,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____Vcellout__directory_slice__evicting_state),2);
    bufp->fullBit(oldp+89,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_set));
    bufp->fullBit(oldp+90,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way));
    bufp->fullBit(oldp+91,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT____Vcellout__directory_slice__evicting_state));
    bufp->fullBit(oldp+92,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__hit_way_dir));
    bufp->fullIData(oldp+93,(vlSelfRef.cache_tb__DOT__data_out),32);
    bufp->fullBit(oldp+94,(vlSelfRef.cache_tb__DOT__stall));
    bufp->fullBit(oldp+95,(vlSelfRef.cache_tb__DOT__data_valid));
    bufp->fullSData(oldp+96,(vlSelfRef.cache_tb__DOT__cache__DOT__mem_addr),16);
    bufp->fullIData(oldp+97,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__data_out),32);
    bufp->fullBit(oldp+98,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_data_valid));
    bufp->fullCData(oldp+99,(vlSelfRef.cache_tb__DOT__cache__DOT__memory_rq),2);
    bufp->fullWData(oldp+100,(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_store),80);
    bufp->fullBit(oldp+103,(vlSelfRef.cache_tb__DOT__cache__DOT__write_finished));
    bufp->fullBit(oldp+104,(vlSelfRef.cache_tb__DOT__cache__DOT__pop_en));
    bufp->fullBit(oldp+105,(vlSelfRef.cache_tb__DOT__cache__DOT__rd_rq));
    bufp->fullBit(oldp+106,(vlSelfRef.cache_tb__DOT__cache__DOT__drain_req));
    bufp->fullCData(oldp+107,(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_ctrl),2);
    bufp->fullWData(oldp+108,(vlSelfRef.cache_tb__DOT__cache__DOT__push_data),80);
    bufp->fullBit(oldp+111,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state));
    bufp->fullCData(oldp+112,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_active_cache),2);
    bufp->fullBit(oldp+113,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_state_mem));
    bufp->fullCData(oldp+114,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_flag),2);
    bufp->fullBit(oldp+115,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit));
    bufp->fullBit(oldp+116,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__idle));
    bufp->fullSData(oldp+117,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_way_meta_data),12);
    bufp->fullBit(oldp+118,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in));
    bufp->fullBit(oldp+119,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag));
    bufp->fullBit(oldp+120,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__has_re));
    bufp->fullCData(oldp+121,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_state_o),2);
    bufp->fullBit(oldp+122,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__enable));
    bufp->fullBit(oldp+123,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__dirty_sig));
    bufp->fullBit(oldp+124,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__replace_en_data));
    bufp->fullBit(oldp+125,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__store_en));
    bufp->fullQData(oldp+126,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__data_in),64);
    bufp->fullBit(oldp+128,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__input_way_data));
    bufp->fullBit(oldp+129,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__reset_search));
    bufp->fullBit(oldp+130,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__search_en));
    bufp->fullBit(oldp+131,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en));
    bufp->fullBit(oldp+132,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__share_en_tag));
    bufp->fullSData(oldp+133,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__tag_metadata_o),12);
    bufp->fullBit(oldp+134,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__evict_en_tag));
    bufp->fullBit(oldp+135,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__insert_en));
    bufp->fullBit(oldp+136,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in_dir));
    bufp->fullCData(oldp+137,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__tag_way),2);
    bufp->fullBit(oldp+138,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__share_en));
    bufp->fullBit(oldp+139,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocate_en));
    bufp->fullBit(oldp+140,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit_way_data_out));
    bufp->fullQData(oldp+141,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__temp),64);
    bufp->fullCData(oldp+143,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_way),2);
    bufp->fullBit(oldp+144,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__empty_found));
    bufp->fullSData(oldp+145,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory_address),16);
    bufp->fullBit(oldp+146,(vlSelfRef.cache_tb__DOT__requester));
    bufp->fullCData(oldp+147,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state),2);
    bufp->fullBit(oldp+148,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__ready));
    bufp->fullWData(oldp+149,(vlSelfRef.cache_tb__DOT__cache__DOT__pop_data),81);
    bufp->fullBit(oldp+152,(vlSelfRef.cache_tb__DOT__cache__DOT__pop_valid));
    bufp->fullBit(oldp+153,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer_found));
    bufp->fullCData(oldp+154,(vlSelfRef.cache_tb__DOT__cache__DOT__found_entry),4);
    bufp->fullQData(oldp+155,(vlSelfRef.cache_tb__DOT__cache__DOT__found_buffer_data),64);
    bufp->fullBit(oldp+157,((1U & (~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty)))));
    bufp->fullBit(oldp+158,(vlSelfRef.cache_tb__DOT__cache__DOT__buffer_full));
    bufp->fullCData(oldp+159,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__q),3);
    bufp->fullBit(oldp+160,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state));
    bufp->fullCData(oldp+161,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_active_cache),2);
    bufp->fullBit(oldp+162,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__curr_state_mem));
    bufp->fullCData(oldp+163,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_state),2);
    bufp->fullBit(oldp+164,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__search_done));
    bufp->fullBit(oldp+165,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__next_rs));
    bufp->fullQData(oldp+166,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_block),64);
    bufp->fullBit(oldp+168,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_dir_index));
    bufp->fullCData(oldp+169,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation_dir_way),2);
    bufp->fullBit(oldp+170,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__valid_ornot));
    bufp->fullWData(oldp+171,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_data_array__DOT__data_array),256);
    bufp->fullSData(oldp+179,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [0U][0U]),12);
    bufp->fullSData(oldp+180,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [0U][1U]),12);
    bufp->fullSData(oldp+181,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [1U][0U]),12);
    bufp->fullSData(oldp+182,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                              [1U][1U]),12);
    bufp->fullCData(oldp+183,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [0U][0U]),2);
    bufp->fullCData(oldp+184,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [0U][1U]),2);
    bufp->fullCData(oldp+185,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [1U][0U]),2);
    bufp->fullCData(oldp+186,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__valid_array
                              [1U][1U]),2);
    bufp->fullBit(oldp+187,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array
                            [0U][0U]));
    bufp->fullBit(oldp+188,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array
                            [0U][1U]));
    bufp->fullBit(oldp+189,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array
                            [1U][0U]));
    bufp->fullBit(oldp+190,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__relocated_array
                            [1U][1U]));
    bufp->fullBit(oldp+191,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array
                            [0U][0U]));
    bufp->fullBit(oldp+192,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array
                            [0U][1U]));
    bufp->fullBit(oldp+193,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array
                            [1U][0U]));
    bufp->fullBit(oldp+194,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__shared_array
                            [1U][1U]));
    bufp->fullBit(oldp+195,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                            [0U][0U]));
    bufp->fullBit(oldp+196,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                            [0U][1U]));
    bufp->fullBit(oldp+197,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                            [1U][0U]));
    bufp->fullBit(oldp+198,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__LRU_array
                            [1U][1U]));
    bufp->fullIData(oldp+199,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+200,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+201,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__unnamedblk6__DOT__i),32);
    bufp->fullSData(oldp+202,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                              [0U][0U]),12);
    bufp->fullSData(oldp+203,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                              [0U][1U]),12);
    bufp->fullSData(oldp+204,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                              [0U][2U]),12);
    bufp->fullSData(oldp+205,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                              [0U][3U]),12);
    bufp->fullSData(oldp+206,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                              [1U][0U]),12);
    bufp->fullSData(oldp+207,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                              [1U][1U]),12);
    bufp->fullSData(oldp+208,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                              [1U][2U]),12);
    bufp->fullSData(oldp+209,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__tag_array
                              [1U][3U]),12);
    bufp->fullCData(oldp+210,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                              [0U][0U]),2);
    bufp->fullCData(oldp+211,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                              [0U][1U]),2);
    bufp->fullCData(oldp+212,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                              [0U][2U]),2);
    bufp->fullCData(oldp+213,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                              [0U][3U]),2);
    bufp->fullCData(oldp+214,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                              [1U][0U]),2);
    bufp->fullCData(oldp+215,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                              [1U][1U]),2);
    bufp->fullCData(oldp+216,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                              [1U][2U]),2);
    bufp->fullCData(oldp+217,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__relocation_data
                              [1U][3U]),2);
    bufp->fullCData(oldp+218,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                              [0U][0U]),2);
    bufp->fullCData(oldp+219,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                              [0U][1U]),2);
    bufp->fullCData(oldp+220,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                              [0U][2U]),2);
    bufp->fullCData(oldp+221,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                              [0U][3U]),2);
    bufp->fullCData(oldp+222,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                              [1U][0U]),2);
    bufp->fullCData(oldp+223,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                              [1U][1U]),2);
    bufp->fullCData(oldp+224,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                              [1U][2U]),2);
    bufp->fullCData(oldp+225,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__valid_array
                              [1U][3U]),2);
    bufp->fullCData(oldp+226,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
                              [0U][0U]),2);
    bufp->fullCData(oldp+227,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
                              [0U][1U]),2);
    bufp->fullCData(oldp+228,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
                              [0U][2U]),2);
    bufp->fullCData(oldp+229,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
                              [0U][3U]),2);
    bufp->fullCData(oldp+230,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
                              [1U][0U]),2);
    bufp->fullCData(oldp+231,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
                              [1U][1U]),2);
    bufp->fullCData(oldp+232,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
                              [1U][2U]),2);
    bufp->fullCData(oldp+233,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__sharers_array
                              [1U][3U]),2);
    bufp->fullBit(oldp+234,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                            [0U][0U]));
    bufp->fullBit(oldp+235,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                            [0U][1U]));
    bufp->fullBit(oldp+236,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                            [0U][2U]));
    bufp->fullBit(oldp+237,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                            [0U][3U]));
    bufp->fullBit(oldp+238,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                            [1U][0U]));
    bufp->fullBit(oldp+239,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                            [1U][1U]));
    bufp->fullBit(oldp+240,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                            [1U][2U]));
    bufp->fullBit(oldp+241,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__num_sharers_array
                            [1U][3U]));
    bufp->fullCData(oldp+242,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__q),3);
    bufp->fullBit(oldp+243,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_way));
    bufp->fullBit(oldp+244,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__current_idx));
    bufp->fullSData(oldp+245,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array[0]),12);
    bufp->fullSData(oldp+246,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array[1]),12);
    bufp->fullSData(oldp+247,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array[2]),12);
    bufp->fullSData(oldp+248,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__lookup_array[3]),12);
    bufp->fullIData(oldp+249,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+250,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+251,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__directory_slice__DOT__unnamedblk3__DOT__i),32);
    bufp->fullCData(oldp+252,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__relocation__DOT__has_re_pv),2);
    bufp->fullBit(oldp+253,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__read_en));
    bufp->fullBit(oldp+254,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__write_en));
    bufp->fullBit(oldp+255,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__write_finished));
    bufp->fullQData(oldp+256,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_store),64);
    bufp->fullSData(oldp+258,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__store_address),16);
    bufp->fullBit(oldp+259,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__request));
    bufp->fullIData(oldp+260,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__data_o),32);
    bufp->fullCData(oldp+261,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__delay),4);
    bufp->fullIData(oldp+262,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+263,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__unnamedblk2__DOT__i),32);
    bufp->fullWData(oldp+264,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[0]),81);
    bufp->fullWData(oldp+267,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[1]),81);
    bufp->fullWData(oldp+270,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[2]),81);
    bufp->fullWData(oldp+273,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[3]),81);
    bufp->fullWData(oldp+276,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[4]),81);
    bufp->fullWData(oldp+279,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[5]),81);
    bufp->fullWData(oldp+282,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[6]),81);
    bufp->fullWData(oldp+285,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__fifo_buffer[7]),81);
    bufp->fullCData(oldp+288,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__head),4);
    bufp->fullCData(oldp+289,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__tail),4);
    bufp->fullBit(oldp+290,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__empty));
    bufp->fullIData(oldp+291,(vlSelfRef.cache_tb__DOT__cache__DOT__wb_buffer1__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+292,(vlSelfRef.cache_tb__DOT__clk));
    bufp->fullBit(oldp+293,(vlSelfRef.cache_tb__DOT__reset));
    bufp->fullIData(oldp+294,(vlSelfRef.cache_tb__DOT__store_data),32);
    bufp->fullCData(oldp+295,(vlSelfRef.cache_tb__DOT__opcode_i),7);
    bufp->fullCData(oldp+296,(vlSelfRef.cache_tb__DOT__funct3_i),3);
    bufp->fullBit(oldp+297,(vlSelfRef.cache_tb__DOT__start));
    bufp->fullBit(oldp+298,(vlSelfRef.cache_tb__DOT__cache__DOT__mem_op));
    bufp->fullBit(oldp+299,(((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__hit) 
                             & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__mem_op))));
    bufp->fullQData(oldp+300,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__mem_out),64);
    bufp->fullQData(oldp+302,(vlSelfRef.cache_tb__DOT__cache__DOT__temp),64);
    bufp->fullBit(oldp+304,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__active_req));
    bufp->fullBit(oldp+305,(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__q_en));
    bufp->fullSData(oldp+306,(((vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__cache_tag_array__DOT__tag_array
                                [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in]
                                [vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__way_i_tag] 
                                << 4U) | ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__cache_1__DOT__index_in) 
                                          << 3U))),16);
    bufp->fullCData(oldp+307,(((0U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
                                ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__rd_rq)
                                    ? 1U : (((~ (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__rd_rq)) 
                                             & (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__drain_req))
                                             ? 2U : 0U))
                                : ((1U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
                                    ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__ready)
                                        ? 0U : 1U) : 
                                   ((2U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
                                     ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__pop_valid)
                                         ? ((0x00010000U 
                                             & vlSelfRef.cache_tb__DOT__cache__DOT__pop_data[2U])
                                             ? 0U : 3U)
                                         : ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__drain_req)
                                             ? 2U : 0U))
                                     : ((3U == (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state))
                                         ? ((IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__write_finished)
                                             ? 0U : 3U)
                                         : (IData)(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__curr_state)))))),2);
    bufp->fullIData(oldp+308,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT____Vcellinp__memory1__addr_dat),32);
    bufp->fullIData(oldp+309,(vlSelfRef.cache_tb__DOT__cache__DOT__memory1__DOT__memory1__DOT__address_dat),32);
}
