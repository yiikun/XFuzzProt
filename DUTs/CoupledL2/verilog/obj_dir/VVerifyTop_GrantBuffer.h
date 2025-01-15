// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVerifyTop.h for the primary calling header

#ifndef VERILATED_VVERIFYTOP_GRANTBUFFER_H_
#define VERILATED_VVERIFYTOP_GRANTBUFFER_H_  // guard

#include "verilated.h"


class VVerifyTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VVerifyTop_GrantBuffer final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(__PVT__io_d_task_ready,0,0);
        VL_IN8(io_d_task_valid,0,0);
        VL_IN8(io_d_task_bits_task_set,0,0);
        VL_IN8(io_d_task_bits_task_tag,2,0);
        VL_IN8(io_d_task_bits_task_opcode,2,0);
        VL_IN8(io_d_task_bits_task_param,2,0);
        VL_IN8(io_d_task_bits_task_sourceId,4,0);
        VL_IN8(io_d_task_bits_task_fromL2pft,0,0);
        VL_IN8(io_d_task_bits_task_mergeA,0,0);
        VL_IN8(io_d_task_bits_task_aMergeTask_opcode,2,0);
        VL_IN8(io_d_task_bits_task_aMergeTask_param,2,0);
        VL_IN8(io_d_task_bits_task_aMergeTask_sourceId,4,0);
        VL_IN8(io_d_ready,0,0);
        VL_OUT8(io_d_valid,0,0);
        VL_OUT8(io_d_bits_opcode,2,0);
        VL_OUT8(io_d_bits_param,1,0);
        VL_OUT8(io_d_bits_source,4,0);
        VL_OUT8(io_d_bits_sink,7,0);
        VL_OUT8(io_d_bits_data,7,0);
        VL_OUT8(__PVT__io_e_ready,0,0);
        VL_IN8(io_e_valid,0,0);
        VL_IN8(io_e_bits_sink,7,0);
        VL_IN8(io_fromReqArb_status_s1_tags_1,2,0);
        VL_IN8(io_fromReqArb_status_s1_sets_1,0,0);
        VL_IN8(io_pipeStatusVec_1_valid,0,0);
        VL_IN8(io_pipeStatusVec_1_bits_channel,2,0);
        VL_IN8(io_pipeStatusVec_2_valid,0,0);
        VL_IN8(io_pipeStatusVec_2_bits_channel,2,0);
        VL_IN8(io_pipeStatusVec_3_valid,0,0);
        VL_IN8(io_pipeStatusVec_3_bits_channel,2,0);
        VL_IN8(io_pipeStatusVec_4_valid,0,0);
        VL_IN8(io_pipeStatusVec_4_bits_channel,2,0);
        VL_OUT8(io_toReqArb_blockSinkReqEntrance_blockA_s1,0,0);
        VL_OUT8(io_toReqArb_blockSinkReqEntrance_blockB_s1,0,0);
        VL_OUT8(io_toReqArb_blockSinkReqEntrance_blockC_s1,0,0);
        VL_OUT8(io_toReqArb_blockMSHRReqEntrance,0,0);
        VL_IN8(io_prefetchResp_ready,0,0);
        VL_OUT8(io_prefetchResp_valid,0,0);
        VL_OUT8(io_grantStatus_0_valid,0,0);
        VL_OUT8(io_grantStatus_0_set,0,0);
        VL_OUT8(io_grantStatus_0_tag,2,0);
        VL_OUT8(io_grantStatus_1_valid,0,0);
        VL_OUT8(io_grantStatus_1_set,0,0);
        VL_OUT8(io_grantStatus_1_tag,2,0);
        VL_OUT8(io_grantStatus_2_valid,0,0);
        VL_OUT8(io_grantStatus_2_set,0,0);
        VL_OUT8(io_grantStatus_2_tag,2,0);
        VL_OUT8(io_grantStatus_3_valid,0,0);
        VL_OUT8(io_grantStatus_3_set,0,0);
        VL_OUT8(io_grantStatus_3_tag,2,0);
        CData/*0:0*/ __PVT__helper_clean;
        CData/*0:0*/ __PVT__helper_dump;
        CData/*0:0*/ __PVT__helper_1_clean;
        CData/*0:0*/ __PVT__helper_1_dump;
        CData/*0:0*/ __PVT__helper_2_clean;
        CData/*0:0*/ __PVT__helper_2_dump;
        CData/*0:0*/ __PVT__helper_3_clean;
        CData/*0:0*/ __PVT__helper_3_dump;
        CData/*0:0*/ __PVT__pftRespQueue_io_enq_ready;
        CData/*0:0*/ __PVT__helper_4_clean;
        CData/*0:0*/ __PVT__helper_4_dump;
        CData/*0:0*/ __PVT__helper_5_clean;
    };
    struct {
        CData/*0:0*/ __PVT__helper_5_dump;
        CData/*0:0*/ __PVT__helper_6_clean;
        CData/*0:0*/ __PVT__helper_6_dump;
        CData/*0:0*/ __PVT__helper_7_clean;
        CData/*0:0*/ __PVT__helper_7_dump;
        CData/*0:0*/ __PVT__helper_8_clean;
        CData/*0:0*/ __PVT__helper_8_dump;
        CData/*0:0*/ __PVT__helper_9_clean;
        CData/*0:0*/ __PVT__helper_9_dump;
        CData/*0:0*/ __PVT__helper_10_clean;
        CData/*0:0*/ __PVT__helper_10_dump;
        CData/*0:0*/ __PVT__helper_11_clean;
        CData/*0:0*/ __PVT__helper_11_dump;
        CData/*0:0*/ __PVT__helper_12_clean;
        CData/*0:0*/ __PVT__helper_12_dump;
        CData/*0:0*/ __PVT__inflightGrant_0_valid;
        CData/*0:0*/ __PVT__inflightGrant_0_bits_set;
        CData/*2:0*/ __PVT__inflightGrant_0_bits_tag;
        CData/*0:0*/ __PVT__inflightGrant_1_valid;
        CData/*0:0*/ __PVT__inflightGrant_1_bits_set;
        CData/*2:0*/ __PVT__inflightGrant_1_bits_tag;
        CData/*0:0*/ __PVT__inflightGrant_2_valid;
        CData/*0:0*/ __PVT__inflightGrant_2_bits_set;
        CData/*2:0*/ __PVT__inflightGrant_2_bits_tag;
        CData/*0:0*/ __PVT__inflightGrant_3_valid;
        CData/*0:0*/ __PVT__inflightGrant_3_bits_set;
        CData/*2:0*/ __PVT__inflightGrant_3_bits_tag;
        CData/*1:0*/ __PVT__inflight_insertIdx;
        CData/*0:0*/ __PVT__full;
        CData/*0:0*/ __PVT___T_30;
        CData/*0:0*/ __PVT___GEN_66;
        CData/*0:0*/ __PVT___GEN_67;
        CData/*0:0*/ __PVT___GEN_68;
        CData/*0:0*/ __PVT___GEN_69;
        CData/*2:0*/ __PVT___noSpaceForSinkReq_T_36;
        CData/*2:0*/ __PVT___noSpaceWaitSinkEForSinkReq_T_30;
        CData/*3:0*/ __PVT___noSpaceForSinkPft_T_24;
        CData/*0:0*/ __PVT__REG;
        CData/*0:0*/ __PVT__enable_REG;
        CData/*0:0*/ __PVT__enable;
        CData/*0:0*/ __PVT__REG_1;
        CData/*0:0*/ __PVT__enable_REG_1;
        CData/*0:0*/ __PVT__enable_1;
        CData/*0:0*/ __PVT__REG_2;
        CData/*0:0*/ __PVT__enable_REG_2;
        CData/*0:0*/ __PVT__enable_2;
        CData/*0:0*/ __PVT__REG_3;
        CData/*0:0*/ __PVT__enable_REG_3;
        CData/*0:0*/ __PVT__enable_3;
        CData/*0:0*/ __PVT__grantQueue__DOT__ram_task_opcode_MPORT_en;
        CData/*1:0*/ __PVT__grantQueue__DOT__enq_ptr_value;
        CData/*1:0*/ __PVT__grantQueue__DOT__deq_ptr_value;
        CData/*0:0*/ __PVT__grantQueue__DOT__maybe_full;
        CData/*0:0*/ __PVT__grantQueue__DOT__ptr_match;
        CData/*1:0*/ __PVT__grantQueue__DOT___value_T_1;
        CData/*3:0*/ __PVT__pftRespQueue__DOT__enq_ptr_value;
        CData/*3:0*/ __PVT__pftRespQueue__DOT__deq_ptr_value;
        CData/*0:0*/ __PVT__pftRespQueue__DOT__maybe_full;
        CData/*0:0*/ __PVT__pftRespQueue__DOT__ptr_match;
        CData/*0:0*/ __PVT__pftRespQueue__DOT__empty;
        CData/*0:0*/ __PVT__pftRespQueue__DOT___do_enq_T;
        CData/*0:0*/ __PVT__pftRespQueue__DOT__wrap;
        CData/*3:0*/ __PVT__pftRespQueue__DOT___value_T_1;
        CData/*0:0*/ __PVT__pftRespQueue__DOT__do_enq;
    };
    struct {
        CData/*0:0*/ __PVT__pftRespQueue__DOT__wrap_1;
        CData/*3:0*/ __PVT__pftRespQueue__DOT___value_T_3;
        CData/*0:0*/ __PVT__pftRespQueue__DOT__do_deq;
        CData/*3:0*/ __PVT__pftRespQueue__DOT__ptr_diff;
        VL_IN16(io_d_task_bits_data_data,15,0);
        QData/*63:0*/ __PVT__helper_timer;
        QData/*63:0*/ __PVT__helper_1_timer;
        QData/*63:0*/ __PVT__helper_2_timer;
        QData/*63:0*/ __PVT__helper_3_timer;
        QData/*63:0*/ __PVT__helper_4_timer;
        QData/*63:0*/ __PVT__helper_5_timer;
        QData/*63:0*/ __PVT__helper_6_timer;
        QData/*63:0*/ __PVT__helper_7_timer;
        QData/*63:0*/ __PVT__helper_8_timer;
        QData/*63:0*/ __PVT__helper_9_timer;
        QData/*63:0*/ __PVT__helper_10_timer;
        QData/*63:0*/ __PVT__helper_11_timer;
        QData/*63:0*/ __PVT__helper_12_timer;
        QData/*63:0*/ __PVT__counter;
        QData/*63:0*/ __PVT__next_counter;
        QData/*63:0*/ __PVT__counter_1;
        QData/*63:0*/ __PVT__counter_2;
        QData/*63:0*/ __PVT__next_counter_2;
        QData/*63:0*/ __PVT__counter_3;
        QData/*63:0*/ __PVT__timers_0;
        QData/*63:0*/ __PVT__timers_1;
        QData/*63:0*/ __PVT__timers_2;
        QData/*63:0*/ __PVT__timers_3;
        QData/*63:0*/ __PVT___timers_0_T_1;
        QData/*63:0*/ __PVT__counter_4;
        QData/*63:0*/ __PVT___counter_T_5;
        QData/*63:0*/ __PVT__counter_5;
        QData/*63:0*/ __PVT___counter_T_7;
        QData/*63:0*/ __PVT__counter_6;
        QData/*63:0*/ __PVT___counter_T_9;
        QData/*63:0*/ __PVT__counter_7;
        QData/*63:0*/ __PVT___counter_T_11;
        QData/*63:0*/ __PVT__counter_8;
        QData/*63:0*/ __PVT___counter_T_13;
        QData/*63:0*/ __PVT__counter_9;
        QData/*63:0*/ __PVT___counter_T_15;
        QData/*63:0*/ __PVT__counter_10;
        QData/*63:0*/ __PVT___counter_T_17;
        QData/*63:0*/ __PVT__counter_11;
        QData/*63:0*/ __PVT___counter_T_19;
        QData/*63:0*/ __PVT__counter_12;
        QData/*63:0*/ __PVT___counter_T_21;
        QData/*63:0*/ __PVT__counter_13;
        QData/*63:0*/ __PVT___counter_T_23;
        QData/*63:0*/ __PVT__counter_14;
        QData/*63:0*/ __PVT___counter_T_25;
        QData/*63:0*/ __PVT__counter_15;
        QData/*63:0*/ __PVT___counter_T_27;
        QData/*63:0*/ __PVT__max;
        QData/*63:0*/ __PVT__next_max;
        QData/*63:0*/ __PVT___timers_1_T_1;
        QData/*63:0*/ __PVT__counter_16;
        QData/*63:0*/ __PVT___counter_T_29;
        QData/*63:0*/ __PVT__counter_17;
        QData/*63:0*/ __PVT___counter_T_31;
        QData/*63:0*/ __PVT__counter_18;
        QData/*63:0*/ __PVT___counter_T_33;
        QData/*63:0*/ __PVT__counter_19;
        QData/*63:0*/ __PVT___counter_T_35;
    };
    struct {
        QData/*63:0*/ __PVT__counter_20;
        QData/*63:0*/ __PVT___counter_T_37;
        QData/*63:0*/ __PVT__counter_21;
        QData/*63:0*/ __PVT___counter_T_39;
        QData/*63:0*/ __PVT__counter_22;
        QData/*63:0*/ __PVT___counter_T_41;
        QData/*63:0*/ __PVT__counter_23;
        QData/*63:0*/ __PVT___counter_T_43;
        QData/*63:0*/ __PVT__counter_24;
        QData/*63:0*/ __PVT___counter_T_45;
        QData/*63:0*/ __PVT__counter_25;
        QData/*63:0*/ __PVT___counter_T_47;
        QData/*63:0*/ __PVT__counter_26;
        QData/*63:0*/ __PVT___counter_T_49;
        QData/*63:0*/ __PVT__counter_27;
        QData/*63:0*/ __PVT___counter_T_51;
        QData/*63:0*/ __PVT__max_1;
        QData/*63:0*/ __PVT__next_max_1;
        QData/*63:0*/ __PVT___timers_2_T_1;
        QData/*63:0*/ __PVT__counter_28;
        QData/*63:0*/ __PVT___counter_T_53;
        QData/*63:0*/ __PVT__counter_29;
        QData/*63:0*/ __PVT___counter_T_55;
        QData/*63:0*/ __PVT__counter_30;
        QData/*63:0*/ __PVT___counter_T_57;
        QData/*63:0*/ __PVT__counter_31;
        QData/*63:0*/ __PVT___counter_T_59;
        QData/*63:0*/ __PVT__counter_32;
        QData/*63:0*/ __PVT___counter_T_61;
        QData/*63:0*/ __PVT__counter_33;
        QData/*63:0*/ __PVT___counter_T_63;
        QData/*63:0*/ __PVT__counter_34;
        QData/*63:0*/ __PVT___counter_T_65;
        QData/*63:0*/ __PVT__counter_35;
        QData/*63:0*/ __PVT___counter_T_67;
        QData/*63:0*/ __PVT__counter_36;
        QData/*63:0*/ __PVT___counter_T_69;
        QData/*63:0*/ __PVT__counter_37;
        QData/*63:0*/ __PVT___counter_T_71;
        QData/*63:0*/ __PVT__counter_38;
        QData/*63:0*/ __PVT___counter_T_73;
        QData/*63:0*/ __PVT__counter_39;
        QData/*63:0*/ __PVT___counter_T_75;
        QData/*63:0*/ __PVT__max_2;
        QData/*63:0*/ __PVT__next_max_2;
        QData/*63:0*/ __PVT___timers_3_T_1;
        QData/*63:0*/ __PVT__counter_40;
        QData/*63:0*/ __PVT___counter_T_77;
        QData/*63:0*/ __PVT__counter_41;
        QData/*63:0*/ __PVT___counter_T_79;
        QData/*63:0*/ __PVT__counter_42;
        QData/*63:0*/ __PVT___counter_T_81;
        QData/*63:0*/ __PVT__counter_43;
        QData/*63:0*/ __PVT___counter_T_83;
        QData/*63:0*/ __PVT__counter_44;
        QData/*63:0*/ __PVT___counter_T_85;
        QData/*63:0*/ __PVT__counter_45;
        QData/*63:0*/ __PVT___counter_T_87;
        QData/*63:0*/ __PVT__counter_46;
        QData/*63:0*/ __PVT___counter_T_89;
        QData/*63:0*/ __PVT__counter_47;
        QData/*63:0*/ __PVT___counter_T_91;
        QData/*63:0*/ __PVT__counter_48;
        QData/*63:0*/ __PVT___counter_T_93;
    };
    struct {
        QData/*63:0*/ __PVT__counter_49;
        QData/*63:0*/ __PVT___counter_T_95;
        QData/*63:0*/ __PVT__counter_50;
        QData/*63:0*/ __PVT___counter_T_97;
        QData/*63:0*/ __PVT__counter_51;
        QData/*63:0*/ __PVT___counter_T_99;
        QData/*63:0*/ __PVT__max_3;
        QData/*63:0*/ __PVT__next_max_3;
        QData/*63:0*/ __PVT__counter_52;
        QData/*63:0*/ __PVT__next_counter_4;
    };

    // INTERNAL VARIABLES
    VVerifyTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VVerifyTop_GrantBuffer(VVerifyTop__Syms* symsp, const char* v__name);
    ~VVerifyTop_GrantBuffer();
    VL_UNCOPYABLE(VVerifyTop_GrantBuffer);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
