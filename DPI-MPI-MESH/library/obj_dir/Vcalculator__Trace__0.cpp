// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcalculator__Syms.h"


void Vcalculator___024root__trace_chg_0_sub_0(Vcalculator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcalculator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_chg_0\n"); );
    // Init
    Vcalculator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcalculator___024root*>(voidSelf);
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcalculator___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcalculator___024root__trace_chg_0_sub_0(Vcalculator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_chg_0_sub_0\n"); );
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgQData(oldp+0,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[0]),64);
        bufp->chgQData(oldp+2,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[1]),64);
        bufp->chgQData(oldp+4,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[2]),64);
        bufp->chgQData(oldp+6,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[3]),64);
        bufp->chgQData(oldp+8,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[4]),64);
        bufp->chgQData(oldp+10,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[5]),64);
        bufp->chgQData(oldp+12,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[6]),64);
        bufp->chgQData(oldp+14,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[7]),64);
        bufp->chgQData(oldp+16,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_a[8]),64);
        bufp->chgQData(oldp+18,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[0]),64);
        bufp->chgQData(oldp+20,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[1]),64);
        bufp->chgQData(oldp+22,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[2]),64);
        bufp->chgQData(oldp+24,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[3]),64);
        bufp->chgQData(oldp+26,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[4]),64);
        bufp->chgQData(oldp+28,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[5]),64);
        bufp->chgQData(oldp+30,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[6]),64);
        bufp->chgQData(oldp+32,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[7]),64);
        bufp->chgQData(oldp+34,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_b[8]),64);
        bufp->chgSData(oldp+36,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[0]),16);
        bufp->chgSData(oldp+37,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[1]),16);
        bufp->chgSData(oldp+38,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[2]),16);
        bufp->chgSData(oldp+39,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[3]),16);
        bufp->chgSData(oldp+40,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[4]),16);
        bufp->chgSData(oldp+41,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[5]),16);
        bufp->chgSData(oldp+42,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[6]),16);
        bufp->chgSData(oldp+43,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[7]),16);
        bufp->chgSData(oldp+44,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_ctrl[8]),16);
        bufp->chgBit(oldp+45,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[0]));
        bufp->chgBit(oldp+46,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[1]));
        bufp->chgBit(oldp+47,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[2]));
        bufp->chgBit(oldp+48,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[3]));
        bufp->chgBit(oldp+49,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[4]));
        bufp->chgBit(oldp+50,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[5]));
        bufp->chgBit(oldp+51,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[6]));
        bufp->chgBit(oldp+52,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[7]));
        bufp->chgBit(oldp+53,(vlSelfRef.calculator__DOT__int_con__DOT__next_host_in_valid[8]));
        bufp->chgBit(oldp+54,(vlSelfRef.calculator__DOT__int_con__DOT__next_is_busy));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+55,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[0]),64);
        bufp->chgQData(oldp+57,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[1]),64);
        bufp->chgQData(oldp+59,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[2]),64);
        bufp->chgQData(oldp+61,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[3]),64);
        bufp->chgQData(oldp+63,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[4]),64);
        bufp->chgQData(oldp+65,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[5]),64);
        bufp->chgQData(oldp+67,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[6]),64);
        bufp->chgQData(oldp+69,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[7]),64);
        bufp->chgQData(oldp+71,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_n[8]),64);
        bufp->chgQData(oldp+73,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[0]),64);
        bufp->chgQData(oldp+75,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[1]),64);
        bufp->chgQData(oldp+77,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[2]),64);
        bufp->chgQData(oldp+79,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[3]),64);
        bufp->chgQData(oldp+81,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[4]),64);
        bufp->chgQData(oldp+83,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[5]),64);
        bufp->chgQData(oldp+85,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[6]),64);
        bufp->chgQData(oldp+87,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[7]),64);
        bufp->chgQData(oldp+89,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_n[8]),64);
        bufp->chgSData(oldp+91,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[0]),16);
        bufp->chgSData(oldp+92,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[1]),16);
        bufp->chgSData(oldp+93,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[2]),16);
        bufp->chgSData(oldp+94,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[3]),16);
        bufp->chgSData(oldp+95,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[4]),16);
        bufp->chgSData(oldp+96,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[5]),16);
        bufp->chgSData(oldp+97,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[6]),16);
        bufp->chgSData(oldp+98,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[7]),16);
        bufp->chgSData(oldp+99,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_n[8]),16);
        bufp->chgBit(oldp+100,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[0]));
        bufp->chgBit(oldp+101,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[1]));
        bufp->chgBit(oldp+102,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[2]));
        bufp->chgBit(oldp+103,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[3]));
        bufp->chgBit(oldp+104,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[4]));
        bufp->chgBit(oldp+105,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[5]));
        bufp->chgBit(oldp+106,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[6]));
        bufp->chgBit(oldp+107,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[7]));
        bufp->chgBit(oldp+108,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_n[8]));
        bufp->chgQData(oldp+109,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[0]),64);
        bufp->chgQData(oldp+111,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[1]),64);
        bufp->chgQData(oldp+113,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[2]),64);
        bufp->chgQData(oldp+115,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[3]),64);
        bufp->chgQData(oldp+117,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[4]),64);
        bufp->chgQData(oldp+119,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[5]),64);
        bufp->chgQData(oldp+121,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[6]),64);
        bufp->chgQData(oldp+123,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[7]),64);
        bufp->chgQData(oldp+125,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_e[8]),64);
        bufp->chgQData(oldp+127,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[0]),64);
        bufp->chgQData(oldp+129,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[1]),64);
        bufp->chgQData(oldp+131,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[2]),64);
        bufp->chgQData(oldp+133,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[3]),64);
        bufp->chgQData(oldp+135,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[4]),64);
        bufp->chgQData(oldp+137,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[5]),64);
        bufp->chgQData(oldp+139,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[6]),64);
        bufp->chgQData(oldp+141,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[7]),64);
        bufp->chgQData(oldp+143,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_e[8]),64);
        bufp->chgSData(oldp+145,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[0]),16);
        bufp->chgSData(oldp+146,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[1]),16);
        bufp->chgSData(oldp+147,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[2]),16);
        bufp->chgSData(oldp+148,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[3]),16);
        bufp->chgSData(oldp+149,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[4]),16);
        bufp->chgSData(oldp+150,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[5]),16);
        bufp->chgSData(oldp+151,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[6]),16);
        bufp->chgSData(oldp+152,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[7]),16);
        bufp->chgSData(oldp+153,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_e[8]),16);
        bufp->chgBit(oldp+154,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[0]));
        bufp->chgBit(oldp+155,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[1]));
        bufp->chgBit(oldp+156,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[2]));
        bufp->chgBit(oldp+157,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[3]));
        bufp->chgBit(oldp+158,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[4]));
        bufp->chgBit(oldp+159,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[5]));
        bufp->chgBit(oldp+160,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[6]));
        bufp->chgBit(oldp+161,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[7]));
        bufp->chgBit(oldp+162,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_e[8]));
        bufp->chgQData(oldp+163,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[0]),64);
        bufp->chgQData(oldp+165,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[1]),64);
        bufp->chgQData(oldp+167,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[2]),64);
        bufp->chgQData(oldp+169,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[3]),64);
        bufp->chgQData(oldp+171,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[4]),64);
        bufp->chgQData(oldp+173,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[5]),64);
        bufp->chgQData(oldp+175,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[6]),64);
        bufp->chgQData(oldp+177,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[7]),64);
        bufp->chgQData(oldp+179,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_s[8]),64);
        bufp->chgQData(oldp+181,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[0]),64);
        bufp->chgQData(oldp+183,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[1]),64);
        bufp->chgQData(oldp+185,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[2]),64);
        bufp->chgQData(oldp+187,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[3]),64);
        bufp->chgQData(oldp+189,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[4]),64);
        bufp->chgQData(oldp+191,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[5]),64);
        bufp->chgQData(oldp+193,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[6]),64);
        bufp->chgQData(oldp+195,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[7]),64);
        bufp->chgQData(oldp+197,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_s[8]),64);
        bufp->chgSData(oldp+199,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[0]),16);
        bufp->chgSData(oldp+200,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[1]),16);
        bufp->chgSData(oldp+201,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[2]),16);
        bufp->chgSData(oldp+202,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[3]),16);
        bufp->chgSData(oldp+203,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[4]),16);
        bufp->chgSData(oldp+204,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[5]),16);
        bufp->chgSData(oldp+205,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[6]),16);
        bufp->chgSData(oldp+206,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[7]),16);
        bufp->chgSData(oldp+207,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_s[8]),16);
        bufp->chgBit(oldp+208,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[0]));
        bufp->chgBit(oldp+209,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[1]));
        bufp->chgBit(oldp+210,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[2]));
        bufp->chgBit(oldp+211,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[3]));
        bufp->chgBit(oldp+212,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[4]));
        bufp->chgBit(oldp+213,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[5]));
        bufp->chgBit(oldp+214,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[6]));
        bufp->chgBit(oldp+215,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[7]));
        bufp->chgBit(oldp+216,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_s[8]));
        bufp->chgQData(oldp+217,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[0]),64);
        bufp->chgQData(oldp+219,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[1]),64);
        bufp->chgQData(oldp+221,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[2]),64);
        bufp->chgQData(oldp+223,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[3]),64);
        bufp->chgQData(oldp+225,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[4]),64);
        bufp->chgQData(oldp+227,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[5]),64);
        bufp->chgQData(oldp+229,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[6]),64);
        bufp->chgQData(oldp+231,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[7]),64);
        bufp->chgQData(oldp+233,(vlSelfRef.calculator__DOT__int_con__DOT__out_a_w[8]),64);
        bufp->chgQData(oldp+235,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[0]),64);
        bufp->chgQData(oldp+237,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[1]),64);
        bufp->chgQData(oldp+239,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[2]),64);
        bufp->chgQData(oldp+241,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[3]),64);
        bufp->chgQData(oldp+243,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[4]),64);
        bufp->chgQData(oldp+245,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[5]),64);
        bufp->chgQData(oldp+247,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[6]),64);
        bufp->chgQData(oldp+249,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[7]),64);
        bufp->chgQData(oldp+251,(vlSelfRef.calculator__DOT__int_con__DOT__out_b_w[8]),64);
        bufp->chgSData(oldp+253,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[0]),16);
        bufp->chgSData(oldp+254,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[1]),16);
        bufp->chgSData(oldp+255,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[2]),16);
        bufp->chgSData(oldp+256,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[3]),16);
        bufp->chgSData(oldp+257,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[4]),16);
        bufp->chgSData(oldp+258,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[5]),16);
        bufp->chgSData(oldp+259,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[6]),16);
        bufp->chgSData(oldp+260,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[7]),16);
        bufp->chgSData(oldp+261,(vlSelfRef.calculator__DOT__int_con__DOT__out_ctrl_w[8]),16);
        bufp->chgBit(oldp+262,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[0]));
        bufp->chgBit(oldp+263,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[1]));
        bufp->chgBit(oldp+264,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[2]));
        bufp->chgBit(oldp+265,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[3]));
        bufp->chgBit(oldp+266,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[4]));
        bufp->chgBit(oldp+267,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[5]));
        bufp->chgBit(oldp+268,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[6]));
        bufp->chgBit(oldp+269,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[7]));
        bufp->chgBit(oldp+270,(vlSelfRef.calculator__DOT__int_con__DOT__out_valid_w[8]));
        bufp->chgQData(oldp+271,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[0]),64);
        bufp->chgQData(oldp+273,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[1]),64);
        bufp->chgQData(oldp+275,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[2]),64);
        bufp->chgQData(oldp+277,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[3]),64);
        bufp->chgQData(oldp+279,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[4]),64);
        bufp->chgQData(oldp+281,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[5]),64);
        bufp->chgQData(oldp+283,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[6]),64);
        bufp->chgQData(oldp+285,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[7]),64);
        bufp->chgQData(oldp+287,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_a[8]),64);
        bufp->chgBit(oldp+289,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[0]));
        bufp->chgBit(oldp+290,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[1]));
        bufp->chgBit(oldp+291,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[2]));
        bufp->chgBit(oldp+292,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[3]));
        bufp->chgBit(oldp+293,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[4]));
        bufp->chgBit(oldp+294,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[5]));
        bufp->chgBit(oldp+295,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[6]));
        bufp->chgBit(oldp+296,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[7]));
        bufp->chgBit(oldp+297,(vlSelfRef.calculator__DOT__int_con__DOT__host_out_valid[8]));
        bufp->chgQData(oldp+298,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[0]),64);
        bufp->chgQData(oldp+300,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[1]),64);
        bufp->chgQData(oldp+302,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[2]),64);
        bufp->chgQData(oldp+304,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[3]),64);
        bufp->chgQData(oldp+306,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[4]),64);
        bufp->chgQData(oldp+308,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[5]),64);
        bufp->chgQData(oldp+310,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[6]),64);
        bufp->chgQData(oldp+312,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[7]),64);
        bufp->chgQData(oldp+314,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n[8]),64);
        bufp->chgQData(oldp+316,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[0]),64);
        bufp->chgQData(oldp+318,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[1]),64);
        bufp->chgQData(oldp+320,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[2]),64);
        bufp->chgQData(oldp+322,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[3]),64);
        bufp->chgQData(oldp+324,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[4]),64);
        bufp->chgQData(oldp+326,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[5]),64);
        bufp->chgQData(oldp+328,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[6]),64);
        bufp->chgQData(oldp+330,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[7]),64);
        bufp->chgQData(oldp+332,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n[8]),64);
        bufp->chgSData(oldp+334,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[0]),16);
        bufp->chgSData(oldp+335,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[1]),16);
        bufp->chgSData(oldp+336,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[2]),16);
        bufp->chgSData(oldp+337,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[3]),16);
        bufp->chgSData(oldp+338,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[4]),16);
        bufp->chgSData(oldp+339,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[5]),16);
        bufp->chgSData(oldp+340,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[6]),16);
        bufp->chgSData(oldp+341,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[7]),16);
        bufp->chgSData(oldp+342,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n[8]),16);
        bufp->chgBit(oldp+343,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[0]));
        bufp->chgBit(oldp+344,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[1]));
        bufp->chgBit(oldp+345,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[2]));
        bufp->chgBit(oldp+346,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[3]));
        bufp->chgBit(oldp+347,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[4]));
        bufp->chgBit(oldp+348,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[5]));
        bufp->chgBit(oldp+349,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[6]));
        bufp->chgBit(oldp+350,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[7]));
        bufp->chgBit(oldp+351,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n[8]));
        bufp->chgQData(oldp+352,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[0]),64);
        bufp->chgQData(oldp+354,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[1]),64);
        bufp->chgQData(oldp+356,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[2]),64);
        bufp->chgQData(oldp+358,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[3]),64);
        bufp->chgQData(oldp+360,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[4]),64);
        bufp->chgQData(oldp+362,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[5]),64);
        bufp->chgQData(oldp+364,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[6]),64);
        bufp->chgQData(oldp+366,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[7]),64);
        bufp->chgQData(oldp+368,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e[8]),64);
        bufp->chgQData(oldp+370,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[0]),64);
        bufp->chgQData(oldp+372,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[1]),64);
        bufp->chgQData(oldp+374,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[2]),64);
        bufp->chgQData(oldp+376,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[3]),64);
        bufp->chgQData(oldp+378,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[4]),64);
        bufp->chgQData(oldp+380,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[5]),64);
        bufp->chgQData(oldp+382,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[6]),64);
        bufp->chgQData(oldp+384,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[7]),64);
        bufp->chgQData(oldp+386,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e[8]),64);
        bufp->chgSData(oldp+388,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[0]),16);
        bufp->chgSData(oldp+389,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[1]),16);
        bufp->chgSData(oldp+390,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[2]),16);
        bufp->chgSData(oldp+391,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[3]),16);
        bufp->chgSData(oldp+392,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[4]),16);
        bufp->chgSData(oldp+393,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[5]),16);
        bufp->chgSData(oldp+394,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[6]),16);
        bufp->chgSData(oldp+395,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[7]),16);
        bufp->chgSData(oldp+396,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e[8]),16);
        bufp->chgBit(oldp+397,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[0]));
        bufp->chgBit(oldp+398,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[1]));
        bufp->chgBit(oldp+399,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[2]));
        bufp->chgBit(oldp+400,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[3]));
        bufp->chgBit(oldp+401,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[4]));
        bufp->chgBit(oldp+402,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[5]));
        bufp->chgBit(oldp+403,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[6]));
        bufp->chgBit(oldp+404,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[7]));
        bufp->chgBit(oldp+405,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e[8]));
        bufp->chgQData(oldp+406,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[0]),64);
        bufp->chgQData(oldp+408,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[1]),64);
        bufp->chgQData(oldp+410,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[2]),64);
        bufp->chgQData(oldp+412,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[3]),64);
        bufp->chgQData(oldp+414,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[4]),64);
        bufp->chgQData(oldp+416,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[5]),64);
        bufp->chgQData(oldp+418,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[6]),64);
        bufp->chgQData(oldp+420,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[7]),64);
        bufp->chgQData(oldp+422,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s[8]),64);
        bufp->chgQData(oldp+424,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[0]),64);
        bufp->chgQData(oldp+426,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[1]),64);
        bufp->chgQData(oldp+428,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[2]),64);
        bufp->chgQData(oldp+430,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[3]),64);
        bufp->chgQData(oldp+432,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[4]),64);
        bufp->chgQData(oldp+434,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[5]),64);
        bufp->chgQData(oldp+436,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[6]),64);
        bufp->chgQData(oldp+438,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[7]),64);
        bufp->chgQData(oldp+440,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s[8]),64);
        bufp->chgSData(oldp+442,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[0]),16);
        bufp->chgSData(oldp+443,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[1]),16);
        bufp->chgSData(oldp+444,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[2]),16);
        bufp->chgSData(oldp+445,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[3]),16);
        bufp->chgSData(oldp+446,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[4]),16);
        bufp->chgSData(oldp+447,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[5]),16);
        bufp->chgSData(oldp+448,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[6]),16);
        bufp->chgSData(oldp+449,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[7]),16);
        bufp->chgSData(oldp+450,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s[8]),16);
        bufp->chgBit(oldp+451,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[0]));
        bufp->chgBit(oldp+452,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[1]));
        bufp->chgBit(oldp+453,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[2]));
        bufp->chgBit(oldp+454,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[3]));
        bufp->chgBit(oldp+455,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[4]));
        bufp->chgBit(oldp+456,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[5]));
        bufp->chgBit(oldp+457,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[6]));
        bufp->chgBit(oldp+458,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[7]));
        bufp->chgBit(oldp+459,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s[8]));
        bufp->chgQData(oldp+460,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[0]),64);
        bufp->chgQData(oldp+462,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[1]),64);
        bufp->chgQData(oldp+464,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[2]),64);
        bufp->chgQData(oldp+466,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[3]),64);
        bufp->chgQData(oldp+468,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[4]),64);
        bufp->chgQData(oldp+470,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[5]),64);
        bufp->chgQData(oldp+472,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[6]),64);
        bufp->chgQData(oldp+474,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[7]),64);
        bufp->chgQData(oldp+476,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w[8]),64);
        bufp->chgQData(oldp+478,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[0]),64);
        bufp->chgQData(oldp+480,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[1]),64);
        bufp->chgQData(oldp+482,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[2]),64);
        bufp->chgQData(oldp+484,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[3]),64);
        bufp->chgQData(oldp+486,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[4]),64);
        bufp->chgQData(oldp+488,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[5]),64);
        bufp->chgQData(oldp+490,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[6]),64);
        bufp->chgQData(oldp+492,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[7]),64);
        bufp->chgQData(oldp+494,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w[8]),64);
        bufp->chgSData(oldp+496,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[0]),16);
        bufp->chgSData(oldp+497,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[1]),16);
        bufp->chgSData(oldp+498,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[2]),16);
        bufp->chgSData(oldp+499,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[3]),16);
        bufp->chgSData(oldp+500,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[4]),16);
        bufp->chgSData(oldp+501,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[5]),16);
        bufp->chgSData(oldp+502,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[6]),16);
        bufp->chgSData(oldp+503,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[7]),16);
        bufp->chgSData(oldp+504,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w[8]),16);
        bufp->chgBit(oldp+505,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[0]));
        bufp->chgBit(oldp+506,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[1]));
        bufp->chgBit(oldp+507,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[2]));
        bufp->chgBit(oldp+508,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[3]));
        bufp->chgBit(oldp+509,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[4]));
        bufp->chgBit(oldp+510,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[5]));
        bufp->chgBit(oldp+511,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[6]));
        bufp->chgBit(oldp+512,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[7]));
        bufp->chgBit(oldp+513,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w[8]));
        bufp->chgQData(oldp+514,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[0]),64);
        bufp->chgQData(oldp+516,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[1]),64);
        bufp->chgQData(oldp+518,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[2]),64);
        bufp->chgQData(oldp+520,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[3]),64);
        bufp->chgQData(oldp+522,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[4]),64);
        bufp->chgQData(oldp+524,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[5]),64);
        bufp->chgQData(oldp+526,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[6]),64);
        bufp->chgQData(oldp+528,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[7]),64);
        bufp->chgQData(oldp+530,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a[8]),64);
        bufp->chgQData(oldp+532,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[0]),64);
        bufp->chgQData(oldp+534,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[1]),64);
        bufp->chgQData(oldp+536,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[2]),64);
        bufp->chgQData(oldp+538,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[3]),64);
        bufp->chgQData(oldp+540,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[4]),64);
        bufp->chgQData(oldp+542,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[5]),64);
        bufp->chgQData(oldp+544,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[6]),64);
        bufp->chgQData(oldp+546,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[7]),64);
        bufp->chgQData(oldp+548,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b[8]),64);
        bufp->chgSData(oldp+550,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[0]),16);
        bufp->chgSData(oldp+551,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[1]),16);
        bufp->chgSData(oldp+552,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[2]),16);
        bufp->chgSData(oldp+553,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[3]),16);
        bufp->chgSData(oldp+554,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[4]),16);
        bufp->chgSData(oldp+555,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[5]),16);
        bufp->chgSData(oldp+556,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[6]),16);
        bufp->chgSData(oldp+557,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[7]),16);
        bufp->chgSData(oldp+558,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl[8]),16);
        bufp->chgBit(oldp+559,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[0]));
        bufp->chgBit(oldp+560,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[1]));
        bufp->chgBit(oldp+561,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[2]));
        bufp->chgBit(oldp+562,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[3]));
        bufp->chgBit(oldp+563,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[4]));
        bufp->chgBit(oldp+564,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[5]));
        bufp->chgBit(oldp+565,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[6]));
        bufp->chgBit(oldp+566,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[7]));
        bufp->chgBit(oldp+567,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid[8]));
        bufp->chgQData(oldp+568,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[0]),64);
        bufp->chgQData(oldp+570,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[1]),64);
        bufp->chgQData(oldp+572,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[2]),64);
        bufp->chgQData(oldp+574,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[3]),64);
        bufp->chgQData(oldp+576,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[4]),64);
        bufp->chgQData(oldp+578,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[5]),64);
        bufp->chgQData(oldp+580,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[6]),64);
        bufp->chgQData(oldp+582,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[7]),64);
        bufp->chgQData(oldp+584,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_n[8]),64);
        bufp->chgQData(oldp+586,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[0]),64);
        bufp->chgQData(oldp+588,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[1]),64);
        bufp->chgQData(oldp+590,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[2]),64);
        bufp->chgQData(oldp+592,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[3]),64);
        bufp->chgQData(oldp+594,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[4]),64);
        bufp->chgQData(oldp+596,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[5]),64);
        bufp->chgQData(oldp+598,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[6]),64);
        bufp->chgQData(oldp+600,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[7]),64);
        bufp->chgQData(oldp+602,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_n[8]),64);
        bufp->chgSData(oldp+604,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[0]),16);
        bufp->chgSData(oldp+605,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[1]),16);
        bufp->chgSData(oldp+606,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[2]),16);
        bufp->chgSData(oldp+607,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[3]),16);
        bufp->chgSData(oldp+608,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[4]),16);
        bufp->chgSData(oldp+609,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[5]),16);
        bufp->chgSData(oldp+610,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[6]),16);
        bufp->chgSData(oldp+611,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[7]),16);
        bufp->chgSData(oldp+612,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_n[8]),16);
        bufp->chgBit(oldp+613,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[0]));
        bufp->chgBit(oldp+614,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[1]));
        bufp->chgBit(oldp+615,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[2]));
        bufp->chgBit(oldp+616,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[3]));
        bufp->chgBit(oldp+617,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[4]));
        bufp->chgBit(oldp+618,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[5]));
        bufp->chgBit(oldp+619,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[6]));
        bufp->chgBit(oldp+620,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[7]));
        bufp->chgBit(oldp+621,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_n[8]));
        bufp->chgQData(oldp+622,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[0]),64);
        bufp->chgQData(oldp+624,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[1]),64);
        bufp->chgQData(oldp+626,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[2]),64);
        bufp->chgQData(oldp+628,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[3]),64);
        bufp->chgQData(oldp+630,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[4]),64);
        bufp->chgQData(oldp+632,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[5]),64);
        bufp->chgQData(oldp+634,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[6]),64);
        bufp->chgQData(oldp+636,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[7]),64);
        bufp->chgQData(oldp+638,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_e[8]),64);
        bufp->chgQData(oldp+640,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[0]),64);
        bufp->chgQData(oldp+642,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[1]),64);
        bufp->chgQData(oldp+644,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[2]),64);
        bufp->chgQData(oldp+646,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[3]),64);
        bufp->chgQData(oldp+648,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[4]),64);
        bufp->chgQData(oldp+650,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[5]),64);
        bufp->chgQData(oldp+652,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[6]),64);
        bufp->chgQData(oldp+654,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[7]),64);
        bufp->chgQData(oldp+656,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_e[8]),64);
        bufp->chgSData(oldp+658,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[0]),16);
        bufp->chgSData(oldp+659,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[1]),16);
        bufp->chgSData(oldp+660,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[2]),16);
        bufp->chgSData(oldp+661,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[3]),16);
        bufp->chgSData(oldp+662,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[4]),16);
        bufp->chgSData(oldp+663,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[5]),16);
        bufp->chgSData(oldp+664,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[6]),16);
        bufp->chgSData(oldp+665,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[7]),16);
        bufp->chgSData(oldp+666,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_e[8]),16);
        bufp->chgBit(oldp+667,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[0]));
        bufp->chgBit(oldp+668,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[1]));
        bufp->chgBit(oldp+669,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[2]));
        bufp->chgBit(oldp+670,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[3]));
        bufp->chgBit(oldp+671,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[4]));
        bufp->chgBit(oldp+672,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[5]));
        bufp->chgBit(oldp+673,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[6]));
        bufp->chgBit(oldp+674,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[7]));
        bufp->chgBit(oldp+675,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_e[8]));
        bufp->chgQData(oldp+676,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[0]),64);
        bufp->chgQData(oldp+678,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[1]),64);
        bufp->chgQData(oldp+680,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[2]),64);
        bufp->chgQData(oldp+682,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[3]),64);
        bufp->chgQData(oldp+684,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[4]),64);
        bufp->chgQData(oldp+686,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[5]),64);
        bufp->chgQData(oldp+688,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[6]),64);
        bufp->chgQData(oldp+690,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[7]),64);
        bufp->chgQData(oldp+692,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_s[8]),64);
        bufp->chgQData(oldp+694,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[0]),64);
        bufp->chgQData(oldp+696,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[1]),64);
        bufp->chgQData(oldp+698,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[2]),64);
        bufp->chgQData(oldp+700,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[3]),64);
        bufp->chgQData(oldp+702,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[4]),64);
        bufp->chgQData(oldp+704,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[5]),64);
        bufp->chgQData(oldp+706,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[6]),64);
        bufp->chgQData(oldp+708,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[7]),64);
        bufp->chgQData(oldp+710,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_s[8]),64);
        bufp->chgSData(oldp+712,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[0]),16);
        bufp->chgSData(oldp+713,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[1]),16);
        bufp->chgSData(oldp+714,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[2]),16);
        bufp->chgSData(oldp+715,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[3]),16);
        bufp->chgSData(oldp+716,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[4]),16);
        bufp->chgSData(oldp+717,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[5]),16);
        bufp->chgSData(oldp+718,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[6]),16);
        bufp->chgSData(oldp+719,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[7]),16);
        bufp->chgSData(oldp+720,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_s[8]),16);
        bufp->chgBit(oldp+721,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[0]));
        bufp->chgBit(oldp+722,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[1]));
        bufp->chgBit(oldp+723,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[2]));
        bufp->chgBit(oldp+724,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[3]));
        bufp->chgBit(oldp+725,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[4]));
        bufp->chgBit(oldp+726,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[5]));
        bufp->chgBit(oldp+727,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[6]));
        bufp->chgBit(oldp+728,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[7]));
        bufp->chgBit(oldp+729,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_s[8]));
        bufp->chgQData(oldp+730,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[0]),64);
        bufp->chgQData(oldp+732,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[1]),64);
        bufp->chgQData(oldp+734,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[2]),64);
        bufp->chgQData(oldp+736,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[3]),64);
        bufp->chgQData(oldp+738,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[4]),64);
        bufp->chgQData(oldp+740,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[5]),64);
        bufp->chgQData(oldp+742,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[6]),64);
        bufp->chgQData(oldp+744,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[7]),64);
        bufp->chgQData(oldp+746,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_a_w[8]),64);
        bufp->chgQData(oldp+748,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[0]),64);
        bufp->chgQData(oldp+750,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[1]),64);
        bufp->chgQData(oldp+752,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[2]),64);
        bufp->chgQData(oldp+754,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[3]),64);
        bufp->chgQData(oldp+756,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[4]),64);
        bufp->chgQData(oldp+758,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[5]),64);
        bufp->chgQData(oldp+760,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[6]),64);
        bufp->chgQData(oldp+762,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[7]),64);
        bufp->chgQData(oldp+764,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_b_w[8]),64);
        bufp->chgSData(oldp+766,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[0]),16);
        bufp->chgSData(oldp+767,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[1]),16);
        bufp->chgSData(oldp+768,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[2]),16);
        bufp->chgSData(oldp+769,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[3]),16);
        bufp->chgSData(oldp+770,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[4]),16);
        bufp->chgSData(oldp+771,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[5]),16);
        bufp->chgSData(oldp+772,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[6]),16);
        bufp->chgSData(oldp+773,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[7]),16);
        bufp->chgSData(oldp+774,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_ctrl_w[8]),16);
        bufp->chgBit(oldp+775,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[0]));
        bufp->chgBit(oldp+776,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[1]));
        bufp->chgBit(oldp+777,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[2]));
        bufp->chgBit(oldp+778,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[3]));
        bufp->chgBit(oldp+779,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[4]));
        bufp->chgBit(oldp+780,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[5]));
        bufp->chgBit(oldp+781,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[6]));
        bufp->chgBit(oldp+782,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[7]));
        bufp->chgBit(oldp+783,(vlSelfRef.calculator__DOT__int_con__DOT__next_in_valid_w[8]));
        bufp->chgBit(oldp+784,(vlSelfRef.calculator__DOT__int_con__DOT__is_busy));
        bufp->chgQData(oldp+785,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                                 [0U]),64);
        bufp->chgQData(oldp+787,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                                 [0U]),64);
        bufp->chgSData(oldp+789,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                                 [0U]),16);
        bufp->chgBit(oldp+790,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                               [0U]));
        bufp->chgQData(oldp+791,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                                 [0U]),64);
        bufp->chgQData(oldp+793,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                                 [0U]),64);
        bufp->chgSData(oldp+795,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                                 [0U]),16);
        bufp->chgBit(oldp+796,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                               [0U]));
        bufp->chgQData(oldp+797,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                                 [0U]),64);
        bufp->chgQData(oldp+799,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                                 [0U]),64);
        bufp->chgSData(oldp+801,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                                 [0U]),16);
        bufp->chgBit(oldp+802,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                               [0U]));
        bufp->chgQData(oldp+803,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                                 [0U]),64);
        bufp->chgQData(oldp+805,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                                 [0U]),64);
        bufp->chgSData(oldp+807,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                                 [0U]),16);
        bufp->chgBit(oldp+808,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                               [0U]));
        bufp->chgQData(oldp+809,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                                 [0U]),64);
        bufp->chgQData(oldp+811,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                                 [0U]),64);
        bufp->chgSData(oldp+813,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                                 [0U]),16);
        bufp->chgBit(oldp+814,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                               [0U]));
        bufp->chgQData(oldp+815,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_e),64);
        bufp->chgQData(oldp+817,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_e),64);
        bufp->chgSData(oldp+819,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_e),16);
        bufp->chgBit(oldp+820,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_e));
        bufp->chgQData(oldp+821,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_a_s),64);
        bufp->chgQData(oldp+823,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_b_s),64);
        bufp->chgSData(oldp+825,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_ctrl_s),16);
        bufp->chgBit(oldp+826,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__out_valid_s));
        bufp->chgQData(oldp+827,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_a),64);
        bufp->chgBit(oldp+829,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_0__host_out_valid));
        bufp->chgBit(oldp+830,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                [0U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                        [0U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                                [0U] 
                                                | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                   [0U] 
                                                   | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                   [0U]))))));
        bufp->chgQData(oldp+831,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_a),64);
        bufp->chgQData(oldp+833,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_b),64);
        bufp->chgSData(oldp+835,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+836,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_valid));
        bufp->chgBit(oldp+837,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+838,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+839,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+840,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+841,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__am_dest));
        bufp->chgQData(oldp+842,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__op_result),64);
        bufp->chgSData(oldp+844,(vlSelfRef.calculator__DOT__int_con__DOT__t0_0__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+845,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                                 [1U]),64);
        bufp->chgQData(oldp+847,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                                 [1U]),64);
        bufp->chgSData(oldp+849,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                                 [1U]),16);
        bufp->chgBit(oldp+850,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                               [1U]));
        bufp->chgQData(oldp+851,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                                 [1U]),64);
        bufp->chgQData(oldp+853,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                                 [1U]),64);
        bufp->chgSData(oldp+855,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                                 [1U]),16);
        bufp->chgBit(oldp+856,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                               [1U]));
        bufp->chgQData(oldp+857,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                                 [1U]),64);
        bufp->chgQData(oldp+859,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                                 [1U]),64);
        bufp->chgSData(oldp+861,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                                 [1U]),16);
        bufp->chgBit(oldp+862,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                               [1U]));
        bufp->chgQData(oldp+863,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                                 [1U]),64);
        bufp->chgQData(oldp+865,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                                 [1U]),64);
        bufp->chgSData(oldp+867,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                                 [1U]),16);
        bufp->chgBit(oldp+868,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                               [1U]));
        bufp->chgQData(oldp+869,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                                 [1U]),64);
        bufp->chgQData(oldp+871,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                                 [1U]),64);
        bufp->chgSData(oldp+873,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                                 [1U]),16);
        bufp->chgBit(oldp+874,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                               [1U]));
        bufp->chgQData(oldp+875,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_e),64);
        bufp->chgQData(oldp+877,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_e),64);
        bufp->chgSData(oldp+879,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_e),16);
        bufp->chgBit(oldp+880,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_e));
        bufp->chgQData(oldp+881,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_s),64);
        bufp->chgQData(oldp+883,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_s),64);
        bufp->chgSData(oldp+885,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_s),16);
        bufp->chgBit(oldp+886,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_s));
        bufp->chgQData(oldp+887,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_a_w),64);
        bufp->chgQData(oldp+889,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_b_w),64);
        bufp->chgSData(oldp+891,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_ctrl_w),16);
        bufp->chgBit(oldp+892,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_1__out_valid_w));
        bufp->chgBit(oldp+893,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                [1U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                        [1U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                                [1U] 
                                                | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                   [1U] 
                                                   | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                   [1U]))))));
        bufp->chgQData(oldp+894,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_a),64);
        bufp->chgQData(oldp+896,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_b),64);
        bufp->chgSData(oldp+898,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+899,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_valid));
        bufp->chgBit(oldp+900,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+901,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+902,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+903,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+904,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__am_dest));
        bufp->chgQData(oldp+905,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__op_result),64);
        bufp->chgSData(oldp+907,(vlSelfRef.calculator__DOT__int_con__DOT__t0_1__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+908,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                                 [2U]),64);
        bufp->chgQData(oldp+910,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                                 [2U]),64);
        bufp->chgSData(oldp+912,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                                 [2U]),16);
        bufp->chgBit(oldp+913,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                               [2U]));
        bufp->chgQData(oldp+914,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                                 [2U]),64);
        bufp->chgQData(oldp+916,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                                 [2U]),64);
        bufp->chgSData(oldp+918,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                                 [2U]),16);
        bufp->chgBit(oldp+919,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                               [2U]));
        bufp->chgQData(oldp+920,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                                 [2U]),64);
        bufp->chgQData(oldp+922,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                                 [2U]),64);
        bufp->chgSData(oldp+924,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                                 [2U]),16);
        bufp->chgBit(oldp+925,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                               [2U]));
        bufp->chgQData(oldp+926,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                                 [2U]),64);
        bufp->chgQData(oldp+928,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                                 [2U]),64);
        bufp->chgSData(oldp+930,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                                 [2U]),16);
        bufp->chgBit(oldp+931,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                               [2U]));
        bufp->chgQData(oldp+932,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                                 [2U]),64);
        bufp->chgQData(oldp+934,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                                 [2U]),64);
        bufp->chgSData(oldp+936,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                                 [2U]),16);
        bufp->chgBit(oldp+937,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                               [2U]));
        bufp->chgQData(oldp+938,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_e),64);
        bufp->chgQData(oldp+940,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_e),64);
        bufp->chgSData(oldp+942,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_e),16);
        bufp->chgBit(oldp+943,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_e));
        bufp->chgQData(oldp+944,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_s),64);
        bufp->chgQData(oldp+946,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_s),64);
        bufp->chgSData(oldp+948,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_s),16);
        bufp->chgBit(oldp+949,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_s));
        bufp->chgQData(oldp+950,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_a_w),64);
        bufp->chgQData(oldp+952,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_b_w),64);
        bufp->chgSData(oldp+954,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_ctrl_w),16);
        bufp->chgBit(oldp+955,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t0_2__out_valid_w));
        bufp->chgBit(oldp+956,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                [2U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                        [2U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                                [2U] 
                                                | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                   [2U] 
                                                   | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                   [2U]))))));
        bufp->chgQData(oldp+957,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_a),64);
        bufp->chgQData(oldp+959,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_b),64);
        bufp->chgSData(oldp+961,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+962,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_valid));
        bufp->chgBit(oldp+963,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                      >> 8U))));
        bufp->chgCData(oldp+964,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+965,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+966,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+967,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__am_dest));
        bufp->chgQData(oldp+968,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__op_result),64);
        bufp->chgSData(oldp+970,(vlSelfRef.calculator__DOT__int_con__DOT__t0_2__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+971,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                                 [3U]),64);
        bufp->chgQData(oldp+973,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                                 [3U]),64);
        bufp->chgSData(oldp+975,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                                 [3U]),16);
        bufp->chgBit(oldp+976,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                               [3U]));
        bufp->chgQData(oldp+977,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                                 [3U]),64);
        bufp->chgQData(oldp+979,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                                 [3U]),64);
        bufp->chgSData(oldp+981,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                                 [3U]),16);
        bufp->chgBit(oldp+982,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                               [3U]));
        bufp->chgQData(oldp+983,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                                 [3U]),64);
        bufp->chgQData(oldp+985,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                                 [3U]),64);
        bufp->chgSData(oldp+987,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                                 [3U]),16);
        bufp->chgBit(oldp+988,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                               [3U]));
        bufp->chgQData(oldp+989,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                                 [3U]),64);
        bufp->chgQData(oldp+991,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                                 [3U]),64);
        bufp->chgSData(oldp+993,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                                 [3U]),16);
        bufp->chgBit(oldp+994,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                               [3U]));
        bufp->chgQData(oldp+995,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                                 [3U]),64);
        bufp->chgQData(oldp+997,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                                 [3U]),64);
        bufp->chgSData(oldp+999,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                                 [3U]),16);
        bufp->chgBit(oldp+1000,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                [3U]));
        bufp->chgQData(oldp+1001,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_n),64);
        bufp->chgQData(oldp+1003,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_n),64);
        bufp->chgSData(oldp+1005,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_n),16);
        bufp->chgBit(oldp+1006,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_n));
        bufp->chgQData(oldp+1007,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_e),64);
        bufp->chgQData(oldp+1009,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_e),64);
        bufp->chgSData(oldp+1011,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_e),16);
        bufp->chgBit(oldp+1012,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_e));
        bufp->chgQData(oldp+1013,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_a_s),64);
        bufp->chgQData(oldp+1015,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_b_s),64);
        bufp->chgSData(oldp+1017,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_ctrl_s),16);
        bufp->chgBit(oldp+1018,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_0__out_valid_s));
        bufp->chgBit(oldp+1019,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                 [3U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                         [3U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                                 [3U] 
                                                 | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                    [3U] 
                                                    | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                    [3U]))))));
        bufp->chgQData(oldp+1020,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_a),64);
        bufp->chgQData(oldp+1022,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_b),64);
        bufp->chgSData(oldp+1024,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+1025,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_valid));
        bufp->chgBit(oldp+1026,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                       >> 8U))));
        bufp->chgCData(oldp+1027,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                         >> 6U))),2);
        bufp->chgCData(oldp+1028,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl) 
                                         >> 4U))),2);
        bufp->chgCData(oldp+1029,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+1030,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__am_dest));
        bufp->chgQData(oldp+1031,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__op_result),64);
        bufp->chgSData(oldp+1033,(vlSelfRef.calculator__DOT__int_con__DOT__t1_0__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+1034,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                                  [4U]),64);
        bufp->chgQData(oldp+1036,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                                  [4U]),64);
        bufp->chgSData(oldp+1038,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                                  [4U]),16);
        bufp->chgBit(oldp+1039,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                [4U]));
        bufp->chgQData(oldp+1040,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                                  [4U]),64);
        bufp->chgQData(oldp+1042,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                                  [4U]),64);
        bufp->chgSData(oldp+1044,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                                  [4U]),16);
        bufp->chgBit(oldp+1045,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                [4U]));
        bufp->chgQData(oldp+1046,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                                  [4U]),64);
        bufp->chgQData(oldp+1048,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                                  [4U]),64);
        bufp->chgSData(oldp+1050,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                                  [4U]),16);
        bufp->chgBit(oldp+1051,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                [4U]));
        bufp->chgQData(oldp+1052,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                                  [4U]),64);
        bufp->chgQData(oldp+1054,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                                  [4U]),64);
        bufp->chgSData(oldp+1056,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                                  [4U]),16);
        bufp->chgBit(oldp+1057,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                [4U]));
        bufp->chgQData(oldp+1058,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                                  [4U]),64);
        bufp->chgQData(oldp+1060,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                                  [4U]),64);
        bufp->chgSData(oldp+1062,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                                  [4U]),16);
        bufp->chgBit(oldp+1063,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                [4U]));
        bufp->chgQData(oldp+1064,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_n),64);
        bufp->chgQData(oldp+1066,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_n),64);
        bufp->chgSData(oldp+1068,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_n),16);
        bufp->chgBit(oldp+1069,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_n));
        bufp->chgQData(oldp+1070,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_e),64);
        bufp->chgQData(oldp+1072,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_e),64);
        bufp->chgSData(oldp+1074,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_e),16);
        bufp->chgBit(oldp+1075,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_e));
        bufp->chgQData(oldp+1076,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_s),64);
        bufp->chgQData(oldp+1078,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_s),64);
        bufp->chgSData(oldp+1080,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_s),16);
        bufp->chgBit(oldp+1081,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_s));
        bufp->chgQData(oldp+1082,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_a_w),64);
        bufp->chgQData(oldp+1084,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_b_w),64);
        bufp->chgSData(oldp+1086,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_ctrl_w),16);
        bufp->chgBit(oldp+1087,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_1__out_valid_w));
        bufp->chgBit(oldp+1088,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                 [4U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                         [4U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                                 [4U] 
                                                 | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                    [4U] 
                                                    | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                    [4U]))))));
        bufp->chgQData(oldp+1089,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_a),64);
        bufp->chgQData(oldp+1091,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_b),64);
        bufp->chgSData(oldp+1093,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+1094,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_valid));
        bufp->chgBit(oldp+1095,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                       >> 8U))));
        bufp->chgCData(oldp+1096,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                         >> 6U))),2);
        bufp->chgCData(oldp+1097,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl) 
                                         >> 4U))),2);
        bufp->chgCData(oldp+1098,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+1099,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__am_dest));
        bufp->chgQData(oldp+1100,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__op_result),64);
        bufp->chgSData(oldp+1102,(vlSelfRef.calculator__DOT__int_con__DOT__t1_1__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+1103,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                                  [5U]),64);
        bufp->chgQData(oldp+1105,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                                  [5U]),64);
        bufp->chgSData(oldp+1107,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                                  [5U]),16);
        bufp->chgBit(oldp+1108,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                [5U]));
        bufp->chgQData(oldp+1109,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                                  [5U]),64);
        bufp->chgQData(oldp+1111,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                                  [5U]),64);
        bufp->chgSData(oldp+1113,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                                  [5U]),16);
        bufp->chgBit(oldp+1114,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                [5U]));
        bufp->chgQData(oldp+1115,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                                  [5U]),64);
        bufp->chgQData(oldp+1117,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                                  [5U]),64);
        bufp->chgSData(oldp+1119,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                                  [5U]),16);
        bufp->chgBit(oldp+1120,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                [5U]));
        bufp->chgQData(oldp+1121,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                                  [5U]),64);
        bufp->chgQData(oldp+1123,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                                  [5U]),64);
        bufp->chgSData(oldp+1125,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                                  [5U]),16);
        bufp->chgBit(oldp+1126,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                [5U]));
        bufp->chgQData(oldp+1127,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                                  [5U]),64);
        bufp->chgQData(oldp+1129,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                                  [5U]),64);
        bufp->chgSData(oldp+1131,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                                  [5U]),16);
        bufp->chgBit(oldp+1132,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                [5U]));
        bufp->chgQData(oldp+1133,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_n),64);
        bufp->chgQData(oldp+1135,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_n),64);
        bufp->chgSData(oldp+1137,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_n),16);
        bufp->chgBit(oldp+1138,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_n));
        bufp->chgQData(oldp+1139,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_e),64);
        bufp->chgQData(oldp+1141,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_e),64);
        bufp->chgSData(oldp+1143,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_e),16);
        bufp->chgBit(oldp+1144,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_e));
        bufp->chgQData(oldp+1145,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_s),64);
        bufp->chgQData(oldp+1147,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_s),64);
        bufp->chgSData(oldp+1149,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_s),16);
        bufp->chgBit(oldp+1150,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_s));
        bufp->chgQData(oldp+1151,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_a_w),64);
        bufp->chgQData(oldp+1153,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_b_w),64);
        bufp->chgSData(oldp+1155,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_ctrl_w),16);
        bufp->chgBit(oldp+1156,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t1_2__out_valid_w));
        bufp->chgBit(oldp+1157,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                 [5U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                         [5U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                                 [5U] 
                                                 | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                    [5U] 
                                                    | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                    [5U]))))));
        bufp->chgQData(oldp+1158,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_a),64);
        bufp->chgQData(oldp+1160,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_b),64);
        bufp->chgSData(oldp+1162,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+1163,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_valid));
        bufp->chgBit(oldp+1164,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                       >> 8U))));
        bufp->chgCData(oldp+1165,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                         >> 6U))),2);
        bufp->chgCData(oldp+1166,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl) 
                                         >> 4U))),2);
        bufp->chgCData(oldp+1167,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+1168,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__am_dest));
        bufp->chgQData(oldp+1169,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__op_result),64);
        bufp->chgSData(oldp+1171,(vlSelfRef.calculator__DOT__int_con__DOT__t1_2__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+1172,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                                  [6U]),64);
        bufp->chgQData(oldp+1174,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                                  [6U]),64);
        bufp->chgSData(oldp+1176,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                                  [6U]),16);
        bufp->chgBit(oldp+1177,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                [6U]));
        bufp->chgQData(oldp+1178,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                                  [6U]),64);
        bufp->chgQData(oldp+1180,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                                  [6U]),64);
        bufp->chgSData(oldp+1182,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                                  [6U]),16);
        bufp->chgBit(oldp+1183,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                [6U]));
        bufp->chgQData(oldp+1184,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                                  [6U]),64);
        bufp->chgQData(oldp+1186,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                                  [6U]),64);
        bufp->chgSData(oldp+1188,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                                  [6U]),16);
        bufp->chgBit(oldp+1189,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                [6U]));
        bufp->chgQData(oldp+1190,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                                  [6U]),64);
        bufp->chgQData(oldp+1192,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                                  [6U]),64);
        bufp->chgSData(oldp+1194,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                                  [6U]),16);
        bufp->chgBit(oldp+1195,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                [6U]));
        bufp->chgQData(oldp+1196,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                                  [6U]),64);
        bufp->chgQData(oldp+1198,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                                  [6U]),64);
        bufp->chgSData(oldp+1200,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                                  [6U]),16);
        bufp->chgBit(oldp+1201,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                [6U]));
        bufp->chgQData(oldp+1202,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_n),64);
        bufp->chgQData(oldp+1204,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_n),64);
        bufp->chgSData(oldp+1206,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_n),16);
        bufp->chgBit(oldp+1207,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_n));
        bufp->chgQData(oldp+1208,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_e),64);
        bufp->chgQData(oldp+1210,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_e),64);
        bufp->chgSData(oldp+1212,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_e),16);
        bufp->chgBit(oldp+1213,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_e));
        bufp->chgQData(oldp+1214,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_a_s),64);
        bufp->chgQData(oldp+1216,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_b_s),64);
        bufp->chgSData(oldp+1218,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_ctrl_s),16);
        bufp->chgBit(oldp+1219,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_0__out_valid_s));
        bufp->chgBit(oldp+1220,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                 [6U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                         [6U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                                 [6U] 
                                                 | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                    [6U] 
                                                    | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                    [6U]))))));
        bufp->chgQData(oldp+1221,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_a),64);
        bufp->chgQData(oldp+1223,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_b),64);
        bufp->chgSData(oldp+1225,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+1226,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_valid));
        bufp->chgBit(oldp+1227,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                       >> 8U))));
        bufp->chgCData(oldp+1228,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                         >> 6U))),2);
        bufp->chgCData(oldp+1229,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl) 
                                         >> 4U))),2);
        bufp->chgCData(oldp+1230,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+1231,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__am_dest));
        bufp->chgQData(oldp+1232,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__op_result),64);
        bufp->chgSData(oldp+1234,(vlSelfRef.calculator__DOT__int_con__DOT__t2_0__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+1235,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                                  [7U]),64);
        bufp->chgQData(oldp+1237,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                                  [7U]),64);
        bufp->chgSData(oldp+1239,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                                  [7U]),16);
        bufp->chgBit(oldp+1240,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                [7U]));
        bufp->chgQData(oldp+1241,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                                  [7U]),64);
        bufp->chgQData(oldp+1243,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                                  [7U]),64);
        bufp->chgSData(oldp+1245,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                                  [7U]),16);
        bufp->chgBit(oldp+1246,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                [7U]));
        bufp->chgQData(oldp+1247,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                                  [7U]),64);
        bufp->chgQData(oldp+1249,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                                  [7U]),64);
        bufp->chgSData(oldp+1251,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                                  [7U]),16);
        bufp->chgBit(oldp+1252,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                [7U]));
        bufp->chgQData(oldp+1253,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                                  [7U]),64);
        bufp->chgQData(oldp+1255,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                                  [7U]),64);
        bufp->chgSData(oldp+1257,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                                  [7U]),16);
        bufp->chgBit(oldp+1258,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                [7U]));
        bufp->chgQData(oldp+1259,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                                  [7U]),64);
        bufp->chgQData(oldp+1261,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                                  [7U]),64);
        bufp->chgSData(oldp+1263,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                                  [7U]),16);
        bufp->chgBit(oldp+1264,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                [7U]));
        bufp->chgQData(oldp+1265,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_n),64);
        bufp->chgQData(oldp+1267,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_n),64);
        bufp->chgSData(oldp+1269,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_n),16);
        bufp->chgBit(oldp+1270,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_n));
        bufp->chgQData(oldp+1271,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_e),64);
        bufp->chgQData(oldp+1273,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_e),64);
        bufp->chgSData(oldp+1275,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_e),16);
        bufp->chgBit(oldp+1276,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_e));
        bufp->chgQData(oldp+1277,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_s),64);
        bufp->chgQData(oldp+1279,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_s),64);
        bufp->chgSData(oldp+1281,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_s),16);
        bufp->chgBit(oldp+1282,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_s));
        bufp->chgQData(oldp+1283,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_a_w),64);
        bufp->chgQData(oldp+1285,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_b_w),64);
        bufp->chgSData(oldp+1287,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_ctrl_w),16);
        bufp->chgBit(oldp+1288,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_1__out_valid_w));
        bufp->chgBit(oldp+1289,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                 [7U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                         [7U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                                 [7U] 
                                                 | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                    [7U] 
                                                    | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                    [7U]))))));
        bufp->chgQData(oldp+1290,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_a),64);
        bufp->chgQData(oldp+1292,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_b),64);
        bufp->chgSData(oldp+1294,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+1295,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_valid));
        bufp->chgBit(oldp+1296,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                       >> 8U))));
        bufp->chgCData(oldp+1297,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                         >> 6U))),2);
        bufp->chgCData(oldp+1298,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl) 
                                         >> 4U))),2);
        bufp->chgCData(oldp+1299,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+1300,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__am_dest));
        bufp->chgQData(oldp+1301,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__op_result),64);
        bufp->chgSData(oldp+1303,(vlSelfRef.calculator__DOT__int_con__DOT__t2_1__DOT__unnamedblk1__DOT__resp_ctrl),16);
        bufp->chgQData(oldp+1304,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_n
                                  [8U]),64);
        bufp->chgQData(oldp+1306,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_n
                                  [8U]),64);
        bufp->chgSData(oldp+1308,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_n
                                  [8U]),16);
        bufp->chgBit(oldp+1309,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                [8U]));
        bufp->chgQData(oldp+1310,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_e
                                  [8U]),64);
        bufp->chgQData(oldp+1312,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_e
                                  [8U]),64);
        bufp->chgSData(oldp+1314,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_e
                                  [8U]),16);
        bufp->chgBit(oldp+1315,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                [8U]));
        bufp->chgQData(oldp+1316,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_s
                                  [8U]),64);
        bufp->chgQData(oldp+1318,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_s
                                  [8U]),64);
        bufp->chgSData(oldp+1320,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_s
                                  [8U]),16);
        bufp->chgBit(oldp+1321,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                [8U]));
        bufp->chgQData(oldp+1322,(vlSelfRef.calculator__DOT__int_con__DOT__in_a_w
                                  [8U]),64);
        bufp->chgQData(oldp+1324,(vlSelfRef.calculator__DOT__int_con__DOT__in_b_w
                                  [8U]),64);
        bufp->chgSData(oldp+1326,(vlSelfRef.calculator__DOT__int_con__DOT__in_ctrl_w
                                  [8U]),16);
        bufp->chgBit(oldp+1327,(vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                [8U]));
        bufp->chgQData(oldp+1328,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_a
                                  [8U]),64);
        bufp->chgQData(oldp+1330,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_b
                                  [8U]),64);
        bufp->chgSData(oldp+1332,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_ctrl
                                  [8U]),16);
        bufp->chgBit(oldp+1333,(vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                [8U]));
        bufp->chgQData(oldp+1334,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_n),64);
        bufp->chgQData(oldp+1336,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_n),64);
        bufp->chgSData(oldp+1338,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_n),16);
        bufp->chgBit(oldp+1339,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_n));
        bufp->chgQData(oldp+1340,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_e),64);
        bufp->chgQData(oldp+1342,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_e),64);
        bufp->chgSData(oldp+1344,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_e),16);
        bufp->chgBit(oldp+1345,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_e));
        bufp->chgQData(oldp+1346,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_s),64);
        bufp->chgQData(oldp+1348,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_s),64);
        bufp->chgSData(oldp+1350,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_s),16);
        bufp->chgBit(oldp+1351,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_s));
        bufp->chgQData(oldp+1352,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_a_w),64);
        bufp->chgQData(oldp+1354,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_b_w),64);
        bufp->chgSData(oldp+1356,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_ctrl_w),16);
        bufp->chgBit(oldp+1357,(vlSelfRef.calculator__DOT__int_con__DOT____Vcellout__t2_2__out_valid_w));
        bufp->chgBit(oldp+1358,((vlSelfRef.calculator__DOT__int_con__DOT__host_in_valid
                                 [8U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_e
                                         [8U] | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_n
                                                 [8U] 
                                                 | (vlSelfRef.calculator__DOT__int_con__DOT__in_valid_s
                                                    [8U] 
                                                    | vlSelfRef.calculator__DOT__int_con__DOT__in_valid_w
                                                    [8U]))))));
        bufp->chgQData(oldp+1359,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_a),64);
        bufp->chgQData(oldp+1361,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_b),64);
        bufp->chgSData(oldp+1363,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl),16);
        bufp->chgBit(oldp+1364,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_valid));
        bufp->chgBit(oldp+1365,((1U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                       >> 8U))));
        bufp->chgCData(oldp+1366,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                         >> 6U))),2);
        bufp->chgCData(oldp+1367,((3U & ((IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl) 
                                         >> 4U))),2);
        bufp->chgCData(oldp+1368,((0xfU & (IData)(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__sel_ctrl))),4);
        bufp->chgBit(oldp+1369,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__am_dest));
        bufp->chgQData(oldp+1370,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__op_result),64);
        bufp->chgSData(oldp+1372,(vlSelfRef.calculator__DOT__int_con__DOT__t2_2__DOT__unnamedblk1__DOT__resp_ctrl),16);
    }
    bufp->chgBit(oldp+1373,(vlSelfRef.clk));
    bufp->chgQData(oldp+1374,(vlSelfRef.a),64);
    bufp->chgQData(oldp+1376,(vlSelfRef.b),64);
    bufp->chgCData(oldp+1378,(vlSelfRef.mode),4);
    bufp->chgQData(oldp+1379,(vlSelfRef.result),64);
    bufp->chgBit(oldp+1381,(vlSelfRef.valid));
}

void Vcalculator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalculator___024root__trace_cleanup\n"); );
    // Init
    Vcalculator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcalculator___024root*>(voidSelf);
    Vcalculator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
