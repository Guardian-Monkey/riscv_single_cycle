// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrisc_v.h for the primary calling header

#include "Vrisc_v__pch.h"

void Vrisc_v___024root___eval_triggers_vec__ico(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_triggers_vec__ico\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vrisc_v___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___trigger_anySet__ico\n"); );
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

void Vrisc_v___024root___ico_sequent__TOP__0(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___ico_sequent__TOP__0\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__risc_v__clk, vlSelfRef.clk);
    if (((IData)(vlSelfRef.__Vcellinp__risc_v__clk) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSelfRef.__Vcellinp__risc_v__clk, vlSelfRef.risc_v__DOT____Vtogcov__clk);
        vlSelfRef.risc_v__DOT____Vtogcov__clk = vlSelfRef.__Vcellinp__risc_v__clk;
    }
}

void Vrisc_v___024root___eval_ico(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_ico\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vrisc_v___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_v___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vrisc_v___024root___eval_phase__ico(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_phase__ico\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vrisc_v___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrisc_v___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vrisc_v___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vrisc_v___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vrisc_v___024root___eval_triggers_vec__act(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_triggers_vec__act\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.__Vcellinp__risc_v__clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__risc_v__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__risc_v__clk__0 
        = vlSelfRef.__Vcellinp__risc_v__clk;
}

bool Vrisc_v___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___trigger_anySet__act\n"); );
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

void Vrisc_v___024root___nba_sequent__TOP__0(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___nba_sequent__TOP__0\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v0;
    __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v0 = 0;
    SData/*12:0*/ __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v0;
    __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v0 = 0;
    CData/*0:0*/ __VdlySet__risc_v__DOT__DATA_MEM__DOT__RAM__v0;
    __VdlySet__risc_v__DOT__DATA_MEM__DOT__RAM__v0 = 0;
    CData/*7:0*/ __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v1;
    __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v1 = 0;
    SData/*12:0*/ __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v1;
    __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v1 = 0;
    CData/*0:0*/ __VdlySet__risc_v__DOT__DATA_MEM__DOT__RAM__v1;
    __VdlySet__risc_v__DOT__DATA_MEM__DOT__RAM__v1 = 0;
    CData/*7:0*/ __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v2;
    __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v2 = 0;
    SData/*12:0*/ __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v2;
    __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v2 = 0;
    CData/*7:0*/ __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v3;
    __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v3 = 0;
    SData/*12:0*/ __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v3;
    __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v3 = 0;
    CData/*0:0*/ __VdlySet__risc_v__DOT__DATA_MEM__DOT__RAM__v3;
    __VdlySet__risc_v__DOT__DATA_MEM__DOT__RAM__v3 = 0;
    CData/*7:0*/ __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v4;
    __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v4 = 0;
    SData/*12:0*/ __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v4;
    __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v4 = 0;
    CData/*7:0*/ __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v5;
    __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v5 = 0;
    SData/*12:0*/ __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v5;
    __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v5 = 0;
    CData/*7:0*/ __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v6;
    __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v6 = 0;
    SData/*12:0*/ __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v6;
    __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v6 = 0;
    IData/*31:0*/ __VdlyVal__risc_v__DOT__REG_FILE__DOT__registers__v0;
    __VdlyVal__risc_v__DOT__REG_FILE__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__risc_v__DOT__REG_FILE__DOT__registers__v0;
    __VdlyDim0__risc_v__DOT__REG_FILE__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__risc_v__DOT__REG_FILE__DOT__registers__v0;
    __VdlySet__risc_v__DOT__REG_FILE__DOT__registers__v0 = 0;
    // Body
    __VdlySet__risc_v__DOT__DATA_MEM__DOT__RAM__v0 = 0U;
    __VdlySet__risc_v__DOT__DATA_MEM__DOT__RAM__v1 = 0U;
    __VdlySet__risc_v__DOT__DATA_MEM__DOT__RAM__v3 = 0U;
    __VdlySet__risc_v__DOT__REG_FILE__DOT__registers__v0 = 0U;
    if (vlSelfRef.risc_v__DOT__WE_data_mem) {
        if ((0U == (IData)(vlSelfRef.risc_v__DOT__mem_size))) {
            ++(vlSymsp->__Vcoverage[2244]);
            __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v0 
                = (0x000000ffU & vlSelfRef.risc_v__DOT__rs2_out);
            __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v0 
                = (0x00001fffU & vlSelfRef.risc_v__DOT__ALU_out);
            __VdlySet__risc_v__DOT__DATA_MEM__DOT__RAM__v0 = 1U;
        } else if ((1U == (IData)(vlSelfRef.risc_v__DOT__mem_size))) {
            ++(vlSymsp->__Vcoverage[2245]);
            __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v1 
                = (0x000000ffU & vlSelfRef.risc_v__DOT__rs2_out);
            __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v1 
                = (0x00001fffU & vlSelfRef.risc_v__DOT__ALU_out);
            __VdlySet__risc_v__DOT__DATA_MEM__DOT__RAM__v1 = 1U;
            __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v2 
                = (0x000000ffU & (vlSelfRef.risc_v__DOT__rs2_out 
                                  >> 8U));
            __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v2 
                = (0x00001fffU & ((IData)(1U) + vlSelfRef.risc_v__DOT__ALU_out));
        } else if ((2U == (IData)(vlSelfRef.risc_v__DOT__mem_size))) {
            ++(vlSymsp->__Vcoverage[2246]);
            __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v3 
                = (0x000000ffU & vlSelfRef.risc_v__DOT__rs2_out);
            __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v3 
                = (0x00001fffU & vlSelfRef.risc_v__DOT__ALU_out);
            __VdlySet__risc_v__DOT__DATA_MEM__DOT__RAM__v3 = 1U;
            __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v4 
                = (0x000000ffU & (vlSelfRef.risc_v__DOT__rs2_out 
                                  >> 8U));
            __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v4 
                = (0x00001fffU & ((IData)(1U) + vlSelfRef.risc_v__DOT__ALU_out));
            __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v5 
                = (0x000000ffU & (vlSelfRef.risc_v__DOT__rs2_out 
                                  >> 0x10U));
            __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v5 
                = (0x00001fffU & ((IData)(2U) + vlSelfRef.risc_v__DOT__ALU_out));
            __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v6 
                = (vlSelfRef.risc_v__DOT__rs2_out >> 0x18U);
            __VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v6 
                = (0x00001fffU & ((IData)(3U) + vlSelfRef.risc_v__DOT__ALU_out));
        } else {
            ++(vlSymsp->__Vcoverage[2247]);
        }
        ++(vlSymsp->__Vcoverage[2248]);
    } else {
        ++(vlSymsp->__Vcoverage[2249]);
    }
    ++(vlSymsp->__Vcoverage[2250]);
    if (vlSelfRef.risc_v__DOT__WE_reg_file) {
        if ((0U != (IData)(vlSelfRef.risc_v__DOT__rd))) {
            vlSelfRef.risc_v__DOT__REG_FILE__DOT____Vlvbound_h0df2320c__0 
                = vlSelfRef.risc_v__DOT__reg_data_in;
            ++(vlSymsp->__Vcoverage[2321]);
            if ((0x1eU >= (0x0000001fU & ((IData)(vlSelfRef.risc_v__DOT__rd) 
                                          - (IData)(1U))))) {
                __VdlyVal__risc_v__DOT__REG_FILE__DOT__registers__v0 
                    = vlSelfRef.risc_v__DOT__REG_FILE__DOT____Vlvbound_h0df2320c__0;
                __VdlyDim0__risc_v__DOT__REG_FILE__DOT__registers__v0 
                    = (0x0000001fU & ((IData)(vlSelfRef.risc_v__DOT__rd) 
                                      - (IData)(1U)));
                __VdlySet__risc_v__DOT__REG_FILE__DOT__registers__v0 = 1U;
            }
        } else {
            ++(vlSymsp->__Vcoverage[2322]);
        }
        if ((0U != (IData)(vlSelfRef.risc_v__DOT__rd))) {
            ++(vlSymsp->__Vcoverage[2323]);
        }
        if ((0U == (IData)(vlSelfRef.risc_v__DOT__rd))) {
            ++(vlSymsp->__Vcoverage[2324]);
        }
        ++(vlSymsp->__Vcoverage[2325]);
    } else {
        ++(vlSymsp->__Vcoverage[2326]);
    }
    ++(vlSymsp->__Vcoverage[2327]);
    vlSelfRef.__Vcellout__risc_v__ALU_FUNCT = vlSelfRef.risc_v__DOT__ALU_funct;
    vlSelfRef.__Vcellout__risc_v__RS1 = vlSelfRef.risc_v__DOT__rs1;
    vlSelfRef.__Vcellout__risc_v__RS2 = vlSelfRef.risc_v__DOT__rs2;
    vlSelfRef.__Vcellout__risc_v__RD = vlSelfRef.risc_v__DOT__rd;
    if (vlSelfRef.risc_v__DOT__mux_PC) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelfRef.risc_v__DOT____VlemCond_4 = (0x00001fffU 
                                               & vlSelfRef.risc_v__DOT__adder_out);
    } else {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelfRef.risc_v__DOT____VlemCond_4 = (0x00001fffU 
                                               & vlSelfRef.risc_v__DOT__ALU_out);
    }
    vlSelfRef.risc_v__DOT__pc = vlSelfRef.risc_v__DOT____VlemCond_4;
    if (vlSelfRef.risc_v__DOT__mux_PC) {
        ++(vlSymsp->__Vcoverage[799]);
    }
    if ((1U & (~ (IData)(vlSelfRef.risc_v__DOT__mux_PC)))) {
        ++(vlSymsp->__Vcoverage[800]);
    }
    ++(vlSymsp->__Vcoverage[803]);
    if (__VdlySet__risc_v__DOT__DATA_MEM__DOT__RAM__v0) {
        vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM[__VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v0] 
            = __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v0;
    }
    if (__VdlySet__risc_v__DOT__DATA_MEM__DOT__RAM__v1) {
        vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM[__VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v1] 
            = __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v1;
        vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM[__VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v2] 
            = __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v2;
    }
    if (__VdlySet__risc_v__DOT__DATA_MEM__DOT__RAM__v3) {
        vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM[__VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v3] 
            = __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v3;
        vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM[__VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v4] 
            = __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v4;
        vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM[__VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v5] 
            = __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v5;
        vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM[__VdlyDim0__risc_v__DOT__DATA_MEM__DOT__RAM__v6] 
            = __VdlyVal__risc_v__DOT__DATA_MEM__DOT__RAM__v6;
    }
    if (__VdlySet__risc_v__DOT__REG_FILE__DOT__registers__v0) {
        vlSelfRef.risc_v__DOT__REG_FILE__DOT__registers[__VdlyDim0__risc_v__DOT__REG_FILE__DOT__registers__v0] 
            = __VdlyVal__risc_v__DOT__REG_FILE__DOT__registers__v0;
    }
    VL_ASSIGN_SII(4, vlSelfRef.ALU_FUNCT, vlSelfRef.__Vcellout__risc_v__ALU_FUNCT);
    if (((IData)(vlSelfRef.__Vcellout__risc_v__ALU_FUNCT) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__ALU_FUNCT))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 32, vlSelfRef.__Vcellout__risc_v__ALU_FUNCT, vlSelfRef.risc_v__DOT____Vtogcov__ALU_FUNCT);
        vlSelfRef.risc_v__DOT____Vtogcov__ALU_FUNCT 
            = vlSelfRef.__Vcellout__risc_v__ALU_FUNCT;
    }
    VL_ASSIGN_SII(5, vlSelfRef.RS1, vlSelfRef.__Vcellout__risc_v__RS1);
    if (((IData)(vlSelfRef.__Vcellout__risc_v__RS1) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__RS1))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 2, vlSelfRef.__Vcellout__risc_v__RS1, vlSelfRef.risc_v__DOT____Vtogcov__RS1);
        vlSelfRef.risc_v__DOT____Vtogcov__RS1 = vlSelfRef.__Vcellout__risc_v__RS1;
    }
    VL_ASSIGN_SII(5, vlSelfRef.RS2, vlSelfRef.__Vcellout__risc_v__RS2);
    if (((IData)(vlSelfRef.__Vcellout__risc_v__RS2) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__RS2))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 12, vlSelfRef.__Vcellout__risc_v__RS2, vlSelfRef.risc_v__DOT____Vtogcov__RS2);
        vlSelfRef.risc_v__DOT____Vtogcov__RS2 = vlSelfRef.__Vcellout__risc_v__RS2;
    }
    VL_ASSIGN_SII(5, vlSelfRef.RD, vlSelfRef.__Vcellout__risc_v__RD);
    if (((IData)(vlSelfRef.__Vcellout__risc_v__RD) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__RD))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 22, vlSelfRef.__Vcellout__risc_v__RD, vlSelfRef.risc_v__DOT____Vtogcov__RD);
        vlSelfRef.risc_v__DOT____Vtogcov__RD = vlSelfRef.__Vcellout__risc_v__RD;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__pc) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__pc))) {
        VL_COV_TOGGLE_CHG_ST_I(13, vlSymsp->__Vcoverage + 40, vlSelfRef.risc_v__DOT__pc, vlSelfRef.risc_v__DOT____Vtogcov__pc);
        vlSelfRef.risc_v__DOT____Vtogcov__pc = vlSelfRef.risc_v__DOT__pc;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__pc) ^ vlSelfRef.risc_v__DOT__ADDER__DOT____Vtogcov__B)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 804, vlSelfRef.risc_v__DOT__pc, vlSelfRef.risc_v__DOT__ADDER__DOT____Vtogcov__B);
        vlSelfRef.risc_v__DOT__ADDER__DOT____Vtogcov__B 
            = vlSelfRef.risc_v__DOT__pc;
    }
    if ((vlSelfRef.risc_v__DOT__instr_mem[vlSelfRef.risc_v__DOT__pc] 
         ^ vlSelfRef.risc_v__DOT__CONTROL_UNIT__DOT____Vtogcov__instr)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 886, vlSelfRef.risc_v__DOT__instr_mem
                               [vlSelfRef.risc_v__DOT__pc], vlSelfRef.risc_v__DOT__CONTROL_UNIT__DOT____Vtogcov__instr);
        vlSelfRef.risc_v__DOT__CONTROL_UNIT__DOT____Vtogcov__instr 
            = vlSelfRef.risc_v__DOT__instr_mem[vlSelfRef.risc_v__DOT__pc];
    }
    vlSelfRef.risc_v__DOT__mux_PC = 1U;
    vlSelfRef.risc_v__DOT__mux_reg = 0U;
    vlSelfRef.risc_v__DOT__WE_reg_file = 0U;
    vlSelfRef.risc_v__DOT__WE_data_mem = 0U;
    vlSelfRef.risc_v__DOT__mux_ALU2 = 0U;
    vlSelfRef.risc_v__DOT__mux_ALU1 = 0U;
    vlSelfRef.risc_v__DOT__rs1 = 0U;
    vlSelfRef.risc_v__DOT__rs2 = 0U;
    vlSelfRef.risc_v__DOT__rd = 0U;
    vlSelfRef.risc_v__DOT__imm = 0U;
    vlSelfRef.risc_v__DOT__ALU_funct = 9U;
    vlSelfRef.risc_v__DOT__mem_size = 2U;
    vlSelfRef.risc_v__DOT__sign_val = 1U;
    vlSelfRef.risc_v__DOT__branch_decoder_on = 0U;
    vlSelfRef.risc_v__DOT__branch_op = 0U;
    if ((0x00000040U & vlSelfRef.risc_v__DOT__instr_mem
         [vlSelfRef.risc_v__DOT__pc])) {
        if ((0x00000020U & vlSelfRef.risc_v__DOT__instr_mem
             [vlSelfRef.risc_v__DOT__pc])) {
            if ((0x00000010U & vlSelfRef.risc_v__DOT__instr_mem
                 [vlSelfRef.risc_v__DOT__pc])) {
                ++(vlSymsp->__Vcoverage[995]);
            } else if ((8U & vlSelfRef.risc_v__DOT__instr_mem
                        [vlSelfRef.risc_v__DOT__pc])) {
                if ((4U & vlSelfRef.risc_v__DOT__instr_mem
                     [vlSelfRef.risc_v__DOT__pc])) {
                    if ((2U & vlSelfRef.risc_v__DOT__instr_mem
                         [vlSelfRef.risc_v__DOT__pc])) {
                        if ((1U & vlSelfRef.risc_v__DOT__instr_mem
                             [vlSelfRef.risc_v__DOT__pc])) {
                            vlSelfRef.risc_v__DOT__mux_PC = 0U;
                            vlSelfRef.risc_v__DOT__mux_reg = 1U;
                            vlSelfRef.risc_v__DOT__WE_reg_file = 1U;
                            vlSelfRef.risc_v__DOT__WE_data_mem = 0U;
                            vlSelfRef.risc_v__DOT__mux_ALU2 = 2U;
                            vlSelfRef.risc_v__DOT__mux_ALU1 = 1U;
                            vlSelfRef.risc_v__DOT__ALU_funct = 0U;
                            vlSelfRef.risc_v__DOT__rd 
                                = (0x0000001fU & (vlSelfRef.risc_v__DOT__instr_mem
                                                  [vlSelfRef.risc_v__DOT__pc] 
                                                  >> 7U));
                            vlSelfRef.risc_v__DOT__imm 
                                = (((- (IData)((vlSelfRef.risc_v__DOT__instr_mem
                                                [vlSelfRef.risc_v__DOT__pc] 
                                                >> 0x1fU))) 
                                    << 0x00000014U) 
                                   | ((((0x000001feU 
                                         & (vlSelfRef.risc_v__DOT__instr_mem
                                            [vlSelfRef.risc_v__DOT__pc] 
                                            >> 0x0000000bU)) 
                                        | (1U & (vlSelfRef.risc_v__DOT__instr_mem
                                                 [vlSelfRef.risc_v__DOT__pc] 
                                                 >> 0x14U))) 
                                       << 0x0000000bU) 
                                      | (0x000007feU 
                                         & (vlSelfRef.risc_v__DOT__instr_mem
                                            [vlSelfRef.risc_v__DOT__pc] 
                                            >> 0x00000014U))));
                            ++(vlSymsp->__Vcoverage[992]);
                        } else {
                            ++(vlSymsp->__Vcoverage[995]);
                        }
                    } else {
                        ++(vlSymsp->__Vcoverage[995]);
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[995]);
                }
            } else if ((4U & vlSelfRef.risc_v__DOT__instr_mem
                        [vlSelfRef.risc_v__DOT__pc])) {
                if ((2U & vlSelfRef.risc_v__DOT__instr_mem
                     [vlSelfRef.risc_v__DOT__pc])) {
                    if ((1U & vlSelfRef.risc_v__DOT__instr_mem
                         [vlSelfRef.risc_v__DOT__pc])) {
                        vlSelfRef.risc_v__DOT__mux_PC = 0U;
                        vlSelfRef.risc_v__DOT__mux_reg = 1U;
                        vlSelfRef.risc_v__DOT__WE_reg_file = 1U;
                        vlSelfRef.risc_v__DOT__WE_data_mem = 0U;
                        vlSelfRef.risc_v__DOT__mux_ALU2 = 0U;
                        vlSelfRef.risc_v__DOT__mux_ALU1 = 1U;
                        vlSelfRef.risc_v__DOT__ALU_funct = 0x0aU;
                        vlSelfRef.risc_v__DOT__rd = 
                            (0x0000001fU & (vlSelfRef.risc_v__DOT__instr_mem
                                            [vlSelfRef.risc_v__DOT__pc] 
                                            >> 7U));
                        vlSelfRef.risc_v__DOT__rs1 
                            = (0x0000001fU & (vlSelfRef.risc_v__DOT__instr_mem
                                              [vlSelfRef.risc_v__DOT__pc] 
                                              >> 0x0fU));
                        vlSelfRef.risc_v__DOT__imm 
                            = (((- (IData)((vlSelfRef.risc_v__DOT__instr_mem
                                            [vlSelfRef.risc_v__DOT__pc] 
                                            >> 0x1fU))) 
                                << 0x0000000cU) | (vlSelfRef.risc_v__DOT__instr_mem
                                                   [vlSelfRef.risc_v__DOT__pc] 
                                                   >> 0x14U));
                        ++(vlSymsp->__Vcoverage[991]);
                    } else {
                        ++(vlSymsp->__Vcoverage[995]);
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[995]);
                }
            } else if ((2U & vlSelfRef.risc_v__DOT__instr_mem
                        [vlSelfRef.risc_v__DOT__pc])) {
                if ((1U & vlSelfRef.risc_v__DOT__instr_mem
                     [vlSelfRef.risc_v__DOT__pc])) {
                    vlSelfRef.risc_v__DOT__mux_PC = 1U;
                    vlSelfRef.risc_v__DOT__mux_reg = 0U;
                    vlSelfRef.risc_v__DOT__WE_reg_file = 0U;
                    vlSelfRef.risc_v__DOT__WE_data_mem = 0U;
                    vlSelfRef.risc_v__DOT__mux_ALU2 = 0U;
                    vlSelfRef.risc_v__DOT__mux_ALU1 = 0U;
                    vlSelfRef.risc_v__DOT__rs1 = (0x0000001fU 
                                                  & (vlSelfRef.risc_v__DOT__instr_mem
                                                     [vlSelfRef.risc_v__DOT__pc] 
                                                     >> 0x0fU));
                    vlSelfRef.risc_v__DOT__rs2 = (0x0000001fU 
                                                  & (vlSelfRef.risc_v__DOT__instr_mem
                                                     [vlSelfRef.risc_v__DOT__pc] 
                                                     >> 0x14U));
                    vlSelfRef.risc_v__DOT__ALU_funct = 1U;
                    vlSelfRef.risc_v__DOT__imm = ((
                                                   (- (IData)(
                                                              (vlSelfRef.risc_v__DOT__instr_mem
                                                               [vlSelfRef.risc_v__DOT__pc] 
                                                               >> 0x1fU))) 
                                                   << 0x0000000cU) 
                                                  | ((0x00000800U 
                                                      & (vlSelfRef.risc_v__DOT__instr_mem
                                                         [vlSelfRef.risc_v__DOT__pc] 
                                                         << 4U)) 
                                                     | ((0x000007e0U 
                                                         & (vlSelfRef.risc_v__DOT__instr_mem
                                                            [vlSelfRef.risc_v__DOT__pc] 
                                                            >> 0x00000014U)) 
                                                        | (0x0000001eU 
                                                           & (vlSelfRef.risc_v__DOT__instr_mem
                                                              [vlSelfRef.risc_v__DOT__pc] 
                                                              >> 7U)))));
                    vlSelfRef.risc_v__DOT__branch_decoder_on = 1U;
                    vlSelfRef.risc_v__DOT__branch_op 
                        = (7U & (vlSelfRef.risc_v__DOT__instr_mem
                                 [vlSelfRef.risc_v__DOT__pc] 
                                 >> 0x0cU));
                    ++(vlSymsp->__Vcoverage[990]);
                } else {
                    ++(vlSymsp->__Vcoverage[995]);
                }
            } else {
                ++(vlSymsp->__Vcoverage[995]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[995]);
        }
    } else if ((0x00000020U & vlSelfRef.risc_v__DOT__instr_mem
                [vlSelfRef.risc_v__DOT__pc])) {
        if ((0x00000010U & vlSelfRef.risc_v__DOT__instr_mem
             [vlSelfRef.risc_v__DOT__pc])) {
            if ((8U & vlSelfRef.risc_v__DOT__instr_mem
                 [vlSelfRef.risc_v__DOT__pc])) {
                ++(vlSymsp->__Vcoverage[995]);
            } else if ((4U & vlSelfRef.risc_v__DOT__instr_mem
                        [vlSelfRef.risc_v__DOT__pc])) {
                if ((2U & vlSelfRef.risc_v__DOT__instr_mem
                     [vlSelfRef.risc_v__DOT__pc])) {
                    if ((1U & vlSelfRef.risc_v__DOT__instr_mem
                         [vlSelfRef.risc_v__DOT__pc])) {
                        vlSelfRef.risc_v__DOT__mux_PC = 1U;
                        vlSelfRef.risc_v__DOT__mux_reg = 0U;
                        vlSelfRef.risc_v__DOT__WE_reg_file = 1U;
                        vlSelfRef.risc_v__DOT__WE_data_mem = 0U;
                        vlSelfRef.risc_v__DOT__mux_ALU2 = 1U;
                        vlSelfRef.risc_v__DOT__mux_ALU1 = 1U;
                        vlSelfRef.risc_v__DOT__ALU_funct = 0U;
                        vlSelfRef.risc_v__DOT__rd = 
                            (0x0000001fU & (vlSelfRef.risc_v__DOT__instr_mem
                                            [vlSelfRef.risc_v__DOT__pc] 
                                            >> 7U));
                        vlSelfRef.risc_v__DOT__imm 
                            = (0xfffff000U & vlSelfRef.risc_v__DOT__instr_mem
                               [vlSelfRef.risc_v__DOT__pc]);
                        ++(vlSymsp->__Vcoverage[994]);
                    } else {
                        ++(vlSymsp->__Vcoverage[995]);
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[995]);
                }
            } else if ((2U & vlSelfRef.risc_v__DOT__instr_mem
                        [vlSelfRef.risc_v__DOT__pc])) {
                if ((1U & vlSelfRef.risc_v__DOT__instr_mem
                     [vlSelfRef.risc_v__DOT__pc])) {
                    vlSelfRef.risc_v__DOT__mux_PC = 1U;
                    vlSelfRef.risc_v__DOT__mux_reg = 0U;
                    vlSelfRef.risc_v__DOT__WE_reg_file = 1U;
                    vlSelfRef.risc_v__DOT__WE_data_mem = 0U;
                    vlSelfRef.risc_v__DOT__mux_ALU2 = 0U;
                    vlSelfRef.risc_v__DOT__mux_ALU1 = 0U;
                    vlSelfRef.risc_v__DOT__rd = (0x0000001fU 
                                                 & (vlSelfRef.risc_v__DOT__instr_mem
                                                    [vlSelfRef.risc_v__DOT__pc] 
                                                    >> 7U));
                    vlSelfRef.risc_v__DOT__rs1 = (0x0000001fU 
                                                  & (vlSelfRef.risc_v__DOT__instr_mem
                                                     [vlSelfRef.risc_v__DOT__pc] 
                                                     >> 0x0fU));
                    vlSelfRef.risc_v__DOT__rs2 = (0x0000001fU 
                                                  & (vlSelfRef.risc_v__DOT__instr_mem
                                                     [vlSelfRef.risc_v__DOT__pc] 
                                                     >> 0x14U));
                    if ((0x00004000U & vlSelfRef.risc_v__DOT__instr_mem
                         [vlSelfRef.risc_v__DOT__pc])) {
                        if ((0x00002000U & vlSelfRef.risc_v__DOT__instr_mem
                             [vlSelfRef.risc_v__DOT__pc])) {
                            if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                                 [vlSelfRef.risc_v__DOT__pc])) {
                                vlSelfRef.risc_v__DOT__ALU_funct = 9U;
                                ++(vlSymsp->__Vcoverage[963]);
                            } else {
                                vlSelfRef.risc_v__DOT__ALU_funct = 8U;
                                ++(vlSymsp->__Vcoverage[962]);
                            }
                        } else if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                                    [vlSelfRef.risc_v__DOT__pc])) {
                            if ((0x40000000U & vlSelfRef.risc_v__DOT__instr_mem
                                 [vlSelfRef.risc_v__DOT__pc])) {
                                if ((0x40000000U & vlSelfRef.risc_v__DOT__instr_mem
                                     [vlSelfRef.risc_v__DOT__pc])) {
                                    vlSelfRef.risc_v__DOT__ALU_funct = 7U;
                                    ++(vlSymsp->__Vcoverage[959]);
                                } else {
                                    ++(vlSymsp->__Vcoverage[960]);
                                }
                            } else {
                                vlSelfRef.risc_v__DOT__ALU_funct = 6U;
                                ++(vlSymsp->__Vcoverage[958]);
                            }
                            ++(vlSymsp->__Vcoverage[961]);
                        } else {
                            vlSelfRef.risc_v__DOT__ALU_funct = 5U;
                            ++(vlSymsp->__Vcoverage[957]);
                        }
                    } else if ((0x00002000U & vlSelfRef.risc_v__DOT__instr_mem
                                [vlSelfRef.risc_v__DOT__pc])) {
                        if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                             [vlSelfRef.risc_v__DOT__pc])) {
                            vlSelfRef.risc_v__DOT__ALU_funct = 4U;
                            ++(vlSymsp->__Vcoverage[956]);
                        } else {
                            vlSelfRef.risc_v__DOT__ALU_funct = 3U;
                            ++(vlSymsp->__Vcoverage[955]);
                        }
                    } else if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                                [vlSelfRef.risc_v__DOT__pc])) {
                        vlSelfRef.risc_v__DOT__ALU_funct = 2U;
                        ++(vlSymsp->__Vcoverage[954]);
                    } else {
                        if ((0x40000000U & vlSelfRef.risc_v__DOT__instr_mem
                             [vlSelfRef.risc_v__DOT__pc])) {
                            if ((0x40000000U & vlSelfRef.risc_v__DOT__instr_mem
                                 [vlSelfRef.risc_v__DOT__pc])) {
                                vlSelfRef.risc_v__DOT__ALU_funct = 1U;
                                ++(vlSymsp->__Vcoverage[951]);
                            } else {
                                ++(vlSymsp->__Vcoverage[952]);
                            }
                        } else {
                            vlSelfRef.risc_v__DOT__ALU_funct = 0U;
                            ++(vlSymsp->__Vcoverage[950]);
                        }
                        ++(vlSymsp->__Vcoverage[953]);
                    }
                    ++(vlSymsp->__Vcoverage[965]);
                } else {
                    ++(vlSymsp->__Vcoverage[995]);
                }
            } else {
                ++(vlSymsp->__Vcoverage[995]);
            }
        } else if ((8U & vlSelfRef.risc_v__DOT__instr_mem
                    [vlSelfRef.risc_v__DOT__pc])) {
            ++(vlSymsp->__Vcoverage[995]);
        } else if ((4U & vlSelfRef.risc_v__DOT__instr_mem
                    [vlSelfRef.risc_v__DOT__pc])) {
            ++(vlSymsp->__Vcoverage[995]);
        } else if ((2U & vlSelfRef.risc_v__DOT__instr_mem
                    [vlSelfRef.risc_v__DOT__pc])) {
            if ((1U & vlSelfRef.risc_v__DOT__instr_mem
                 [vlSelfRef.risc_v__DOT__pc])) {
                vlSelfRef.risc_v__DOT__mux_PC = 1U;
                vlSelfRef.risc_v__DOT__WE_data_mem = 1U;
                vlSelfRef.risc_v__DOT__mux_ALU2 = 0U;
                vlSelfRef.risc_v__DOT__mux_ALU1 = 1U;
                vlSelfRef.risc_v__DOT__rs1 = (0x0000001fU 
                                              & (vlSelfRef.risc_v__DOT__instr_mem
                                                 [vlSelfRef.risc_v__DOT__pc] 
                                                 >> 0x0fU));
                vlSelfRef.risc_v__DOT__rs2 = (0x0000001fU 
                                              & (vlSelfRef.risc_v__DOT__instr_mem
                                                 [vlSelfRef.risc_v__DOT__pc] 
                                                 >> 0x14U));
                vlSelfRef.risc_v__DOT__imm = (((- (IData)(
                                                          (vlSelfRef.risc_v__DOT__instr_mem
                                                           [vlSelfRef.risc_v__DOT__pc] 
                                                           >> 0x1fU))) 
                                               << 0x0000000cU) 
                                              | ((0x00000fe0U 
                                                  & (vlSelfRef.risc_v__DOT__instr_mem
                                                     [vlSelfRef.risc_v__DOT__pc] 
                                                     >> 0x00000014U)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.risc_v__DOT__instr_mem
                                                       [vlSelfRef.risc_v__DOT__pc] 
                                                       >> 7U))));
                vlSelfRef.risc_v__DOT__ALU_funct = 0U;
                if ((0U == (7U & (vlSelfRef.risc_v__DOT__instr_mem
                                  [vlSelfRef.risc_v__DOT__pc] 
                                  >> 0x0cU)))) {
                    vlSelfRef.risc_v__DOT__mem_size = 0U;
                    ++(vlSymsp->__Vcoverage[978]);
                } else if ((1U == (7U & (vlSelfRef.risc_v__DOT__instr_mem
                                         [vlSelfRef.risc_v__DOT__pc] 
                                         >> 0x0cU)))) {
                    vlSelfRef.risc_v__DOT__mem_size = 1U;
                    ++(vlSymsp->__Vcoverage[979]);
                } else if ((2U == (7U & (vlSelfRef.risc_v__DOT__instr_mem
                                         [vlSelfRef.risc_v__DOT__pc] 
                                         >> 0x0cU)))) {
                    vlSelfRef.risc_v__DOT__mem_size = 2U;
                    ++(vlSymsp->__Vcoverage[980]);
                } else {
                    ++(vlSymsp->__Vcoverage[981]);
                }
                ++(vlSymsp->__Vcoverage[982]);
            } else {
                ++(vlSymsp->__Vcoverage[995]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[995]);
        }
    } else if ((0x00000010U & vlSelfRef.risc_v__DOT__instr_mem
                [vlSelfRef.risc_v__DOT__pc])) {
        if ((8U & vlSelfRef.risc_v__DOT__instr_mem[vlSelfRef.risc_v__DOT__pc])) {
            ++(vlSymsp->__Vcoverage[995]);
        } else if ((4U & vlSelfRef.risc_v__DOT__instr_mem
                    [vlSelfRef.risc_v__DOT__pc])) {
            if ((2U & vlSelfRef.risc_v__DOT__instr_mem
                 [vlSelfRef.risc_v__DOT__pc])) {
                if ((1U & vlSelfRef.risc_v__DOT__instr_mem
                     [vlSelfRef.risc_v__DOT__pc])) {
                    vlSelfRef.risc_v__DOT__mux_PC = 1U;
                    vlSelfRef.risc_v__DOT__mux_reg = 0U;
                    vlSelfRef.risc_v__DOT__WE_reg_file = 1U;
                    vlSelfRef.risc_v__DOT__WE_data_mem = 0U;
                    vlSelfRef.risc_v__DOT__mux_ALU2 = 2U;
                    vlSelfRef.risc_v__DOT__mux_ALU1 = 1U;
                    vlSelfRef.risc_v__DOT__ALU_funct = 0U;
                    vlSelfRef.risc_v__DOT__rd = (0x0000001fU 
                                                 & (vlSelfRef.risc_v__DOT__instr_mem
                                                    [vlSelfRef.risc_v__DOT__pc] 
                                                    >> 7U));
                    vlSelfRef.risc_v__DOT__imm = (0xfffff000U 
                                                  & vlSelfRef.risc_v__DOT__instr_mem
                                                  [vlSelfRef.risc_v__DOT__pc]);
                    ++(vlSymsp->__Vcoverage[993]);
                } else {
                    ++(vlSymsp->__Vcoverage[995]);
                }
            } else {
                ++(vlSymsp->__Vcoverage[995]);
            }
        } else if ((2U & vlSelfRef.risc_v__DOT__instr_mem
                    [vlSelfRef.risc_v__DOT__pc])) {
            if ((1U & vlSelfRef.risc_v__DOT__instr_mem
                 [vlSelfRef.risc_v__DOT__pc])) {
                vlSelfRef.risc_v__DOT__mux_PC = 1U;
                vlSelfRef.risc_v__DOT__mux_reg = 0U;
                vlSelfRef.risc_v__DOT__WE_reg_file = 1U;
                vlSelfRef.risc_v__DOT__WE_data_mem = 0U;
                vlSelfRef.risc_v__DOT__mux_ALU2 = 0U;
                vlSelfRef.risc_v__DOT__mux_ALU1 = 1U;
                vlSelfRef.risc_v__DOT__rd = (0x0000001fU 
                                             & (vlSelfRef.risc_v__DOT__instr_mem
                                                [vlSelfRef.risc_v__DOT__pc] 
                                                >> 7U));
                vlSelfRef.risc_v__DOT__rs1 = (0x0000001fU 
                                              & (vlSelfRef.risc_v__DOT__instr_mem
                                                 [vlSelfRef.risc_v__DOT__pc] 
                                                 >> 0x0fU));
                vlSelfRef.risc_v__DOT__imm = (((- (IData)(
                                                          (vlSelfRef.risc_v__DOT__instr_mem
                                                           [vlSelfRef.risc_v__DOT__pc] 
                                                           >> 0x1fU))) 
                                               << 0x0000000cU) 
                                              | (vlSelfRef.risc_v__DOT__instr_mem
                                                 [vlSelfRef.risc_v__DOT__pc] 
                                                 >> 0x14U));
                if ((0x00004000U & vlSelfRef.risc_v__DOT__instr_mem
                     [vlSelfRef.risc_v__DOT__pc])) {
                    if ((0x00002000U & vlSelfRef.risc_v__DOT__instr_mem
                         [vlSelfRef.risc_v__DOT__pc])) {
                        if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                             [vlSelfRef.risc_v__DOT__pc])) {
                            vlSelfRef.risc_v__DOT__ALU_funct = 9U;
                            ++(vlSymsp->__Vcoverage[971]);
                        } else {
                            vlSelfRef.risc_v__DOT__ALU_funct = 8U;
                            ++(vlSymsp->__Vcoverage[970]);
                        }
                    } else if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                                [vlSelfRef.risc_v__DOT__pc])) {
                        if ((0x40000000U & vlSelfRef.risc_v__DOT__instr_mem
                             [vlSelfRef.risc_v__DOT__pc])) {
                            if ((0x40000000U & vlSelfRef.risc_v__DOT__instr_mem
                                 [vlSelfRef.risc_v__DOT__pc])) {
                                vlSelfRef.risc_v__DOT__ALU_funct = 7U;
                                vlSelfRef.risc_v__DOT__imm 
                                    = (0x0000001fU 
                                       & (vlSelfRef.risc_v__DOT__instr_mem
                                          [vlSelfRef.risc_v__DOT__pc] 
                                          >> 0x14U));
                                ++(vlSymsp->__Vcoverage[974]);
                            } else {
                                ++(vlSymsp->__Vcoverage[975]);
                            }
                        } else {
                            vlSelfRef.risc_v__DOT__ALU_funct = 6U;
                            vlSelfRef.risc_v__DOT__imm 
                                = (0x0000001fU & (vlSelfRef.risc_v__DOT__instr_mem
                                                  [vlSelfRef.risc_v__DOT__pc] 
                                                  >> 0x14U));
                            ++(vlSymsp->__Vcoverage[973]);
                        }
                        ++(vlSymsp->__Vcoverage[976]);
                    } else {
                        vlSelfRef.risc_v__DOT__ALU_funct = 5U;
                        ++(vlSymsp->__Vcoverage[969]);
                    }
                } else if ((0x00002000U & vlSelfRef.risc_v__DOT__instr_mem
                            [vlSelfRef.risc_v__DOT__pc])) {
                    if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                         [vlSelfRef.risc_v__DOT__pc])) {
                        vlSelfRef.risc_v__DOT__ALU_funct = 4U;
                        ++(vlSymsp->__Vcoverage[968]);
                    } else {
                        vlSelfRef.risc_v__DOT__ALU_funct = 3U;
                        ++(vlSymsp->__Vcoverage[967]);
                    }
                } else if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                            [vlSelfRef.risc_v__DOT__pc])) {
                    vlSelfRef.risc_v__DOT__ALU_funct = 2U;
                    vlSelfRef.risc_v__DOT__imm = (0x0000001fU 
                                                  & (vlSelfRef.risc_v__DOT__instr_mem
                                                     [vlSelfRef.risc_v__DOT__pc] 
                                                     >> 0x14U));
                    ++(vlSymsp->__Vcoverage[972]);
                } else {
                    vlSelfRef.risc_v__DOT__ALU_funct = 0U;
                    ++(vlSymsp->__Vcoverage[966]);
                }
                ++(vlSymsp->__Vcoverage[977]);
            } else {
                ++(vlSymsp->__Vcoverage[995]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[995]);
        }
    } else if ((8U & vlSelfRef.risc_v__DOT__instr_mem
                [vlSelfRef.risc_v__DOT__pc])) {
        ++(vlSymsp->__Vcoverage[995]);
    } else if ((4U & vlSelfRef.risc_v__DOT__instr_mem
                [vlSelfRef.risc_v__DOT__pc])) {
        ++(vlSymsp->__Vcoverage[995]);
    } else if ((2U & vlSelfRef.risc_v__DOT__instr_mem
                [vlSelfRef.risc_v__DOT__pc])) {
        if ((1U & vlSelfRef.risc_v__DOT__instr_mem[vlSelfRef.risc_v__DOT__pc])) {
            vlSelfRef.risc_v__DOT__mux_PC = 1U;
            vlSelfRef.risc_v__DOT__mux_ALU2 = 0U;
            vlSelfRef.risc_v__DOT__mux_ALU1 = 1U;
            vlSelfRef.risc_v__DOT__rd = (0x0000001fU 
                                         & (vlSelfRef.risc_v__DOT__instr_mem
                                            [vlSelfRef.risc_v__DOT__pc] 
                                            >> 7U));
            vlSelfRef.risc_v__DOT__rs1 = (0x0000001fU 
                                          & (vlSelfRef.risc_v__DOT__instr_mem
                                             [vlSelfRef.risc_v__DOT__pc] 
                                             >> 0x0fU));
            vlSelfRef.risc_v__DOT__imm = (((- (IData)(
                                                      (vlSelfRef.risc_v__DOT__instr_mem
                                                       [vlSelfRef.risc_v__DOT__pc] 
                                                       >> 0x1fU))) 
                                           << 0x0000000cU) 
                                          | (vlSelfRef.risc_v__DOT__instr_mem
                                             [vlSelfRef.risc_v__DOT__pc] 
                                             >> 0x14U));
            vlSelfRef.risc_v__DOT__ALU_funct = 0U;
            if ((0x00004000U & vlSelfRef.risc_v__DOT__instr_mem
                 [vlSelfRef.risc_v__DOT__pc])) {
                if ((0x00002000U & vlSelfRef.risc_v__DOT__instr_mem
                     [vlSelfRef.risc_v__DOT__pc])) {
                    ++(vlSymsp->__Vcoverage[988]);
                } else if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                            [vlSelfRef.risc_v__DOT__pc])) {
                    vlSelfRef.risc_v__DOT__mem_size = 1U;
                    vlSelfRef.risc_v__DOT__sign_val = 0U;
                    ++(vlSymsp->__Vcoverage[987]);
                } else {
                    vlSelfRef.risc_v__DOT__mem_size = 0U;
                    vlSelfRef.risc_v__DOT__sign_val = 0U;
                    ++(vlSymsp->__Vcoverage[986]);
                }
            } else if ((0x00002000U & vlSelfRef.risc_v__DOT__instr_mem
                        [vlSelfRef.risc_v__DOT__pc])) {
                if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                     [vlSelfRef.risc_v__DOT__pc])) {
                    ++(vlSymsp->__Vcoverage[988]);
                } else {
                    vlSelfRef.risc_v__DOT__mem_size = 2U;
                    ++(vlSymsp->__Vcoverage[985]);
                }
            } else if ((0x00001000U & vlSelfRef.risc_v__DOT__instr_mem
                        [vlSelfRef.risc_v__DOT__pc])) {
                vlSelfRef.risc_v__DOT__mem_size = 1U;
                ++(vlSymsp->__Vcoverage[984]);
            } else {
                vlSelfRef.risc_v__DOT__mem_size = 0U;
                ++(vlSymsp->__Vcoverage[983]);
            }
            ++(vlSymsp->__Vcoverage[989]);
        } else {
            ++(vlSymsp->__Vcoverage[995]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[995]);
    }
    ++(vlSymsp->__Vcoverage[996]);
    if (((IData)(vlSelfRef.risc_v__DOT__mux_PC) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__mux_PC))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 168, vlSelfRef.risc_v__DOT__mux_PC, vlSelfRef.risc_v__DOT____Vtogcov__mux_PC);
        vlSelfRef.risc_v__DOT____Vtogcov__mux_PC = vlSelfRef.risc_v__DOT__mux_PC;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__WE_reg_file) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__WE_reg_file))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 170, vlSelfRef.risc_v__DOT__WE_reg_file, vlSelfRef.risc_v__DOT____Vtogcov__WE_reg_file);
        vlSelfRef.risc_v__DOT____Vtogcov__WE_reg_file 
            = vlSelfRef.risc_v__DOT__WE_reg_file;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__WE_data_mem) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__WE_data_mem))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 172, vlSelfRef.risc_v__DOT__WE_data_mem, vlSelfRef.risc_v__DOT____Vtogcov__WE_data_mem);
        vlSelfRef.risc_v__DOT____Vtogcov__WE_data_mem 
            = vlSelfRef.risc_v__DOT__WE_data_mem;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__rd) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__rd))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 92, vlSelfRef.risc_v__DOT__rd, vlSelfRef.risc_v__DOT____Vtogcov__rd);
        vlSelfRef.risc_v__DOT____Vtogcov__rd = vlSelfRef.risc_v__DOT__rd;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__mux_reg) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__mux_reg))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 178, vlSelfRef.risc_v__DOT__mux_reg, vlSelfRef.risc_v__DOT____Vtogcov__mux_reg);
        vlSelfRef.risc_v__DOT____Vtogcov__mux_reg = vlSelfRef.risc_v__DOT__mux_reg;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__mem_size) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__mem_size))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 186, vlSelfRef.risc_v__DOT__mem_size, vlSelfRef.risc_v__DOT____Vtogcov__mem_size);
        vlSelfRef.risc_v__DOT____Vtogcov__mem_size 
            = vlSelfRef.risc_v__DOT__mem_size;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__sign_val) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__sign_val))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 176, vlSelfRef.risc_v__DOT__sign_val, vlSelfRef.risc_v__DOT____Vtogcov__sign_val);
        vlSelfRef.risc_v__DOT____Vtogcov__sign_val 
            = vlSelfRef.risc_v__DOT__sign_val;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__branch_decoder_on) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__branch_decoder_on))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 776, vlSelfRef.risc_v__DOT__branch_decoder_on, vlSelfRef.risc_v__DOT____Vtogcov__branch_decoder_on);
        vlSelfRef.risc_v__DOT____Vtogcov__branch_decoder_on 
            = vlSelfRef.risc_v__DOT__branch_decoder_on;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__branch_op) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__branch_op))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 778, vlSelfRef.risc_v__DOT__branch_op, vlSelfRef.risc_v__DOT____Vtogcov__branch_op);
        vlSelfRef.risc_v__DOT____Vtogcov__branch_op 
            = vlSelfRef.risc_v__DOT__branch_op;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__ALU_funct) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__ALU_funct))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 190, vlSelfRef.risc_v__DOT__ALU_funct, vlSelfRef.risc_v__DOT____Vtogcov__ALU_funct);
        vlSelfRef.risc_v__DOT____Vtogcov__ALU_funct 
            = vlSelfRef.risc_v__DOT__ALU_funct;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__mux_ALU2) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__mux_ALU2))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 182, vlSelfRef.risc_v__DOT__mux_ALU2, vlSelfRef.risc_v__DOT____Vtogcov__mux_ALU2);
        vlSelfRef.risc_v__DOT____Vtogcov__mux_ALU2 
            = vlSelfRef.risc_v__DOT__mux_ALU2;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__rs1) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__rs1))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 72, vlSelfRef.risc_v__DOT__rs1, vlSelfRef.risc_v__DOT____Vtogcov__rs1);
        vlSelfRef.risc_v__DOT____Vtogcov__rs1 = vlSelfRef.risc_v__DOT__rs1;
    }
    if ((0U == (IData)(vlSelfRef.risc_v__DOT__rs1))) {
        vlSelfRef.risc_v__DOT__rs1_out = 0U;
        ++(vlSymsp->__Vcoverage[2315]);
    } else {
        vlSelfRef.risc_v__DOT__rs1_out = ((0x1eU >= 
                                           (0x0000001fU 
                                            & ((IData)(vlSelfRef.risc_v__DOT__rs1) 
                                               - (IData)(1U))))
                                           ? vlSelfRef.risc_v__DOT__REG_FILE__DOT__registers
                                          [(0x0000001fU 
                                            & ((IData)(vlSelfRef.risc_v__DOT__rs1) 
                                               - (IData)(1U)))]
                                           : 0U);
        ++(vlSymsp->__Vcoverage[2316]);
    }
    ++(vlSymsp->__Vcoverage[2317]);
    if (((IData)(vlSelfRef.risc_v__DOT__mux_ALU1) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__mux_ALU1))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 174, vlSelfRef.risc_v__DOT__mux_ALU1, vlSelfRef.risc_v__DOT____Vtogcov__mux_ALU1);
        vlSelfRef.risc_v__DOT____Vtogcov__mux_ALU1 
            = vlSelfRef.risc_v__DOT__mux_ALU1;
    }
    if (((IData)(vlSelfRef.risc_v__DOT__rs2) ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__rs2))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 82, vlSelfRef.risc_v__DOT__rs2, vlSelfRef.risc_v__DOT____Vtogcov__rs2);
        vlSelfRef.risc_v__DOT____Vtogcov__rs2 = vlSelfRef.risc_v__DOT__rs2;
    }
    if ((0U == (IData)(vlSelfRef.risc_v__DOT__rs2))) {
        vlSelfRef.risc_v__DOT__rs2_out = 0U;
        ++(vlSymsp->__Vcoverage[2318]);
    } else {
        vlSelfRef.risc_v__DOT__rs2_out = ((0x1eU >= 
                                           (0x0000001fU 
                                            & ((IData)(vlSelfRef.risc_v__DOT__rs2) 
                                               - (IData)(1U))))
                                           ? vlSelfRef.risc_v__DOT__REG_FILE__DOT__registers
                                          [(0x0000001fU 
                                            & ((IData)(vlSelfRef.risc_v__DOT__rs2) 
                                               - (IData)(1U)))]
                                           : 0U);
        ++(vlSymsp->__Vcoverage[2319]);
    }
    ++(vlSymsp->__Vcoverage[2320]);
    if ((vlSelfRef.risc_v__DOT__imm ^ vlSelfRef.risc_v__DOT____Vtogcov__imm)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 102, vlSelfRef.risc_v__DOT__imm, vlSelfRef.risc_v__DOT____Vtogcov__imm);
        vlSelfRef.risc_v__DOT____Vtogcov__imm = vlSelfRef.risc_v__DOT__imm;
    }
    if ((vlSelfRef.risc_v__DOT__rs1_out ^ vlSelfRef.risc_v__DOT____Vtogcov__rs1_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 454, vlSelfRef.risc_v__DOT__rs1_out, vlSelfRef.risc_v__DOT____Vtogcov__rs1_out);
        vlSelfRef.risc_v__DOT____Vtogcov__rs1_out = vlSelfRef.risc_v__DOT__rs1_out;
    }
    if ((0U == (IData)(vlSelfRef.risc_v__DOT__mux_ALU2))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelfRef.risc_v__DOT____VlemCond_2 = vlSelfRef.risc_v__DOT__rs1_out;
    } else {
        ++(vlSymsp->__Vcoverage[796]);
        if ((1U == (IData)(vlSelfRef.risc_v__DOT__mux_ALU2))) {
            ++(vlSymsp->__Vcoverage[794]);
            vlSelfRef.risc_v__DOT____VlemCond_2 = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[795]);
            vlSelfRef.risc_v__DOT____VlemCond_2 = vlSelfRef.risc_v__DOT__pc;
        }
    }
    vlSelfRef.risc_v__DOT__ALU_in1 = vlSelfRef.risc_v__DOT____VlemCond_2;
    if ((vlSelfRef.risc_v__DOT__rs2_out ^ vlSelfRef.risc_v__DOT____Vtogcov__rs2_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 518, vlSelfRef.risc_v__DOT__rs2_out, vlSelfRef.risc_v__DOT____Vtogcov__rs2_out);
        vlSelfRef.risc_v__DOT____Vtogcov__rs2_out = vlSelfRef.risc_v__DOT__rs2_out;
    }
    if (vlSelfRef.risc_v__DOT__mux_ALU1) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelfRef.risc_v__DOT____VlemCond_3 = vlSelfRef.risc_v__DOT__imm;
    } else {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelfRef.risc_v__DOT____VlemCond_3 = vlSelfRef.risc_v__DOT__rs2_out;
    }
    vlSelfRef.risc_v__DOT__ALU_in2 = vlSelfRef.risc_v__DOT____VlemCond_3;
    if ((vlSelfRef.risc_v__DOT__ALU_in1 ^ vlSelfRef.risc_v__DOT____Vtogcov__ALU_in1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 198, vlSelfRef.risc_v__DOT__ALU_in1, vlSelfRef.risc_v__DOT____Vtogcov__ALU_in1);
        vlSelfRef.risc_v__DOT____Vtogcov__ALU_in1 = vlSelfRef.risc_v__DOT__ALU_in1;
    }
    if (((vlSelfRef.risc_v__DOT__ALU_in1 >> 0x0000001fU) 
         ^ (IData)(vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__A))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1125, 
                               (vlSelfRef.risc_v__DOT__ALU_in1 
                                >> 0x0000001fU), vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__A);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__A 
            = (vlSelfRef.risc_v__DOT__ALU_in1 >> 0x0000001fU);
    }
    if ((vlSelfRef.risc_v__DOT__ALU_in2 ^ vlSelfRef.risc_v__DOT____Vtogcov__ALU_in2)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 262, vlSelfRef.risc_v__DOT__ALU_in2, vlSelfRef.risc_v__DOT____Vtogcov__ALU_in2);
        vlSelfRef.risc_v__DOT____Vtogcov__ALU_in2 = vlSelfRef.risc_v__DOT__ALU_in2;
    }
    if (((vlSelfRef.risc_v__DOT__ALU_in2 >> 0x0000001fU) 
         ^ (IData)(vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__B))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1127, 
                               (vlSelfRef.risc_v__DOT__ALU_in2 
                                >> 0x0000001fU), vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__B);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__B 
            = (vlSelfRef.risc_v__DOT__ALU_in2 >> 0x0000001fU);
    }
    if (((~ vlSelfRef.risc_v__DOT__ALU_in2) ^ vlSelfRef.risc_v__DOT__alu__DOT__s1__DOT____Vtogcov__B)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1340, 
                               (~ vlSelfRef.risc_v__DOT__ALU_in2), vlSelfRef.risc_v__DOT__alu__DOT__s1__DOT____Vtogcov__B);
        vlSelfRef.risc_v__DOT__alu__DOT__s1__DOT____Vtogcov__B 
            = (~ vlSelfRef.risc_v__DOT__ALU_in2);
    }
    vlSelfRef.risc_v__DOT__alu__DOT__a1_carry_flag 
        = (1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.risc_v__DOT__ALU_in2)) 
                                  + (QData)((IData)(vlSelfRef.risc_v__DOT__ALU_in1))) 
                                 >> 0x00000020U))));
    vlSelfRef.risc_v__DOT__alu__DOT__a1_out = (vlSelfRef.risc_v__DOT__ALU_in1 
                                               + vlSelfRef.risc_v__DOT__ALU_in2);
    if ((1U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_0 
            = (vlSelfRef.risc_v__DOT__ALU_in1 << 1U);
    } else {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_0 
            = vlSelfRef.risc_v__DOT__ALU_in1;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s1 = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_0;
    if ((1U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1928]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_0 
            = (vlSelfRef.risc_v__DOT__ALU_in1 >> 1U);
    } else {
        ++(vlSymsp->__Vcoverage[1929]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_0 
            = vlSelfRef.risc_v__DOT__ALU_in1;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s1 = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_0;
    if ((1U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[2194]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_0 
            = ((0x80000000U & vlSelfRef.risc_v__DOT__ALU_in1) 
               | (vlSelfRef.risc_v__DOT__ALU_in1 >> 1U));
    } else {
        ++(vlSymsp->__Vcoverage[2195]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_0 
            = vlSelfRef.risc_v__DOT__ALU_in1;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s1 = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_0;
    vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag 
        = (1U & (IData)((1ULL & ((1ULL + ((QData)((IData)(vlSelfRef.risc_v__DOT__ALU_in1)) 
                                          + (QData)((IData)(
                                                            (~ vlSelfRef.risc_v__DOT__ALU_in2))))) 
                                 >> 0x00000020U))));
    vlSelfRef.risc_v__DOT__alu__DOT__s1_out = ((IData)(1U) 
                                               + (vlSelfRef.risc_v__DOT__ALU_in1 
                                                  + 
                                                  (~ vlSelfRef.risc_v__DOT__ALU_in2)));
    if (((IData)(vlSelfRef.risc_v__DOT__alu__DOT__a1_carry_flag) 
         ^ (IData)(vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__a1_carry_flag))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1131, vlSelfRef.risc_v__DOT__alu__DOT__a1_carry_flag, vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__a1_carry_flag);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__a1_carry_flag 
            = vlSelfRef.risc_v__DOT__alu__DOT__a1_carry_flag;
    }
    if ((vlSelfRef.risc_v__DOT__alu__DOT__a1_out ^ vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__a1_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 997, vlSelfRef.risc_v__DOT__alu__DOT__a1_out, vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__a1_out);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__a1_out 
            = vlSelfRef.risc_v__DOT__alu__DOT__a1_out;
    }
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s1 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1406, vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s1, vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s1);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s1 
            = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s1;
    }
    if ((2U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_1 
            = (vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s1 
               << 2U);
    } else {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_1 
            = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s1;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s2 = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_1;
    if ((vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s1 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1672, vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s1, vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s1);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s1 
            = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s1;
    }
    if ((2U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1930]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_1 
            = (vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s1 
               >> 2U);
    } else {
        ++(vlSymsp->__Vcoverage[1931]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_1 
            = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s1;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s2 = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_1;
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s1 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1938, vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s1, vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s1);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s1 
            = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s1;
    }
    if ((2U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[2196]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_1 
            = (((- (IData)((vlSelfRef.risc_v__DOT__ALU_in1 
                            >> 0x1fU))) << 0x0000001eU) 
               | (vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s1 
                  >> 2U));
    } else {
        ++(vlSymsp->__Vcoverage[2197]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_1 
            = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s1;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s2 = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_1;
    if ((1U ^ ((IData)(vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag) 
               ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__unsigned_less_than)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 68, 
                               (~ (IData)(vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag)), vlSelfRef.risc_v__DOT____Vtogcov__unsigned_less_than);
        vlSelfRef.risc_v__DOT____Vtogcov__unsigned_less_than 
            = (1U & (~ (IData)(vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag)));
    }
    if (((IData)(vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag) 
         ^ (IData)(vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__s1_carry_flag))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1133, vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag, vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__s1_carry_flag);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__s1_carry_flag 
            = vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag;
    }
    if (((0U == vlSelfRef.risc_v__DOT__alu__DOT__s1_out) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__zero_flag))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 66, 
                               (0U == vlSelfRef.risc_v__DOT__alu__DOT__s1_out), vlSelfRef.risc_v__DOT____Vtogcov__zero_flag);
        vlSelfRef.risc_v__DOT____Vtogcov__zero_flag 
            = (0U == vlSelfRef.risc_v__DOT__alu__DOT__s1_out);
    }
    if ((vlSelfRef.risc_v__DOT__alu__DOT__s1_out ^ vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__s1_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1061, vlSelfRef.risc_v__DOT__alu__DOT__s1_out, vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__s1_out);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__s1_out 
            = vlSelfRef.risc_v__DOT__alu__DOT__s1_out;
    }
    if (((vlSelfRef.risc_v__DOT__alu__DOT__s1_out >> 0x0000001fU) 
         ^ (IData)(vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__C))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1129, 
                               (vlSelfRef.risc_v__DOT__alu__DOT__s1_out 
                                >> 0x0000001fU), vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__C);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__C 
            = (vlSelfRef.risc_v__DOT__alu__DOT__s1_out 
               >> 0x0000001fU);
    }
    vlSelfRef.risc_v__DOT__signed_less_than = (1U & 
                                               (((~ 
                                                  (vlSelfRef.risc_v__DOT__ALU_in2 
                                                   >> 0x0000001fU)) 
                                                 & (vlSelfRef.risc_v__DOT__alu__DOT__s1_out 
                                                    >> 0x0000001fU)) 
                                                | ((vlSelfRef.risc_v__DOT__ALU_in1 
                                                    >> 0x0000001fU) 
                                                   & ((~ 
                                                       (vlSelfRef.risc_v__DOT__ALU_in2 
                                                        >> 0x0000001fU)) 
                                                      | (vlSelfRef.risc_v__DOT__alu__DOT__s1_out 
                                                         >> 0x0000001fU)))));
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s2 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s2)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1470, vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s2, vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s2);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s2 
            = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s2;
    }
    if ((4U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_2 
            = (vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s2 
               << 4U);
    } else {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_2 
            = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s2;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s3 = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_2;
    if ((vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s2 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s2)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1736, vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s2, vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s2);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s2 
            = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s2;
    }
    if ((4U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1932]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_2 
            = (vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s2 
               >> 4U);
    } else {
        ++(vlSymsp->__Vcoverage[1933]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_2 
            = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s2;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s3 = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_2;
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s2 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s2)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2002, vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s2, vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s2);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s2 
            = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s2;
    }
    if ((4U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[2198]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_2 
            = (((- (IData)((vlSelfRef.risc_v__DOT__ALU_in1 
                            >> 0x1fU))) << 0x0000001cU) 
               | (vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s2 
                  >> 4U));
    } else {
        ++(vlSymsp->__Vcoverage[2199]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_2 
            = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s2;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s3 = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_2;
    if (((IData)(vlSelfRef.risc_v__DOT__signed_less_than) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__signed_less_than))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 70, vlSelfRef.risc_v__DOT__signed_less_than, vlSelfRef.risc_v__DOT____Vtogcov__signed_less_than);
        vlSelfRef.risc_v__DOT____Vtogcov__signed_less_than 
            = vlSelfRef.risc_v__DOT__signed_less_than;
    }
    if (vlSelfRef.risc_v__DOT__branch_decoder_on) {
        vlSelfRef.risc_v__DOT__branch_decision = 0U;
        if ((4U & (IData)(vlSelfRef.risc_v__DOT__branch_op))) {
            if ((2U & (IData)(vlSelfRef.risc_v__DOT__branch_op))) {
                if ((1U & (IData)(vlSelfRef.risc_v__DOT__branch_op))) {
                    vlSelfRef.risc_v__DOT__branch_decision 
                        = vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag;
                    ++(vlSymsp->__Vcoverage[881]);
                } else {
                    vlSelfRef.risc_v__DOT__branch_decision 
                        = (1U & (~ (IData)(vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag)));
                    ++(vlSymsp->__Vcoverage[878]);
                }
            } else if ((1U & (IData)(vlSelfRef.risc_v__DOT__branch_op))) {
                vlSelfRef.risc_v__DOT__branch_decision 
                    = (1U & (~ (IData)(vlSelfRef.risc_v__DOT__signed_less_than)));
                ++(vlSymsp->__Vcoverage[877]);
            } else {
                vlSelfRef.risc_v__DOT__branch_decision 
                    = vlSelfRef.risc_v__DOT__signed_less_than;
                ++(vlSymsp->__Vcoverage[874]);
            }
        } else if ((2U & (IData)(vlSelfRef.risc_v__DOT__branch_op))) {
            ++(vlSymsp->__Vcoverage[882]);
        } else if ((1U & (IData)(vlSelfRef.risc_v__DOT__branch_op))) {
            vlSelfRef.risc_v__DOT__branch_decision 
                = (0U != vlSelfRef.risc_v__DOT__alu__DOT__s1_out);
            ++(vlSymsp->__Vcoverage[873]);
        } else {
            vlSelfRef.risc_v__DOT__branch_decision 
                = (0U == vlSelfRef.risc_v__DOT__alu__DOT__s1_out);
            ++(vlSymsp->__Vcoverage[870]);
        }
        if ((0U != vlSelfRef.risc_v__DOT__alu__DOT__s1_out)) {
            ++(vlSymsp->__Vcoverage[871]);
        }
        if ((0U == vlSelfRef.risc_v__DOT__alu__DOT__s1_out)) {
            ++(vlSymsp->__Vcoverage[872]);
        }
        if ((1U & (~ (IData)(vlSelfRef.risc_v__DOT__signed_less_than)))) {
            ++(vlSymsp->__Vcoverage[875]);
        }
        if (vlSelfRef.risc_v__DOT__signed_less_than) {
            ++(vlSymsp->__Vcoverage[876]);
        }
        if (vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag) {
            ++(vlSymsp->__Vcoverage[879]);
        }
        if ((1U & (~ (IData)(vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag)))) {
            ++(vlSymsp->__Vcoverage[880]);
        }
        ++(vlSymsp->__Vcoverage[883]);
    } else {
        vlSelfRef.risc_v__DOT__branch_decision = 0U;
        ++(vlSymsp->__Vcoverage[884]);
    }
    ++(vlSymsp->__Vcoverage[885]);
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s3 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s3)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1534, vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s3, vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s3);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s3 
            = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s3;
    }
    if ((8U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1668]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_3 
            = (vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s3 
               << 8U);
    } else {
        ++(vlSymsp->__Vcoverage[1669]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_3 
            = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s3;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s4 = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_3;
    if ((vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s3 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s3)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1800, vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s3, vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s3);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s3 
            = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s3;
    }
    if ((8U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1934]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_3 
            = (vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s3 
               >> 8U);
    } else {
        ++(vlSymsp->__Vcoverage[1935]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_3 
            = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s3;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s4 = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_3;
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s3 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s3)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2066, vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s3, vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s3);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s3 
            = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s3;
    }
    if ((8U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[2200]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_3 
            = (((- (IData)((vlSelfRef.risc_v__DOT__ALU_in1 
                            >> 0x1fU))) << 0x00000018U) 
               | (vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s3 
                  >> 8U));
    } else {
        ++(vlSymsp->__Vcoverage[2201]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_3 
            = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s3;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s4 = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_3;
    if (((IData)(vlSelfRef.risc_v__DOT__branch_decision) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__branch_decision))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 784, vlSelfRef.risc_v__DOT__branch_decision, vlSelfRef.risc_v__DOT____Vtogcov__branch_decision);
        vlSelfRef.risc_v__DOT____Vtogcov__branch_decision 
            = vlSelfRef.risc_v__DOT__branch_decision;
    }
    if (vlSelfRef.risc_v__DOT__branch_decision) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelfRef.risc_v__DOT____VlemCond_0 = vlSelfRef.risc_v__DOT__imm;
    } else {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelfRef.risc_v__DOT____VlemCond_0 = 0U;
    }
    vlSelfRef.risc_v__DOT__adder_in1 = vlSelfRef.risc_v__DOT____VlemCond_0;
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s4 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s4)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1598, vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s4, vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s4);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s4 
            = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s4;
    }
    if ((0x00000010U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1670]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_4 
            = (vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s4 
               << 0x00000010U);
    } else {
        ++(vlSymsp->__Vcoverage[1671]);
        vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_4 
            = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT__s4;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sll_out = vlSelfRef.risc_v__DOT__alu__DOT__sll__DOT____VlemCond_4;
    if ((vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s4 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s4)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1864, vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s4, vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s4);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s4 
            = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s4;
    }
    if ((0x00000010U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[1936]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_4 
            = (vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s4 
               >> 0x10U);
    } else {
        ++(vlSymsp->__Vcoverage[1937]);
        vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_4 
            = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT__s4;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__srl_out = vlSelfRef.risc_v__DOT__alu__DOT__srl__DOT____VlemCond_4;
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s4 
         ^ vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s4)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2130, vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s4, vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s4);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s4 
            = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s4;
    }
    if ((0x00000010U & vlSelfRef.risc_v__DOT__ALU_in2)) {
        ++(vlSymsp->__Vcoverage[2202]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_4 
            = (((- (IData)((vlSelfRef.risc_v__DOT__ALU_in1 
                            >> 0x1fU))) << 0x00000010U) 
               | (vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s4 
                  >> 0x10U));
    } else {
        ++(vlSymsp->__Vcoverage[2203]);
        vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_4 
            = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT__s4;
    }
    vlSelfRef.risc_v__DOT__alu__DOT__sra_out = vlSelfRef.risc_v__DOT__alu__DOT__sra__DOT____VlemCond_4;
    if ((vlSelfRef.risc_v__DOT__adder_in1 ^ vlSelfRef.risc_v__DOT____Vtogcov__adder_in1)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 646, vlSelfRef.risc_v__DOT__adder_in1, vlSelfRef.risc_v__DOT____Vtogcov__adder_in1);
        vlSelfRef.risc_v__DOT____Vtogcov__adder_in1 
            = vlSelfRef.risc_v__DOT__adder_in1;
    }
    vlSelfRef.risc_v__DOT__adder_cout = (1U & (IData)(
                                                      (1ULL 
                                                       & (((QData)((IData)(vlSelfRef.risc_v__DOT__adder_in1)) 
                                                           + (QData)((IData)(vlSelfRef.risc_v__DOT__pc))) 
                                                          >> 0x00000020U))));
    vlSelfRef.risc_v__DOT__adder_out = (vlSelfRef.risc_v__DOT__adder_in1 
                                        + (IData)(vlSelfRef.risc_v__DOT__pc));
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sll_out ^ vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__sll_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1135, vlSelfRef.risc_v__DOT__alu__DOT__sll_out, vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__sll_out);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__sll_out 
            = vlSelfRef.risc_v__DOT__alu__DOT__sll_out;
    }
    if ((vlSelfRef.risc_v__DOT__alu__DOT__srl_out ^ vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__srl_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1199, vlSelfRef.risc_v__DOT__alu__DOT__srl_out, vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__srl_out);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__srl_out 
            = vlSelfRef.risc_v__DOT__alu__DOT__srl_out;
    }
    if ((vlSelfRef.risc_v__DOT__alu__DOT__sra_out ^ vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__sra_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1263, vlSelfRef.risc_v__DOT__alu__DOT__sra_out, vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__sra_out);
        vlSelfRef.risc_v__DOT__alu__DOT____Vtogcov__sra_out 
            = vlSelfRef.risc_v__DOT__alu__DOT__sra_out;
    }
    vlSelfRef.risc_v__DOT__ALU_out = 0U;
    if ((8U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
        if ((4U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
            ++(vlSymsp->__Vcoverage[1338]);
        } else if ((2U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
            if ((1U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
                ++(vlSymsp->__Vcoverage[1338]);
            } else {
                vlSelfRef.risc_v__DOT__ALU_out = (0xfffffffeU 
                                                  & vlSelfRef.risc_v__DOT__alu__DOT__a1_out);
                ++(vlSymsp->__Vcoverage[1337]);
            }
        } else if ((1U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
            vlSelfRef.risc_v__DOT__ALU_out = (vlSelfRef.risc_v__DOT__ALU_in1 
                                              & vlSelfRef.risc_v__DOT__ALU_in2);
            ++(vlSymsp->__Vcoverage[1336]);
        } else {
            vlSelfRef.risc_v__DOT__ALU_out = (vlSelfRef.risc_v__DOT__ALU_in1 
                                              | vlSelfRef.risc_v__DOT__ALU_in2);
            ++(vlSymsp->__Vcoverage[1335]);
        }
    } else if ((4U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
        if ((2U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
            if ((1U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
                vlSelfRef.risc_v__DOT__ALU_out = vlSelfRef.risc_v__DOT__alu__DOT__sra_out;
                ++(vlSymsp->__Vcoverage[1334]);
            } else {
                vlSelfRef.risc_v__DOT__ALU_out = vlSelfRef.risc_v__DOT__alu__DOT__srl_out;
                ++(vlSymsp->__Vcoverage[1333]);
            }
        } else if ((1U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
            vlSelfRef.risc_v__DOT__ALU_out = (vlSelfRef.risc_v__DOT__ALU_in1 
                                              ^ vlSelfRef.risc_v__DOT__ALU_in2);
            ++(vlSymsp->__Vcoverage[1332]);
        } else {
            vlSelfRef.risc_v__DOT__ALU_out = (1U & 
                                              (~ (IData)(vlSelfRef.risc_v__DOT__alu__DOT__s1_carry_flag)));
            ++(vlSymsp->__Vcoverage[1331]);
        }
    } else if ((2U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
        if ((1U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
            vlSelfRef.risc_v__DOT__ALU_out = vlSelfRef.risc_v__DOT__signed_less_than;
            ++(vlSymsp->__Vcoverage[1330]);
        } else {
            vlSelfRef.risc_v__DOT__ALU_out = vlSelfRef.risc_v__DOT__alu__DOT__sll_out;
            ++(vlSymsp->__Vcoverage[1329]);
        }
    } else if ((1U & (IData)(vlSelfRef.risc_v__DOT__ALU_funct))) {
        vlSelfRef.risc_v__DOT__ALU_out = vlSelfRef.risc_v__DOT__alu__DOT__s1_out;
        ++(vlSymsp->__Vcoverage[1328]);
    } else {
        vlSelfRef.risc_v__DOT__ALU_out = vlSelfRef.risc_v__DOT__alu__DOT__a1_out;
        ++(vlSymsp->__Vcoverage[1327]);
    }
    ++(vlSymsp->__Vcoverage[1339]);
    if (((IData)(vlSelfRef.risc_v__DOT__adder_cout) 
         ^ (IData)(vlSelfRef.risc_v__DOT____Vtogcov__adder_cout))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 774, vlSelfRef.risc_v__DOT__adder_cout, vlSelfRef.risc_v__DOT____Vtogcov__adder_cout);
        vlSelfRef.risc_v__DOT____Vtogcov__adder_cout 
            = vlSelfRef.risc_v__DOT__adder_cout;
    }
    if ((vlSelfRef.risc_v__DOT__adder_out ^ vlSelfRef.risc_v__DOT____Vtogcov__adder_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 710, vlSelfRef.risc_v__DOT__adder_out, vlSelfRef.risc_v__DOT____Vtogcov__adder_out);
        vlSelfRef.risc_v__DOT____Vtogcov__adder_out 
            = vlSelfRef.risc_v__DOT__adder_out;
    }
    if ((vlSelfRef.risc_v__DOT__ALU_out ^ vlSelfRef.risc_v__DOT____Vtogcov__ALU_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 326, vlSelfRef.risc_v__DOT__ALU_out, vlSelfRef.risc_v__DOT____Vtogcov__ALU_out);
        vlSelfRef.risc_v__DOT____Vtogcov__ALU_out = vlSelfRef.risc_v__DOT__ALU_out;
    }
    if ((0x00001fffU & (vlSelfRef.risc_v__DOT__ALU_out 
                        ^ (IData)(vlSelfRef.risc_v__DOT__DATA_MEM__DOT____Vtogcov__data_addr)))) {
        VL_COV_TOGGLE_CHG_ST_I(13, vlSymsp->__Vcoverage + 2205, vlSelfRef.risc_v__DOT__ALU_out, vlSelfRef.risc_v__DOT__DATA_MEM__DOT____Vtogcov__data_addr);
        vlSelfRef.risc_v__DOT__DATA_MEM__DOT____Vtogcov__data_addr 
            = (0x00001fffU & vlSelfRef.risc_v__DOT__ALU_out);
    }
    vlSelfRef.risc_v__DOT__data_mem_out = 0U;
    if ((0U == (IData)(vlSelfRef.risc_v__DOT__mem_size))) {
        if (vlSelfRef.risc_v__DOT__sign_val) {
            ++(vlSymsp->__Vcoverage[2233]);
            vlSelfRef.risc_v__DOT__DATA_MEM__DOT____VlemCond_0 
                = (((- (IData)((1U & (vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                                      [(0x00001fffU 
                                        & vlSelfRef.risc_v__DOT__ALU_out)] 
                                      >> 7U)))) << 8U) 
                   | vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                   [(0x00001fffU & vlSelfRef.risc_v__DOT__ALU_out)]);
        } else {
            ++(vlSymsp->__Vcoverage[2234]);
            vlSelfRef.risc_v__DOT__DATA_MEM__DOT____VlemCond_0 
                = vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                [(0x00001fffU & vlSelfRef.risc_v__DOT__ALU_out)];
        }
        vlSelfRef.risc_v__DOT__data_mem_out = vlSelfRef.risc_v__DOT__DATA_MEM__DOT____VlemCond_0;
        ++(vlSymsp->__Vcoverage[2235]);
    } else if ((1U == (IData)(vlSelfRef.risc_v__DOT__mem_size))) {
        if (vlSelfRef.risc_v__DOT__sign_val) {
            ++(vlSymsp->__Vcoverage[2238]);
            vlSelfRef.risc_v__DOT__DATA_MEM__DOT____VlemCond_1 
                = (((- (IData)((1U & (vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                                      [(0x00001fffU 
                                        & ((IData)(1U) 
                                           + vlSelfRef.risc_v__DOT__ALU_out))] 
                                      >> 7U)))) << 0x00000010U) 
                   | (((IData)(vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                               [(0x00001fffU & ((IData)(1U) 
                                                + vlSelfRef.risc_v__DOT__ALU_out))]) 
                       << 8U) | vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                      [(0x00001fffU & vlSelfRef.risc_v__DOT__ALU_out)]));
        } else {
            ++(vlSymsp->__Vcoverage[2239]);
            vlSelfRef.risc_v__DOT__DATA_MEM__DOT____VlemCond_1 
                = ((vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                    [(0x00001fffU & ((IData)(1U) + vlSelfRef.risc_v__DOT__ALU_out))] 
                    << 8U) | vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                   [(0x00001fffU & vlSelfRef.risc_v__DOT__ALU_out)]);
        }
        vlSelfRef.risc_v__DOT__data_mem_out = vlSelfRef.risc_v__DOT__DATA_MEM__DOT____VlemCond_1;
        ++(vlSymsp->__Vcoverage[2240]);
    } else if ((2U == (IData)(vlSelfRef.risc_v__DOT__mem_size))) {
        vlSelfRef.risc_v__DOT__data_mem_out = (((((IData)(vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                                                          [
                                                          (0x00001fffU 
                                                           & ((IData)(3U) 
                                                              + vlSelfRef.risc_v__DOT__ALU_out))]) 
                                                  << 8U) 
                                                 | vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                                                 [(0x00001fffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.risc_v__DOT__ALU_out))]) 
                                                << 0x00000010U) 
                                               | (((IData)(vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                                                           [
                                                           (0x00001fffU 
                                                            & ((IData)(1U) 
                                                               + vlSelfRef.risc_v__DOT__ALU_out))]) 
                                                   << 8U) 
                                                  | vlSelfRef.risc_v__DOT__DATA_MEM__DOT__RAM
                                                  [
                                                  (0x00001fffU 
                                                   & vlSelfRef.risc_v__DOT__ALU_out)]));
        ++(vlSymsp->__Vcoverage[2241]);
    } else {
        ++(vlSymsp->__Vcoverage[2242]);
    }
    if (vlSelfRef.risc_v__DOT__sign_val) {
        ++(vlSymsp->__Vcoverage[2231]);
    }
    if ((1U & (~ (IData)(vlSelfRef.risc_v__DOT__sign_val)))) {
        ++(vlSymsp->__Vcoverage[2232]);
    }
    if (vlSelfRef.risc_v__DOT__sign_val) {
        ++(vlSymsp->__Vcoverage[2236]);
    }
    if ((1U & (~ (IData)(vlSelfRef.risc_v__DOT__sign_val)))) {
        ++(vlSymsp->__Vcoverage[2237]);
    }
    ++(vlSymsp->__Vcoverage[2243]);
    if ((vlSelfRef.risc_v__DOT__data_mem_out ^ vlSelfRef.risc_v__DOT____Vtogcov__data_mem_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 582, vlSelfRef.risc_v__DOT__data_mem_out, vlSelfRef.risc_v__DOT____Vtogcov__data_mem_out);
        vlSelfRef.risc_v__DOT____Vtogcov__data_mem_out 
            = vlSelfRef.risc_v__DOT__data_mem_out;
    }
    if ((0U == (IData)(vlSelfRef.risc_v__DOT__mux_reg))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelfRef.risc_v__DOT____VlemCond_1 = vlSelfRef.risc_v__DOT__ALU_out;
    } else {
        ++(vlSymsp->__Vcoverage[792]);
        if ((1U == (IData)(vlSelfRef.risc_v__DOT__mux_reg))) {
            ++(vlSymsp->__Vcoverage[790]);
            vlSelfRef.risc_v__DOT____VlemCond_1 = vlSelfRef.risc_v__DOT__adder_out;
        } else {
            ++(vlSymsp->__Vcoverage[791]);
            vlSelfRef.risc_v__DOT____VlemCond_1 = vlSelfRef.risc_v__DOT__data_mem_out;
        }
    }
    vlSelfRef.risc_v__DOT__reg_data_in = vlSelfRef.risc_v__DOT____VlemCond_1;
    if ((vlSelfRef.risc_v__DOT__reg_data_in ^ vlSelfRef.risc_v__DOT____Vtogcov__reg_data_in)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 390, vlSelfRef.risc_v__DOT__reg_data_in, vlSelfRef.risc_v__DOT____Vtogcov__reg_data_in);
        vlSelfRef.risc_v__DOT____Vtogcov__reg_data_in 
            = vlSelfRef.risc_v__DOT__reg_data_in;
    }
}

void Vrisc_v___024root___eval_nba(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_nba\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vrisc_v___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vrisc_v___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_v___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vrisc_v___024root___eval_phase__act(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_phase__act\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrisc_v___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrisc_v___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vrisc_v___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vrisc_v___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vrisc_v___024root___eval_phase__nba(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_phase__nba\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vrisc_v___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vrisc_v___024root___eval_nba(vlSelf);
        Vrisc_v___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vrisc_v___024root___eval(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vrisc_v___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("risc_v.v", 6, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vrisc_v___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vrisc_v___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("risc_v.v", 6, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vrisc_v___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("risc_v.v", 6, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vrisc_v___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vrisc_v___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vrisc_v___024root___eval_debug_assertions(Vrisc_v___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v___024root___eval_debug_assertions\n"); );
    Vrisc_v__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
