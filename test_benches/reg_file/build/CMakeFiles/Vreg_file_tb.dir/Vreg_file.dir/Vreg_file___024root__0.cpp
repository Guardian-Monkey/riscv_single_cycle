// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreg_file.h for the primary calling header

#include "Vreg_file__pch.h"

void Vreg_file___024root___eval_triggers_vec__ico(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_triggers_vec__ico\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vreg_file___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___trigger_anySet__ico\n"); );
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

void Vreg_file___024root___ico_sequent__TOP__0(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___ico_sequent__TOP__0\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__reg_file__clk, vlSelfRef.clk);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__reg_file__WE_reg_file, vlSelfRef.WE_reg_file);
    VL_ASSIGN_ISI(32, vlSelfRef.__Vcellinp__reg_file__data_in, vlSelfRef.data_in);
    VL_ASSIGN_ISI(5, vlSelfRef.__Vcellinp__reg_file__rd, vlSelfRef.rd);
    VL_ASSIGN_ISI(5, vlSelfRef.__Vcellinp__reg_file__rs2, vlSelfRef.rs2);
    VL_ASSIGN_ISI(5, vlSelfRef.__Vcellinp__reg_file__rs1, vlSelfRef.rs1);
    if (((IData)(vlSelfRef.__Vcellinp__reg_file__clk) 
         ^ (IData)(vlSelfRef.reg_file__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSelfRef.__Vcellinp__reg_file__clk, vlSelfRef.reg_file__DOT____Vtogcov__clk);
        vlSelfRef.reg_file__DOT____Vtogcov__clk = vlSelfRef.__Vcellinp__reg_file__clk;
    }
    if (((IData)(vlSelfRef.__Vcellinp__reg_file__WE_reg_file) 
         ^ (IData)(vlSelfRef.reg_file__DOT____Vtogcov__WE_reg_file))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 224, vlSelfRef.__Vcellinp__reg_file__WE_reg_file, vlSelfRef.reg_file__DOT____Vtogcov__WE_reg_file);
        vlSelfRef.reg_file__DOT____Vtogcov__WE_reg_file 
            = vlSelfRef.__Vcellinp__reg_file__WE_reg_file;
    }
    if ((vlSelfRef.__Vcellinp__reg_file__data_in ^ vlSelfRef.reg_file__DOT____Vtogcov__data_in)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 32, vlSelfRef.__Vcellinp__reg_file__data_in, vlSelfRef.reg_file__DOT____Vtogcov__data_in);
        vlSelfRef.reg_file__DOT____Vtogcov__data_in 
            = vlSelfRef.__Vcellinp__reg_file__data_in;
    }
    if (((IData)(vlSelfRef.__Vcellinp__reg_file__rd) 
         ^ (IData)(vlSelfRef.reg_file__DOT____Vtogcov__rd))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 22, vlSelfRef.__Vcellinp__reg_file__rd, vlSelfRef.reg_file__DOT____Vtogcov__rd);
        vlSelfRef.reg_file__DOT____Vtogcov__rd = vlSelfRef.__Vcellinp__reg_file__rd;
    }
    if (((IData)(vlSelfRef.__Vcellinp__reg_file__rs2) 
         ^ (IData)(vlSelfRef.reg_file__DOT____Vtogcov__rs2))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 12, vlSelfRef.__Vcellinp__reg_file__rs2, vlSelfRef.reg_file__DOT____Vtogcov__rs2);
        vlSelfRef.reg_file__DOT____Vtogcov__rs2 = vlSelfRef.__Vcellinp__reg_file__rs2;
    }
    if ((0U == (IData)(vlSelfRef.__Vcellinp__reg_file__rs2))) {
        vlSelfRef.__Vcellout__reg_file__rs2_out = 0U;
        ++(vlSymsp->__Vcoverage[293]);
    } else {
        vlSelfRef.__Vcellout__reg_file__rs2_out = (
                                                   (0x1eU 
                                                    >= 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSelfRef.__Vcellinp__reg_file__rs2) 
                                                        - (IData)(1U))))
                                                    ? vlSelfRef.reg_file__DOT__registers
                                                   [
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.__Vcellinp__reg_file__rs2) 
                                                       - (IData)(1U)))]
                                                    : 0U);
        ++(vlSymsp->__Vcoverage[294]);
    }
    ++(vlSymsp->__Vcoverage[295]);
    if (((IData)(vlSelfRef.__Vcellinp__reg_file__rs1) 
         ^ (IData)(vlSelfRef.reg_file__DOT____Vtogcov__rs1))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 2, vlSelfRef.__Vcellinp__reg_file__rs1, vlSelfRef.reg_file__DOT____Vtogcov__rs1);
        vlSelfRef.reg_file__DOT____Vtogcov__rs1 = vlSelfRef.__Vcellinp__reg_file__rs1;
    }
    if ((0U == (IData)(vlSelfRef.__Vcellinp__reg_file__rs1))) {
        vlSelfRef.__Vcellout__reg_file__rs1_out = 0U;
        ++(vlSymsp->__Vcoverage[290]);
    } else {
        vlSelfRef.__Vcellout__reg_file__rs1_out = (
                                                   (0x1eU 
                                                    >= 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSelfRef.__Vcellinp__reg_file__rs1) 
                                                        - (IData)(1U))))
                                                    ? vlSelfRef.reg_file__DOT__registers
                                                   [
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.__Vcellinp__reg_file__rs1) 
                                                       - (IData)(1U)))]
                                                    : 0U);
        ++(vlSymsp->__Vcoverage[291]);
    }
    ++(vlSymsp->__Vcoverage[292]);
    VL_ASSIGN_SII(32, vlSelfRef.rs2_out, vlSelfRef.__Vcellout__reg_file__rs2_out);
    if ((vlSelfRef.__Vcellout__reg_file__rs2_out ^ vlSelfRef.reg_file__DOT____Vtogcov__rs2_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 160, vlSelfRef.__Vcellout__reg_file__rs2_out, vlSelfRef.reg_file__DOT____Vtogcov__rs2_out);
        vlSelfRef.reg_file__DOT____Vtogcov__rs2_out 
            = vlSelfRef.__Vcellout__reg_file__rs2_out;
    }
    VL_ASSIGN_SII(32, vlSelfRef.rs1_out, vlSelfRef.__Vcellout__reg_file__rs1_out);
    if ((vlSelfRef.__Vcellout__reg_file__rs1_out ^ vlSelfRef.reg_file__DOT____Vtogcov__rs1_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 96, vlSelfRef.__Vcellout__reg_file__rs1_out, vlSelfRef.reg_file__DOT____Vtogcov__rs1_out);
        vlSelfRef.reg_file__DOT____Vtogcov__rs1_out 
            = vlSelfRef.__Vcellout__reg_file__rs1_out;
    }
}

void Vreg_file___024root___eval_ico(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_ico\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vreg_file___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreg_file___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vreg_file___024root___eval_phase__ico(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_phase__ico\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vreg_file___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vreg_file___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vreg_file___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vreg_file___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vreg_file___024root___eval_triggers_vec__act(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_triggers_vec__act\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.__Vcellinp__reg_file__clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__reg_file__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__reg_file__clk__0 
        = vlSelfRef.__Vcellinp__reg_file__clk;
}

bool Vreg_file___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___trigger_anySet__act\n"); );
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

void Vreg_file___024root___nba_sequent__TOP__0(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___nba_sequent__TOP__0\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__reg_file__DOT__registers__v0;
    __VdlyVal__reg_file__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__reg_file__DOT__registers__v0;
    __VdlyDim0__reg_file__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__reg_file__DOT__registers__v0;
    __VdlySet__reg_file__DOT__registers__v0 = 0;
    // Body
    __VdlySet__reg_file__DOT__registers__v0 = 0U;
    if (vlSelfRef.__Vcellinp__reg_file__WE_reg_file) {
        if ((0U != (IData)(vlSelfRef.__Vcellinp__reg_file__rd))) {
            vlSelfRef.reg_file__DOT____Vlvbound_h0df2320c__0 
                = vlSelfRef.__Vcellinp__reg_file__data_in;
            ++(vlSymsp->__Vcoverage[296]);
            if ((0x1eU >= (0x0000001fU & ((IData)(vlSelfRef.__Vcellinp__reg_file__rd) 
                                          - (IData)(1U))))) {
                __VdlyVal__reg_file__DOT__registers__v0 
                    = vlSelfRef.reg_file__DOT____Vlvbound_h0df2320c__0;
                __VdlyDim0__reg_file__DOT__registers__v0 
                    = (0x0000001fU & ((IData)(vlSelfRef.__Vcellinp__reg_file__rd) 
                                      - (IData)(1U)));
                __VdlySet__reg_file__DOT__registers__v0 = 1U;
            }
        } else {
            ++(vlSymsp->__Vcoverage[297]);
        }
        if ((0U != (IData)(vlSelfRef.__Vcellinp__reg_file__rd))) {
            ++(vlSymsp->__Vcoverage[298]);
        }
        if ((0U == (IData)(vlSelfRef.__Vcellinp__reg_file__rd))) {
            ++(vlSymsp->__Vcoverage[299]);
        }
        ++(vlSymsp->__Vcoverage[300]);
    } else {
        ++(vlSymsp->__Vcoverage[301]);
    }
    ++(vlSymsp->__Vcoverage[302]);
    if (__VdlySet__reg_file__DOT__registers__v0) {
        vlSelfRef.reg_file__DOT__registers[__VdlyDim0__reg_file__DOT__registers__v0] 
            = __VdlyVal__reg_file__DOT__registers__v0;
    }
    if ((0U == (IData)(vlSelfRef.__Vcellinp__reg_file__rs1))) {
        vlSelfRef.__Vcellout__reg_file__rs1_out = 0U;
        ++(vlSymsp->__Vcoverage[290]);
    } else {
        vlSelfRef.__Vcellout__reg_file__rs1_out = (
                                                   (0x1eU 
                                                    >= 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSelfRef.__Vcellinp__reg_file__rs1) 
                                                        - (IData)(1U))))
                                                    ? vlSelfRef.reg_file__DOT__registers
                                                   [
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.__Vcellinp__reg_file__rs1) 
                                                       - (IData)(1U)))]
                                                    : 0U);
        ++(vlSymsp->__Vcoverage[291]);
    }
    ++(vlSymsp->__Vcoverage[292]);
    if ((0U == (IData)(vlSelfRef.__Vcellinp__reg_file__rs2))) {
        vlSelfRef.__Vcellout__reg_file__rs2_out = 0U;
        ++(vlSymsp->__Vcoverage[293]);
    } else {
        vlSelfRef.__Vcellout__reg_file__rs2_out = (
                                                   (0x1eU 
                                                    >= 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSelfRef.__Vcellinp__reg_file__rs2) 
                                                        - (IData)(1U))))
                                                    ? vlSelfRef.reg_file__DOT__registers
                                                   [
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.__Vcellinp__reg_file__rs2) 
                                                       - (IData)(1U)))]
                                                    : 0U);
        ++(vlSymsp->__Vcoverage[294]);
    }
    ++(vlSymsp->__Vcoverage[295]);
    VL_ASSIGN_SII(32, vlSelfRef.rs1_out, vlSelfRef.__Vcellout__reg_file__rs1_out);
    if ((vlSelfRef.__Vcellout__reg_file__rs1_out ^ vlSelfRef.reg_file__DOT____Vtogcov__rs1_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 96, vlSelfRef.__Vcellout__reg_file__rs1_out, vlSelfRef.reg_file__DOT____Vtogcov__rs1_out);
        vlSelfRef.reg_file__DOT____Vtogcov__rs1_out 
            = vlSelfRef.__Vcellout__reg_file__rs1_out;
    }
    VL_ASSIGN_SII(32, vlSelfRef.rs2_out, vlSelfRef.__Vcellout__reg_file__rs2_out);
    if ((vlSelfRef.__Vcellout__reg_file__rs2_out ^ vlSelfRef.reg_file__DOT____Vtogcov__rs2_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 160, vlSelfRef.__Vcellout__reg_file__rs2_out, vlSelfRef.reg_file__DOT____Vtogcov__rs2_out);
        vlSelfRef.reg_file__DOT____Vtogcov__rs2_out 
            = vlSelfRef.__Vcellout__reg_file__rs2_out;
    }
}

void Vreg_file___024root___eval_nba(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_nba\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vreg_file___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vreg_file___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vreg_file___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vreg_file___024root___eval_phase__act(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_phase__act\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vreg_file___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vreg_file___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vreg_file___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vreg_file___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vreg_file___024root___eval_phase__nba(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_phase__nba\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vreg_file___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vreg_file___024root___eval_nba(vlSelf);
        Vreg_file___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vreg_file___024root___eval(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vreg_file___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("reg_file.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vreg_file___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vreg_file___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("reg_file.v", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vreg_file___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("reg_file.v", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vreg_file___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vreg_file___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vreg_file___024root___eval_debug_assertions(Vreg_file___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreg_file___024root___eval_debug_assertions\n"); );
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
