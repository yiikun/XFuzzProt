// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_SinkC.h"

VL_ATTR_COLD void VVerifyTop_SinkC___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC__0(VVerifyTop_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_SinkC___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_74 = vlSelfRef.__PVT__beatValids_0_0;
    vlSelfRef.__PVT___GEN_75 = vlSelfRef.__PVT__beatValids_0_1;
    vlSelfRef.__PVT___GEN_76 = vlSelfRef.__PVT__beatValids_1_0;
    vlSelfRef.__PVT___GEN_77 = vlSelfRef.__PVT__beatValids_1_1;
    vlSelfRef.__PVT___GEN_78 = vlSelfRef.__PVT__beatValids_2_0;
    vlSelfRef.__PVT___GEN_79 = vlSelfRef.__PVT__beatValids_2_1;
    vlSelfRef.__PVT___GEN_80 = vlSelfRef.__PVT__beatValids_3_0;
    vlSelfRef.__PVT___GEN_81 = vlSelfRef.__PVT__beatValids_3_1;
    vlSelfRef.__PVT__next_counter = vlSelfRef.__PVT__counter_1;
    vlSelfRef.__PVT__next_counter_1 = vlSelfRef.__PVT__counter_2;
    vlSelfRef.__PVT__next_counter_4 = (vlSelfRef.__PVT__counter_5 
                                       + (QData)((IData)(vlSelfRef.__PVT__io_refillBufWrite_valid_REG)));
    vlSelfRef.__PVT__bufValids = (((((IData)(vlSelfRef.__PVT__taskValids_3) 
                                     << 3U) | ((IData)(vlSelfRef.__PVT__taskValids_2) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.__PVT__taskValids_1) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__taskValids_0))) 
                                  | (((((IData)(vlSelfRef.__PVT__beatValids_3_1) 
                                        | (IData)(vlSelfRef.__PVT__beatValids_3_0)) 
                                       << 3U) | (((IData)(vlSelfRef.__PVT__beatValids_2_1) 
                                                  | (IData)(vlSelfRef.__PVT__beatValids_2_0)) 
                                                 << 2U)) 
                                     | ((((IData)(vlSelfRef.__PVT__beatValids_1_1) 
                                          | (IData)(vlSelfRef.__PVT__beatValids_1_0)) 
                                         << 1U) | ((IData)(vlSelfRef.__PVT__beatValids_0_1) 
                                                   | (IData)(vlSelfRef.__PVT__beatValids_0_0)))));
    vlSelfRef.io_refillBufWrite_bits_data_data = ((
                                                   ((3U 
                                                     == (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG))
                                                     ? (IData)(vlSelfRef.__PVT__dataBuf_3_1)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG))
                                                      ? (IData)(vlSelfRef.__PVT__dataBuf_2_1)
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG))
                                                       ? (IData)(vlSelfRef.__PVT__dataBuf_1_1)
                                                       : (IData)(vlSelfRef.__PVT__dataBuf_0_1)))) 
                                                   << 8U) 
                                                  | ((3U 
                                                      == (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG))
                                                      ? (IData)(vlSelfRef.__PVT__dataBuf_3_0)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG))
                                                       ? (IData)(vlSelfRef.__PVT__dataBuf_2_0)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelfRef.__PVT__io_refillBufWrite_bits_data_data_REG))
                                                        ? (IData)(vlSelfRef.__PVT__dataBuf_1_0)
                                                        : (IData)(vlSelfRef.__PVT__dataBuf_0_0)))));
    vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_3 
        = ((IData)(vlSelfRef.__PVT__taskValids_3) & 
           (3U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)));
    vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_2 
        = ((IData)(vlSelfRef.__PVT__taskValids_2) & 
           (2U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)));
    vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_1 
        = ((IData)(vlSelfRef.__PVT__taskValids_1) & 
           (1U > (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant)));
    vlSelfRef.__PVT__next_counter_3 = (vlSelfRef.__PVT__counter_4 
                                       + (QData)((IData)(
                                                         (0xfU 
                                                          == (IData)(vlSelfRef.__PVT__bufValids)))));
    vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_2 
        = ((IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_1) 
           | (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_2));
    vlSelfRef.__PVT__taskArb_io_chosen = ((IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_1)
                                           ? 1U : ((IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_2)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_3)
                                                     ? 3U
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__taskValids_0)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__taskValids_1)
                                                       ? 1U
                                                       : 
                                                      ((IData)(vlSelfRef.__PVT__taskValids_2)
                                                        ? 2U
                                                        : 3U))))));
    vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_3 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_2) 
           | (IData)(vlSelfRef.__PVT__taskArb__DOT__ctrl_validMask_3));
    if ((3U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
        vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_3_bufIdx;
        vlSelfRef.io_task_bits_sourceId = vlSelfRef.__PVT__taskBuf_3_sourceId;
        vlSelfRef.io_task_bits_tag = vlSelfRef.__PVT__taskBuf_3_tag;
        vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_3_opcode;
        vlSelfRef.io_task_bits_channel = vlSelfRef.__PVT__taskBuf_3_channel;
        vlSelfRef.io_task_valid = vlSelfRef.__PVT__taskValids_3;
        vlSelfRef.io_task_bits_set = vlSelfRef.__PVT__taskBuf_3_set;
    } else if ((2U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
        vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_2_bufIdx;
        vlSelfRef.io_task_bits_sourceId = vlSelfRef.__PVT__taskBuf_2_sourceId;
        vlSelfRef.io_task_bits_tag = vlSelfRef.__PVT__taskBuf_2_tag;
        vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_2_opcode;
        vlSelfRef.io_task_bits_channel = vlSelfRef.__PVT__taskBuf_2_channel;
        vlSelfRef.io_task_valid = vlSelfRef.__PVT__taskValids_2;
        vlSelfRef.io_task_bits_set = vlSelfRef.__PVT__taskBuf_2_set;
    } else if ((1U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
        vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_1_bufIdx;
        vlSelfRef.io_task_bits_sourceId = vlSelfRef.__PVT__taskBuf_1_sourceId;
        vlSelfRef.io_task_bits_tag = vlSelfRef.__PVT__taskBuf_1_tag;
        vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_1_opcode;
        vlSelfRef.io_task_bits_channel = vlSelfRef.__PVT__taskBuf_1_channel;
        vlSelfRef.io_task_valid = vlSelfRef.__PVT__taskValids_1;
        vlSelfRef.io_task_bits_set = vlSelfRef.__PVT__taskBuf_1_set;
    } else {
        vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_0_bufIdx;
        vlSelfRef.io_task_bits_sourceId = vlSelfRef.__PVT__taskBuf_0_sourceId;
        vlSelfRef.io_task_bits_tag = vlSelfRef.__PVT__taskBuf_0_tag;
        vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_0_opcode;
        vlSelfRef.io_task_bits_channel = vlSelfRef.__PVT__taskBuf_0_channel;
        vlSelfRef.io_task_valid = vlSelfRef.__PVT__taskValids_0;
        vlSelfRef.io_task_bits_set = vlSelfRef.__PVT__taskBuf_0_set;
    }
    vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_4 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_3) 
           | (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_5 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_h6c0c0aac_0_4) 
           | (IData)(vlSelfRef.__PVT__taskValids_1));
}

VL_ATTR_COLD void VVerifyTop_SinkC___ctor_var_reset(VVerifyTop_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_SinkC___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_c_ready = VL_RAND_RESET_I(1);
    vlSelf->io_c_valid = VL_RAND_RESET_I(1);
    vlSelf->io_c_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->io_c_bits_param = VL_RAND_RESET_I(3);
    vlSelf->io_c_bits_size = VL_RAND_RESET_I(3);
    vlSelf->io_c_bits_source = VL_RAND_RESET_I(5);
    vlSelf->io_c_bits_address = VL_RAND_RESET_I(5);
    vlSelf->io_c_bits_data = VL_RAND_RESET_I(8);
    vlSelf->io_task_ready = VL_RAND_RESET_I(1);
    vlSelf->io_task_valid = VL_RAND_RESET_I(1);
    vlSelf->io_task_bits_channel = VL_RAND_RESET_I(3);
    vlSelf->io_task_bits_set = VL_RAND_RESET_I(1);
    vlSelf->io_task_bits_tag = VL_RAND_RESET_I(3);
    vlSelf->io_task_bits_off = VL_RAND_RESET_I(1);
    vlSelf->io_task_bits_opcode = VL_RAND_RESET_I(3);
    vlSelf->io_task_bits_param = VL_RAND_RESET_I(3);
    vlSelf->io_task_bits_size = VL_RAND_RESET_I(3);
    vlSelf->io_task_bits_sourceId = VL_RAND_RESET_I(5);
    vlSelf->io_task_bits_bufIdx = VL_RAND_RESET_I(2);
    vlSelf->io_task_bits_wayMask = VL_RAND_RESET_I(2);
    vlSelf->io_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->io_resp_set = VL_RAND_RESET_I(1);
    vlSelf->io_resp_tag = VL_RAND_RESET_I(3);
    vlSelf->io_resp_respInfo_opcode = VL_RAND_RESET_I(3);
    vlSelf->io_resp_respInfo_param = VL_RAND_RESET_I(3);
    vlSelf->io_resp_respInfo_last = VL_RAND_RESET_I(1);
    vlSelf->io_releaseBufWrite_valid = VL_RAND_RESET_I(1);
    vlSelf->io_releaseBufWrite_bits_data_data = VL_RAND_RESET_I(16);
    vlSelf->io_bufResp_data_0 = VL_RAND_RESET_I(8);
    vlSelf->io_bufResp_data_1 = VL_RAND_RESET_I(8);
    vlSelf->io_refillBufWrite_valid = VL_RAND_RESET_I(1);
    vlSelf->io_refillBufWrite_bits_id = VL_RAND_RESET_I(8);
    vlSelf->io_refillBufWrite_bits_data_data = VL_RAND_RESET_I(16);
    vlSelf->io_msInfo_0_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_set = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_0_bits_reqTag = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_0_bits_blockRefill = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_set = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_1_bits_reqTag = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_1_bits_blockRefill = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_set = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_2_bits_reqTag = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_2_bits_blockRefill = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_valid = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_set = VL_RAND_RESET_I(1);
    vlSelf->io_msInfo_3_bits_reqTag = VL_RAND_RESET_I(3);
    vlSelf->io_msInfo_3_bits_blockRefill = VL_RAND_RESET_I(1);
    vlSelf->__PVT__taskArb_io_chosen = VL_RAND_RESET_I(2);
    vlSelf->__PVT__helper_timer = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__helper_clean = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_dump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_1_timer = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__helper_1_clean = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_1_dump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_2_timer = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__helper_2_clean = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_2_dump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_3_timer = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__helper_3_clean = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_3_dump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_4_timer = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__helper_4_clean = VL_RAND_RESET_I(1);
    vlSelf->__PVT__helper_4_dump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataBuf_0_0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataBuf_0_1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataBuf_1_0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataBuf_1_1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataBuf_2_0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataBuf_2_1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataBuf_3_0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataBuf_3_1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__beatValids_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beatValids_0_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beatValids_1_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beatValids_1_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beatValids_2_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beatValids_2_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beatValids_3_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__beatValids_3_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__taskBuf_0_channel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskBuf_0_set = VL_RAND_RESET_I(1);
    vlSelf->__PVT__taskBuf_0_tag = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskBuf_0_off = VL_RAND_RESET_I(1);
    vlSelf->__PVT__taskBuf_0_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskBuf_0_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskBuf_0_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskBuf_0_bufIdx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__taskBuf_1_channel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskBuf_1_set = VL_RAND_RESET_I(1);
    vlSelf->__PVT__taskBuf_1_tag = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskBuf_1_off = VL_RAND_RESET_I(1);
    vlSelf->__PVT__taskBuf_1_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskBuf_1_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskBuf_1_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskBuf_1_bufIdx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__taskBuf_2_channel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskBuf_2_set = VL_RAND_RESET_I(1);
    vlSelf->__PVT__taskBuf_2_tag = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskBuf_2_off = VL_RAND_RESET_I(1);
    vlSelf->__PVT__taskBuf_2_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskBuf_2_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskBuf_2_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskBuf_2_bufIdx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__taskBuf_3_channel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskBuf_3_set = VL_RAND_RESET_I(1);
    vlSelf->__PVT__taskBuf_3_tag = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskBuf_3_off = VL_RAND_RESET_I(1);
    vlSelf->__PVT__taskBuf_3_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskBuf_3_param = VL_RAND_RESET_I(3);
    vlSelf->__PVT__taskBuf_3_sourceId = VL_RAND_RESET_I(5);
    vlSelf->__PVT__taskBuf_3_bufIdx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__taskValids_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__taskValids_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__taskValids_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__taskValids_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bufValids = VL_RAND_RESET_I(4);
    vlSelf->__PVT___GEN_74 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_75 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_76 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_77 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_78 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_79 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_80 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_81 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_23 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_24 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_25 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_26 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___newdataMask_T_14 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___newdataMask_T_19 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_refillBufWrite_valid_REG = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_refillBufWrite_bits_id_hi = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_refillBufWrite_bits_id_lo = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_refillBufWrite_bits_id_REG = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_refillBufWrite_bits_data_data_REG = VL_RAND_RESET_I(2);
    vlSelf->__PVT__r_0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__r_1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__REG___05F0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__REG___05F1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__REG_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__REG_2 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__counter_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__next_counter = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__next_counter_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_3 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__next_counter_2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_4 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__next_counter_3 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__counter_5 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__next_counter_4 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__taskArb__DOT___ctrl_validMask_grantMask_lastGrant_T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__taskArb__DOT__ctrl_validMask_grantMask_lastGrant = VL_RAND_RESET_I(2);
    vlSelf->__PVT__taskArb__DOT__ctrl_validMask_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__taskArb__DOT__ctrl_validMask_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__taskArb__DOT__ctrl_validMask_3 = VL_RAND_RESET_I(1);
    vlSelf->taskArb__DOT____VdfgRegularize_h6c0c0aac_0_2 = VL_RAND_RESET_I(1);
    vlSelf->taskArb__DOT____VdfgRegularize_h6c0c0aac_0_3 = VL_RAND_RESET_I(1);
    vlSelf->taskArb__DOT____VdfgRegularize_h6c0c0aac_0_4 = VL_RAND_RESET_I(1);
    vlSelf->taskArb__DOT____VdfgRegularize_h6c0c0aac_0_5 = VL_RAND_RESET_I(1);
}
