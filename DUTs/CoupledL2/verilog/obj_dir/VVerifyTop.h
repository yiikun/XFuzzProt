// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VVERIFYTOP_H_
#define VERILATED_VVERIFYTOP_H_  // guard

#include "verilated.h"

class VVerifyTop__Syms;
class VVerifyTop___024root;
class VVerifyTop_GrantBuffer;
class VVerifyTop_GrantBuffer_2;
class VVerifyTop_MSHRCtl;
class VVerifyTop_MSHR_16;
class VVerifyTop_MainPipe;
class VVerifyTop_MainPipe_2;
class VVerifyTop_RequestArb;
class VVerifyTop_RequestArb_2;
class VVerifyTop_RequestBuffer;
class VVerifyTop_RequestBuffer_2;
class VVerifyTop_SinkC;
class VVerifyTop_SinkC_2;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VVerifyTop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VVerifyTop__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_topInputRandomAddrs_0,4,0);
    VL_IN8(&io_topInputRandomAddrs_1,4,0);
    VL_IN8(&io_topInputNeedT_0,0,0);
    VL_IN8(&io_topInputNeedT_1,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VVerifyTop_RequestArb* const __PVT__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb;
    VVerifyTop_RequestBuffer* const __PVT__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf;
    VVerifyTop_MainPipe* const __PVT__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe;
    VVerifyTop_MSHRCtl* const __PVT__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl;
    VVerifyTop_SinkC* const __PVT__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC;
    VVerifyTop_GrantBuffer* const __PVT__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf;
    VVerifyTop_RequestArb* const __PVT__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb;
    VVerifyTop_RequestBuffer* const __PVT__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf;
    VVerifyTop_MainPipe* const __PVT__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe;
    VVerifyTop_MSHRCtl* const __PVT__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl;
    VVerifyTop_SinkC* const __PVT__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC;
    VVerifyTop_GrantBuffer* const __PVT__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf;
    VVerifyTop_RequestArb_2* const __PVT__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb;
    VVerifyTop_RequestBuffer_2* const __PVT__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__a_reqBuf;
    VVerifyTop_MainPipe_2* const __PVT__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe;
    VVerifyTop_SinkC_2* const __PVT__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC;
    VVerifyTop_GrantBuffer_2* const __PVT__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__grantBuf;
    VVerifyTop_RequestArb_2* const __PVT__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb;
    VVerifyTop_RequestBuffer_2* const __PVT__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf;
    VVerifyTop_MainPipe_2* const __PVT__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe;
    VVerifyTop_SinkC_2* const __PVT__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC;
    VVerifyTop_GrantBuffer_2* const __PVT__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__grantBuf;
    VVerifyTop_MSHR_16* const __PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_0;
    VVerifyTop_MSHR_16* const __PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_1;
    VVerifyTop_MSHR_16* const __PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_2;
    VVerifyTop_MSHR_16* const __PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_3;
    VVerifyTop_MSHR_16* const __PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_4;
    VVerifyTop_MSHR_16* const __PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_5;
    VVerifyTop_MSHR_16* const __PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_6;
    VVerifyTop_MSHR_16* const __PVT__VerifyTop__DOT__l3__DOT__slices_0__DOT__ms_7;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VVerifyTop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VVerifyTop(VerilatedContext* contextp, const char* name = "TOP");
    explicit VVerifyTop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VVerifyTop();
  private:
    VL_UNCOPYABLE(VVerifyTop);  ///< Copying not allowed

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
