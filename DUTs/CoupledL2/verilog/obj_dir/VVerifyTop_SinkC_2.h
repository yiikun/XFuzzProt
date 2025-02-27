// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVerifyTop.h for the primary calling header

#ifndef VERILATED_VVERIFYTOP_SINKC_2_H_
#define VERILATED_VVERIFYTOP_SINKC_2_H_  // guard

#include "verilated.h"


class VVerifyTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VVerifyTop_SinkC_2 final : public VerilatedModule {
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
        VL_IN8(io_c_bits_source,7,0);
        VL_IN8(io_c_bits_address,4,0);
        VL_IN8(io_c_bits_data,7,0);
        VL_IN8(io_task_ready,0,0);
        VL_OUT8(io_task_valid,0,0);
        VL_OUT8(io_task_bits_channel,2,0);
        VL_OUT8(io_task_bits_set,1,0);
        VL_OUT8(io_task_bits_tag,1,0);
        VL_OUT8(io_task_bits_off,0,0);
        VL_OUT8(io_task_bits_opcode,2,0);
        VL_OUT8(io_task_bits_param,2,0);
        VL_OUT8(io_task_bits_size,0,0);
        VL_OUT8(io_task_bits_sourceId,7,0);
        VL_OUT8(io_task_bits_bufIdx,1,0);
        VL_OUT8(io_task_bits_wayMask,1,0);
        VL_OUT8(io_resp_valid,0,0);
        VL_OUT8(io_resp_set,1,0);
        VL_OUT8(io_resp_tag,1,0);
        VL_OUT8(io_resp_respInfo_opcode,2,0);
        VL_OUT8(io_resp_respInfo_param,2,0);
        VL_OUT8(io_resp_respInfo_last,0,0);
        VL_OUT8(io_releaseBufWrite_valid,0,0);
        VL_OUT8(io_bufResp_data_0,7,0);
        VL_OUT8(io_bufResp_data_1,7,0);
        VL_OUT8(io_refillBufWrite_valid,0,0);
        VL_OUT8(io_refillBufWrite_bits_id,7,0);
        VL_IN8(io_msInfo_0_valid,0,0);
        VL_IN8(io_msInfo_0_bits_set,1,0);
        VL_IN8(io_msInfo_0_bits_reqTag,1,0);
        VL_IN8(io_msInfo_0_bits_blockRefill,0,0);
        VL_IN8(io_msInfo_1_valid,0,0);
        VL_IN8(io_msInfo_1_bits_set,1,0);
        VL_IN8(io_msInfo_1_bits_reqTag,1,0);
        VL_IN8(io_msInfo_1_bits_blockRefill,0,0);
        VL_IN8(io_msInfo_2_valid,0,0);
        VL_IN8(io_msInfo_2_bits_set,1,0);
        VL_IN8(io_msInfo_2_bits_reqTag,1,0);
        VL_IN8(io_msInfo_2_bits_blockRefill,0,0);
        VL_IN8(io_msInfo_3_valid,0,0);
        VL_IN8(io_msInfo_3_bits_set,1,0);
        VL_IN8(io_msInfo_3_bits_reqTag,1,0);
        VL_IN8(io_msInfo_3_bits_blockRefill,0,0);
        CData/*1:0*/ __PVT__taskArb_io_chosen;
        CData/*0:0*/ __PVT__helper_clean;
        CData/*0:0*/ __PVT__helper_dump;
        CData/*0:0*/ __PVT__helper_1_clean;
        CData/*0:0*/ __PVT__helper_1_dump;
        CData/*0:0*/ __PVT__helper_2_clean;
        CData/*0:0*/ __PVT__helper_2_dump;
        CData/*0:0*/ __PVT__helper_3_clean;
        CData/*0:0*/ __PVT__helper_3_dump;
        CData/*0:0*/ __PVT__helper_4_clean;
        CData/*0:0*/ __PVT__helper_4_dump;
        CData/*0:0*/ __PVT___T;
        CData/*0:0*/ __PVT__beats1;
        CData/*0:0*/ __PVT__counter;
        CData/*0:0*/ __PVT__counter1;
    };
    struct {
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
        CData/*2:0*/ __PVT__taskBuf_0_channel;
        CData/*1:0*/ __PVT__taskBuf_0_set;
        CData/*1:0*/ __PVT__taskBuf_0_tag;
        CData/*0:0*/ __PVT__taskBuf_0_off;
        CData/*2:0*/ __PVT__taskBuf_0_opcode;
        CData/*2:0*/ __PVT__taskBuf_0_param;
        CData/*7:0*/ __PVT__taskBuf_0_sourceId;
        CData/*1:0*/ __PVT__taskBuf_0_bufIdx;
        CData/*2:0*/ __PVT__taskBuf_1_channel;
        CData/*1:0*/ __PVT__taskBuf_1_set;
        CData/*1:0*/ __PVT__taskBuf_1_tag;
        CData/*0:0*/ __PVT__taskBuf_1_off;
        CData/*2:0*/ __PVT__taskBuf_1_opcode;
        CData/*2:0*/ __PVT__taskBuf_1_param;
        CData/*7:0*/ __PVT__taskBuf_1_sourceId;
        CData/*1:0*/ __PVT__taskBuf_1_bufIdx;
        CData/*2:0*/ __PVT__taskBuf_2_channel;
        CData/*1:0*/ __PVT__taskBuf_2_set;
        CData/*1:0*/ __PVT__taskBuf_2_tag;
        CData/*0:0*/ __PVT__taskBuf_2_off;
        CData/*2:0*/ __PVT__taskBuf_2_opcode;
        CData/*2:0*/ __PVT__taskBuf_2_param;
        CData/*7:0*/ __PVT__taskBuf_2_sourceId;
        CData/*1:0*/ __PVT__taskBuf_2_bufIdx;
        CData/*2:0*/ __PVT__taskBuf_3_channel;
        CData/*1:0*/ __PVT__taskBuf_3_set;
        CData/*1:0*/ __PVT__taskBuf_3_tag;
        CData/*0:0*/ __PVT__taskBuf_3_off;
        CData/*2:0*/ __PVT__taskBuf_3_opcode;
        CData/*2:0*/ __PVT__taskBuf_3_param;
        CData/*7:0*/ __PVT__taskBuf_3_sourceId;
        CData/*1:0*/ __PVT__taskBuf_3_bufIdx;
        CData/*0:0*/ __PVT__taskValids_0;
        CData/*0:0*/ __PVT__taskValids_1;
        CData/*0:0*/ __PVT__taskValids_2;
        CData/*0:0*/ __PVT__taskValids_3;
        CData/*3:0*/ __PVT__bufValids;
        CData/*1:0*/ __PVT__nextPtr;
        CData/*0:0*/ __PVT___nextPtrReg_T_1;
        CData/*1:0*/ __PVT__nextPtrReg;
        CData/*7:0*/ __PVT___GEN_2;
        CData/*7:0*/ __PVT___GEN_3;
        CData/*7:0*/ __PVT___GEN_4;
        CData/*7:0*/ __PVT___GEN_5;
        CData/*7:0*/ __PVT___GEN_6;
        CData/*7:0*/ __PVT___GEN_7;
        CData/*7:0*/ __PVT___GEN_8;
        CData/*7:0*/ __PVT___GEN_9;
    };
    struct {
        CData/*7:0*/ __PVT___GEN_18;
        CData/*7:0*/ __PVT___GEN_19;
        CData/*7:0*/ __PVT___GEN_20;
        CData/*7:0*/ __PVT___GEN_21;
        CData/*7:0*/ __PVT___GEN_22;
        CData/*7:0*/ __PVT___GEN_23;
        CData/*7:0*/ __PVT___GEN_24;
        CData/*7:0*/ __PVT___GEN_25;
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
        CData/*1:0*/ __PVT___GEN_126;
        CData/*1:0*/ __PVT___GEN_127;
        CData/*1:0*/ __PVT___GEN_128;
        CData/*1:0*/ __PVT___GEN_129;
        CData/*0:0*/ __PVT___GEN_266;
        CData/*0:0*/ __PVT___GEN_267;
        CData/*0:0*/ __PVT___GEN_268;
        CData/*0:0*/ __PVT___GEN_269;
        CData/*1:0*/ __PVT___GEN_310;
        CData/*1:0*/ __PVT___GEN_311;
        CData/*1:0*/ __PVT___GEN_312;
        CData/*1:0*/ __PVT___GEN_313;
        CData/*0:0*/ __PVT___T_19;
        CData/*0:0*/ __PVT___T_20;
        CData/*0:0*/ __PVT___T_21;
        CData/*0:0*/ __PVT___T_22;
        CData/*0:0*/ __PVT___probeAckDataBuf_T_1;
        CData/*7:0*/ __PVT__probeAckDataBuf;
        CData/*0:0*/ __PVT___newdataMask_T_14;
        CData/*0:0*/ __PVT___newdataMask_T_19;
        CData/*0:0*/ __PVT__io_refillBufWrite_valid_REG;
        CData/*1:0*/ __PVT__io_refillBufWrite_bits_id_hi;
        CData/*1:0*/ __PVT__io_refillBufWrite_bits_id_lo;
        CData/*1:0*/ __PVT__io_refillBufWrite_bits_id_REG;
        CData/*1:0*/ __PVT__io_refillBufWrite_bits_data_data_REG;
        CData/*7:0*/ __PVT__r_0;
        CData/*7:0*/ __PVT__r_1;
        CData/*7:0*/ __PVT__REG___05F0;
        CData/*7:0*/ __PVT__REG___05F1;
        CData/*0:0*/ __PVT__REG_1;
        CData/*1:0*/ __PVT__REG_2;
        CData/*0:0*/ __PVT__stall;
        CData/*0:0*/ __PVT__taskArb__DOT___ctrl_validMask_grantMask_lastGrant_T;
        CData/*1:0*/ __PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant;
        CData/*0:0*/ __PVT__taskArb__DOT__ctrl_validMask_1;
        CData/*0:0*/ __PVT__taskArb__DOT__ctrl_validMask_2;
        CData/*0:0*/ __PVT__taskArb__DOT__ctrl_validMask_3;
        CData/*0:0*/ taskArb__DOT____VdfgRegularize_hc75b2cfb_0_2;
        CData/*0:0*/ taskArb__DOT____VdfgRegularize_hc75b2cfb_0_3;
        CData/*0:0*/ taskArb__DOT____VdfgRegularize_hc75b2cfb_0_4;
        CData/*0:0*/ taskArb__DOT____VdfgRegularize_hc75b2cfb_0_5;
        VL_OUT16(io_releaseBufWrite_bits_data_data,15,0);
        VL_OUT16(io_refillBufWrite_bits_data_data,15,0);
        QData/*63:0*/ __PVT__helper_timer;
    };
    struct {
        QData/*63:0*/ __PVT__helper_1_timer;
        QData/*63:0*/ __PVT__helper_2_timer;
        QData/*63:0*/ __PVT__helper_3_timer;
        QData/*63:0*/ __PVT__helper_4_timer;
        QData/*63:0*/ __PVT__counter_1;
        QData/*63:0*/ __PVT__next_counter;
        QData/*63:0*/ __PVT__counter_2;
        QData/*63:0*/ __PVT__next_counter_1;
        QData/*63:0*/ __PVT__counter_3;
        QData/*63:0*/ __PVT__next_counter_2;
        QData/*63:0*/ __PVT__counter_4;
        QData/*63:0*/ __PVT__next_counter_3;
        QData/*63:0*/ __PVT__counter_5;
        QData/*63:0*/ __PVT__next_counter_4;
    };

    // INTERNAL VARIABLES
    VVerifyTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VVerifyTop_SinkC_2(VVerifyTop__Syms* symsp, const char* v__name);
    ~VVerifyTop_SinkC_2();
    VL_UNCOPYABLE(VVerifyTop_SinkC_2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
