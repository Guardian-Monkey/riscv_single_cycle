// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_sc.h"
#include "Vreg_file__Syms.h"


VL_ATTR_COLD void Vreg_file___024root__trace_init_dtype____0(Vreg_file___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vreg_file___024root__trace_init_sub__TOP__0(Vreg_file___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root__trace_init_sub__TOP__0\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "reg_file", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"rs1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"rs2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"WE_reg_file",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"r0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);

    Vreg_file___024root__trace_init_dtype____0(vlSelf, tracep, "registers", 0, c+8, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vreg_file___024root__trace_init_dtype_sub____0(Vreg_file___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vreg_file___024root__trace_init_dtype____0(Vreg_file___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root__trace_init_dtype____0\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vreg_file___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vreg_file___024root__trace_init_dtype_sub____0(Vreg_file___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root__trace_init_dtype_sub____0\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 30, 0);
    for (int i = 0; i < 31; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (30 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vreg_file___024root__trace_init_top(Vreg_file___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root__trace_init_top\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vreg_file___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vreg_file___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vreg_file___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vreg_file___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vreg_file___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vreg_file___024root__trace_register(Vreg_file___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root__trace_register\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vreg_file___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vreg_file___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vreg_file___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vreg_file___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vreg_file___024root__trace_const_0_sub_0(Vreg_file___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vreg_file___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root__trace_const_0\n"); );
    // Body
    Vreg_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreg_file___024root*>(voidSelf);
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vreg_file___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vreg_file___024root__trace_const_0_sub_0(Vreg_file___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root__trace_const_0_sub_0\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+39,(0U),32);
}

VL_ATTR_COLD void Vreg_file___024root__trace_full_0_sub_0(Vreg_file___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vreg_file___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root__trace_full_0\n"); );
    // Body
    Vreg_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreg_file___024root*>(voidSelf);
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vreg_file___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vreg_file___024root__trace_full_dtype____0(Vreg_file___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 31>& __VdtypeVar);

VL_ATTR_COLD void Vreg_file___024root__trace_full_0_sub_0(Vreg_file___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root__trace_full_0_sub_0\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.__Vcellinp__reg_file__clk));
    bufp->fullCData(oldp+1,(vlSelfRef.__Vcellinp__reg_file__rs1),5);
    bufp->fullCData(oldp+2,(vlSelfRef.__Vcellinp__reg_file__rs2),5);
    bufp->fullCData(oldp+3,(vlSelfRef.__Vcellinp__reg_file__rd),5);
    bufp->fullIData(oldp+4,(vlSelfRef.__Vcellinp__reg_file__data_in),32);
    bufp->fullBit(oldp+5,(vlSelfRef.__Vcellinp__reg_file__WE_reg_file));
    bufp->fullIData(oldp+6,(vlSelfRef.__Vcellout__reg_file__rs1_out),32);
    bufp->fullIData(oldp+7,(vlSelfRef.__Vcellout__reg_file__rs2_out),32);
    Vreg_file___024root__trace_full_dtype____0(vlSelf, bufp, 8, vlSelfRef.reg_file__DOT__registers);
}

VL_ATTR_COLD void Vreg_file___024root__trace_full_dtype____0(Vreg_file___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 31>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root__trace_full_dtype____0\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[30]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[29]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[28]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[27]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[26]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[25]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[24]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[23]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[22]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[21]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[20]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[19]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[18]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[17]),32);
    bufp->fullIData(oldp+14,(__VdtypeVar[16]),32);
    bufp->fullIData(oldp+15,(__VdtypeVar[15]),32);
    bufp->fullIData(oldp+16,(__VdtypeVar[14]),32);
    bufp->fullIData(oldp+17,(__VdtypeVar[13]),32);
    bufp->fullIData(oldp+18,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+19,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+20,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+21,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+22,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+23,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+24,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+25,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+26,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+27,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+28,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+29,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+30,(__VdtypeVar[0]),32);
}
