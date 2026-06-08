// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcontrol_unit__pch.h"
#include "verilated_vcd_sc.h"

//============================================================
// Constructors

Vcontrol_unit::Vcontrol_unit(sc_core::sc_module_name /* unused */)
    : VerilatedModel{*Verilated::threadContextp()}
    , vlSymsp{new Vcontrol_unit__Syms(contextp(), name(), this)}
    , zero_flag{vlSymsp->TOP.zero_flag}
    , unsigned_less_than{vlSymsp->TOP.unsigned_less_than}
    , signed_less_than{vlSymsp->TOP.signed_less_than}
    , rs1{vlSymsp->TOP.rs1}
    , rs2{vlSymsp->TOP.rs2}
    , rd{vlSymsp->TOP.rd}
    , mux_adder{vlSymsp->TOP.mux_adder}
    , mux_PC{vlSymsp->TOP.mux_PC}
    , mux_reg{vlSymsp->TOP.mux_reg}
    , WE_reg_file{vlSymsp->TOP.WE_reg_file}
    , WE_data_mem{vlSymsp->TOP.WE_data_mem}
    , mux_ALU2{vlSymsp->TOP.mux_ALU2}
    , mux_ALU1{vlSymsp->TOP.mux_ALU1}
    , ALU_funct{vlSymsp->TOP.ALU_funct}
    , mem_size{vlSymsp->TOP.mem_size}
    , sign_val{vlSymsp->TOP.sign_val}
    , instr{vlSymsp->TOP.instr}
    , imm{vlSymsp->TOP.imm}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << zero_flag;
    sensitive << unsigned_less_than;
    sensitive << signed_less_than;
    sensitive << instr;

}

//============================================================
// Destructor

Vcontrol_unit::~Vcontrol_unit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcontrol_unit___024root___eval_debug_assertions(Vcontrol_unit___024root* vlSelf);
#endif  // VL_DEBUG
void Vcontrol_unit___024root___eval_static(Vcontrol_unit___024root* vlSelf);
void Vcontrol_unit___024root___eval_initial(Vcontrol_unit___024root* vlSelf);
void Vcontrol_unit___024root___eval_settle(Vcontrol_unit___024root* vlSelf);
void Vcontrol_unit___024root___eval(Vcontrol_unit___024root* vlSelf);

void Vcontrol_unit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcontrol_unit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcontrol_unit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcontrol_unit___024root___eval_static(&(vlSymsp->TOP));
        Vcontrol_unit___024root___eval_initial(&(vlSymsp->TOP));
        Vcontrol_unit___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcontrol_unit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcontrol_unit::eventsPending() { return false; }

uint64_t Vcontrol_unit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

//============================================================
// Invoke final blocks

void Vcontrol_unit___024root___eval_final(Vcontrol_unit___024root* vlSelf);

VL_ATTR_COLD void Vcontrol_unit::final() {
    contextp()->executingFinal(true);
    Vcontrol_unit___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcontrol_unit::hierName() const { return vlSymsp->name(); }
const char* Vcontrol_unit::modelName() const { return "Vcontrol_unit"; }
unsigned Vcontrol_unit::threads() const { return 1; }
void Vcontrol_unit::prepareClone() const { contextp()->prepareClone(); }
void Vcontrol_unit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcontrol_unit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vcontrol_unit___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcontrol_unit___024root__trace_init_top(Vcontrol_unit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcontrol_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol_unit___024root*>(voidSelf);
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vcontrol_unit___024root__trace_decl_types(tracep);
    Vcontrol_unit___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcontrol_unit___024root__trace_register(Vcontrol_unit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcontrol_unit::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    if (!sc_core::sc_get_curr_simcontext()->elaboration_done()) {
        vl_fatal(__FILE__, __LINE__, name(), "Vcontrol_unit::trace() is called before sc_core::sc_start(). Run sc_core::sc_start(sc_core::SC_ZERO_TIME) before trace() to complete elaboration.");
    }(void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcontrol_unit::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 38);
    Vcontrol_unit___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
