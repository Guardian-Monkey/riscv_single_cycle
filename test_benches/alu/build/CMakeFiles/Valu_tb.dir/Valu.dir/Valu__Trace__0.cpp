// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_sc.h"
#include "Valu__Syms.h"


void Valu___024root__trace_chg_0_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Valu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_chg_0\n"); );
    // Body
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Valu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Valu___024root__trace_chg_0_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_chg_0_sub_0\n"); );
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.__Vcellinp__ALU__ALU_funct),4);
        bufp->chgIData(oldp+1,(vlSelfRef.__Vcellinp__ALU__in1),32);
        bufp->chgIData(oldp+2,(vlSelfRef.__Vcellinp__ALU__in2),32);
        bufp->chgIData(oldp+3,(vlSelfRef.__Vcellout__ALU__out),32);
        bufp->chgBit(oldp+4,((0U == vlSelfRef.ALU__DOT__s1_out)));
        bufp->chgBit(oldp+5,((1U & (~ (IData)(vlSelfRef.ALU__DOT__s1_carry_flag)))));
        bufp->chgBit(oldp+6,(vlSelfRef.ALU__DOT__signed_less_than));
        bufp->chgIData(oldp+7,(vlSelfRef.ALU__DOT__a1_out),32);
        bufp->chgIData(oldp+8,(vlSelfRef.ALU__DOT__s1_out),32);
        bufp->chgBit(oldp+9,((vlSelfRef.__Vcellinp__ALU__in1 
                              >> 0x0000001fU)));
        bufp->chgBit(oldp+10,((vlSelfRef.__Vcellinp__ALU__in2 
                               >> 0x0000001fU)));
        bufp->chgBit(oldp+11,((vlSelfRef.ALU__DOT__s1_out 
                               >> 0x0000001fU)));
        bufp->chgBit(oldp+12,(vlSelfRef.ALU__DOT__a1_carry_flag));
        bufp->chgBit(oldp+13,(vlSelfRef.ALU__DOT__s1_carry_flag));
        bufp->chgIData(oldp+14,(vlSelfRef.ALU__DOT__sll_out),32);
        bufp->chgIData(oldp+15,(vlSelfRef.ALU__DOT__srl_out),32);
        bufp->chgIData(oldp+16,(vlSelfRef.ALU__DOT__sra_out),32);
        bufp->chgIData(oldp+17,((~ vlSelfRef.__Vcellinp__ALU__in2)),32);
        bufp->chgIData(oldp+18,(vlSelfRef.ALU__DOT__sll__DOT__s1),32);
        bufp->chgIData(oldp+19,(vlSelfRef.ALU__DOT__sll__DOT__s2),32);
        bufp->chgIData(oldp+20,(vlSelfRef.ALU__DOT__sll__DOT__s3),32);
        bufp->chgIData(oldp+21,(vlSelfRef.ALU__DOT__sll__DOT__s4),32);
        bufp->chgIData(oldp+22,(vlSelfRef.ALU__DOT__sra__DOT__s1),32);
        bufp->chgIData(oldp+23,(vlSelfRef.ALU__DOT__sra__DOT__s2),32);
        bufp->chgIData(oldp+24,(vlSelfRef.ALU__DOT__sra__DOT__s3),32);
        bufp->chgIData(oldp+25,(vlSelfRef.ALU__DOT__sra__DOT__s4),32);
        bufp->chgIData(oldp+26,(vlSelfRef.ALU__DOT__srl__DOT__s1),32);
        bufp->chgIData(oldp+27,(vlSelfRef.ALU__DOT__srl__DOT__s2),32);
        bufp->chgIData(oldp+28,(vlSelfRef.ALU__DOT__srl__DOT__s3),32);
        bufp->chgIData(oldp+29,(vlSelfRef.ALU__DOT__srl__DOT__s4),32);
    }
}

void Valu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_cleanup\n"); );
    // Body
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
