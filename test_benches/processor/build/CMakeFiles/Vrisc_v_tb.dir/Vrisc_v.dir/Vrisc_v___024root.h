// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrisc_v.h for the primary calling header

#ifndef VERILATED_VRISC_V___024ROOT_H_
#define VERILATED_VRISC_V___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_sc.h"
#include "verilated_cov.h"


class Vrisc_v__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrisc_v___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*3:0*/ __Vcellout__risc_v__ALU_FUNCT;
        CData/*4:0*/ __Vcellout__risc_v__RD;
        CData/*4:0*/ __Vcellout__risc_v__RS2;
        CData/*4:0*/ __Vcellout__risc_v__RS1;
        CData/*0:0*/ __Vcellinp__risc_v__clk;
        CData/*0:0*/ risc_v__DOT__signed_less_than;
        CData/*4:0*/ risc_v__DOT__rs1;
        CData/*4:0*/ risc_v__DOT__rs2;
        CData/*4:0*/ risc_v__DOT__rd;
        CData/*0:0*/ risc_v__DOT__mux_adder;
        CData/*0:0*/ risc_v__DOT__mux_PC;
        CData/*0:0*/ risc_v__DOT__WE_reg_file;
        CData/*0:0*/ risc_v__DOT__WE_data_mem;
        CData/*0:0*/ risc_v__DOT__mux_ALU1;
        CData/*0:0*/ risc_v__DOT__sign_val;
        CData/*1:0*/ risc_v__DOT__mux_reg;
        CData/*1:0*/ risc_v__DOT__mux_ALU2;
        CData/*1:0*/ risc_v__DOT__mem_size;
        CData/*3:0*/ risc_v__DOT__ALU_funct;
        CData/*0:0*/ risc_v__DOT__adder_cout;
        CData/*0:0*/ risc_v__DOT__branch_decoder_on;
        CData/*2:0*/ risc_v__DOT__branch_op;
        CData/*0:0*/ risc_v__DOT__branch_decision;
        CData/*0:0*/ risc_v__DOT____Vtogcov__clk;
        CData/*4:0*/ risc_v__DOT____Vtogcov__RS1;
        CData/*4:0*/ risc_v__DOT____Vtogcov__RS2;
        CData/*4:0*/ risc_v__DOT____Vtogcov__RD;
        CData/*3:0*/ risc_v__DOT____Vtogcov__ALU_FUNCT;
        CData/*0:0*/ risc_v__DOT____Vtogcov__zero_flag;
        CData/*0:0*/ risc_v__DOT____Vtogcov__unsigned_less_than;
        CData/*0:0*/ risc_v__DOT____Vtogcov__signed_less_than;
        CData/*4:0*/ risc_v__DOT____Vtogcov__rs1;
        CData/*4:0*/ risc_v__DOT____Vtogcov__rs2;
        CData/*4:0*/ risc_v__DOT____Vtogcov__rd;
        CData/*0:0*/ risc_v__DOT____Vtogcov__mux_adder;
        CData/*0:0*/ risc_v__DOT____Vtogcov__mux_PC;
        CData/*0:0*/ risc_v__DOT____Vtogcov__WE_reg_file;
        CData/*0:0*/ risc_v__DOT____Vtogcov__WE_data_mem;
        CData/*0:0*/ risc_v__DOT____Vtogcov__mux_ALU1;
        CData/*0:0*/ risc_v__DOT____Vtogcov__sign_val;
        CData/*1:0*/ risc_v__DOT____Vtogcov__mux_reg;
        CData/*1:0*/ risc_v__DOT____Vtogcov__mux_ALU2;
        CData/*1:0*/ risc_v__DOT____Vtogcov__mem_size;
        CData/*3:0*/ risc_v__DOT____Vtogcov__ALU_funct;
        CData/*0:0*/ risc_v__DOT____Vtogcov__adder_cout;
        CData/*0:0*/ risc_v__DOT____Vtogcov__branch_decoder_on;
        CData/*2:0*/ risc_v__DOT____Vtogcov__branch_op;
        CData/*0:0*/ risc_v__DOT____Vtogcov__branch_decision;
        CData/*0:0*/ risc_v__DOT__ADDER__DOT____Vtogcov__Cin;
        CData/*0:0*/ risc_v__DOT__alu__DOT__a1_carry_flag;
        CData/*0:0*/ risc_v__DOT__alu__DOT__s1_carry_flag;
        CData/*0:0*/ risc_v__DOT__alu__DOT____Vtogcov__A;
        CData/*0:0*/ risc_v__DOT__alu__DOT____Vtogcov__B;
        CData/*0:0*/ risc_v__DOT__alu__DOT____Vtogcov__C;
        CData/*0:0*/ risc_v__DOT__alu__DOT____Vtogcov__a1_carry_flag;
        CData/*0:0*/ risc_v__DOT__alu__DOT____Vtogcov__s1_carry_flag;
        CData/*0:0*/ risc_v__DOT__alu__DOT__s1__DOT____Vtogcov__Cin;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__risc_v__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
    };
    struct {
        SData/*12:0*/ risc_v__DOT____VlemCond_4;
        SData/*12:0*/ risc_v__DOT__pc;
        SData/*12:0*/ risc_v__DOT____Vtogcov__pc;
        SData/*12:0*/ risc_v__DOT__DATA_MEM__DOT____Vtogcov__data_addr;
        IData/*31:0*/ risc_v__DOT____VlemCond_3;
        IData/*31:0*/ risc_v__DOT____VlemCond_2;
        IData/*31:0*/ risc_v__DOT____VlemCond_1;
        IData/*31:0*/ risc_v__DOT____VlemCond_0;
        IData/*31:0*/ risc_v__DOT__imm;
        IData/*31:0*/ risc_v__DOT__ALU_in1;
        IData/*31:0*/ risc_v__DOT__ALU_in2;
        IData/*31:0*/ risc_v__DOT__ALU_out;
        IData/*31:0*/ risc_v__DOT__reg_data_in;
        IData/*31:0*/ risc_v__DOT__rs1_out;
        IData/*31:0*/ risc_v__DOT__rs2_out;
        IData/*31:0*/ risc_v__DOT__data_mem_out;
        IData/*31:0*/ risc_v__DOT__adder_in1;
        IData/*31:0*/ risc_v__DOT__adder_out;
        IData/*31:0*/ risc_v__DOT____Vtogcov__imm;
        IData/*31:0*/ risc_v__DOT____Vtogcov__ALU_in1;
        IData/*31:0*/ risc_v__DOT____Vtogcov__ALU_in2;
        IData/*31:0*/ risc_v__DOT____Vtogcov__ALU_out;
        IData/*31:0*/ risc_v__DOT____Vtogcov__reg_data_in;
        IData/*31:0*/ risc_v__DOT____Vtogcov__rs1_out;
        IData/*31:0*/ risc_v__DOT____Vtogcov__rs2_out;
        IData/*31:0*/ risc_v__DOT____Vtogcov__data_mem_out;
        IData/*31:0*/ risc_v__DOT____Vtogcov__adder_in1;
        IData/*31:0*/ risc_v__DOT____Vtogcov__adder_out;
        IData/*31:0*/ risc_v__DOT__ADDER__DOT____Vtogcov__B;
        IData/*31:0*/ risc_v__DOT__CONTROL_UNIT__DOT____Vtogcov__instr;
        IData/*31:0*/ risc_v__DOT__alu__DOT__a1_out;
        IData/*31:0*/ risc_v__DOT__alu__DOT__s1_out;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sll_out;
        IData/*31:0*/ risc_v__DOT__alu__DOT__srl_out;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sra_out;
        IData/*31:0*/ risc_v__DOT__alu__DOT____Vtogcov__a1_out;
        IData/*31:0*/ risc_v__DOT__alu__DOT____Vtogcov__s1_out;
        IData/*31:0*/ risc_v__DOT__alu__DOT____Vtogcov__sll_out;
        IData/*31:0*/ risc_v__DOT__alu__DOT____Vtogcov__srl_out;
        IData/*31:0*/ risc_v__DOT__alu__DOT____Vtogcov__sra_out;
        IData/*31:0*/ risc_v__DOT__alu__DOT__s1__DOT____Vtogcov__B;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sll__DOT____VlemCond_4;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sll__DOT____VlemCond_3;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sll__DOT____VlemCond_2;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sll__DOT____VlemCond_1;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sll__DOT____VlemCond_0;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sll__DOT__s1;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sll__DOT__s2;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sll__DOT__s3;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sll__DOT__s4;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s1;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s2;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s3;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sll__DOT____Vtogcov__s4;
        IData/*31:0*/ risc_v__DOT__alu__DOT__srl__DOT____VlemCond_4;
        IData/*31:0*/ risc_v__DOT__alu__DOT__srl__DOT____VlemCond_3;
        IData/*31:0*/ risc_v__DOT__alu__DOT__srl__DOT____VlemCond_2;
        IData/*31:0*/ risc_v__DOT__alu__DOT__srl__DOT____VlemCond_1;
        IData/*31:0*/ risc_v__DOT__alu__DOT__srl__DOT____VlemCond_0;
        IData/*31:0*/ risc_v__DOT__alu__DOT__srl__DOT__s1;
        IData/*31:0*/ risc_v__DOT__alu__DOT__srl__DOT__s2;
        IData/*31:0*/ risc_v__DOT__alu__DOT__srl__DOT__s3;
        IData/*31:0*/ risc_v__DOT__alu__DOT__srl__DOT__s4;
        IData/*31:0*/ risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s1;
    };
    struct {
        IData/*31:0*/ risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s2;
        IData/*31:0*/ risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s3;
        IData/*31:0*/ risc_v__DOT__alu__DOT__srl__DOT____Vtogcov__s4;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sra__DOT____VlemCond_4;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sra__DOT____VlemCond_3;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sra__DOT____VlemCond_2;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sra__DOT____VlemCond_1;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sra__DOT____VlemCond_0;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sra__DOT__s1;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sra__DOT__s2;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sra__DOT__s3;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sra__DOT__s4;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s1;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s2;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s3;
        IData/*31:0*/ risc_v__DOT__alu__DOT__sra__DOT____Vtogcov__s4;
        IData/*31:0*/ risc_v__DOT__DATA_MEM__DOT____VlemCond_1;
        IData/*31:0*/ risc_v__DOT__DATA_MEM__DOT____VlemCond_0;
        IData/*31:0*/ risc_v__DOT__REG_FILE__DOT____Vlvbound_h0df2320c__0;
        IData/*31:0*/ risc_v__DOT__REG_FILE__DOT____Vtogcov__r0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 8192> risc_v__DOT__instr_mem;
        VlUnpacked<CData/*7:0*/, 8192> risc_v__DOT__DATA_MEM__DOT__RAM;
        VlUnpacked<IData/*31:0*/, 31> risc_v__DOT__REG_FILE__DOT__registers;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    sc_core::sc_in<bool> clk;
    sc_core::sc_out<uint32_t> RS1;
    sc_core::sc_out<uint32_t> RS2;
    sc_core::sc_out<uint32_t> RD;
    sc_core::sc_out<uint32_t> ALU_FUNCT;

    // INTERNAL VARIABLES
    Vrisc_v__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrisc_v___024root(Vrisc_v__Syms* symsp, const char* namep);
    ~Vrisc_v___024root();
    VL_UNCOPYABLE(Vrisc_v___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
