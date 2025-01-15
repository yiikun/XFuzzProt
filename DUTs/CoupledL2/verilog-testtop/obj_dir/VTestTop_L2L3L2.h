// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTESTTOP_L2L3L2_H_
#define VERILATED_VTESTTOP_L2L3L2_H_  // guard

#include "verilated.h"

class VTestTop_L2L3L2__Syms;
class VTestTop_L2L3L2___024root;
class VTestTop_L2L3L2_Directory;
class VTestTop_L2L3L2_GrantBufferFIFO;
class VTestTop_L2L3L2_MSHRBuffer;
class VTestTop_L2L3L2_MSHRCtl;
class VTestTop_L2L3L2_MSHR_32;
class VTestTop_L2L3L2_RequestBuffer;
class VTestTop_L2L3L2_SinkC;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VTestTop_L2L3L2 VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VTestTop_L2L3L2__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&master_port_0_0_a_ready,0,0);
    VL_IN8(&master_port_0_0_a_valid,0,0);
    VL_IN8(&master_port_0_0_a_bits_opcode,2,0);
    VL_IN8(&master_port_0_0_a_bits_param,2,0);
    VL_IN8(&master_port_0_0_a_bits_size,0,0);
    VL_IN8(&master_port_0_0_a_bits_source,4,0);
    VL_IN8(&master_port_0_0_a_bits_user_alias,1,0);
    VL_IN8(&master_port_0_0_a_bits_mask,0,0);
    VL_IN8(&master_port_0_0_a_bits_data,7,0);
    VL_IN8(&master_port_0_0_a_bits_corrupt,0,0);
    VL_IN8(&master_port_0_0_b_ready,0,0);
    VL_OUT8(&master_port_0_0_b_valid,0,0);
    VL_OUT8(&master_port_0_0_b_bits_opcode,2,0);
    VL_OUT8(&master_port_0_0_b_bits_param,1,0);
    VL_OUT8(&master_port_0_0_b_bits_size,0,0);
    VL_OUT8(&master_port_0_0_b_bits_source,4,0);
    VL_OUT8(&master_port_0_0_b_bits_mask,0,0);
    VL_OUT8(&master_port_0_0_b_bits_data,7,0);
    VL_OUT8(&master_port_0_0_b_bits_corrupt,0,0);
    VL_OUT8(&master_port_0_0_c_ready,0,0);
    VL_IN8(&master_port_0_0_c_valid,0,0);
    VL_IN8(&master_port_0_0_c_bits_opcode,2,0);
    VL_IN8(&master_port_0_0_c_bits_param,2,0);
    VL_IN8(&master_port_0_0_c_bits_size,0,0);
    VL_IN8(&master_port_0_0_c_bits_source,4,0);
    VL_IN8(&master_port_0_0_c_bits_user_alias,1,0);
    VL_IN8(&master_port_0_0_c_bits_data,7,0);
    VL_IN8(&master_port_0_0_c_bits_corrupt,0,0);
    VL_IN8(&master_port_0_0_d_ready,0,0);
    VL_OUT8(&master_port_0_0_d_valid,0,0);
    VL_OUT8(&master_port_0_0_d_bits_opcode,2,0);
    VL_OUT8(&master_port_0_0_d_bits_param,1,0);
    VL_OUT8(&master_port_0_0_d_bits_size,0,0);
    VL_OUT8(&master_port_0_0_d_bits_source,4,0);
    VL_OUT8(&master_port_0_0_d_bits_sink,7,0);
    VL_OUT8(&master_port_0_0_d_bits_denied,0,0);
    VL_OUT8(&master_port_0_0_d_bits_data,7,0);
    VL_OUT8(&master_port_0_0_d_bits_corrupt,0,0);
    VL_OUT8(&master_port_0_0_e_ready,0,0);
    VL_IN8(&master_port_0_0_e_valid,0,0);
    VL_IN8(&master_port_0_0_e_bits_sink,7,0);
    VL_OUT8(&master_port_1_0_a_ready,0,0);
    VL_IN8(&master_port_1_0_a_valid,0,0);
    VL_IN8(&master_port_1_0_a_bits_opcode,2,0);
    VL_IN8(&master_port_1_0_a_bits_param,2,0);
    VL_IN8(&master_port_1_0_a_bits_size,0,0);
    VL_IN8(&master_port_1_0_a_bits_source,4,0);
    VL_IN8(&master_port_1_0_a_bits_user_alias,1,0);
    VL_IN8(&master_port_1_0_a_bits_mask,0,0);
    VL_IN8(&master_port_1_0_a_bits_data,7,0);
    VL_IN8(&master_port_1_0_a_bits_corrupt,0,0);
    VL_IN8(&master_port_1_0_b_ready,0,0);
    VL_OUT8(&master_port_1_0_b_valid,0,0);
    VL_OUT8(&master_port_1_0_b_bits_opcode,2,0);
    VL_OUT8(&master_port_1_0_b_bits_param,1,0);
    VL_OUT8(&master_port_1_0_b_bits_size,0,0);
    VL_OUT8(&master_port_1_0_b_bits_source,4,0);
    VL_OUT8(&master_port_1_0_b_bits_mask,0,0);
    VL_OUT8(&master_port_1_0_b_bits_data,7,0);
    VL_OUT8(&master_port_1_0_b_bits_corrupt,0,0);
    VL_OUT8(&master_port_1_0_c_ready,0,0);
    VL_IN8(&master_port_1_0_c_valid,0,0);
    VL_IN8(&master_port_1_0_c_bits_opcode,2,0);
    VL_IN8(&master_port_1_0_c_bits_param,2,0);
    VL_IN8(&master_port_1_0_c_bits_size,0,0);
    VL_IN8(&master_port_1_0_c_bits_source,4,0);
    VL_IN8(&master_port_1_0_c_bits_user_alias,1,0);
    VL_IN8(&master_port_1_0_c_bits_data,7,0);
    VL_IN8(&master_port_1_0_c_bits_corrupt,0,0);
    VL_IN8(&master_port_1_0_d_ready,0,0);
    VL_OUT8(&master_port_1_0_d_valid,0,0);
    VL_OUT8(&master_port_1_0_d_bits_opcode,2,0);
    VL_OUT8(&master_port_1_0_d_bits_param,1,0);
    VL_OUT8(&master_port_1_0_d_bits_size,0,0);
    VL_OUT8(&master_port_1_0_d_bits_source,4,0);
    VL_OUT8(&master_port_1_0_d_bits_sink,7,0);
    VL_OUT8(&master_port_1_0_d_bits_denied,0,0);
    VL_OUT8(&master_port_1_0_d_bits_data,7,0);
    VL_OUT8(&master_port_1_0_d_bits_corrupt,0,0);
    VL_OUT8(&master_port_1_0_e_ready,0,0);
    VL_IN8(&master_port_1_0_e_valid,0,0);
    VL_IN8(&master_port_1_0_e_bits_sink,7,0);
    VL_IN16(&master_port_0_0_a_bits_address,15,0);
    VL_OUT16(&master_port_0_0_b_bits_address,15,0);
    VL_IN16(&master_port_0_0_c_bits_address,15,0);
    VL_IN16(&master_port_1_0_a_bits_address,15,0);
    VL_OUT16(&master_port_1_0_b_bits_address,15,0);
    VL_IN16(&master_port_1_0_c_bits_address,15,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VTestTop_L2L3L2_RequestBuffer* const __PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__a_reqBuf;
    VTestTop_L2L3L2_MSHRCtl* const __PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl;
    VTestTop_L2L3L2_Directory* const __PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory;
    VTestTop_L2L3L2_SinkC* const __PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC;
    VTestTop_L2L3L2_GrantBufferFIFO* const __PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__grantBuf;
    VTestTop_L2L3L2_MSHRBuffer* const __PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillBuf;
    VTestTop_L2L3L2_MSHRBuffer* const __PVT__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__releaseBuf;
    VTestTop_L2L3L2_RequestBuffer* const __PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__a_reqBuf;
    VTestTop_L2L3L2_MSHRCtl* const __PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl;
    VTestTop_L2L3L2_Directory* const __PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory;
    VTestTop_L2L3L2_SinkC* const __PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC;
    VTestTop_L2L3L2_GrantBufferFIFO* const __PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf;
    VTestTop_L2L3L2_MSHRBuffer* const __PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillBuf;
    VTestTop_L2L3L2_MSHRBuffer* const __PVT__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__releaseBuf;
    VTestTop_L2L3L2_MSHR_32* const __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0;
    VTestTop_L2L3L2_MSHR_32* const __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1;
    VTestTop_L2L3L2_MSHR_32* const __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2;
    VTestTop_L2L3L2_MSHR_32* const __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3;
    VTestTop_L2L3L2_MSHR_32* const __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4;
    VTestTop_L2L3L2_MSHR_32* const __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5;
    VTestTop_L2L3L2_MSHR_32* const __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6;
    VTestTop_L2L3L2_MSHR_32* const __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7;
    VTestTop_L2L3L2_MSHR_32* const __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8;
    VTestTop_L2L3L2_MSHR_32* const __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9;
    VTestTop_L2L3L2_MSHR_32* const __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10;
    VTestTop_L2L3L2_MSHR_32* const __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11;
    VTestTop_L2L3L2_MSHR_32* const __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12;
    VTestTop_L2L3L2_MSHR_32* const __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13;
    VTestTop_L2L3L2_MSHR_32* const __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr;
    VTestTop_L2L3L2_MSHR_32* const __PVT__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VTestTop_L2L3L2___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VTestTop_L2L3L2(VerilatedContext* contextp, const char* name = "TOP");
    explicit VTestTop_L2L3L2(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VTestTop_L2L3L2();
  private:
    VL_UNCOPYABLE(VTestTop_L2L3L2);  ///< Copying not allowed

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
