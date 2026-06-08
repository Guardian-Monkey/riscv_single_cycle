// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_sc.h"
#include "Vreg_file__Syms.h"


void Vreg_file___024root__trace_chg_0_sub_0(Vreg_file___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vreg_file___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root__trace_chg_0\n"); );
    // Body
    Vreg_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreg_file___024root*>(voidSelf);
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vreg_file___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vreg_file___024root__trace_chg_dtype____0(Vreg_file___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 31>& __VdtypeVar);

void Vreg_file___024root__trace_chg_0_sub_0(Vreg_file___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root__trace_chg_0_sub_0\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.__Vcellinp__reg_file__clk));
        bufp->chgCData(oldp+1,(vlSelfRef.__Vcellinp__reg_file__rs1),5);
        bufp->chgCData(oldp+2,(vlSelfRef.__Vcellinp__reg_file__rs2),5);
        bufp->chgCData(oldp+3,(vlSelfRef.__Vcellinp__reg_file__rd),5);
        bufp->chgIData(oldp+4,(vlSelfRef.__Vcellinp__reg_file__data_in),32);
        bufp->chgBit(oldp+5,(vlSelfRef.__Vcellinp__reg_file__WE_reg_file));
    }
    bufp->chgIData(oldp+6,(vlSelfRef.__Vcellout__reg_file__rs1_out),32);
    bufp->chgIData(oldp+7,(vlSelfRef.__Vcellout__reg_file__rs2_out),32);
    Vreg_file___024root__trace_chg_dtype____0(vlSelf, bufp, 8, vlSelfRef.reg_file__DOT__registers);
}

void Vreg_file___024root__trace_chg_dtype____0(Vreg_file___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 31>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root__trace_chg_dtype____0\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vreg_file___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root__trace_cleanup\n"); );
    // Body
    Vreg_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreg_file___024root*>(voidSelf);
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
