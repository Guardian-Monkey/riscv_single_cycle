// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_sc.h"
#include "Vcontrol_unit__Syms.h"


void Vcontrol_unit___024root__trace_chg_0_sub_0(Vcontrol_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcontrol_unit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root__trace_chg_0\n"); );
    // Body
    Vcontrol_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol_unit___024root*>(voidSelf);
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vcontrol_unit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcontrol_unit___024root__trace_chg_0_sub_0(Vcontrol_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root__trace_chg_0_sub_0\n"); );
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.__Vcellinp__control_unit__instr),32);
        bufp->chgBit(oldp+1,(vlSelfRef.__Vcellinp__control_unit__zero_flag));
        bufp->chgBit(oldp+2,(vlSelfRef.__Vcellinp__control_unit__unsigned_less_than));
        bufp->chgBit(oldp+3,(vlSelfRef.__Vcellinp__control_unit__signed_less_than));
        bufp->chgCData(oldp+4,(vlSelfRef.__Vcellout__control_unit__rs1),5);
        bufp->chgCData(oldp+5,(vlSelfRef.__Vcellout__control_unit__rs2),5);
        bufp->chgCData(oldp+6,(vlSelfRef.__Vcellout__control_unit__rd),5);
        bufp->chgIData(oldp+7,(vlSelfRef.__Vcellout__control_unit__imm),32);
        bufp->chgBit(oldp+8,(vlSelfRef.__Vcellout__control_unit__mux_adder));
        bufp->chgBit(oldp+9,(vlSelfRef.__Vcellout__control_unit__mux_PC));
        bufp->chgCData(oldp+10,(vlSelfRef.__Vcellout__control_unit__mux_reg),2);
        bufp->chgBit(oldp+11,(vlSelfRef.__Vcellout__control_unit__WE_reg_file));
        bufp->chgBit(oldp+12,(vlSelfRef.__Vcellout__control_unit__WE_data_mem));
        bufp->chgCData(oldp+13,(vlSelfRef.__Vcellout__control_unit__mux_ALU2),2);
        bufp->chgBit(oldp+14,(vlSelfRef.__Vcellout__control_unit__mux_ALU1));
        bufp->chgCData(oldp+15,(vlSelfRef.__Vcellout__control_unit__ALU_funct),4);
        bufp->chgCData(oldp+16,(vlSelfRef.__Vcellout__control_unit__mem_size),2);
        bufp->chgBit(oldp+17,(vlSelfRef.__Vcellout__control_unit__sign_val));
    }
}

void Vcontrol_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root__trace_cleanup\n"); );
    // Body
    Vcontrol_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol_unit___024root*>(voidSelf);
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
