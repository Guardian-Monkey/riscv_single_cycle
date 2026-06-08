// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcontrol_unit.h for the primary calling header

#ifndef VERILATED_VCONTROL_UNIT___024ROOT_H_
#define VERILATED_VCONTROL_UNIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_sc.h"
#include "verilated_cov.h"


class Vcontrol_unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcontrol_unit___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellout__control_unit__sign_val;
    CData/*1:0*/ __Vcellout__control_unit__mem_size;
    CData/*3:0*/ __Vcellout__control_unit__ALU_funct;
    CData/*0:0*/ __Vcellout__control_unit__mux_ALU1;
    CData/*1:0*/ __Vcellout__control_unit__mux_ALU2;
    CData/*0:0*/ __Vcellout__control_unit__WE_data_mem;
    CData/*0:0*/ __Vcellout__control_unit__WE_reg_file;
    CData/*1:0*/ __Vcellout__control_unit__mux_reg;
    CData/*0:0*/ __Vcellout__control_unit__mux_PC;
    CData/*0:0*/ __Vcellout__control_unit__mux_adder;
    CData/*4:0*/ __Vcellout__control_unit__rd;
    CData/*4:0*/ __Vcellout__control_unit__rs2;
    CData/*4:0*/ __Vcellout__control_unit__rs1;
    CData/*0:0*/ __Vcellinp__control_unit__signed_less_than;
    CData/*0:0*/ __Vcellinp__control_unit__unsigned_less_than;
    CData/*0:0*/ __Vcellinp__control_unit__zero_flag;
    CData/*0:0*/ control_unit__DOT____Vtogcov__zero_flag;
    CData/*0:0*/ control_unit__DOT____Vtogcov__unsigned_less_than;
    CData/*0:0*/ control_unit__DOT____Vtogcov__signed_less_than;
    CData/*4:0*/ control_unit__DOT____Vtogcov__rs1;
    CData/*4:0*/ control_unit__DOT____Vtogcov__rs2;
    CData/*4:0*/ control_unit__DOT____Vtogcov__rd;
    CData/*0:0*/ control_unit__DOT____Vtogcov__mux_adder;
    CData/*0:0*/ control_unit__DOT____Vtogcov__mux_PC;
    CData/*1:0*/ control_unit__DOT____Vtogcov__mux_reg;
    CData/*0:0*/ control_unit__DOT____Vtogcov__WE_reg_file;
    CData/*0:0*/ control_unit__DOT____Vtogcov__WE_data_mem;
    CData/*1:0*/ control_unit__DOT____Vtogcov__mux_ALU2;
    CData/*0:0*/ control_unit__DOT____Vtogcov__mux_ALU1;
    CData/*3:0*/ control_unit__DOT____Vtogcov__ALU_funct;
    CData/*1:0*/ control_unit__DOT____Vtogcov__mem_size;
    CData/*0:0*/ control_unit__DOT____Vtogcov__sign_val;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    IData/*31:0*/ __Vcellout__control_unit__imm;
    IData/*31:0*/ __Vcellinp__control_unit__instr;
    IData/*31:0*/ control_unit__DOT____Vtogcov__instr;
    IData/*31:0*/ control_unit__DOT____Vtogcov__imm;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    sc_core::sc_in<bool> zero_flag;
    sc_core::sc_in<bool> unsigned_less_than;
    sc_core::sc_in<bool> signed_less_than;
    sc_core::sc_out<uint32_t> rs1;
    sc_core::sc_out<uint32_t> rs2;
    sc_core::sc_out<uint32_t> rd;
    sc_core::sc_out<bool> mux_adder;
    sc_core::sc_out<bool> mux_PC;
    sc_core::sc_out<uint32_t> mux_reg;
    sc_core::sc_out<bool> WE_reg_file;
    sc_core::sc_out<bool> WE_data_mem;
    sc_core::sc_out<uint32_t> mux_ALU2;
    sc_core::sc_out<bool> mux_ALU1;
    sc_core::sc_out<uint32_t> ALU_funct;
    sc_core::sc_out<uint32_t> mem_size;
    sc_core::sc_out<bool> sign_val;
    sc_core::sc_in<uint32_t> instr;
    sc_core::sc_out<uint32_t> imm;

    // INTERNAL VARIABLES
    Vcontrol_unit__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcontrol_unit___024root(Vcontrol_unit__Syms* symsp, const char* namep);
    ~Vcontrol_unit___024root();
    VL_UNCOPYABLE(Vcontrol_unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
