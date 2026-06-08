// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_unit.h for the primary calling header

#include "Vcontrol_unit__pch.h"

void Vcontrol_unit___024root___ctor_var_reset(Vcontrol_unit___024root* vlSelf);

Vcontrol_unit___024root::Vcontrol_unit___024root(Vcontrol_unit__Syms* symsp, const char* namep)
    : zero_flag("zero_flag")
    , unsigned_less_than("unsigned_less_than")
    , signed_less_than("signed_less_than")
    , rs1("rs1")
    , rs2("rs2")
    , rd("rd")
    , mux_adder("mux_adder")
    , mux_PC("mux_PC")
    , mux_reg("mux_reg")
    , WE_reg_file("WE_reg_file")
    , WE_data_mem("WE_data_mem")
    , mux_ALU2("mux_ALU2")
    , mux_ALU1("mux_ALU1")
    , ALU_funct("ALU_funct")
    , mem_size("mem_size")
    , sign_val("sign_val")
    , instr("instr")
    , imm("imm")
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcontrol_unit___024root___ctor_var_reset(this);
}

void Vcontrol_unit___024root___configure_coverage(Vcontrol_unit___024root* vlSelf, bool first);

void Vcontrol_unit___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    Vcontrol_unit___024root___configure_coverage(this, first);
}

Vcontrol_unit___024root::~Vcontrol_unit___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

// Coverage
void Vcontrol_unit___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
    const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    std::string fullhier = std::string{vlNamep} + hierp;
    if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), vlNamep, count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",fullhier.c_str(),  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp,  (fsmVarp[0] ? "fsm_var" : ""), fsmVarp,  (fsmFromp[0] ? "fsm_from" : ""), fsmFromp,  (fsmTop[0] ? "fsm_to" : ""), fsmTop,  (fsmTagp[0] ? "fsm_tag" : ""), fsmTagp);
}

// Toggle Coverage
void Vcontrol_unit___024root::__vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp) {
    int step = (end >= begin) ? 1 : -1;
    for (int i = begin; i != end + step; i += step) {
        for (int j = 0; j < 2; j++) {
            uint32_t* count32p = countp;
            static uint32_t fake_zero_count = 0;
            std::string fullhier = std::string{vlNamep} + hierp;
            if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
            std::string commentWithIndex = commentp;
            if (ranged) commentWithIndex += '[' + std::to_string(i) + ']';
            commentWithIndex += j ? ":0->1" : ":1->0";
            if (!enable) count32p = &fake_zero_count;
            *count32p = 0;
            VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), vlNamep, count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
                "hier",fullhier.c_str(),  "page",pagep,  "comment",commentWithIndex.c_str(),  "", "");
            ++countp;
        }
    }
}
