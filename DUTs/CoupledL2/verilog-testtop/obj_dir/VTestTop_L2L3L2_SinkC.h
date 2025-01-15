// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestTop_L2L3L2.h for the primary calling header

#ifndef VERILATED_VTESTTOP_L2L3L2_SINKC_H_
#define VERILATED_VTESTTOP_L2L3L2_SINKC_H_  // guard

#include "verilated.h"


class VTestTop_L2L3L2__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTestTop_L2L3L2_SinkC final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_c_ready,0,0);
        VL_IN8(io_c_valid,0,0);
        VL_IN8(io_c_bits_opcode,2,0);
        VL_IN8(io_c_bits_param,2,0);
        VL_IN8(io_c_bits_size,0,0);
        VL_IN8(io_c_bits_source,4,0);
        VL_IN8(io_c_bits_data,7,0);
        VL_IN8(io_task_ready,0,0);
        VL_OUT8(io_task_valid,0,0);
        VL_OUT8(io_task_bits_set,6,0);
        VL_OUT8(io_task_bits_tag,7,0);
        VL_OUT8(io_task_bits_off,0,0);
        VL_OUT8(io_task_bits_opcode,2,0);
        VL_OUT8(io_task_bits_param,2,0);
        VL_OUT8(io_task_bits_size,0,0);
        VL_OUT8(io_task_bits_sourceId,4,0);
        VL_OUT8(io_task_bits_bufIdx,1,0);
        VL_OUT8(io_resp_valid,0,0);
        VL_OUT8(io_resp_set,6,0);
        VL_OUT8(io_resp_tag,7,0);
        VL_OUT8(io_resp_respInfo_opcode,2,0);
        VL_OUT8(io_resp_respInfo_param,2,0);
        VL_OUT8(io_resp_respInfo_last,0,0);
        VL_OUT8(io_releaseBufWrite_valid,0,0);
        VL_OUT8(io_releaseBufWrite_beat_sel,1,0);
        VL_IN8(io_bufRead_valid,0,0);
        VL_IN8(io_bufRead_bits_bufIdx,1,0);
        VL_OUT8(io_bufResp_data_0,7,0);
        VL_OUT8(io_bufResp_data_1,7,0);
        VL_OUT8(io_refillBufWrite_valid,0,0);
        VL_OUT8(io_refillBufWrite_id,7,0);
        VL_IN8(io_msInfo_0_valid,0,0);
        VL_IN8(io_msInfo_0_bits_set,6,0);
        VL_IN8(io_msInfo_0_bits_reqTag,7,0);
        VL_IN8(io_msInfo_0_bits_releaseNotSent,0,0);
        VL_IN8(io_msInfo_1_valid,0,0);
        VL_IN8(io_msInfo_1_bits_set,6,0);
        VL_IN8(io_msInfo_1_bits_reqTag,7,0);
        VL_IN8(io_msInfo_1_bits_releaseNotSent,0,0);
        VL_IN8(io_msInfo_2_valid,0,0);
        VL_IN8(io_msInfo_2_bits_set,6,0);
        VL_IN8(io_msInfo_2_bits_reqTag,7,0);
        VL_IN8(io_msInfo_2_bits_releaseNotSent,0,0);
        VL_IN8(io_msInfo_3_valid,0,0);
        VL_IN8(io_msInfo_3_bits_set,6,0);
        VL_IN8(io_msInfo_3_bits_reqTag,7,0);
        VL_IN8(io_msInfo_3_bits_releaseNotSent,0,0);
        VL_IN8(io_msInfo_4_valid,0,0);
        VL_IN8(io_msInfo_4_bits_set,6,0);
        VL_IN8(io_msInfo_4_bits_reqTag,7,0);
        VL_IN8(io_msInfo_4_bits_releaseNotSent,0,0);
        VL_IN8(io_msInfo_5_valid,0,0);
        VL_IN8(io_msInfo_5_bits_set,6,0);
        VL_IN8(io_msInfo_5_bits_reqTag,7,0);
        VL_IN8(io_msInfo_5_bits_releaseNotSent,0,0);
        VL_IN8(io_msInfo_6_valid,0,0);
        VL_IN8(io_msInfo_6_bits_set,6,0);
        VL_IN8(io_msInfo_6_bits_reqTag,7,0);
        VL_IN8(io_msInfo_6_bits_releaseNotSent,0,0);
        VL_IN8(io_msInfo_7_valid,0,0);
        VL_IN8(io_msInfo_7_bits_set,6,0);
        VL_IN8(io_msInfo_7_bits_reqTag,7,0);
    };
    struct {
        VL_IN8(io_msInfo_7_bits_releaseNotSent,0,0);
        VL_IN8(io_msInfo_8_valid,0,0);
        VL_IN8(io_msInfo_8_bits_set,6,0);
        VL_IN8(io_msInfo_8_bits_reqTag,7,0);
        VL_IN8(io_msInfo_8_bits_releaseNotSent,0,0);
        VL_IN8(io_msInfo_9_valid,0,0);
        VL_IN8(io_msInfo_9_bits_set,6,0);
        VL_IN8(io_msInfo_9_bits_reqTag,7,0);
        VL_IN8(io_msInfo_9_bits_releaseNotSent,0,0);
        VL_IN8(io_msInfo_10_valid,0,0);
        VL_IN8(io_msInfo_10_bits_set,6,0);
        VL_IN8(io_msInfo_10_bits_reqTag,7,0);
        VL_IN8(io_msInfo_10_bits_releaseNotSent,0,0);
        VL_IN8(io_msInfo_11_valid,0,0);
        VL_IN8(io_msInfo_11_bits_set,6,0);
        VL_IN8(io_msInfo_11_bits_reqTag,7,0);
        VL_IN8(io_msInfo_11_bits_releaseNotSent,0,0);
        VL_IN8(io_msInfo_12_valid,0,0);
        VL_IN8(io_msInfo_12_bits_set,6,0);
        VL_IN8(io_msInfo_12_bits_reqTag,7,0);
        VL_IN8(io_msInfo_12_bits_releaseNotSent,0,0);
        VL_IN8(io_msInfo_13_valid,0,0);
        VL_IN8(io_msInfo_13_bits_set,6,0);
        VL_IN8(io_msInfo_13_bits_reqTag,7,0);
        VL_IN8(io_msInfo_13_bits_releaseNotSent,0,0);
        VL_IN8(io_msInfo_14_valid,0,0);
        VL_IN8(io_msInfo_14_bits_set,6,0);
        VL_IN8(io_msInfo_14_bits_reqTag,7,0);
        VL_IN8(io_msInfo_14_bits_releaseNotSent,0,0);
        VL_IN8(io_msInfo_15_valid,0,0);
        VL_IN8(io_msInfo_15_bits_set,6,0);
        VL_IN8(io_msInfo_15_bits_reqTag,7,0);
        VL_IN8(io_msInfo_15_bits_releaseNotSent,0,0);
        CData/*0:0*/ __PVT__taskArb_io_out_valid;
        CData/*1:0*/ __PVT__taskArb_io_chosen;
        CData/*0:0*/ __PVT___T;
        CData/*0:0*/ __PVT__beats1;
        CData/*0:0*/ __PVT__counter;
        CData/*0:0*/ __PVT__counter1;
        CData/*0:0*/ __PVT__beat;
        CData/*7:0*/ __PVT__dataBuf_0_0;
        CData/*7:0*/ __PVT__dataBuf_0_1;
        CData/*7:0*/ __PVT__dataBuf_1_0;
        CData/*7:0*/ __PVT__dataBuf_1_1;
        CData/*7:0*/ __PVT__dataBuf_2_0;
        CData/*7:0*/ __PVT__dataBuf_2_1;
        CData/*7:0*/ __PVT__dataBuf_3_0;
        CData/*7:0*/ __PVT__dataBuf_3_1;
        CData/*0:0*/ __PVT__beatValids_0_0;
        CData/*0:0*/ __PVT__beatValids_0_1;
        CData/*0:0*/ __PVT__beatValids_1_0;
        CData/*0:0*/ __PVT__beatValids_1_1;
        CData/*0:0*/ __PVT__beatValids_2_0;
        CData/*0:0*/ __PVT__beatValids_2_1;
        CData/*0:0*/ __PVT__beatValids_3_0;
        CData/*0:0*/ __PVT__beatValids_3_1;
        CData/*6:0*/ __PVT__taskBuf_0_set;
        CData/*7:0*/ __PVT__taskBuf_0_tag;
        CData/*0:0*/ __PVT__taskBuf_0_off;
        CData/*2:0*/ __PVT__taskBuf_0_opcode;
        CData/*2:0*/ __PVT__taskBuf_0_param;
        CData/*4:0*/ __PVT__taskBuf_0_sourceId;
        CData/*1:0*/ __PVT__taskBuf_0_bufIdx;
        CData/*6:0*/ __PVT__taskBuf_1_set;
    };
    struct {
        CData/*7:0*/ __PVT__taskBuf_1_tag;
        CData/*0:0*/ __PVT__taskBuf_1_off;
        CData/*2:0*/ __PVT__taskBuf_1_opcode;
        CData/*2:0*/ __PVT__taskBuf_1_param;
        CData/*4:0*/ __PVT__taskBuf_1_sourceId;
        CData/*1:0*/ __PVT__taskBuf_1_bufIdx;
        CData/*6:0*/ __PVT__taskBuf_2_set;
        CData/*7:0*/ __PVT__taskBuf_2_tag;
        CData/*0:0*/ __PVT__taskBuf_2_off;
        CData/*2:0*/ __PVT__taskBuf_2_opcode;
        CData/*2:0*/ __PVT__taskBuf_2_param;
        CData/*4:0*/ __PVT__taskBuf_2_sourceId;
        CData/*1:0*/ __PVT__taskBuf_2_bufIdx;
        CData/*6:0*/ __PVT__taskBuf_3_set;
        CData/*7:0*/ __PVT__taskBuf_3_tag;
        CData/*0:0*/ __PVT__taskBuf_3_off;
        CData/*2:0*/ __PVT__taskBuf_3_opcode;
        CData/*2:0*/ __PVT__taskBuf_3_param;
        CData/*4:0*/ __PVT__taskBuf_3_sourceId;
        CData/*1:0*/ __PVT__taskBuf_3_bufIdx;
        CData/*0:0*/ __PVT__taskValids_0;
        CData/*0:0*/ __PVT__taskValids_1;
        CData/*0:0*/ __PVT__taskValids_2;
        CData/*0:0*/ __PVT__taskValids_3;
        CData/*3:0*/ __PVT__bufValids;
        CData/*1:0*/ __PVT___nextPtr_T_6;
        CData/*1:0*/ __PVT__nextPtr;
        CData/*0:0*/ __PVT___nextPtrReg_T_1;
        CData/*1:0*/ __PVT__nextPtrReg;
        CData/*0:0*/ __PVT___GEN_74;
        CData/*0:0*/ __PVT___GEN_75;
        CData/*0:0*/ __PVT___GEN_76;
        CData/*0:0*/ __PVT___GEN_77;
        CData/*0:0*/ __PVT___GEN_78;
        CData/*0:0*/ __PVT___GEN_79;
        CData/*0:0*/ __PVT___GEN_80;
        CData/*0:0*/ __PVT___GEN_81;
        CData/*0:0*/ __PVT___GEN_82;
        CData/*0:0*/ __PVT___GEN_83;
        CData/*0:0*/ __PVT___GEN_84;
        CData/*0:0*/ __PVT___GEN_85;
        CData/*0:0*/ __PVT___GEN_202;
        CData/*0:0*/ __PVT___GEN_203;
        CData/*0:0*/ __PVT___GEN_204;
        CData/*0:0*/ __PVT___GEN_205;
        CData/*0:0*/ __PVT___T_22;
        CData/*0:0*/ __PVT___T_23;
        CData/*0:0*/ __PVT___T_24;
        CData/*0:0*/ __PVT___T_25;
        CData/*0:0*/ __PVT___newdataMask_T_44;
        CData/*0:0*/ __PVT___newdataMask_T_49;
        CData/*0:0*/ __PVT___newdataMask_T_54;
        CData/*0:0*/ __PVT___newdataMask_T_59;
        CData/*0:0*/ __PVT___newdataMask_T_64;
        CData/*0:0*/ __PVT___newdataMask_T_69;
        CData/*0:0*/ __PVT___newdataMask_T_74;
        CData/*0:0*/ __PVT___newdataMask_T_79;
        CData/*7:0*/ __PVT__newdataMask_lo;
        CData/*0:0*/ __PVT__io_refillBufWrite_valid_REG;
        CData/*7:0*/ __PVT__io_refillBufWrite_id_hi;
        CData/*7:0*/ __PVT___io_refillBufWrite_id_T_1;
        CData/*3:0*/ __PVT___io_refillBufWrite_id_T_3;
        CData/*3:0*/ __PVT__io_refillBufWrite_id_REG;
        CData/*1:0*/ __PVT__io_refillBufWrite_data_data_REG;
    };
    struct {
        CData/*1:0*/ __PVT__taskArb__DOT__lastGrant;
        CData/*0:0*/ __PVT__taskArb__DOT__validMask_1;
        CData/*0:0*/ __PVT__taskArb__DOT__validMask_2;
        CData/*0:0*/ __PVT__taskArb__DOT__validMask_3;
        CData/*0:0*/ taskArb__DOT____VdfgRegularize_he969bb4c_0_2;
        CData/*0:0*/ taskArb__DOT____VdfgRegularize_he969bb4c_0_3;
        CData/*0:0*/ taskArb__DOT____VdfgRegularize_he969bb4c_0_4;
        CData/*0:0*/ taskArb__DOT____VdfgRegularize_he969bb4c_0_5;
        VL_IN16(io_c_bits_address,15,0);
        VL_OUT16(io_releaseBufWrite_data_data,15,0);
        VL_OUT16(io_refillBufWrite_data_data,15,0);
    };

    // INTERNAL VARIABLES
    VTestTop_L2L3L2__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTestTop_L2L3L2_SinkC(VTestTop_L2L3L2__Syms* symsp, const char* v__name);
    ~VTestTop_L2L3L2_SinkC();
    VL_UNCOPYABLE(VTestTop_L2L3L2_SinkC);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
