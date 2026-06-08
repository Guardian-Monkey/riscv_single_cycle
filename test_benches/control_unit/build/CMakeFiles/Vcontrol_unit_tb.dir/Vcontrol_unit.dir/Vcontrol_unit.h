// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCONTROL_UNIT_H_
#define VERILATED_VCONTROL_UNIT_H_  // guard

#include "verilated.h"
#include "verilated_sc.h"
#include "verilated_cov.h"

class Vcontrol_unit__Syms;
class Vcontrol_unit___024root;
class VerilatedVcdSc;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vcontrol_unit VL_NOT_FINAL : public ::sc_core::sc_module, public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vcontrol_unit__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    sc_core::sc_in<bool> &zero_flag;
    sc_core::sc_in<bool> &unsigned_less_than;
    sc_core::sc_in<bool> &signed_less_than;
    sc_core::sc_out<uint32_t> &rs1;
    sc_core::sc_out<uint32_t> &rs2;
    sc_core::sc_out<uint32_t> &rd;
    sc_core::sc_out<bool> &mux_adder;
    sc_core::sc_out<bool> &mux_PC;
    sc_core::sc_out<uint32_t> &mux_reg;
    sc_core::sc_out<bool> &WE_reg_file;
    sc_core::sc_out<bool> &WE_data_mem;
    sc_core::sc_out<uint32_t> &mux_ALU2;
    sc_core::sc_out<bool> &mux_ALU1;
    sc_core::sc_out<uint32_t> &ALU_funct;
    sc_core::sc_out<uint32_t> &mem_size;
    sc_core::sc_out<bool> &sign_val;
    sc_core::sc_in<uint32_t> &instr;
    sc_core::sc_out<uint32_t> &imm;

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vcontrol_unit___024root* const rootp;

    // CONSTRUCTORS
    SC_CTOR(Vcontrol_unit);
    virtual ~Vcontrol_unit();
  private:
    VL_UNCOPYABLE(Vcontrol_unit);  ///< Copying not allowed

  public:
    // API METHODS
  private:
    void eval() { eval_step(); }
    void eval_step();
  public:
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// SC tracing; avoid overloaded virtual function lint warning
    void trace(sc_core::sc_trace_file* tfp) const override { ::sc_core::sc_module::trace(tfp); }

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
