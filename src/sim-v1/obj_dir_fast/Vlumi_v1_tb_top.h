// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VLUMI_V1_TB_TOP_H_
#define VERILATED_VLUMI_V1_TB_TOP_H_  // guard

#include "verilated.h"

class Vlumi_v1_tb_top__Syms;
class Vlumi_v1_tb_top___024root;
class Vlumi_v1_tb_top_uvm_shim;
class Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component__Vclpkg;
class Vlumi_v1_tb_top_uvm_shim__03a__03auvm_env__Vclpkg;
class Vlumi_v1_tb_top_uvm_shim__03a__03auvm_monitor__Vclpkg;
class Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object__Vclpkg;
class Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard__Vclpkg;
class Vlumi_v1_tb_top_uvm_shim__03a__03auvm_sequence__Vclpkg;
class Vlumi_v1_tb_top_uvm_shim__03a__03auvm_test__Vclpkg;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vlumi_v1_tb_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vlumi_v1_tb_top__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vlumi_v1_tb_top_uvm_shim* const __PVT__uvm_shim;
    Vlumi_v1_tb_top_uvm_shim__03a__03auvm_object__Vclpkg* const uvm_shim__03a__03auvm_object__Vclpkg;
    Vlumi_v1_tb_top_uvm_shim__03a__03auvm_component__Vclpkg* const uvm_shim__03a__03auvm_component__Vclpkg;
    Vlumi_v1_tb_top_uvm_shim__03a__03auvm_test__Vclpkg* const uvm_shim__03a__03auvm_test__Vclpkg;
    Vlumi_v1_tb_top_uvm_shim__03a__03auvm_env__Vclpkg* const uvm_shim__03a__03auvm_env__Vclpkg;
    Vlumi_v1_tb_top_uvm_shim__03a__03auvm_scoreboard__Vclpkg* const uvm_shim__03a__03auvm_scoreboard__Vclpkg;
    Vlumi_v1_tb_top_uvm_shim__03a__03auvm_monitor__Vclpkg* const uvm_shim__03a__03auvm_monitor__Vclpkg;
    Vlumi_v1_tb_top_uvm_shim__03a__03auvm_sequence__Vclpkg* const uvm_shim__03a__03auvm_sequence__Vclpkg;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vlumi_v1_tb_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vlumi_v1_tb_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vlumi_v1_tb_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vlumi_v1_tb_top();
  private:
    VL_UNCOPYABLE(Vlumi_v1_tb_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

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
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
