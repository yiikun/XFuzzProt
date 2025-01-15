// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestTop_L2L3L2.h for the primary calling header

#ifndef VERILATED_VTESTTOP_L2L3L2_MSHRBUFFER_H_
#define VERILATED_VTESTTOP_L2L3L2_MSHRBUFFER_H_  // guard

#include "verilated.h"


class VTestTop_L2L3L2__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTestTop_L2L3L2_MSHRBuffer final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_r_valid,0,0);
        VL_IN8(io_r_id,7,0);
        VL_IN8(io_w_0_valid,0,0);
        VL_IN8(io_w_0_beat_sel,1,0);
        VL_IN8(io_w_0_id,7,0);
        VL_IN8(io_w_1_valid,0,0);
        VL_IN8(io_w_1_beat_sel,1,0);
        VL_IN8(io_w_1_id,7,0);
        VL_IN8(io_w_2_valid,0,0);
        VL_IN8(io_w_2_id,7,0);
        CData/*0:0*/ __PVT__buffer_0_0_io_r_req_valid;
        CData/*0:0*/ __PVT__buffer_0_0_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_0_1_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_1_0_io_r_req_valid;
        CData/*0:0*/ __PVT__buffer_1_0_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_1_1_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_2_0_io_r_req_valid;
        CData/*0:0*/ __PVT__buffer_2_0_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_2_1_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_3_0_io_r_req_valid;
        CData/*0:0*/ __PVT__buffer_3_0_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_3_1_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_4_0_io_r_req_valid;
        CData/*0:0*/ __PVT__buffer_4_0_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_4_1_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_5_0_io_r_req_valid;
        CData/*0:0*/ __PVT__buffer_5_0_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_5_1_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_6_0_io_r_req_valid;
        CData/*0:0*/ __PVT__buffer_6_0_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_6_1_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_7_0_io_r_req_valid;
        CData/*0:0*/ __PVT__buffer_7_0_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_7_1_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_8_0_io_r_req_valid;
        CData/*0:0*/ __PVT__buffer_8_0_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_8_1_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_9_0_io_r_req_valid;
        CData/*0:0*/ __PVT__buffer_9_0_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_9_1_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_10_0_io_r_req_valid;
        CData/*0:0*/ __PVT__buffer_10_0_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_10_1_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_11_0_io_r_req_valid;
        CData/*0:0*/ __PVT__buffer_11_0_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_11_1_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_12_0_io_r_req_valid;
        CData/*0:0*/ __PVT__buffer_12_0_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_12_1_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_13_0_io_r_req_valid;
        CData/*0:0*/ __PVT__buffer_13_0_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_13_1_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_14_0_io_r_req_valid;
        CData/*0:0*/ __PVT__buffer_14_0_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_14_1_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_15_0_io_r_req_valid;
        CData/*0:0*/ __PVT__buffer_15_0_io_w_req_valid;
        CData/*0:0*/ __PVT__buffer_15_1_io_w_req_valid;
        CData/*0:0*/ __PVT___wens_T_1;
        CData/*0:0*/ __PVT___wens_T_3;
        CData/*1:0*/ __PVT__w_beat_sel;
        CData/*0:0*/ __PVT___wens_T_7;
    };
    struct {
        CData/*0:0*/ __PVT___wens_T_9;
        CData/*1:0*/ __PVT__w_beat_sel_1;
        CData/*0:0*/ __PVT___wens_T_13;
        CData/*0:0*/ __PVT___wens_T_15;
        CData/*1:0*/ __PVT__w_beat_sel_2;
        CData/*0:0*/ __PVT___wens_T_19;
        CData/*0:0*/ __PVT___wens_T_21;
        CData/*1:0*/ __PVT__w_beat_sel_3;
        CData/*0:0*/ __PVT___wens_T_25;
        CData/*0:0*/ __PVT___wens_T_27;
        CData/*1:0*/ __PVT__w_beat_sel_4;
        CData/*0:0*/ __PVT___wens_T_31;
        CData/*0:0*/ __PVT___wens_T_33;
        CData/*1:0*/ __PVT__w_beat_sel_5;
        CData/*0:0*/ __PVT___wens_T_37;
        CData/*0:0*/ __PVT___wens_T_39;
        CData/*1:0*/ __PVT__w_beat_sel_6;
        CData/*0:0*/ __PVT___wens_T_43;
        CData/*0:0*/ __PVT___wens_T_45;
        CData/*1:0*/ __PVT__w_beat_sel_7;
        CData/*0:0*/ __PVT___wens_T_49;
        CData/*0:0*/ __PVT___wens_T_51;
        CData/*1:0*/ __PVT__w_beat_sel_8;
        CData/*0:0*/ __PVT___wens_T_55;
        CData/*0:0*/ __PVT___wens_T_57;
        CData/*1:0*/ __PVT__w_beat_sel_9;
        CData/*0:0*/ __PVT___wens_T_61;
        CData/*0:0*/ __PVT___wens_T_63;
        CData/*1:0*/ __PVT__w_beat_sel_10;
        CData/*0:0*/ __PVT___wens_T_67;
        CData/*0:0*/ __PVT___wens_T_69;
        CData/*1:0*/ __PVT__w_beat_sel_11;
        CData/*0:0*/ __PVT___wens_T_73;
        CData/*0:0*/ __PVT___wens_T_75;
        CData/*1:0*/ __PVT__w_beat_sel_12;
        CData/*0:0*/ __PVT___wens_T_79;
        CData/*0:0*/ __PVT___wens_T_81;
        CData/*1:0*/ __PVT__w_beat_sel_13;
        CData/*0:0*/ __PVT___wens_T_85;
        CData/*0:0*/ __PVT___wens_T_87;
        CData/*1:0*/ __PVT__w_beat_sel_14;
        CData/*0:0*/ __PVT___wens_T_91;
        CData/*0:0*/ __PVT___wens_T_93;
        CData/*1:0*/ __PVT__w_beat_sel_15;
        CData/*7:0*/ __PVT__ridReg;
        CData/*0:0*/ __PVT__buffer_0_0__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_0_1__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_1_0__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_1_1__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_2_0__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_2_1__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_3_0__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_3_1__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_4_0__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_4_1__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_5_0__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_5_1__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_6_0__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_6_1__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_7_0__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_7_1__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_8_0__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_8_1__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_9_0__DOT__array_0_mem_rdata_addr_pipe_0;
    };
    struct {
        CData/*0:0*/ __PVT__buffer_9_1__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_10_0__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_10_1__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_11_0__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_11_1__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_12_0__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_12_1__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_13_0__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_13_1__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_14_0__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_14_1__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_15_0__DOT__array_0_mem_rdata_addr_pipe_0;
        CData/*0:0*/ __PVT__buffer_15_1__DOT__array_0_mem_rdata_addr_pipe_0;
        VL_OUT16(io_r_data_data,15,0);
        VL_IN16(io_w_0_data_data,15,0);
        VL_IN16(io_w_1_data_data,15,0);
        VL_IN16(io_w_2_data_data,15,0);
        SData/*15:0*/ __PVT__w_data_data;
        SData/*15:0*/ __PVT__w_data_1_data;
        SData/*15:0*/ __PVT__w_data_2_data;
        SData/*15:0*/ __PVT__w_data_3_data;
        SData/*15:0*/ __PVT__w_data_4_data;
        SData/*15:0*/ __PVT__w_data_5_data;
        SData/*15:0*/ __PVT__w_data_6_data;
        SData/*15:0*/ __PVT__w_data_7_data;
        SData/*15:0*/ __PVT__w_data_8_data;
        SData/*15:0*/ __PVT__w_data_9_data;
        SData/*15:0*/ __PVT__w_data_10_data;
        SData/*15:0*/ __PVT__w_data_11_data;
        SData/*15:0*/ __PVT__w_data_12_data;
        SData/*15:0*/ __PVT__w_data_13_data;
        SData/*15:0*/ __PVT__w_data_14_data;
        SData/*15:0*/ __PVT__w_data_15_data;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_0_0__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_0_1__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_1_0__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_1_1__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_2_0__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_2_1__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_3_0__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_3_1__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_4_0__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_4_1__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_5_0__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_5_1__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_6_0__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_6_1__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_7_0__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_7_1__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_8_0__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_8_1__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_9_0__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_9_1__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_10_0__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_10_1__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_11_0__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_11_1__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_12_0__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_12_1__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_13_0__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_13_1__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_14_0__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_14_1__DOT__array_0;
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_15_0__DOT__array_0;
    };
    struct {
        VlUnpacked<CData/*7:0*/, 1> __PVT__buffer_15_1__DOT__array_0;
    };

    // INTERNAL VARIABLES
    VTestTop_L2L3L2__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTestTop_L2L3L2_MSHRBuffer(VTestTop_L2L3L2__Syms* symsp, const char* v__name);
    ~VTestTop_L2L3L2_MSHRBuffer();
    VL_UNCOPYABLE(VTestTop_L2L3L2_MSHRBuffer);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
