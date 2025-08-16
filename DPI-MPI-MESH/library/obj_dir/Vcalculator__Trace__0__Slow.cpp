// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcalculator__Syms.h"


VL_ATTR_COLD void Vcalculator___024root__trace_init_sub__TOP__0(Vcalculator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_init_sub__TOP__0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1376,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1377,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1379,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1381,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+1382,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1384,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("calculator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1376,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1377,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1379,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1381,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+1382,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1384,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("int_con", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1376,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1377,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1379,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1381,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+1382,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1384,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("out_a_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+57+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_b_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+75+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_ctrl_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+93+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_valid_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+102+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_a_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+111+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_b_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+129+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_ctrl_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+147+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_valid_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+156+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_a_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+165+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_b_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+183+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_ctrl_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+201+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_valid_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+210+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_a_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+219+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_b_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+237+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_ctrl_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+255+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_valid_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+264+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_out_a", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+273+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_out_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+291+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_a_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+300+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_b_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+318+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_ctrl_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+336+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_valid_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+345+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_a_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+354+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_b_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+372+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_ctrl_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+390+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_valid_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+399+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_a_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+408+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_b_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+426+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_ctrl_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+444+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_valid_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+453+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_a_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+462+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_b_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+480+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_ctrl_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+498+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_valid_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+507+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_in_a", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+516+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_in_b", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+534+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_in_ctrl", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+552+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_in_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+561+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_a_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+570+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_b_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+588+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_ctrl_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+606+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_valid_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+615+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_a_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+624+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_b_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+642+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_ctrl_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+660+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_valid_e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+669+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_a_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+678+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_b_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+696+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_ctrl_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+714+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_valid_s", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+723+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_a_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+732+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_b_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+750+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_ctrl_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+768+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_in_valid_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+777+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_host_in_a", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+2+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_host_in_b", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+20+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_host_in_ctrl", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+38+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("next_host_in_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBit(c+47+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+786,0,"is_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"next_is_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("t0_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1385,0,"TILE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1385,0,"TILE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+787,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+789,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+791,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+792,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+793,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+795,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+797,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+798,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+799,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+801,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+803,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+804,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+805,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+807,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+809,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+810,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+811,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+813,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+815,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+816,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1386,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1386,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1388,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1389,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+817,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+819,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+821,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+822,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+823,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+825,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+827,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+828,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1386,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1386,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1388,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1389,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+829,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+831,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"any_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+833,0,"sel_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+835,0,"sel_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+837,0,"sel_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+838,0,"sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+839,0,"sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+840,0,"sel_dst_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+841,0,"sel_dst_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+842,0,"sel_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1390,0,"cur_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1390,0,"cur_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+843,0,"am_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+844,0,"op_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("term", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1389,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+846,0,"resp_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("t0_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1391,0,"TILE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1385,0,"TILE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+847,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+849,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+851,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+852,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+853,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+855,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+857,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+858,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+859,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+861,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+863,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+864,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+865,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+867,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+869,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+870,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+871,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+873,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+875,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+876,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1386,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1386,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1388,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1389,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+877,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+879,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+881,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+882,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+883,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+885,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+887,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+888,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+889,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+891,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+893,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+894,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1386,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1389,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+895,0,"any_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+896,0,"sel_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+898,0,"sel_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+900,0,"sel_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+901,0,"sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+903,0,"sel_dst_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+904,0,"sel_dst_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+905,0,"sel_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1392,0,"cur_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1390,0,"cur_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+906,0,"am_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+907,0,"op_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("term", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1389,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+909,0,"resp_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("t0_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1393,0,"TILE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1385,0,"TILE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+910,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+912,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+914,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+915,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+916,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+918,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+920,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+921,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+922,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+924,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+926,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+927,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+928,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+930,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+932,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+933,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+934,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+936,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+938,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+939,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1386,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1386,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1388,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1389,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+940,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+942,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+944,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+945,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+946,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+948,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+950,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+951,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+952,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+954,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+956,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+957,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1386,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1389,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+958,0,"any_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+959,0,"sel_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+961,0,"sel_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+963,0,"sel_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+964,0,"sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+965,0,"sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+966,0,"sel_dst_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+967,0,"sel_dst_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+968,0,"sel_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1394,0,"cur_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1390,0,"cur_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+969,0,"am_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+970,0,"op_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("term", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1389,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+972,0,"resp_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("t1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1385,0,"TILE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1391,0,"TILE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+973,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+975,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+977,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+978,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+979,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+981,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+983,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+984,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+985,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+987,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+989,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+990,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+991,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+993,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+995,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+996,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+997,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+999,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1001,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1002,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1003,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1005,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1007,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1008,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1009,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1011,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1013,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1014,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1015,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1017,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1019,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1020,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1386,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1386,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1388,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1389,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1386,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1389,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1021,0,"any_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1022,0,"sel_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1024,0,"sel_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1026,0,"sel_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1027,0,"sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1028,0,"sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1029,0,"sel_dst_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1030,0,"sel_dst_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1031,0,"sel_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1390,0,"cur_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1392,0,"cur_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1032,0,"am_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1033,0,"op_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("term", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1389,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1035,0,"resp_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("t1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1391,0,"TILE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1391,0,"TILE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1036,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1038,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1040,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1041,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1042,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1044,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1046,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1047,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1048,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1050,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1052,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1053,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1054,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1056,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1058,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1059,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1060,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1062,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1064,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1065,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1066,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1068,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1070,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1071,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1072,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1074,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1076,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1077,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1078,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1080,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1082,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1083,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1084,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1086,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1088,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1089,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1386,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1389,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1090,0,"any_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1091,0,"sel_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1093,0,"sel_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1095,0,"sel_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1096,0,"sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1097,0,"sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1098,0,"sel_dst_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1099,0,"sel_dst_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1100,0,"sel_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1392,0,"cur_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1392,0,"cur_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1101,0,"am_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1102,0,"op_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("term", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1389,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1104,0,"resp_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("t1_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1393,0,"TILE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1391,0,"TILE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1105,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1107,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1109,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1110,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1111,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1113,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1115,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1116,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1117,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1119,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1121,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1122,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1123,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1125,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1127,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1128,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1129,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1131,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1133,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1134,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1135,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1137,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1139,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1140,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1141,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1143,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1145,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1146,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1147,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1149,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1151,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1152,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1153,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1155,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1157,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1158,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1386,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1389,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1159,0,"any_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1160,0,"sel_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1162,0,"sel_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1164,0,"sel_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1165,0,"sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1166,0,"sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1167,0,"sel_dst_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1168,0,"sel_dst_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1169,0,"sel_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1394,0,"cur_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1392,0,"cur_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1170,0,"am_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1171,0,"op_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("term", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1389,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1173,0,"resp_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("t2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1385,0,"TILE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1393,0,"TILE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1174,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1176,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1178,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1179,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1180,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1182,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1184,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1185,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1186,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1188,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1190,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1191,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1192,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1194,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1196,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1197,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1198,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1200,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1202,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1203,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1204,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1206,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1208,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1209,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1210,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1212,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1214,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1215,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1216,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1218,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1220,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1221,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1386,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1386,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1388,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1389,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1386,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1389,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1222,0,"any_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1223,0,"sel_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1225,0,"sel_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1227,0,"sel_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1228,0,"sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1229,0,"sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1230,0,"sel_dst_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1231,0,"sel_dst_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1232,0,"sel_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1390,0,"cur_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1394,0,"cur_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1233,0,"am_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1234,0,"op_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("term", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1389,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1236,0,"resp_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("t2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1391,0,"TILE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1393,0,"TILE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1237,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1239,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1241,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1242,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1243,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1245,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1247,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1248,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1249,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1251,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1253,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1254,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1255,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1257,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1259,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1260,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1261,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1263,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1265,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1266,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1267,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1269,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1271,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1272,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1273,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1275,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1277,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1278,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1279,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1281,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1283,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1284,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1285,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1287,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1289,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1290,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1386,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1389,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1291,0,"any_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1292,0,"sel_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1294,0,"sel_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1296,0,"sel_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1297,0,"sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1298,0,"sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1299,0,"sel_dst_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1300,0,"sel_dst_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1301,0,"sel_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1392,0,"cur_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1394,0,"cur_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1302,0,"am_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1303,0,"op_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("term", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1389,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1305,0,"resp_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("t2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1393,0,"TILE_X",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1393,0,"TILE_Y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1306,0,"in_a_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1308,0,"in_b_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1310,0,"in_ctrl_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1311,0,"in_valid_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1312,0,"in_a_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1314,0,"in_b_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1316,0,"in_ctrl_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1317,0,"in_valid_e",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1318,0,"in_a_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1320,0,"in_b_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1322,0,"in_ctrl_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1323,0,"in_valid_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1324,0,"in_a_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1326,0,"in_b_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1328,0,"in_ctrl_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1329,0,"in_valid_w",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1330,0,"host_in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1332,0,"host_in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1334,0,"host_in_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1335,0,"host_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1336,0,"out_a_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1338,0,"out_b_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1340,0,"out_ctrl_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1341,0,"out_valid_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1342,0,"out_a_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1344,0,"out_b_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1346,0,"out_ctrl_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1347,0,"out_valid_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1348,0,"out_a_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1350,0,"out_b_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1352,0,"out_ctrl_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1353,0,"out_valid_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1354,0,"out_a_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1356,0,"out_b_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1358,0,"out_ctrl_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1359,0,"out_valid_w",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1386,0,"host_out_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1389,0,"host_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1360,0,"any_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1361,0,"sel_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1363,0,"sel_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1365,0,"sel_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1366,0,"sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1367,0,"sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1368,0,"sel_dst_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1369,0,"sel_dst_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1370,0,"sel_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1394,0,"cur_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1394,0,"cur_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1371,0,"am_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1372,0,"op_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("term", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1389,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1374,0,"resp_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1395,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1395,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1396,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1375,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcalculator___024root__trace_init_top(Vcalculator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_init_top\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcalculator___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcalculator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcalculator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcalculator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcalculator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcalculator___024root__trace_register(Vcalculator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_register\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcalculator___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcalculator___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcalculator___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcalculator___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcalculator___024root__trace_const_0_sub_0(Vcalculator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcalculator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_const_0\n"); );
    // Init
    Vcalculator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcalculator___024root*>(voidSelf);
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcalculator___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcalculator___024root__trace_const_0_sub_0(Vcalculator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_const_0_sub_0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1385,(0U),8);
    bufp->fullQData(oldp+1386,(0ULL),64);
    bufp->fullSData(oldp+1388,(0U),16);
    bufp->fullBit(oldp+1389,(0U));
    bufp->fullCData(oldp+1390,(0U),2);
    bufp->fullCData(oldp+1391,(1U),8);
    bufp->fullCData(oldp+1392,(1U),2);
    bufp->fullCData(oldp+1393,(2U),8);
    bufp->fullCData(oldp+1394,(2U),2);
    bufp->fullIData(oldp+1395,(3U),32);
    bufp->fullIData(oldp+1396,(9U),32);
}

VL_ATTR_COLD void Vcalculator___024root__trace_full_0_sub_0(Vcalculator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcalculator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_full_0\n"); );
    // Init
    Vcalculator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcalculator___024root*>(voidSelf);
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcalculator___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcalculator___024root__trace_full_0_sub_0(Vcalculator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_full_0_sub_0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk5__DOT__i),32);
    bufp->fullQData(oldp+2,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[0]),64);
    bufp->fullQData(oldp+4,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[1]),64);
    bufp->fullQData(oldp+6,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[2]),64);
    bufp->fullQData(oldp+8,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[3]),64);
    bufp->fullQData(oldp+10,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[4]),64);
    bufp->fullQData(oldp+12,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[5]),64);
    bufp->fullQData(oldp+14,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[6]),64);
    bufp->fullQData(oldp+16,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[7]),64);
    bufp->fullQData(oldp+18,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[8]),64);
    bufp->fullQData(oldp+20,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[0]),64);
    bufp->fullQData(oldp+22,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[1]),64);
    bufp->fullQData(oldp+24,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[2]),64);
    bufp->fullQData(oldp+26,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[3]),64);
    bufp->fullQData(oldp+28,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[4]),64);
    bufp->fullQData(oldp+30,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[5]),64);
    bufp->fullQData(oldp+32,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[6]),64);
    bufp->fullQData(oldp+34,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[7]),64);
    bufp->fullQData(oldp+36,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[8]),64);
    bufp->fullSData(oldp+38,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[0]),16);
    bufp->fullSData(oldp+39,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[1]),16);
    bufp->fullSData(oldp+40,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[2]),16);
    bufp->fullSData(oldp+41,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[3]),16);
    bufp->fullSData(oldp+42,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[4]),16);
    bufp->fullSData(oldp+43,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[5]),16);
    bufp->fullSData(oldp+44,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[6]),16);
    bufp->fullSData(oldp+45,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[7]),16);
    bufp->fullSData(oldp+46,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[8]),16);
    bufp->fullBit(oldp+47,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[0]));
    bufp->fullBit(oldp+48,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[1]));
    bufp->fullBit(oldp+49,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[2]));
    bufp->fullBit(oldp+50,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[3]));
    bufp->fullBit(oldp+51,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[4]));
    bufp->fullBit(oldp+52,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[5]));
    bufp->fullBit(oldp+53,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[6]));
    bufp->fullBit(oldp+54,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[7]));
    bufp->fullBit(oldp+55,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[8]));
    bufp->fullBit(oldp+56,(vlSelfRef.calculator__DOT__int_con__DOT__next_is_busy));
    bufp->fullQData(oldp+57,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[0]),64);
    bufp->fullQData(oldp+59,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[1]),64);
    bufp->fullQData(oldp+61,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[2]),64);
    bufp->fullQData(oldp+63,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[3]),64);
    bufp->fullQData(oldp+65,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[4]),64);
    bufp->fullQData(oldp+67,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[5]),64);
    bufp->fullQData(oldp+69,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[6]),64);
    bufp->fullQData(oldp+71,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[7]),64);
    bufp->fullQData(oldp+73,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[8]),64);
    bufp->fullQData(oldp+75,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[0]),64);
    bufp->fullQData(oldp+77,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[1]),64);
    bufp->fullQData(oldp+79,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[2]),64);
    bufp->fullQData(oldp+81,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[3]),64);
    bufp->fullQData(oldp+83,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[4]),64);
    bufp->fullQData(oldp+85,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[5]),64);
    bufp->fullQData(oldp+87,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[6]),64);
    bufp->fullQData(oldp+89,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[7]),64);
    bufp->fullQData(oldp+91,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[8]),64);
    bufp->fullSData(oldp+93,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[0]),16);
    bufp->fullSData(oldp+94,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[1]),16);
    bufp->fullSData(oldp+95,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[2]),16);
    bufp->fullSData(oldp+96,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[3]),16);
    bufp->fullSData(oldp+97,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[4]),16);
    bufp->fullSData(oldp+98,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[5]),16);
    bufp->fullSData(oldp+99,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[6]),16);
    bufp->fullSData(oldp+100,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[7]),16);
    bufp->fullSData(oldp+101,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[8]),16);
    bufp->fullBit(oldp+102,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[0]));
    bufp->fullBit(oldp+103,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[1]));
    bufp->fullBit(oldp+104,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[2]));
    bufp->fullBit(oldp+105,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[3]));
    bufp->fullBit(oldp+106,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[4]));
    bufp->fullBit(oldp+107,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[5]));
    bufp->fullBit(oldp+108,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[6]));
    bufp->fullBit(oldp+109,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[7]));
    bufp->fullBit(oldp+110,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[8]));
    bufp->fullQData(oldp+111,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[0]),64);
    bufp->fullQData(oldp+113,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[1]),64);
    bufp->fullQData(oldp+115,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[2]),64);
    bufp->fullQData(oldp+117,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[3]),64);
    bufp->fullQData(oldp+119,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[4]),64);
    bufp->fullQData(oldp+121,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[5]),64);
    bufp->fullQData(oldp+123,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[6]),64);
    bufp->fullQData(oldp+125,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[7]),64);
    bufp->fullQData(oldp+127,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[8]),64);
    bufp->fullQData(oldp+129,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[0]),64);
    bufp->fullQData(oldp+131,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[1]),64);
    bufp->fullQData(oldp+133,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[2]),64);
    bufp->fullQData(oldp+135,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[3]),64);
    bufp->fullQData(oldp+137,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[4]),64);
    bufp->fullQData(oldp+139,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[5]),64);
    bufp->fullQData(oldp+141,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[6]),64);
    bufp->fullQData(oldp+143,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[7]),64);
    bufp->fullQData(oldp+145,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[8]),64);
    bufp->fullSData(oldp+147,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[0]),16);
    bufp->fullSData(oldp+148,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[1]),16);
    bufp->fullSData(oldp+149,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[2]),16);
    bufp->fullSData(oldp+150,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[3]),16);
    bufp->fullSData(oldp+151,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[4]),16);
    bufp->fullSData(oldp+152,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[5]),16);
    bufp->fullSData(oldp+153,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[6]),16);
    bufp->fullSData(oldp+154,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[7]),16);
    bufp->fullSData(oldp+155,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[8]),16);
    bufp->fullBit(oldp+156,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[0]));
    bufp->fullBit(oldp+157,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[1]));
    bufp->fullBit(oldp+158,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[2]));
    bufp->fullBit(oldp+159,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[3]));
    bufp->fullBit(oldp+160,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[4]));
    bufp->fullBit(oldp+161,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[5]));
    bufp->fullBit(oldp+162,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[6]));
    bufp->fullBit(oldp+163,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[7]));
    bufp->fullBit(oldp+164,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[8]));
    bufp->fullQData(oldp+165,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[0]),64);
    bufp->fullQData(oldp+167,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[1]),64);
    bufp->fullQData(oldp+169,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[2]),64);
    bufp->fullQData(oldp+171,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[3]),64);
    bufp->fullQData(oldp+173,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[4]),64);
    bufp->fullQData(oldp+175,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[5]),64);
    bufp->fullQData(oldp+177,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[6]),64);
    bufp->fullQData(oldp+179,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[7]),64);
    bufp->fullQData(oldp+181,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[8]),64);
    bufp->fullQData(oldp+183,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[0]),64);
    bufp->fullQData(oldp+185,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[1]),64);
    bufp->fullQData(oldp+187,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[2]),64);
    bufp->fullQData(oldp+189,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[3]),64);
    bufp->fullQData(oldp+191,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[4]),64);
    bufp->fullQData(oldp+193,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[5]),64);
    bufp->fullQData(oldp+195,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[6]),64);
    bufp->fullQData(oldp+197,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[7]),64);
    bufp->fullQData(oldp+199,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[8]),64);
    bufp->fullSData(oldp+201,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[0]),16);
    bufp->fullSData(oldp+202,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[1]),16);
    bufp->fullSData(oldp+203,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[2]),16);
    bufp->fullSData(oldp+204,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[3]),16);
    bufp->fullSData(oldp+205,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[4]),16);
    bufp->fullSData(oldp+206,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[5]),16);
    bufp->fullSData(oldp+207,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[6]),16);
    bufp->fullSData(oldp+208,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[7]),16);
    bufp->fullSData(oldp+209,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[8]),16);
    bufp->fullBit(oldp+210,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[0]));
    bufp->fullBit(oldp+211,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[1]));
    bufp->fullBit(oldp+212,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[2]));
    bufp->fullBit(oldp+213,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[3]));
    bufp->fullBit(oldp+214,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[4]));
    bufp->fullBit(oldp+215,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[5]));
    bufp->fullBit(oldp+216,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[6]));
    bufp->fullBit(oldp+217,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[7]));
    bufp->fullBit(oldp+218,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[8]));
    bufp->fullQData(oldp+219,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[0]),64);
    bufp->fullQData(oldp+221,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[1]),64);
    bufp->fullQData(oldp+223,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[2]),64);
    bufp->fullQData(oldp+225,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[3]),64);
    bufp->fullQData(oldp+227,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[4]),64);
    bufp->fullQData(oldp+229,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[5]),64);
    bufp->fullQData(oldp+231,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[6]),64);
    bufp->fullQData(oldp+233,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[7]),64);
    bufp->fullQData(oldp+235,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[8]),64);
    bufp->fullQData(oldp+237,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[0]),64);
    bufp->fullQData(oldp+239,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[1]),64);
    bufp->fullQData(oldp+241,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[2]),64);
    bufp->fullQData(oldp+243,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[3]),64);
    bufp->fullQData(oldp+245,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[4]),64);
    bufp->fullQData(oldp+247,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[5]),64);
    bufp->fullQData(oldp+249,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[6]),64);
    bufp->fullQData(oldp+251,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[7]),64);
    bufp->fullQData(oldp+253,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[8]),64);
    bufp->fullSData(oldp+255,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[0]),16);
    bufp->fullSData(oldp+256,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[1]),16);
    bufp->fullSData(oldp+257,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[2]),16);
    bufp->fullSData(oldp+258,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[3]),16);
    bufp->fullSData(oldp+259,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[4]),16);
    bufp->fullSData(oldp+260,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[5]),16);
    bufp->fullSData(oldp+261,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[6]),16);
    bufp->fullSData(oldp+262,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[7]),16);
    bufp->fullSData(oldp+263,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[8]),16);
    bufp->fullBit(oldp+264,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[0]));
    bufp->fullBit(oldp+265,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[1]));
    bufp->fullBit(oldp+266,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[2]));
    bufp->fullBit(oldp+267,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[3]));
    bufp->fullBit(oldp+268,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[4]));
    bufp->fullBit(oldp+269,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[5]));
    bufp->fullBit(oldp+270,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[6]));
    bufp->fullBit(oldp+271,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[7]));
    bufp->fullBit(oldp+272,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[8]));
    bufp->fullQData(oldp+273,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[0]),64);
    bufp->fullQData(oldp+275,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[1]),64);
    bufp->fullQData(oldp+277,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[2]),64);
    bufp->fullQData(oldp+279,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[3]),64);
    bufp->fullQData(oldp+281,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[4]),64);
    bufp->fullQData(oldp+283,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[5]),64);
    bufp->fullQData(oldp+285,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[6]),64);
    bufp->fullQData(oldp+287,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[7]),64);
    bufp->fullQData(oldp+289,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[8]),64);
    bufp->fullBit(oldp+291,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[0]));
    bufp->fullBit(oldp+292,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[1]));
    bufp->fullBit(oldp+293,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[2]));
    bufp->fullBit(oldp+294,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[3]));
    bufp->fullBit(oldp+295,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[4]));
    bufp->fullBit(oldp+296,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[5]));
    bufp->fullBit(oldp+297,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[6]));
    bufp->fullBit(oldp+298,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[7]));
    bufp->fullBit(oldp+299,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[8]));
    bufp->fullQData(oldp+300,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[0]),64);
    bufp->fullQData(oldp+302,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[1]),64);
    bufp->fullQData(oldp+304,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[2]),64);
    bufp->fullQData(oldp+306,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[3]),64);
    bufp->fullQData(oldp+308,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[4]),64);
    bufp->fullQData(oldp+310,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[5]),64);
    bufp->fullQData(oldp+312,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[6]),64);
    bufp->fullQData(oldp+314,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[7]),64);
    bufp->fullQData(oldp+316,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[8]),64);
    bufp->fullQData(oldp+318,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[0]),64);
    bufp->fullQData(oldp+320,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[1]),64);
    bufp->fullQData(oldp+322,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[2]),64);
    bufp->fullQData(oldp+324,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[3]),64);
    bufp->fullQData(oldp+326,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[4]),64);
    bufp->fullQData(oldp+328,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[5]),64);
    bufp->fullQData(oldp+330,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[6]),64);
    bufp->fullQData(oldp+332,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[7]),64);
    bufp->fullQData(oldp+334,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[8]),64);
    bufp->fullSData(oldp+336,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[0]),16);
    bufp->fullSData(oldp+337,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[1]),16);
    bufp->fullSData(oldp+338,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[2]),16);
    bufp->fullSData(oldp+339,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[3]),16);
    bufp->fullSData(oldp+340,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[4]),16);
    bufp->fullSData(oldp+341,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[5]),16);
    bufp->fullSData(oldp+342,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[6]),16);
    bufp->fullSData(oldp+343,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[7]),16);
    bufp->fullSData(oldp+344,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[8]),16);
    bufp->fullBit(oldp+345,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[0]));
    bufp->fullBit(oldp+346,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[1]));
    bufp->fullBit(oldp+347,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[2]));
    bufp->fullBit(oldp+348,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[3]));
    bufp->fullBit(oldp+349,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[4]));
    bufp->fullBit(oldp+350,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[5]));
    bufp->fullBit(oldp+351,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[6]));
    bufp->fullBit(oldp+352,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[7]));
    bufp->fullBit(oldp+353,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[8]));
    bufp->fullQData(oldp+354,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[0]),64);
    bufp->fullQData(oldp+356,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[1]),64);
    bufp->fullQData(oldp+358,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[2]),64);
    bufp->fullQData(oldp+360,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[3]),64);
    bufp->fullQData(oldp+362,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[4]),64);
    bufp->fullQData(oldp+364,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[5]),64);
    bufp->fullQData(oldp+366,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[6]),64);
    bufp->fullQData(oldp+368,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[7]),64);
    bufp->fullQData(oldp+370,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[8]),64);
    bufp->fullQData(oldp+372,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[0]),64);
    bufp->fullQData(oldp+374,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[1]),64);
    bufp->fullQData(oldp+376,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[2]),64);
    bufp->fullQData(oldp+378,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[3]),64);
    bufp->fullQData(oldp+380,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[4]),64);
    bufp->fullQData(oldp+382,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[5]),64);
    bufp->fullQData(oldp+384,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[6]),64);
    bufp->fullQData(oldp+386,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[7]),64);
    bufp->fullQData(oldp+388,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[8]),64);
    bufp->fullSData(oldp+390,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[0]),16);
    bufp->fullSData(oldp+391,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[1]),16);
    bufp->fullSData(oldp+392,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[2]),16);
    bufp->fullSData(oldp+393,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[3]),16);
    bufp->fullSData(oldp+394,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[4]),16);
    bufp->fullSData(oldp+395,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[5]),16);
    bufp->fullSData(oldp+396,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[6]),16);
    bufp->fullSData(oldp+397,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[7]),16);
    bufp->fullSData(oldp+398,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[8]),16);
    bufp->fullBit(oldp+399,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[0]));
    bufp->fullBit(oldp+400,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[1]));
    bufp->fullBit(oldp+401,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[2]));
    bufp->fullBit(oldp+402,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[3]));
    bufp->fullBit(oldp+403,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[4]));
    bufp->fullBit(oldp+404,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[5]));
    bufp->fullBit(oldp+405,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[6]));
    bufp->fullBit(oldp+406,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[7]));
    bufp->fullBit(oldp+407,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[8]));
    bufp->fullQData(oldp+408,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[0]),64);
    bufp->fullQData(oldp+410,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[1]),64);
    bufp->fullQData(oldp+412,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[2]),64);
    bufp->fullQData(oldp+414,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[3]),64);
    bufp->fullQData(oldp+416,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[4]),64);
    bufp->fullQData(oldp+418,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[5]),64);
    bufp->fullQData(oldp+420,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[6]),64);
    bufp->fullQData(oldp+422,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[7]),64);
    bufp->fullQData(oldp+424,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[8]),64);
    bufp->fullQData(oldp+426,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[0]),64);
    bufp->fullQData(oldp+428,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[1]),64);
    bufp->fullQData(oldp+430,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[2]),64);
    bufp->fullQData(oldp+432,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[3]),64);
    bufp->fullQData(oldp+434,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[4]),64);
    bufp->fullQData(oldp+436,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[5]),64);
    bufp->fullQData(oldp+438,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[6]),64);
    bufp->fullQData(oldp+440,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[7]),64);
    bufp->fullQData(oldp+442,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[8]),64);
    bufp->fullSData(oldp+444,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[0]),16);
    bufp->fullSData(oldp+445,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[1]),16);
    bufp->fullSData(oldp+446,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[2]),16);
    bufp->fullSData(oldp+447,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[3]),16);
    bufp->fullSData(oldp+448,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[4]),16);
    bufp->fullSData(oldp+449,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[5]),16);
    bufp->fullSData(oldp+450,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[6]),16);
    bufp->fullSData(oldp+451,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[7]),16);
    bufp->fullSData(oldp+452,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[8]),16);
    bufp->fullBit(oldp+453,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[0]));
    bufp->fullBit(oldp+454,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[1]));
    bufp->fullBit(oldp+455,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[2]));
    bufp->fullBit(oldp+456,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[3]));
    bufp->fullBit(oldp+457,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[4]));
    bufp->fullBit(oldp+458,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[5]));
    bufp->fullBit(oldp+459,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[6]));
    bufp->fullBit(oldp+460,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[7]));
    bufp->fullBit(oldp+461,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[8]));
    bufp->fullQData(oldp+462,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[0]),64);
    bufp->fullQData(oldp+464,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[1]),64);
    bufp->fullQData(oldp+466,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[2]),64);
    bufp->fullQData(oldp+468,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[3]),64);
    bufp->fullQData(oldp+470,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[4]),64);
    bufp->fullQData(oldp+472,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[5]),64);
    bufp->fullQData(oldp+474,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[6]),64);
    bufp->fullQData(oldp+476,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[7]),64);
    bufp->fullQData(oldp+478,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[8]),64);
    bufp->fullQData(oldp+480,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[0]),64);
    bufp->fullQData(oldp+482,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[1]),64);
    bufp->fullQData(oldp+484,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[2]),64);
    bufp->fullQData(oldp+486,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[3]),64);
    bufp->fullQData(oldp+488,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[4]),64);
    bufp->fullQData(oldp+490,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[5]),64);
    bufp->fullQData(oldp+492,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[6]),64);
    bufp->fullQData(oldp+494,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[7]),64);
    bufp->fullQData(oldp+496,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[8]),64);
    bufp->fullSData(oldp+498,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[0]),16);
    bufp->fullSData(oldp+499,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[1]),16);
    bufp->fullSData(oldp+500,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[2]),16);
    bufp->fullSData(oldp+501,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[3]),16);
    bufp->fullSData(oldp+502,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[4]),16);
    bufp->fullSData(oldp+503,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[5]),16);
    bufp->fullSData(oldp+504,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[6]),16);
    bufp->fullSData(oldp+505,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[7]),16);
    bufp->fullSData(oldp+506,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[8]),16);
    bufp->fullBit(oldp+507,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[0]));
    bufp->fullBit(oldp+508,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[1]));
    bufp->fullBit(oldp+509,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[2]));
    bufp->fullBit(oldp+510,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[3]));
    bufp->fullBit(oldp+511,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[4]));
    bufp->fullBit(oldp+512,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[5]));
    bufp->fullBit(oldp+513,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[6]));
    bufp->fullBit(oldp+514,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[7]));
    bufp->fullBit(oldp+515,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[8]));
    bufp->fullQData(oldp+516,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[0]),64);
    bufp->fullQData(oldp+518,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[1]),64);
    bufp->fullQData(oldp+520,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[2]),64);
    bufp->fullQData(oldp+522,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[3]),64);
    bufp->fullQData(oldp+524,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[4]),64);
    bufp->fullQData(oldp+526,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[5]),64);
    bufp->fullQData(oldp+528,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[6]),64);
    bufp->fullQData(oldp+530,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[7]),64);
    bufp->fullQData(oldp+532,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[8]),64);
    bufp->fullQData(oldp+534,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[0]),64);
    bufp->fullQData(oldp+536,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[1]),64);
    bufp->fullQData(oldp+538,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[2]),64);
    bufp->fullQData(oldp+540,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[3]),64);
    bufp->fullQData(oldp+542,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[4]),64);
    bufp->fullQData(oldp+544,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[5]),64);
    bufp->fullQData(oldp+546,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[6]),64);
    bufp->fullQData(oldp+548,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[7]),64);
    bufp->fullQData(oldp+550,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[8]),64);
    bufp->fullSData(oldp+552,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[0]),16);
    bufp->fullSData(oldp+553,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[1]),16);
    bufp->fullSData(oldp+554,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[2]),16);
    bufp->fullSData(oldp+555,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[3]),16);
    bufp->fullSData(oldp+556,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[4]),16);
    bufp->fullSData(oldp+557,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[5]),16);
    bufp->fullSData(oldp+558,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[6]),16);
    bufp->fullSData(oldp+559,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[7]),16);
    bufp->fullSData(oldp+560,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[8]),16);
    bufp->fullBit(oldp+561,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[0]));
    bufp->fullBit(oldp+562,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[1]));
    bufp->fullBit(oldp+563,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[2]));
    bufp->fullBit(oldp+564,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[3]));
    bufp->fullBit(oldp+565,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[4]));
    bufp->fullBit(oldp+566,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[5]));
    bufp->fullBit(oldp+567,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[6]));
    bufp->fullBit(oldp+568,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[7]));
    bufp->fullBit(oldp+569,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[8]));
    bufp->fullQData(oldp+570,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[0]),64);
    bufp->fullQData(oldp+572,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[1]),64);
    bufp->fullQData(oldp+574,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[2]),64);
    bufp->fullQData(oldp+576,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[3]),64);
    bufp->fullQData(oldp+578,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[4]),64);
    bufp->fullQData(oldp+580,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[5]),64);
    bufp->fullQData(oldp+582,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[6]),64);
    bufp->fullQData(oldp+584,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[7]),64);
    bufp->fullQData(oldp+586,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[8]),64);
    bufp->fullQData(oldp+588,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[0]),64);
    bufp->fullQData(oldp+590,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[1]),64);
    bufp->fullQData(oldp+592,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[2]),64);
    bufp->fullQData(oldp+594,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[3]),64);
    bufp->fullQData(oldp+596,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[4]),64);
    bufp->fullQData(oldp+598,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[5]),64);
    bufp->fullQData(oldp+600,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[6]),64);
    bufp->fullQData(oldp+602,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[7]),64);
    bufp->fullQData(oldp+604,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[8]),64);
    bufp->fullSData(oldp+606,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[0]),16);
    bufp->fullSData(oldp+607,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[1]),16);
    bufp->fullSData(oldp+608,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[2]),16);
    bufp->fullSData(oldp+609,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[3]),16);
    bufp->fullSData(oldp+610,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[4]),16);
    bufp->fullSData(oldp+611,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[5]),16);
    bufp->fullSData(oldp+612,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[6]),16);
    bufp->fullSData(oldp+613,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[7]),16);
    bufp->fullSData(oldp+614,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[8]),16);
    bufp->fullBit(oldp+615,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[0]));
    bufp->fullBit(oldp+616,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[1]));
    bufp->fullBit(oldp+617,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[2]));
    bufp->fullBit(oldp+618,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[3]));
    bufp->fullBit(oldp+619,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[4]));
    bufp->fullBit(oldp+620,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[5]));
    bufp->fullBit(oldp+621,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[6]));
    bufp->fullBit(oldp+622,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[7]));
    bufp->fullBit(oldp+623,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[8]));
    bufp->fullQData(oldp+624,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[0]),64);
    bufp->fullQData(oldp+626,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[1]),64);
    bufp->fullQData(oldp+628,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[2]),64);
    bufp->fullQData(oldp+630,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[3]),64);
    bufp->fullQData(oldp+632,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[4]),64);
    bufp->fullQData(oldp+634,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[5]),64);
    bufp->fullQData(oldp+636,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[6]),64);
    bufp->fullQData(oldp+638,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[7]),64);
    bufp->fullQData(oldp+640,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[8]),64);
    bufp->fullQData(oldp+642,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[0]),64);
    bufp->fullQData(oldp+644,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[1]),64);
    bufp->fullQData(oldp+646,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[2]),64);
    bufp->fullQData(oldp+648,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[3]),64);
    bufp->fullQData(oldp+650,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[4]),64);
    bufp->fullQData(oldp+652,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[5]),64);
    bufp->fullQData(oldp+654,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[6]),64);
    bufp->fullQData(oldp+656,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[7]),64);
    bufp->fullQData(oldp+658,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[8]),64);
    bufp->fullSData(oldp+660,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[0]),16);
    bufp->fullSData(oldp+661,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[1]),16);
    bufp->fullSData(oldp+662,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[2]),16);
    bufp->fullSData(oldp+663,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[3]),16);
    bufp->fullSData(oldp+664,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[4]),16);
    bufp->fullSData(oldp+665,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[5]),16);
    bufp->fullSData(oldp+666,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[6]),16);
    bufp->fullSData(oldp+667,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[7]),16);
    bufp->fullSData(oldp+668,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[8]),16);
    bufp->fullBit(oldp+669,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[0]));
    bufp->fullBit(oldp+670,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[1]));
    bufp->fullBit(oldp+671,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[2]));
    bufp->fullBit(oldp+672,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[3]));
    bufp->fullBit(oldp+673,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[4]));
    bufp->fullBit(oldp+674,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[5]));
    bufp->fullBit(oldp+675,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[6]));
    bufp->fullBit(oldp+676,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[7]));
    bufp->fullBit(oldp+677,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[8]));
    bufp->fullQData(oldp+678,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[0]),64);
    bufp->fullQData(oldp+680,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[1]),64);
    bufp->fullQData(oldp+682,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[2]),64);
    bufp->fullQData(oldp+684,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[3]),64);
    bufp->fullQData(oldp+686,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[4]),64);
    bufp->fullQData(oldp+688,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[5]),64);
    bufp->fullQData(oldp+690,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[6]),64);
    bufp->fullQData(oldp+692,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[7]),64);
    bufp->fullQData(oldp+694,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[8]),64);
    bufp->fullQData(oldp+696,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[0]),64);
    bufp->fullQData(oldp+698,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[1]),64);
    bufp->fullQData(oldp+700,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[2]),64);
    bufp->fullQData(oldp+702,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[3]),64);
    bufp->fullQData(oldp+704,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[4]),64);
    bufp->fullQData(oldp+706,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[5]),64);
    bufp->fullQData(oldp+708,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[6]),64);
    bufp->fullQData(oldp+710,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[7]),64);
    bufp->fullQData(oldp+712,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[8]),64);
    bufp->fullSData(oldp+714,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[0]),16);
    bufp->fullSData(oldp+715,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[1]),16);
    bufp->fullSData(oldp+716,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[2]),16);
    bufp->fullSData(oldp+717,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[3]),16);
    bufp->fullSData(oldp+718,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[4]),16);
    bufp->fullSData(oldp+719,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[5]),16);
    bufp->fullSData(oldp+720,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[6]),16);
    bufp->fullSData(oldp+721,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[7]),16);
    bufp->fullSData(oldp+722,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[8]),16);
    bufp->fullBit(oldp+723,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[0]));
    bufp->fullBit(oldp+724,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[1]));
    bufp->fullBit(oldp+725,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[2]));
    bufp->fullBit(oldp+726,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[3]));
    bufp->fullBit(oldp+727,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[4]));
    bufp->fullBit(oldp+728,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[5]));
    bufp->fullBit(oldp+729,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[6]));
    bufp->fullBit(oldp+730,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[7]));
    bufp->fullBit(oldp+731,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[8]));
    bufp->fullQData(oldp+732,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[0]),64);
    bufp->fullQData(oldp+734,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[1]),64);
    bufp->fullQData(oldp+736,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[2]),64);
    bufp->fullQData(oldp+738,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[3]),64);
    bufp->fullQData(oldp+740,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[4]),64);
    bufp->fullQData(oldp+742,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[5]),64);
    bufp->fullQData(oldp+744,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[6]),64);
    bufp->fullQData(oldp+746,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[7]),64);
    bufp->fullQData(oldp+748,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[8]),64);
    bufp->fullQData(oldp+750,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[0]),64);
    bufp->fullQData(oldp+752,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[1]),64);
    bufp->fullQData(oldp+754,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[2]),64);
    bufp->fullQData(oldp+756,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[3]),64);
    bufp->fullQData(oldp+758,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[4]),64);
    bufp->fullQData(oldp+760,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[5]),64);
    bufp->fullQData(oldp+762,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[6]),64);
    bufp->fullQData(oldp+764,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[7]),64);
    bufp->fullQData(oldp+766,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[8]),64);
    bufp->fullSData(oldp+768,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[0]),16);
    bufp->fullSData(oldp+769,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[1]),16);
    bufp->fullSData(oldp+770,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[2]),16);
    bufp->fullSData(oldp+771,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[3]),16);
    bufp->fullSData(oldp+772,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[4]),16);
    bufp->fullSData(oldp+773,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[5]),16);
    bufp->fullSData(oldp+774,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[6]),16);
    bufp->fullSData(oldp+775,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[7]),16);
    bufp->fullSData(oldp+776,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[8]),16);
    bufp->fullBit(oldp+777,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[0]));
    bufp->fullBit(oldp+778,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[1]));
    bufp->fullBit(oldp+779,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[2]));
    bufp->fullBit(oldp+780,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[3]));
    bufp->fullBit(oldp+781,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[4]));
    bufp->fullBit(oldp+782,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[5]));
    bufp->fullBit(oldp+783,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[6]));
    bufp->fullBit(oldp+784,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[7]));
    bufp->fullBit(oldp+785,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[8]));
    bufp->fullBit(oldp+786,(vlSelfRef.calculator__DOT__int_con__DOT__is_busy));
    bufp->fullQData(oldp+787,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                              [0U]),64);
    bufp->fullQData(oldp+789,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                              [0U]),64);
    bufp->fullSData(oldp+791,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                              [0U]),16);
    bufp->fullBit(oldp+792,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                            [0U]));
    bufp->fullQData(oldp+793,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                              [0U]),64);
    bufp->fullQData(oldp+795,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                              [0U]),64);
    bufp->fullSData(oldp+797,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                              [0U]),16);
    bufp->fullBit(oldp+798,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                            [0U]));
    bufp->fullQData(oldp+799,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                              [0U]),64);
    bufp->fullQData(oldp+801,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                              [0U]),64);
    bufp->fullSData(oldp+803,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                              [0U]),16);
    bufp->fullBit(oldp+804,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                            [0U]));
    bufp->fullQData(oldp+805,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                              [0U]),64);
    bufp->fullQData(oldp+807,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                              [0U]),64);
    bufp->fullSData(oldp+809,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                              [0U]),16);
    bufp->fullBit(oldp+810,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                            [0U]));
    bufp->fullQData(oldp+811,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                              [0U]),64);
    bufp->fullQData(oldp+813,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                              [0U]),64);
    bufp->fullSData(oldp+815,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                              [0U]),16);
    bufp->fullBit(oldp+816,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                            [0U]));
    bufp->fullQData(oldp+817,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_e),64);
    bufp->fullQData(oldp+819,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_e),64);
    bufp->fullSData(oldp+821,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_e),16);
    bufp->fullBit(oldp+822,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_e));
    bufp->fullQData(oldp+823,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_s),64);
    bufp->fullQData(oldp+825,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_s),64);
    bufp->fullSData(oldp+827,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_s),16);
    bufp->fullBit(oldp+828,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_s));
    bufp->fullQData(oldp+829,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_a),64);
    bufp->fullBit(oldp+831,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_valid));
    bufp->fullBit(oldp+832,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                             [0U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                     [0U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                             [0U] | 
                                             (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                              [0U] 
                                              | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                              [0U]))))));
    bufp->fullQData(oldp+833,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a),64);
    bufp->fullQData(oldp+835,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b),64);
    bufp->fullSData(oldp+837,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl),16);
    bufp->fullBit(oldp+838,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid));
    bufp->fullBit(oldp+839,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                   >> 8U))));
    bufp->fullCData(oldp+840,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+841,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+842,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))),4);
    bufp->fullBit(oldp+843,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__am_dest));
    bufp->fullQData(oldp+844,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__op_result),64);
    bufp->fullSData(oldp+846,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__unnamedblk1__DOT__resp_ctrl),16);
    bufp->fullQData(oldp+847,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                              [1U]),64);
    bufp->fullQData(oldp+849,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                              [1U]),64);
    bufp->fullSData(oldp+851,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                              [1U]),16);
    bufp->fullBit(oldp+852,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                            [1U]));
    bufp->fullQData(oldp+853,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                              [1U]),64);
    bufp->fullQData(oldp+855,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                              [1U]),64);
    bufp->fullSData(oldp+857,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                              [1U]),16);
    bufp->fullBit(oldp+858,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                            [1U]));
    bufp->fullQData(oldp+859,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                              [1U]),64);
    bufp->fullQData(oldp+861,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                              [1U]),64);
    bufp->fullSData(oldp+863,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                              [1U]),16);
    bufp->fullBit(oldp+864,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                            [1U]));
    bufp->fullQData(oldp+865,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                              [1U]),64);
    bufp->fullQData(oldp+867,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                              [1U]),64);
    bufp->fullSData(oldp+869,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                              [1U]),16);
    bufp->fullBit(oldp+870,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                            [1U]));
    bufp->fullQData(oldp+871,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                              [1U]),64);
    bufp->fullQData(oldp+873,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                              [1U]),64);
    bufp->fullSData(oldp+875,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                              [1U]),16);
    bufp->fullBit(oldp+876,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                            [1U]));
    bufp->fullQData(oldp+877,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_e),64);
    bufp->fullQData(oldp+879,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_e),64);
    bufp->fullSData(oldp+881,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_e),16);
    bufp->fullBit(oldp+882,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_e));
    bufp->fullQData(oldp+883,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_s),64);
    bufp->fullQData(oldp+885,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_s),64);
    bufp->fullSData(oldp+887,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_s),16);
    bufp->fullBit(oldp+888,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_s));
    bufp->fullQData(oldp+889,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_w),64);
    bufp->fullQData(oldp+891,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_w),64);
    bufp->fullSData(oldp+893,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_w),16);
    bufp->fullBit(oldp+894,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_w));
    bufp->fullBit(oldp+895,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                             [1U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                     [1U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                             [1U] | 
                                             (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                              [1U] 
                                              | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                              [1U]))))));
    bufp->fullQData(oldp+896,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a),64);
    bufp->fullQData(oldp+898,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b),64);
    bufp->fullSData(oldp+900,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl),16);
    bufp->fullBit(oldp+901,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid));
    bufp->fullBit(oldp+902,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                   >> 8U))));
    bufp->fullCData(oldp+903,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+904,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+905,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))),4);
    bufp->fullBit(oldp+906,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__am_dest));
    bufp->fullQData(oldp+907,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__op_result),64);
    bufp->fullSData(oldp+909,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__unnamedblk1__DOT__resp_ctrl),16);
    bufp->fullQData(oldp+910,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                              [2U]),64);
    bufp->fullQData(oldp+912,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                              [2U]),64);
    bufp->fullSData(oldp+914,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                              [2U]),16);
    bufp->fullBit(oldp+915,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                            [2U]));
    bufp->fullQData(oldp+916,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                              [2U]),64);
    bufp->fullQData(oldp+918,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                              [2U]),64);
    bufp->fullSData(oldp+920,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                              [2U]),16);
    bufp->fullBit(oldp+921,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                            [2U]));
    bufp->fullQData(oldp+922,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                              [2U]),64);
    bufp->fullQData(oldp+924,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                              [2U]),64);
    bufp->fullSData(oldp+926,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                              [2U]),16);
    bufp->fullBit(oldp+927,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                            [2U]));
    bufp->fullQData(oldp+928,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                              [2U]),64);
    bufp->fullQData(oldp+930,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                              [2U]),64);
    bufp->fullSData(oldp+932,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                              [2U]),16);
    bufp->fullBit(oldp+933,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                            [2U]));
    bufp->fullQData(oldp+934,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                              [2U]),64);
    bufp->fullQData(oldp+936,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                              [2U]),64);
    bufp->fullSData(oldp+938,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                              [2U]),16);
    bufp->fullBit(oldp+939,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                            [2U]));
    bufp->fullQData(oldp+940,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_e),64);
    bufp->fullQData(oldp+942,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_e),64);
    bufp->fullSData(oldp+944,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_e),16);
    bufp->fullBit(oldp+945,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_e));
    bufp->fullQData(oldp+946,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_s),64);
    bufp->fullQData(oldp+948,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_s),64);
    bufp->fullSData(oldp+950,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_s),16);
    bufp->fullBit(oldp+951,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_s));
    bufp->fullQData(oldp+952,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_w),64);
    bufp->fullQData(oldp+954,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_w),64);
    bufp->fullSData(oldp+956,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_w),16);
    bufp->fullBit(oldp+957,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_w));
    bufp->fullBit(oldp+958,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                             [2U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                     [2U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                             [2U] | 
                                             (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                              [2U] 
                                              | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                              [2U]))))));
    bufp->fullQData(oldp+959,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a),64);
    bufp->fullQData(oldp+961,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b),64);
    bufp->fullSData(oldp+963,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl),16);
    bufp->fullBit(oldp+964,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid));
    bufp->fullBit(oldp+965,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                   >> 8U))));
    bufp->fullCData(oldp+966,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+967,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+968,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))),4);
    bufp->fullBit(oldp+969,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__am_dest));
    bufp->fullQData(oldp+970,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__op_result),64);
    bufp->fullSData(oldp+972,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__unnamedblk1__DOT__resp_ctrl),16);
    bufp->fullQData(oldp+973,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                              [3U]),64);
    bufp->fullQData(oldp+975,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                              [3U]),64);
    bufp->fullSData(oldp+977,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                              [3U]),16);
    bufp->fullBit(oldp+978,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                            [3U]));
    bufp->fullQData(oldp+979,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                              [3U]),64);
    bufp->fullQData(oldp+981,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                              [3U]),64);
    bufp->fullSData(oldp+983,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                              [3U]),16);
    bufp->fullBit(oldp+984,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                            [3U]));
    bufp->fullQData(oldp+985,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                              [3U]),64);
    bufp->fullQData(oldp+987,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                              [3U]),64);
    bufp->fullSData(oldp+989,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                              [3U]),16);
    bufp->fullBit(oldp+990,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                            [3U]));
    bufp->fullQData(oldp+991,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                              [3U]),64);
    bufp->fullQData(oldp+993,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                              [3U]),64);
    bufp->fullSData(oldp+995,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                              [3U]),16);
    bufp->fullBit(oldp+996,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                            [3U]));
    bufp->fullQData(oldp+997,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                              [3U]),64);
    bufp->fullQData(oldp+999,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                              [3U]),64);
    bufp->fullSData(oldp+1001,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                               [3U]),16);
    bufp->fullBit(oldp+1002,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                             [3U]));
    bufp->fullQData(oldp+1003,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_n),64);
    bufp->fullQData(oldp+1005,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_n),64);
    bufp->fullSData(oldp+1007,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_n),16);
    bufp->fullBit(oldp+1008,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_n));
    bufp->fullQData(oldp+1009,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_e),64);
    bufp->fullQData(oldp+1011,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_e),64);
    bufp->fullSData(oldp+1013,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_e),16);
    bufp->fullBit(oldp+1014,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_e));
    bufp->fullQData(oldp+1015,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_s),64);
    bufp->fullQData(oldp+1017,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_s),64);
    bufp->fullSData(oldp+1019,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_s),16);
    bufp->fullBit(oldp+1020,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_s));
    bufp->fullBit(oldp+1021,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                              [3U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                      [3U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                              [3U] 
                                              | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                 [3U] 
                                                 | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                 [3U]))))));
    bufp->fullQData(oldp+1022,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a),64);
    bufp->fullQData(oldp+1024,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b),64);
    bufp->fullSData(oldp+1026,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl),16);
    bufp->fullBit(oldp+1027,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid));
    bufp->fullBit(oldp+1028,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                    >> 8U))));
    bufp->fullCData(oldp+1029,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                      >> 6U))),2);
    bufp->fullCData(oldp+1030,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1031,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))),4);
    bufp->fullBit(oldp+1032,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__am_dest));
    bufp->fullQData(oldp+1033,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__op_result),64);
    bufp->fullSData(oldp+1035,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__unnamedblk1__DOT__resp_ctrl),16);
    bufp->fullQData(oldp+1036,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                               [4U]),64);
    bufp->fullQData(oldp+1038,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                               [4U]),64);
    bufp->fullSData(oldp+1040,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                               [4U]),16);
    bufp->fullBit(oldp+1041,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                             [4U]));
    bufp->fullQData(oldp+1042,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                               [4U]),64);
    bufp->fullQData(oldp+1044,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                               [4U]),64);
    bufp->fullSData(oldp+1046,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                               [4U]),16);
    bufp->fullBit(oldp+1047,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                             [4U]));
    bufp->fullQData(oldp+1048,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                               [4U]),64);
    bufp->fullQData(oldp+1050,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                               [4U]),64);
    bufp->fullSData(oldp+1052,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                               [4U]),16);
    bufp->fullBit(oldp+1053,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                             [4U]));
    bufp->fullQData(oldp+1054,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                               [4U]),64);
    bufp->fullQData(oldp+1056,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                               [4U]),64);
    bufp->fullSData(oldp+1058,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                               [4U]),16);
    bufp->fullBit(oldp+1059,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                             [4U]));
    bufp->fullQData(oldp+1060,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                               [4U]),64);
    bufp->fullQData(oldp+1062,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                               [4U]),64);
    bufp->fullSData(oldp+1064,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                               [4U]),16);
    bufp->fullBit(oldp+1065,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                             [4U]));
    bufp->fullQData(oldp+1066,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_n),64);
    bufp->fullQData(oldp+1068,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_n),64);
    bufp->fullSData(oldp+1070,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_n),16);
    bufp->fullBit(oldp+1071,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_n));
    bufp->fullQData(oldp+1072,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_e),64);
    bufp->fullQData(oldp+1074,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_e),64);
    bufp->fullSData(oldp+1076,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_e),16);
    bufp->fullBit(oldp+1077,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_e));
    bufp->fullQData(oldp+1078,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_s),64);
    bufp->fullQData(oldp+1080,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_s),64);
    bufp->fullSData(oldp+1082,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_s),16);
    bufp->fullBit(oldp+1083,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_s));
    bufp->fullQData(oldp+1084,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_w),64);
    bufp->fullQData(oldp+1086,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_w),64);
    bufp->fullSData(oldp+1088,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_w),16);
    bufp->fullBit(oldp+1089,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_w));
    bufp->fullBit(oldp+1090,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                              [4U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                      [4U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                              [4U] 
                                              | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                 [4U] 
                                                 | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                 [4U]))))));
    bufp->fullQData(oldp+1091,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a),64);
    bufp->fullQData(oldp+1093,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b),64);
    bufp->fullSData(oldp+1095,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl),16);
    bufp->fullBit(oldp+1096,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid));
    bufp->fullBit(oldp+1097,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                    >> 8U))));
    bufp->fullCData(oldp+1098,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                      >> 6U))),2);
    bufp->fullCData(oldp+1099,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1100,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))),4);
    bufp->fullBit(oldp+1101,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__am_dest));
    bufp->fullQData(oldp+1102,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__op_result),64);
    bufp->fullSData(oldp+1104,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__unnamedblk1__DOT__resp_ctrl),16);
    bufp->fullQData(oldp+1105,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                               [5U]),64);
    bufp->fullQData(oldp+1107,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                               [5U]),64);
    bufp->fullSData(oldp+1109,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                               [5U]),16);
    bufp->fullBit(oldp+1110,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                             [5U]));
    bufp->fullQData(oldp+1111,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                               [5U]),64);
    bufp->fullQData(oldp+1113,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                               [5U]),64);
    bufp->fullSData(oldp+1115,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                               [5U]),16);
    bufp->fullBit(oldp+1116,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                             [5U]));
    bufp->fullQData(oldp+1117,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                               [5U]),64);
    bufp->fullQData(oldp+1119,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                               [5U]),64);
    bufp->fullSData(oldp+1121,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                               [5U]),16);
    bufp->fullBit(oldp+1122,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                             [5U]));
    bufp->fullQData(oldp+1123,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                               [5U]),64);
    bufp->fullQData(oldp+1125,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                               [5U]),64);
    bufp->fullSData(oldp+1127,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                               [5U]),16);
    bufp->fullBit(oldp+1128,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                             [5U]));
    bufp->fullQData(oldp+1129,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                               [5U]),64);
    bufp->fullQData(oldp+1131,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                               [5U]),64);
    bufp->fullSData(oldp+1133,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                               [5U]),16);
    bufp->fullBit(oldp+1134,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                             [5U]));
    bufp->fullQData(oldp+1135,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_n),64);
    bufp->fullQData(oldp+1137,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_n),64);
    bufp->fullSData(oldp+1139,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_n),16);
    bufp->fullBit(oldp+1140,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_n));
    bufp->fullQData(oldp+1141,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_e),64);
    bufp->fullQData(oldp+1143,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_e),64);
    bufp->fullSData(oldp+1145,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_e),16);
    bufp->fullBit(oldp+1146,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_e));
    bufp->fullQData(oldp+1147,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_s),64);
    bufp->fullQData(oldp+1149,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_s),64);
    bufp->fullSData(oldp+1151,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_s),16);
    bufp->fullBit(oldp+1152,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_s));
    bufp->fullQData(oldp+1153,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_w),64);
    bufp->fullQData(oldp+1155,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_w),64);
    bufp->fullSData(oldp+1157,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_w),16);
    bufp->fullBit(oldp+1158,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_w));
    bufp->fullBit(oldp+1159,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                              [5U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                      [5U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                              [5U] 
                                              | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                 [5U] 
                                                 | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                 [5U]))))));
    bufp->fullQData(oldp+1160,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a),64);
    bufp->fullQData(oldp+1162,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b),64);
    bufp->fullSData(oldp+1164,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl),16);
    bufp->fullBit(oldp+1165,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid));
    bufp->fullBit(oldp+1166,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                    >> 8U))));
    bufp->fullCData(oldp+1167,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                      >> 6U))),2);
    bufp->fullCData(oldp+1168,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1169,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))),4);
    bufp->fullBit(oldp+1170,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__am_dest));
    bufp->fullQData(oldp+1171,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__op_result),64);
    bufp->fullSData(oldp+1173,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__unnamedblk1__DOT__resp_ctrl),16);
    bufp->fullQData(oldp+1174,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                               [6U]),64);
    bufp->fullQData(oldp+1176,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                               [6U]),64);
    bufp->fullSData(oldp+1178,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                               [6U]),16);
    bufp->fullBit(oldp+1179,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                             [6U]));
    bufp->fullQData(oldp+1180,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                               [6U]),64);
    bufp->fullQData(oldp+1182,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                               [6U]),64);
    bufp->fullSData(oldp+1184,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                               [6U]),16);
    bufp->fullBit(oldp+1185,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                             [6U]));
    bufp->fullQData(oldp+1186,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                               [6U]),64);
    bufp->fullQData(oldp+1188,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                               [6U]),64);
    bufp->fullSData(oldp+1190,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                               [6U]),16);
    bufp->fullBit(oldp+1191,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                             [6U]));
    bufp->fullQData(oldp+1192,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                               [6U]),64);
    bufp->fullQData(oldp+1194,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                               [6U]),64);
    bufp->fullSData(oldp+1196,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                               [6U]),16);
    bufp->fullBit(oldp+1197,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                             [6U]));
    bufp->fullQData(oldp+1198,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                               [6U]),64);
    bufp->fullQData(oldp+1200,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                               [6U]),64);
    bufp->fullSData(oldp+1202,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                               [6U]),16);
    bufp->fullBit(oldp+1203,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                             [6U]));
    bufp->fullQData(oldp+1204,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_n),64);
    bufp->fullQData(oldp+1206,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_n),64);
    bufp->fullSData(oldp+1208,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_n),16);
    bufp->fullBit(oldp+1209,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_n));
    bufp->fullQData(oldp+1210,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_e),64);
    bufp->fullQData(oldp+1212,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_e),64);
    bufp->fullSData(oldp+1214,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_e),16);
    bufp->fullBit(oldp+1215,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_e));
    bufp->fullQData(oldp+1216,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_s),64);
    bufp->fullQData(oldp+1218,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_s),64);
    bufp->fullSData(oldp+1220,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_s),16);
    bufp->fullBit(oldp+1221,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_s));
    bufp->fullBit(oldp+1222,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                              [6U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                      [6U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                              [6U] 
                                              | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                 [6U] 
                                                 | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                 [6U]))))));
    bufp->fullQData(oldp+1223,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a),64);
    bufp->fullQData(oldp+1225,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b),64);
    bufp->fullSData(oldp+1227,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl),16);
    bufp->fullBit(oldp+1228,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid));
    bufp->fullBit(oldp+1229,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                    >> 8U))));
    bufp->fullCData(oldp+1230,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                      >> 6U))),2);
    bufp->fullCData(oldp+1231,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1232,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))),4);
    bufp->fullBit(oldp+1233,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__am_dest));
    bufp->fullQData(oldp+1234,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__op_result),64);
    bufp->fullSData(oldp+1236,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__unnamedblk1__DOT__resp_ctrl),16);
    bufp->fullQData(oldp+1237,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                               [7U]),64);
    bufp->fullQData(oldp+1239,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                               [7U]),64);
    bufp->fullSData(oldp+1241,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                               [7U]),16);
    bufp->fullBit(oldp+1242,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                             [7U]));
    bufp->fullQData(oldp+1243,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                               [7U]),64);
    bufp->fullQData(oldp+1245,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                               [7U]),64);
    bufp->fullSData(oldp+1247,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                               [7U]),16);
    bufp->fullBit(oldp+1248,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                             [7U]));
    bufp->fullQData(oldp+1249,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                               [7U]),64);
    bufp->fullQData(oldp+1251,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                               [7U]),64);
    bufp->fullSData(oldp+1253,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                               [7U]),16);
    bufp->fullBit(oldp+1254,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                             [7U]));
    bufp->fullQData(oldp+1255,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                               [7U]),64);
    bufp->fullQData(oldp+1257,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                               [7U]),64);
    bufp->fullSData(oldp+1259,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                               [7U]),16);
    bufp->fullBit(oldp+1260,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                             [7U]));
    bufp->fullQData(oldp+1261,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                               [7U]),64);
    bufp->fullQData(oldp+1263,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                               [7U]),64);
    bufp->fullSData(oldp+1265,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                               [7U]),16);
    bufp->fullBit(oldp+1266,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                             [7U]));
    bufp->fullQData(oldp+1267,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_n),64);
    bufp->fullQData(oldp+1269,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_n),64);
    bufp->fullSData(oldp+1271,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_n),16);
    bufp->fullBit(oldp+1272,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_n));
    bufp->fullQData(oldp+1273,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_e),64);
    bufp->fullQData(oldp+1275,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_e),64);
    bufp->fullSData(oldp+1277,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_e),16);
    bufp->fullBit(oldp+1278,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_e));
    bufp->fullQData(oldp+1279,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_s),64);
    bufp->fullQData(oldp+1281,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_s),64);
    bufp->fullSData(oldp+1283,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_s),16);
    bufp->fullBit(oldp+1284,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_s));
    bufp->fullQData(oldp+1285,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_w),64);
    bufp->fullQData(oldp+1287,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_w),64);
    bufp->fullSData(oldp+1289,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_w),16);
    bufp->fullBit(oldp+1290,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_w));
    bufp->fullBit(oldp+1291,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                              [7U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                      [7U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                              [7U] 
                                              | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                 [7U] 
                                                 | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                 [7U]))))));
    bufp->fullQData(oldp+1292,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a),64);
    bufp->fullQData(oldp+1294,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b),64);
    bufp->fullSData(oldp+1296,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl),16);
    bufp->fullBit(oldp+1297,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid));
    bufp->fullBit(oldp+1298,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                    >> 8U))));
    bufp->fullCData(oldp+1299,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                      >> 6U))),2);
    bufp->fullCData(oldp+1300,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1301,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))),4);
    bufp->fullBit(oldp+1302,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__am_dest));
    bufp->fullQData(oldp+1303,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__op_result),64);
    bufp->fullSData(oldp+1305,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__unnamedblk1__DOT__resp_ctrl),16);
    bufp->fullQData(oldp+1306,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                               [8U]),64);
    bufp->fullQData(oldp+1308,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                               [8U]),64);
    bufp->fullSData(oldp+1310,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                               [8U]),16);
    bufp->fullBit(oldp+1311,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                             [8U]));
    bufp->fullQData(oldp+1312,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                               [8U]),64);
    bufp->fullQData(oldp+1314,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                               [8U]),64);
    bufp->fullSData(oldp+1316,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                               [8U]),16);
    bufp->fullBit(oldp+1317,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                             [8U]));
    bufp->fullQData(oldp+1318,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                               [8U]),64);
    bufp->fullQData(oldp+1320,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                               [8U]),64);
    bufp->fullSData(oldp+1322,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                               [8U]),16);
    bufp->fullBit(oldp+1323,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                             [8U]));
    bufp->fullQData(oldp+1324,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                               [8U]),64);
    bufp->fullQData(oldp+1326,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                               [8U]),64);
    bufp->fullSData(oldp+1328,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                               [8U]),16);
    bufp->fullBit(oldp+1329,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                             [8U]));
    bufp->fullQData(oldp+1330,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                               [8U]),64);
    bufp->fullQData(oldp+1332,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                               [8U]),64);
    bufp->fullSData(oldp+1334,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                               [8U]),16);
    bufp->fullBit(oldp+1335,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                             [8U]));
    bufp->fullQData(oldp+1336,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_n),64);
    bufp->fullQData(oldp+1338,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_n),64);
    bufp->fullSData(oldp+1340,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_n),16);
    bufp->fullBit(oldp+1341,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_n));
    bufp->fullQData(oldp+1342,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_e),64);
    bufp->fullQData(oldp+1344,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_e),64);
    bufp->fullSData(oldp+1346,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_e),16);
    bufp->fullBit(oldp+1347,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_e));
    bufp->fullQData(oldp+1348,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_s),64);
    bufp->fullQData(oldp+1350,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_s),64);
    bufp->fullSData(oldp+1352,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_s),16);
    bufp->fullBit(oldp+1353,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_s));
    bufp->fullQData(oldp+1354,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_w),64);
    bufp->fullQData(oldp+1356,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_w),64);
    bufp->fullSData(oldp+1358,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_w),16);
    bufp->fullBit(oldp+1359,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_w));
    bufp->fullBit(oldp+1360,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                              [8U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                      [8U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                              [8U] 
                                              | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                 [8U] 
                                                 | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                 [8U]))))));
    bufp->fullQData(oldp+1361,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a),64);
    bufp->fullQData(oldp+1363,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b),64);
    bufp->fullSData(oldp+1365,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl),16);
    bufp->fullBit(oldp+1366,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid));
    bufp->fullBit(oldp+1367,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                    >> 8U))));
    bufp->fullCData(oldp+1368,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                      >> 6U))),2);
    bufp->fullCData(oldp+1369,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1370,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))),4);
    bufp->fullBit(oldp+1371,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__am_dest));
    bufp->fullQData(oldp+1372,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__op_result),64);
    bufp->fullSData(oldp+1374,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__unnamedblk1__DOT__resp_ctrl),16);
    bufp->fullIData(oldp+1375,(vlSelfRef.calculator__DOT__int_con__DOT__unnamedblk4__DOT__i),32);
    bufp->fullBit(oldp+1376,(vlSelfRef.clk));
    bufp->fullQData(oldp+1377,(vlSelfRef.a),64);
    bufp->fullQData(oldp+1379,(vlSelfRef.b),64);
    bufp->fullCData(oldp+1381,(vlSelfRef.mode),4);
    bufp->fullQData(oldp+1382,(vlSelfRef.result),64);
    bufp->fullBit(oldp+1384,(vlSelfRef.valid));
}
