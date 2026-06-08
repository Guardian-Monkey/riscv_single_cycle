// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_sc.h"
#include "Vrisc_v__Syms.h"


void Vrisc_v___024root__trace_chg_0_sub_0(Vrisc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vrisc_v___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_chg_0\n"); );
    // Body
    Vrisc_v___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrisc_v___024root*>(voidSelf);
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vrisc_v___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vrisc_v___024root__trace_chg_dtype____0(Vrisc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 31>& __VdtypeVar);

void Vrisc_v___024root__trace_chg_0_sub_0(Vrisc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_chg_0_sub_0\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.__Vcellout__risc_v__RS1),5);
        bufp->chgCData(oldp+1,(vlSelfRef.__Vcellout__risc_v__RS2),5);
        bufp->chgCData(oldp+2,(vlSelfRef.__Vcellout__risc_v__RD),5);
        bufp->chgCData(oldp+3,(vlSelfRef.__Vcellout__risc_v__ALU_FUNCT),4);
        bufp->chgSData(oldp+4,(vlSelfRef.risc_v__DOT__pc),13);
        bufp->chgBit(oldp+5,((0U == vlSelfRef.risc_v__DOT__alu__DOT__s1_out)));
        bufp->chgBit(oldp+6,((1U & (~ (IData)(vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag)))));
        bufp->chgBit(oldp+7,(vlSelfRef.risc_v__DOT__signed_less_than));
        bufp->chgCData(oldp+8,(vlSelfRef.risc_v__DOT__rs1),5);
        bufp->chgCData(oldp+9,(vlSelfRef.risc_v__DOT__rs2),5);
        bufp->chgCData(oldp+10,(vlSelfRef.risc_v__DOT__rd),5);
        bufp->chgIData(oldp+11,(vlSelfRef.risc_v__DOT__imm),32);
        bufp->chgBit(oldp+12,(vlSelfRef.risc_v__DOT__mux_PC));
        bufp->chgBit(oldp+13,(vlSelfRef.risc_v__DOT__WE_reg_file));
        bufp->chgBit(oldp+14,(vlSelfRef.risc_v__DOT__WE_data_mem));
        bufp->chgBit(oldp+15,(vlSelfRef.risc_v__DOT__mux_ALU1));
        bufp->chgBit(oldp+16,(vlSelfRef.risc_v__DOT__sign_val));
        bufp->chgCData(oldp+17,(vlSelfRef.risc_v__DOT__mux_reg),2);
        bufp->chgCData(oldp+18,(vlSelfRef.risc_v__DOT__mux_ALU2),2);
        bufp->chgCData(oldp+19,(vlSelfRef.risc_v__DOT__mem_size),2);
        bufp->chgCData(oldp+20,(vlSelfRef.risc_v__DOT__ALU_funct),4);
        bufp->chgIData(oldp+21,(vlSelfRef.risc_v__DOT__ALU_in1),32);
        bufp->chgIData(oldp+22,(vlSelfRef.risc_v__DOT__ALU_in2),32);
        bufp->chgIData(oldp+23,(vlSelfRef.risc_v__DOT__ALU_out),32);
        bufp->chgIData(oldp+24,(vlSelfRef.risc_v__DOT__reg_data_in),32);
        bufp->chgIData(oldp+25,(vlSelfRef.risc_v__DOT__rs1_out),32);
        bufp->chgIData(oldp+26,(vlSelfRef.risc_v__DOT__rs2_out),32);
        bufp->chgIData(oldp+27,(vlSelfRef.risc_v__DOT__data_mem_out),32);
        bufp->chgIData(oldp+28,(vlSelfRef.risc_v__DOT__adder_in1),32);
        bufp->chgIData(oldp+29,(vlSelfRef.risc_v__DOT__adder_out),32);
        bufp->chgBit(oldp+30,(vlSelfRef.risc_v__DOT__adder_cout));
        bufp->chgBit(oldp+31,(vlSelfRef.risc_v__DOT__branch_decoder_on));
        bufp->chgCData(oldp+32,(vlSelfRef.risc_v__DOT__branch_op),3);
        bufp->chgBit(oldp+33,(vlSelfRef.risc_v__DOT__branch_decision));
        bufp->chgIData(oldp+34,(vlSelfRef.risc_v__DOT__pc),32);
        bufp->chgIData(oldp+35,(vlSelfRef.risc_v__DOT__instr_mem
                                [vlSelfRef.risc_v__DOT__pc]),32);
        bufp->chgSData(oldp+36,((0x00001fffU & vlSelfRef.risc_v__DOT__ALU_out)),13);
        Vrisc_v___024root__trace_chg_dtype____0(vlSelf, bufp, 37, vlSelfRef.risc_v__DOT__REG_FILE__DOT__registers);
        bufp->chgIData(oldp+68,(vlSelfRef.risc_v__DOT__alu__DOT__a1_out),32);
        bufp->chgIData(oldp+69,(vlSelfRef.risc_v__DOT__alu__DOT__s1_out),32);
        bufp->chgBit(oldp+70,((vlSelfRef.risc_v__DOT__ALU_in1 
                               >> 0x0000001fU)));
        bufp->chgBit(oldp+71,((vlSelfRef.risc_v__DOT__ALU_in2 
                               >> 0x0000001fU)));
        bufp->chgBit(oldp+72,((vlSelfRef.risc_v__DOT__alu__DOT__s1_out 
                               >> 0x0000001fU)));
        bufp->chgBit(oldp+73,(vlSelfRef.risc_v__DOT__alu__DOT__a1_carry_flag));
        bufp->chgBit(oldp+74,(vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag));
        bufp->chgIData(oldp+75,(vlSelfRef.risc_v__DOT__alu__DOT__sll_out),32);
        bufp->chgIData(oldp+76,(vlSelfRef.risc_v__DOT__alu__DOT__srl_out),32);
        bufp->chgIData(oldp+77,(vlSelfRef.risc_v__DOT__alu__DOT__sra_out),32);
        bufp->chgIData(oldp+78,((~ vlSelfRef.risc_v__DOT__ALU_in2)),32);
        bufp->chgIData(oldp+79,(vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s1),32);
        bufp->chgIData(oldp+80,(vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s2),32);
        bufp->chgIData(oldp+81,(vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s3),32);
        bufp->chgIData(oldp+82,(vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s4),32);
        bufp->chgIData(oldp+83,(vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s1),32);
        bufp->chgIData(oldp+84,(vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s2),32);
        bufp->chgIData(oldp+85,(vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s3),32);
        bufp->chgIData(oldp+86,(vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s4),32);
        bufp->chgIData(oldp+87,(vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s1),32);
        bufp->chgIData(oldp+88,(vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s2),32);
        bufp->chgIData(oldp+89,(vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s3),32);
        bufp->chgIData(oldp+90,(vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s4),32);
    }
    bufp->chgBit(oldp+91,(vlSelfRef.__Vcellinp__risc_v__clk));
}

void Vrisc_v___024root__trace_chg_dtype____0(Vrisc_v___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 31>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_chg_dtype____0\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[30]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[29]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[28]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[27]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[26]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[25]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[24]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[23]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[22]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[21]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[20]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[19]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[18]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[17]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[16]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[15]),32);
    bufp->chgIData(oldp+16,(__VdtypeVar[14]),32);
    bufp->chgIData(oldp+17,(__VdtypeVar[13]),32);
    bufp->chgIData(oldp+18,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+19,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+20,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+21,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+22,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+23,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+24,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+25,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+26,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+27,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+28,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+29,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+30,(__VdtypeVar[0]),32);
}

void Vrisc_v___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root__trace_cleanup\n"); );
    // Body
    Vrisc_v___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrisc_v___024root*>(voidSelf);
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
