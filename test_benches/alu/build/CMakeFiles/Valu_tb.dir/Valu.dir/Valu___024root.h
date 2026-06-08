// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_sc.h"
#include "verilated_cov.h"


class Valu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*3:0*/ __Vcellinp__ALU__ALU_funct;
        CData/*0:0*/ ALU__DOT__signed_less_than;
        CData/*0:0*/ ALU__DOT__a1_carry_flag;
        CData/*0:0*/ ALU__DOT__s1_carry_flag;
        CData/*3:0*/ ALU__DOT____Vtogcov__ALU_funct;
        CData/*0:0*/ ALU__DOT____Vtogcov__zero_flag;
        CData/*0:0*/ ALU__DOT____Vtogcov__unsigned_less_than;
        CData/*0:0*/ ALU__DOT____Vtogcov__signed_less_than;
        CData/*0:0*/ ALU__DOT____Vtogcov__A;
        CData/*0:0*/ ALU__DOT____Vtogcov__B;
        CData/*0:0*/ ALU__DOT____Vtogcov__C;
        CData/*0:0*/ ALU__DOT____Vtogcov__a1_carry_flag;
        CData/*0:0*/ ALU__DOT____Vtogcov__s1_carry_flag;
        CData/*0:0*/ ALU__DOT__a1__DOT____Vtogcov__Cin;
        CData/*0:0*/ ALU__DOT__s1__DOT____Vtogcov__Cin;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        IData/*31:0*/ __Vcellout__ALU__out;
        IData/*31:0*/ __Vcellinp__ALU__in2;
        IData/*31:0*/ __Vcellinp__ALU__in1;
        IData/*31:0*/ ALU__DOT__a1_out;
        IData/*31:0*/ ALU__DOT__s1_out;
        IData/*31:0*/ ALU__DOT__sll_out;
        IData/*31:0*/ ALU__DOT__srl_out;
        IData/*31:0*/ ALU__DOT__sra_out;
        IData/*31:0*/ ALU__DOT____Vtogcov__in1;
        IData/*31:0*/ ALU__DOT____Vtogcov__in2;
        IData/*31:0*/ ALU__DOT____Vtogcov__out;
        IData/*31:0*/ ALU__DOT____Vtogcov__a1_out;
        IData/*31:0*/ ALU__DOT____Vtogcov__s1_out;
        IData/*31:0*/ ALU__DOT____Vtogcov__sll_out;
        IData/*31:0*/ ALU__DOT____Vtogcov__srl_out;
        IData/*31:0*/ ALU__DOT____Vtogcov__sra_out;
        IData/*31:0*/ ALU__DOT__s1__DOT____Vtogcov__B;
        IData/*31:0*/ ALU__DOT__sll__DOT____VlemCond_4;
        IData/*31:0*/ ALU__DOT__sll__DOT____VlemCond_3;
        IData/*31:0*/ ALU__DOT__sll__DOT____VlemCond_2;
        IData/*31:0*/ ALU__DOT__sll__DOT____VlemCond_1;
        IData/*31:0*/ ALU__DOT__sll__DOT____VlemCond_0;
        IData/*31:0*/ ALU__DOT__sll__DOT__s1;
        IData/*31:0*/ ALU__DOT__sll__DOT__s2;
        IData/*31:0*/ ALU__DOT__sll__DOT__s3;
        IData/*31:0*/ ALU__DOT__sll__DOT__s4;
        IData/*31:0*/ ALU__DOT__sll__DOT____Vtogcov__s1;
        IData/*31:0*/ ALU__DOT__sll__DOT____Vtogcov__s2;
        IData/*31:0*/ ALU__DOT__sll__DOT____Vtogcov__s3;
        IData/*31:0*/ ALU__DOT__sll__DOT____Vtogcov__s4;
        IData/*31:0*/ ALU__DOT__srl__DOT____VlemCond_4;
        IData/*31:0*/ ALU__DOT__srl__DOT____VlemCond_3;
        IData/*31:0*/ ALU__DOT__srl__DOT____VlemCond_2;
        IData/*31:0*/ ALU__DOT__srl__DOT____VlemCond_1;
        IData/*31:0*/ ALU__DOT__srl__DOT____VlemCond_0;
        IData/*31:0*/ ALU__DOT__srl__DOT__s1;
        IData/*31:0*/ ALU__DOT__srl__DOT__s2;
        IData/*31:0*/ ALU__DOT__srl__DOT__s3;
        IData/*31:0*/ ALU__DOT__srl__DOT__s4;
        IData/*31:0*/ ALU__DOT__srl__DOT____Vtogcov__s1;
        IData/*31:0*/ ALU__DOT__srl__DOT____Vtogcov__s2;
        IData/*31:0*/ ALU__DOT__srl__DOT____Vtogcov__s3;
        IData/*31:0*/ ALU__DOT__srl__DOT____Vtogcov__s4;
        IData/*31:0*/ ALU__DOT__sra__DOT____VlemCond_4;
        IData/*31:0*/ ALU__DOT__sra__DOT____VlemCond_3;
    };
    struct {
        IData/*31:0*/ ALU__DOT__sra__DOT____VlemCond_2;
        IData/*31:0*/ ALU__DOT__sra__DOT____VlemCond_1;
        IData/*31:0*/ ALU__DOT__sra__DOT____VlemCond_0;
        IData/*31:0*/ ALU__DOT__sra__DOT__s1;
        IData/*31:0*/ ALU__DOT__sra__DOT__s2;
        IData/*31:0*/ ALU__DOT__sra__DOT__s3;
        IData/*31:0*/ ALU__DOT__sra__DOT__s4;
        IData/*31:0*/ ALU__DOT__sra__DOT____Vtogcov__s1;
        IData/*31:0*/ ALU__DOT__sra__DOT____Vtogcov__s2;
        IData/*31:0*/ ALU__DOT__sra__DOT____Vtogcov__s3;
        IData/*31:0*/ ALU__DOT__sra__DOT____Vtogcov__s4;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    sc_core::sc_in<uint32_t> ALU_funct;
    sc_core::sc_out<bool> zero_flag;
    sc_core::sc_out<bool> unsigned_less_than;
    sc_core::sc_out<bool> signed_less_than;
    sc_core::sc_in<uint32_t> in1;
    sc_core::sc_in<uint32_t> in2;
    sc_core::sc_out<uint32_t> out;

    // INTERNAL VARIABLES
    Valu__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Valu___024root(Valu__Syms* symsp, const char* namep);
    ~Valu___024root();
    VL_UNCOPYABLE(Valu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
