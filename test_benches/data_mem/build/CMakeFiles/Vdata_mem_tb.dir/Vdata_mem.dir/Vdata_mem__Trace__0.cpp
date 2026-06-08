// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_sc.h"
#include "Vdata_mem__Syms.h"


void Vdata_mem___024root__trace_chg_0_sub_0(Vdata_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdata_mem___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_chg_0\n"); );
    // Body
    Vdata_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_mem___024root*>(voidSelf);
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vdata_mem___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdata_mem___024root__trace_chg_0_sub_0(Vdata_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_chg_0_sub_0\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.__Vcellinp__data_mem__clk));
        bufp->chgIData(oldp+1,(vlSelfRef.__Vcellinp__data_mem__addr),32);
        bufp->chgIData(oldp+2,(vlSelfRef.__Vcellinp__data_mem__data_in),32);
        bufp->chgBit(oldp+3,(vlSelfRef.__Vcellinp__data_mem__WE_data_mem));
        bufp->chgCData(oldp+4,(vlSelfRef.__Vcellinp__data_mem__mem_size),2);
        bufp->chgBit(oldp+5,(vlSelfRef.__Vcellinp__data_mem__sign_val));
        bufp->chgSData(oldp+6,((0x00001fffU & vlSelfRef.__Vcellinp__data_mem__addr)),13);
    }
    bufp->chgIData(oldp+7,(vlSelfRef.__Vcellout__data_mem__data_out),32);
}

void Vdata_mem___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_cleanup\n"); );
    // Body
    Vdata_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_mem___024root*>(voidSelf);
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
