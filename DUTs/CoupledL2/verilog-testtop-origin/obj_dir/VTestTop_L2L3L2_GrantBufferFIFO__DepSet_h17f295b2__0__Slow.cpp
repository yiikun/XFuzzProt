// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2_GrantBufferFIFO.h"

VL_ATTR_COLD void VTestTop_L2L3L2_GrantBufferFIFO___ctor_var_reset(VTestTop_L2L3L2_GrantBufferFIFO* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_GrantBufferFIFO___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_d_task_ready = VL_RAND_RESET_I(1);
    vlSelf->io_d_task_valid = VL_RAND_RESET_I(1);
    vlSelf->io_d_task_bits_task_set = VL_RAND_RESET_I(7);
    vlSelf->io_d_task_bits_task_tag = VL_RAND_RESET_I(8);
    vlSelf->io_d_task_bits_task_opcode = VL_RAND_RESET_I(3);
    vlSelf->io_d_task_bits_task_param = VL_RAND_RESET_I(3);
    vlSelf->io_d_task_bits_task_sourceId = VL_RAND_RESET_I(5);
    vlSelf->io_d_task_bits_task_mshrId = VL_RAND_RESET_I(8);
    vlSelf->io_d_task_bits_data_data = VL_RAND_RESET_I(16);
    vlSelf->io_d_ready = VL_RAND_RESET_I(1);
    vlSelf->io_d_valid = VL_RAND_RESET_I(1);
    vlSelf->io_d_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->io_d_bits_param = VL_RAND_RESET_I(2);
    vlSelf->io_d_bits_size = VL_RAND_RESET_I(1);
    vlSelf->io_d_bits_source = VL_RAND_RESET_I(5);
    vlSelf->io_d_bits_sink = VL_RAND_RESET_I(8);
    vlSelf->io_d_bits_data = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_e_ready = VL_RAND_RESET_I(1);
    vlSelf->io_e_valid = VL_RAND_RESET_I(1);
    vlSelf->io_e_bits_sink = VL_RAND_RESET_I(8);
    vlSelf->io_e_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->io_e_resp_mshrId = VL_RAND_RESET_I(8);
    vlSelf->io_fromReqArb_status_s1_tags_1 = VL_RAND_RESET_I(8);
    vlSelf->io_fromReqArb_status_s1_sets_1 = VL_RAND_RESET_I(7);
    vlSelf->io_pipeStatusVec_0_valid = VL_RAND_RESET_I(1);
    vlSelf->io_pipeStatusVec_0_bits_channel = VL_RAND_RESET_I(3);
    vlSelf->io_pipeStatusVec_1_valid = VL_RAND_RESET_I(1);
    vlSelf->io_pipeStatusVec_1_bits_channel = VL_RAND_RESET_I(3);
    vlSelf->io_pipeStatusVec_2_valid = VL_RAND_RESET_I(1);
    vlSelf->io_pipeStatusVec_2_bits_channel = VL_RAND_RESET_I(3);
    vlSelf->io_pipeStatusVec_3_valid = VL_RAND_RESET_I(1);
    vlSelf->io_pipeStatusVec_3_bits_channel = VL_RAND_RESET_I(3);
    vlSelf->io_pipeStatusVec_4_valid = VL_RAND_RESET_I(1);
    vlSelf->io_pipeStatusVec_4_bits_channel = VL_RAND_RESET_I(3);
    vlSelf->io_toReqArb_blockSinkReqEntrance_blockA_s1 = VL_RAND_RESET_I(1);
    vlSelf->io_toReqArb_blockSinkReqEntrance_blockB_s1 = VL_RAND_RESET_I(1);
    vlSelf->io_toReqArb_blockSinkReqEntrance_blockC_s1 = VL_RAND_RESET_I(1);
    vlSelf->io_toReqArb_blockMSHRReqEntrance = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_0_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_0_set = VL_RAND_RESET_I(7);
    vlSelf->io_grantStatus_0_tag = VL_RAND_RESET_I(8);
    vlSelf->io_grantStatus_1_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_1_set = VL_RAND_RESET_I(7);
    vlSelf->io_grantStatus_1_tag = VL_RAND_RESET_I(8);
    vlSelf->io_grantStatus_2_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_2_set = VL_RAND_RESET_I(7);
    vlSelf->io_grantStatus_2_tag = VL_RAND_RESET_I(8);
    vlSelf->io_grantStatus_3_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_3_set = VL_RAND_RESET_I(7);
    vlSelf->io_grantStatus_3_tag = VL_RAND_RESET_I(8);
    vlSelf->io_grantStatus_4_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_4_set = VL_RAND_RESET_I(7);
    vlSelf->io_grantStatus_4_tag = VL_RAND_RESET_I(8);
    vlSelf->io_grantStatus_5_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_5_set = VL_RAND_RESET_I(7);
    vlSelf->io_grantStatus_5_tag = VL_RAND_RESET_I(8);
    vlSelf->io_grantStatus_6_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_6_set = VL_RAND_RESET_I(7);
    vlSelf->io_grantStatus_6_tag = VL_RAND_RESET_I(8);
    vlSelf->io_grantStatus_7_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_7_set = VL_RAND_RESET_I(7);
    vlSelf->io_grantStatus_7_tag = VL_RAND_RESET_I(8);
    vlSelf->io_grantStatus_8_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_8_set = VL_RAND_RESET_I(7);
    vlSelf->io_grantStatus_8_tag = VL_RAND_RESET_I(8);
    vlSelf->io_grantStatus_9_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_9_set = VL_RAND_RESET_I(7);
    vlSelf->io_grantStatus_9_tag = VL_RAND_RESET_I(8);
    vlSelf->io_grantStatus_10_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_10_set = VL_RAND_RESET_I(7);
    vlSelf->io_grantStatus_10_tag = VL_RAND_RESET_I(8);
    vlSelf->io_grantStatus_11_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_11_set = VL_RAND_RESET_I(7);
    vlSelf->io_grantStatus_11_tag = VL_RAND_RESET_I(8);
    vlSelf->io_grantStatus_12_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_12_set = VL_RAND_RESET_I(7);
    vlSelf->io_grantStatus_12_tag = VL_RAND_RESET_I(8);
    vlSelf->io_grantStatus_13_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_13_set = VL_RAND_RESET_I(7);
    vlSelf->io_grantStatus_13_tag = VL_RAND_RESET_I(8);
    vlSelf->io_grantStatus_14_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_14_set = VL_RAND_RESET_I(7);
    vlSelf->io_grantStatus_14_tag = VL_RAND_RESET_I(8);
    vlSelf->io_grantStatus_15_valid = VL_RAND_RESET_I(1);
    vlSelf->io_grantStatus_15_set = VL_RAND_RESET_I(7);
    vlSelf->io_grantStatus_15_tag = VL_RAND_RESET_I(8);
    vlSelf->__PVT__beat_valids_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_0_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_1_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_1_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_2_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_2_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_3_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_3_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_4_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_4_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_5_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_5_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_6_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_6_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_7_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_7_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_8_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_8_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_9_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_9_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_10_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_10_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_11_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_11_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_12_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_12_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_13_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_13_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_14_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_14_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_15_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beat_valids_15_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___block_valids_T_30 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__taskAll_0_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_0_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_0_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskAll_0_mshrId = VL_RAND_RESET_I(8);
    vlSelf->__PVT__taskAll_1_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_1_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_1_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskAll_1_mshrId = VL_RAND_RESET_I(8);
    vlSelf->__PVT__taskAll_2_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_2_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_2_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskAll_2_mshrId = VL_RAND_RESET_I(8);
    vlSelf->__PVT__taskAll_3_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_3_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_3_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskAll_3_mshrId = VL_RAND_RESET_I(8);
    vlSelf->__PVT__taskAll_4_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_4_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_4_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskAll_4_mshrId = VL_RAND_RESET_I(8);
    vlSelf->__PVT__taskAll_5_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_5_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_5_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskAll_5_mshrId = VL_RAND_RESET_I(8);
    vlSelf->__PVT__taskAll_6_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_6_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_6_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskAll_6_mshrId = VL_RAND_RESET_I(8);
    vlSelf->__PVT__taskAll_7_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_7_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_7_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskAll_7_mshrId = VL_RAND_RESET_I(8);
    vlSelf->__PVT__taskAll_8_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_8_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_8_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskAll_8_mshrId = VL_RAND_RESET_I(8);
    vlSelf->__PVT__taskAll_9_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_9_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_9_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskAll_9_mshrId = VL_RAND_RESET_I(8);
    vlSelf->__PVT__taskAll_10_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_10_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_10_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskAll_10_mshrId = VL_RAND_RESET_I(8);
    vlSelf->__PVT__taskAll_11_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_11_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_11_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskAll_11_mshrId = VL_RAND_RESET_I(8);
    vlSelf->__PVT__taskAll_12_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_12_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_12_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskAll_12_mshrId = VL_RAND_RESET_I(8);
    vlSelf->__PVT__taskAll_13_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_13_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_13_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskAll_13_mshrId = VL_RAND_RESET_I(8);
    vlSelf->__PVT__taskAll_14_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_14_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_14_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskAll_14_mshrId = VL_RAND_RESET_I(8);
    vlSelf->__PVT__taskAll_15_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_15_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskAll_15_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskAll_15_mshrId = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataAll_0_data = VL_RAND_RESET_I(16);
    vlSelf->__PVT__dataAll_1_data = VL_RAND_RESET_I(16);
    vlSelf->__PVT__dataAll_2_data = VL_RAND_RESET_I(16);
    vlSelf->__PVT__dataAll_3_data = VL_RAND_RESET_I(16);
    vlSelf->__PVT__dataAll_4_data = VL_RAND_RESET_I(16);
    vlSelf->__PVT__dataAll_5_data = VL_RAND_RESET_I(16);
    vlSelf->__PVT__dataAll_6_data = VL_RAND_RESET_I(16);
    vlSelf->__PVT__dataAll_7_data = VL_RAND_RESET_I(16);
    vlSelf->__PVT__dataAll_8_data = VL_RAND_RESET_I(16);
    vlSelf->__PVT__dataAll_9_data = VL_RAND_RESET_I(16);
    vlSelf->__PVT__dataAll_10_data = VL_RAND_RESET_I(16);
    vlSelf->__PVT__dataAll_11_data = VL_RAND_RESET_I(16);
    vlSelf->__PVT__dataAll_12_data = VL_RAND_RESET_I(16);
    vlSelf->__PVT__dataAll_13_data = VL_RAND_RESET_I(16);
    vlSelf->__PVT__dataAll_14_data = VL_RAND_RESET_I(16);
    vlSelf->__PVT__dataAll_15_data = VL_RAND_RESET_I(16);
    vlSelf->__PVT__inflight_grant_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inflight_grant_0_bits_set = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inflight_grant_0_bits_tag = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_0_bits_sink = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inflight_grant_1_bits_set = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inflight_grant_1_bits_tag = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_1_bits_sink = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inflight_grant_2_bits_set = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inflight_grant_2_bits_tag = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_2_bits_sink = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inflight_grant_3_bits_set = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inflight_grant_3_bits_tag = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_3_bits_sink = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_4_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inflight_grant_4_bits_set = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inflight_grant_4_bits_tag = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_4_bits_sink = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_5_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inflight_grant_5_bits_set = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inflight_grant_5_bits_tag = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_5_bits_sink = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_6_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inflight_grant_6_bits_set = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inflight_grant_6_bits_tag = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_6_bits_sink = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_7_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inflight_grant_7_bits_set = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inflight_grant_7_bits_tag = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_7_bits_sink = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_8_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inflight_grant_8_bits_set = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inflight_grant_8_bits_tag = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_8_bits_sink = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_9_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inflight_grant_9_bits_set = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inflight_grant_9_bits_tag = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_9_bits_sink = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_10_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inflight_grant_10_bits_set = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inflight_grant_10_bits_tag = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_10_bits_sink = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_11_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inflight_grant_11_bits_set = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inflight_grant_11_bits_tag = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_11_bits_sink = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_12_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inflight_grant_12_bits_set = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inflight_grant_12_bits_tag = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_12_bits_sink = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_13_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inflight_grant_13_bits_set = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inflight_grant_13_bits_tag = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_13_bits_sink = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_14_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inflight_grant_14_bits_set = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inflight_grant_14_bits_tag = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_14_bits_sink = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_15_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inflight_grant_15_bits_set = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inflight_grant_15_bits_tag = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inflight_grant_15_bits_sink = VL_RAND_RESET_I(8);
    vlSelf->__PVT___T_12 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__insertIdx = VL_RAND_RESET_I(4);
    vlSelf->__PVT___GEN_64 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_65 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_66 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_67 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_68 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_69 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_70 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_71 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_72 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_73 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_74 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_75 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_76 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_77 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_78 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_79 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bufIdx = VL_RAND_RESET_I(4);
    vlSelf->__PVT__timers_0 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__timers_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__timers_2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__timers_3 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__timers_4 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__timers_5 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__timers_6 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__timers_7 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__timers_8 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__timers_9 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__timers_10 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__timers_11 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__timers_12 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__timers_13 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__timers_14 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__timers_15 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___timers_0_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__REG = VL_RAND_RESET_I(1);
    vlSelf->__PVT___timers_1_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__REG_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___timers_2_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__REG_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___timers_3_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__REG_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___timers_4_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__REG_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___timers_5_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__REG_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___timers_6_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__REG_6 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___timers_7_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__REG_7 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___timers_8_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__REG_8 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___timers_9_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__REG_9 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___timers_10_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__REG_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___timers_11_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__REG_11 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___timers_12_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__REG_12 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___timers_13_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__REG_13 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___timers_14_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__REG_14 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___timers_15_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__REG_15 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__enqPtrExt_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__enqPtrExt_value = VL_RAND_RESET_I(4);
    vlSelf->__PVT__deqPtrExt_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__deqPtrExt_value = VL_RAND_RESET_I(4);
    vlSelf->__PVT__globalCounter = VL_RAND_RESET_I(5);
    vlSelf->__PVT__beat_counters_0 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__beat_counters_1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__beat_counters_2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__beat_counters_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__beat_counters_4 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__beat_counters_5 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__beat_counters_6 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__beat_counters_7 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__beat_counters_8 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__beat_counters_9 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__beat_counters_10 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__beat_counters_11 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__beat_counters_12 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__beat_counters_13 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__beat_counters_14 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__beat_counters_15 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___globalCounter_T_1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___globalCounter_T_4 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___T_790 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___beat_counters_0_T_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___beat_counters_1_T_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___beat_counters_2_T_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___beat_counters_3_T_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___beat_counters_4_T_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___beat_counters_5_T_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___beat_counters_6_T_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___beat_counters_7_T_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___beat_counters_8_T_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___beat_counters_9_T_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___beat_counters_10_T_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___beat_counters_11_T_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___beat_counters_12_T_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___beat_counters_13_T_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___beat_counters_14_T_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___beat_counters_15_T_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___enqPtrExt_new_ptr_T_2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT___GEN_1090 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1091 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1092 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1093 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1094 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1095 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1096 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1097 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1098 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1099 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1100 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1101 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1102 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1103 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1104 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1105 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1106 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1107 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1108 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1109 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1110 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1111 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1112 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1113 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1114 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1115 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1116 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1117 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1118 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1119 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1120 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_1121 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__next_beatsOH = VL_RAND_RESET_I(2);
    vlSelf->__PVT___T_803 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___deqPtrExt_new_ptr_T_2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__next_beatsOH_1 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_beatsOH_2 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_beatsOH_3 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_beatsOH_4 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_beatsOH_5 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_beatsOH_6 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_beatsOH_7 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_beatsOH_8 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_beatsOH_9 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_beatsOH_10 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_beatsOH_11 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_beatsOH_12 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_beatsOH_13 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_beatsOH_14 = VL_RAND_RESET_I(2);
    vlSelf->__PVT___GEN_1947 = VL_RAND_RESET_I(4);
    vlSelf->__PVT___GEN_1948 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__next_beatsOH_15 = VL_RAND_RESET_I(2);
    vlSelf->__VdfgRegularize_ha337dbbd_1_72 = VL_RAND_RESET_I(5);
    vlSelf->__VdfgRegularize_ha337dbbd_1_73 = VL_RAND_RESET_I(4);
}
